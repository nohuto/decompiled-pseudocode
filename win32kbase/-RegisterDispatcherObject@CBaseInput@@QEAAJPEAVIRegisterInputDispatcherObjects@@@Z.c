__int64 __fastcall CBaseInput::RegisterDispatcherObject(CBaseInput *this, struct IRegisterInputDispatcherObjects *a2)
{
  CRIMBase::SensorDispatcherObject *v2; // rbp
  unsigned int v3; // edi
  unsigned int i; // ebx
  __int64 v7; // r14
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _BYTE v17[4]; // [rsp+30h] [rbp-648h] BYREF
  int v18; // [rsp+34h] [rbp-644h]
  _QWORD v19[192]; // [rsp+40h] [rbp-638h] BYREF

  v2 = (CBaseInput *)((char *)this + 168);
  v3 = 0;
  for ( i = 0; i < 0x12; ++i )
  {
    if ( CRIMBase::IsDispatcherObjectValid(this, i) )
    {
      v7 = 3LL * v3;
      v19[3 * v3] = CRIMBase::GetDispatcherObjectByIndex(this, i);
      v19[3 * v3 + 2] = CBaseInput::_OnDispatcherObjectSignaled;
      if ( !CRIMBase::SensorDispatcherObject::IsValid(v2) )
      {
        v18 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 352LL);
      }
      ++v3;
      v19[v7 + 1] = *((_QWORD *)v2 + 5);
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
           v19);
    if ( v8 >= 0 )
    {
      ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)v17, v9, v10, v11);
      CBaseInput::OnPnpNotification(this);
      if ( !v17[0] )
        UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
    }
  }
  return (unsigned int)v8;
}
