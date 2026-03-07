__int64 __fastcall NtUserSetMenuDefaultItem(__int64 a1, unsigned int a2, unsigned int a3)
{
  int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  _QWORD v11[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]
  char v13; // [rsp+68h] [rbp+20h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v13);
  SmartObjStackRefBase<tagMENU>::Init(v11, 0LL);
  v6 = 0;
  v12 = 0LL;
  v7 = ValidateHmenu(a1);
  v12 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v11, v7);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v11)
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v11[0] + 40LL) + 40LL) & 0x40) == 0 )
  {
    v8 = v12;
    if ( !v12 )
      v8 = *(_QWORD *)v11[0];
    v6 = SetMenuDefaultItem(v8, a2, a3);
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v11);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v13);
  UserSessionSwitchLeaveCrit(v9);
  return v6;
}
