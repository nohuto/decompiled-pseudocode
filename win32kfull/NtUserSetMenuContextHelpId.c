/*
 * XREFs of NtUserSetMenuContextHelpId @ 0x1C01DD1A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00A4F34 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A6450 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00D3DA0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00D5030 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 */

__int64 __fastcall NtUserSetMenuContextHelpId(__int64 a1, int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD v9[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]
  char v11; // [rsp+60h] [rbp+18h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v11);
  SmartObjStackRefBase<tagMENU>::Init(v9, 0LL);
  v4 = 0LL;
  v10 = 0LL;
  v5 = ValidateHmenu(a1);
  v10 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v9, v5);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v9)
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v9[0] + 40LL) + 40LL) & 0x40) == 0 )
  {
    v6 = v10;
    if ( !v10 )
      v6 = *(_QWORD *)v9[0];
    v4 = 1LL;
    *(_DWORD *)(*(_QWORD *)(v6 + 40) + 48LL) = a2;
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v9);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v11);
  UserSessionSwitchLeaveCrit(v7);
  return v4;
}
