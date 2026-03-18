/*
 * XREFs of NtUserSetMenuDefaultItem @ 0x1C00A8C30
 * Callers:
 *     <none>
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00635B4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C0064FE4 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C009D540 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C009E5C0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     _SetMenuDefaultItem @ 0x1C00A8D1C (_SetMenuDefaultItem.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserSetMenuDefaultItem(__int64 a1, unsigned int a2, unsigned int a3)
{
  int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD v16[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+30h] [rbp-18h]
  char v18; // [rsp+68h] [rbp+20h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v18);
  SmartObjStackRefBase<tagMENU>::Init(v16, 0LL);
  v6 = 0;
  v17 = 0LL;
  v7 = ValidateHmenu(a1);
  v17 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v16, v7);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v16)
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v16[0] + 40LL) + 40LL) & 0x40) == 0 )
  {
    v8 = v17;
    if ( !v17 )
      v8 = *(_QWORD *)v16[0];
    v6 = SetMenuDefaultItem(v8, a2, a3);
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v16);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v18, v9, v10);
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v6;
}
