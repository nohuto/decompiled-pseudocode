/*
 * XREFs of ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C00A21B0
 * Callers:
 *     ?InitializeInputSensors@@YAJXZ @ 0x1C01B1C58 (-InitializeInputSensors@@YAJXZ.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00392B4 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ @ 0x1C0044910 (-IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ.c)
 *     RIMOnPnpNotification @ 0x1C00539C0 (RIMOnPnpNotification.c)
 *     ?IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z @ 0x1C00A22CC (-IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z.c)
 *     ?GetDispatcherObjectByIndex@CRIMBase@@IEBAPEAXI@Z @ 0x1C00A230C (-GetDispatcherObjectByIndex@CRIMBase@@IEBAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseInput::RegisterDispatcherObject(CBaseInput *this, struct IRegisterInputDispatcherObjects *a2)
{
  CRIMBase::SensorDispatcherObject *v2; // rbp
  unsigned int v3; // edi
  unsigned int i; // ebx
  __int64 v7; // r14
  int v8; // ebx
  int v10; // [rsp+30h] [rbp-658h] BYREF
  _QWORD v11[192]; // [rsp+40h] [rbp-648h] BYREF

  v2 = (CBaseInput *)((char *)this + 152);
  v3 = 0;
  for ( i = 0; i < 0x11; ++i )
  {
    if ( CRIMBase::IsDispatcherObjectValid(this, i) )
    {
      v7 = 3LL * v3;
      v11[3 * v3] = CRIMBase::GetDispatcherObjectByIndex(this, i);
      v11[3 * v3 + 2] = CBaseInput::_OnDispatcherObjectSignaled;
      if ( !CRIMBase::SensorDispatcherObject::IsValid(v2) )
      {
        v10 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 356LL);
      }
      ++v3;
      v11[v7 + 1] = *((_QWORD *)v2 + 5);
    }
    v2 = (CRIMBase::SensorDispatcherObject *)((char *)v2 + 64);
  }
  v8 = 0;
  if ( v3 )
  {
    v8 = (**(__int64 (__fastcall ***)(struct IRegisterInputDispatcherObjects *, CBaseInput *, _QWORD, _QWORD *))a2)(
           a2,
           this,
           v3,
           v11);
    if ( v8 >= 0 )
    {
      ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v10);
      RIMOnPnpNotification(*((_QWORD *)this + 1));
      if ( !v10 )
        UserSessionSwitchLeaveCrit();
    }
  }
  return (unsigned int)v8;
}
