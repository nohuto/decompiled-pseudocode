/*
 * XREFs of NtUserDestroyMenu @ 0x1C01082A0
 * Callers:
 *     <none>
 * Callees:
 *     _DestroyMenu @ 0x1C0063B20 (_DestroyMenu.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0067394 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 */

__int64 __fastcall NtUserDestroyMenu(__int64 a1)
{
  int v2; // edi
  __int64 v3; // rax
  PVOID *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  _QWORD v9[2]; // [rsp+20h] [rbp-28h] BYREF
  PVOID *v10; // [rsp+30h] [rbp-18h]
  char v11; // [rsp+58h] [rbp+10h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v11);
  SmartObjStackRefBase<tagMENU>::Init(v9, 0LL);
  v2 = 0;
  v10 = 0LL;
  v3 = ValidateHmenu(a1);
  v10 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v9, v3);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v9)
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v9[0] + 40LL) + 40LL) & 0x40) == 0 )
  {
    v4 = v10;
    if ( !v10 )
      v4 = *(PVOID **)v9[0];
    v2 = DestroyMenu(v4);
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v9);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v11, v5, v6);
  UserSessionSwitchLeaveCrit(v7);
  return v2;
}
