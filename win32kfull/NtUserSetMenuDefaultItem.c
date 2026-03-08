/*
 * XREFs of NtUserSetMenuDefaultItem @ 0x1C00DF900
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00A4F34 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A6450 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00D3DA0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00D5030 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     _SetMenuDefaultItem @ 0x1C00DF9EC (_SetMenuDefaultItem.c)
 */

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
