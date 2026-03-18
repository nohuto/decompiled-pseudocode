/*
 * XREFs of NtUserDestroyMenu @ 0x1C0061490
 * Callers:
 *     <none>
 * Callees:
 *     _DestroyMenu @ 0x1C0061170 (_DestroyMenu.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00635B4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C0064FE4 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C009D540 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall NtUserDestroyMenu(__int64 a1)
{
  __int64 ThreadWin32Thread; // rax
  int v3; // edi
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v11; // [rsp+20h] [rbp-20h] BYREF
  __int64 v12; // [rsp+28h] [rbp-18h] BYREF
  __int64 v13; // [rsp+30h] [rbp-10h]
  char v14; // [rsp+58h] [rbp+18h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v14);
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v3 = 0;
  v11 = (__int64 *)gSmartObjNullRef;
  v12 = *(_QWORD *)(ThreadWin32Thread + 1512);
  *(_QWORD *)(ThreadWin32Thread + 1512) = &v12;
  v13 = 0LL;
  v4 = ValidateHmenu(a1);
  v13 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(&v11, v4);
  if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(&v11)
    && (*(_DWORD *)(*(_QWORD *)(*v11 + 40) + 40LL) & 0x40) == 0 )
  {
    v5 = v13;
    if ( !v13 )
      v5 = *v11;
    v3 = DestroyMenu(v5);
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(&v11);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v14);
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v3;
}
