/*
 * XREFs of NtUserSetMenuContextHelpId @ 0x1C01FD830
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0067394 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 */

__int64 __fastcall NtUserSetMenuContextHelpId(__int64 a1, int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  _QWORD v11[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]
  char v13; // [rsp+60h] [rbp+18h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v13);
  SmartObjStackRefBase<tagMENU>::Init(v11, 0LL);
  v4 = 0LL;
  v12 = 0LL;
  v5 = ValidateHmenu(a1);
  v12 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v11, v5);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v11)
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v11[0] + 40LL) + 40LL) & 0x40) == 0 )
  {
    v6 = v12;
    if ( !v12 )
      v6 = *(_QWORD *)v11[0];
    v4 = 1LL;
    *(_DWORD *)(*(_QWORD *)(v6 + 40) + 48LL) = a2;
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v11);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v13, v7, v8);
  UserSessionSwitchLeaveCrit(v9);
  return v4;
}
