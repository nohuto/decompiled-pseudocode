__int64 __fastcall NtUserSetMenuFlagRtoL(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rcx
  _QWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  char v9; // [rsp+58h] [rbp+10h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v9);
  SmartObjStackRefBase<tagMENU>::Init(v7, 0LL);
  v2 = 0LL;
  v8 = 0LL;
  v3 = ValidateHmenu(a1);
  v8 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v7, v3);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v7) )
  {
    v4 = v8;
    if ( !v8 )
      v4 = *(_QWORD *)v7[0];
    v2 = 1LL;
    *(_DWORD *)(*(_QWORD *)(v4 + 40) + 40LL) |= 0x20u;
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v7);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v9);
  UserSessionSwitchLeaveCrit(v5);
  return v2;
}
