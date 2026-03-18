/*
 * XREFs of ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C0054C90
 * Callers:
 *     _anonymous_namespace_::InitializeInputSensorPass1Worker @ 0x1C0054C14 (_anonymous_namespace_--InitializeInputSensorPass1Worker.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C001B500 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     ?IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ @ 0x1C0034740 (-IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ.c)
 *     RIMOnPnpNotification @ 0x1C0042B50 (RIMOnPnpNotification.c)
 *     ?IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z @ 0x1C0054D90 (-IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z.c)
 *     ?GetDispatcherObjectByIndex@CRIMBase@@IEBAPEAXI@Z @ 0x1C0054DD4 (-GetDispatcherObjectByIndex@CRIMBase@@IEBAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::RegisterDispatcherObject(CBaseInput *this, struct IRegisterInputDispatcherObjects *a2)
{
  __int64 v2; // rdi
  CRIMBase::SensorDispatcherObject *v3; // rbp
  unsigned int i; // ebx
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _DWORD v17[4]; // [rsp+30h] [rbp-648h] BYREF
  _QWORD v18[192]; // [rsp+40h] [rbp-638h] BYREF

  v2 = 0LL;
  v3 = (CBaseInput *)((char *)this + 168);
  for ( i = 0; i < 0x11; ++i )
  {
    if ( CRIMBase::IsDispatcherObjectValid(this, i) )
    {
      v7 = 3 * v2;
      v18[3 * v2] = CRIMBase::GetDispatcherObjectByIndex(this, i);
      v18[3 * v2 + 2] = CBaseInput::_OnDispatcherObjectSignaled;
      if ( !CRIMBase::SensorDispatcherObject::IsValid(v3) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
      v2 = (unsigned int)(v2 + 1);
      v18[v7 + 1] = *((_QWORD *)v3 + 5);
    }
    v3 = (CRIMBase::SensorDispatcherObject *)((char *)v3 + 64);
  }
  v11 = 0;
  if ( (_DWORD)v2 )
  {
    v11 = (**(__int64 (__fastcall ***)(struct IRegisterInputDispatcherObjects *, CBaseInput *, _QWORD, _QWORD *))a2)(
            a2,
            this,
            (unsigned int)v2,
            v18);
    if ( v11 >= 0 )
    {
      ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)v17);
      RIMOnPnpNotification(*((_QWORD *)this + 1));
      if ( !v17[0] )
        UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
    }
  }
  return (unsigned int)v11;
}
