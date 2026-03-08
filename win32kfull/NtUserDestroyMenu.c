/*
 * XREFs of NtUserDestroyMenu @ 0x1C00DDD10
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00A4F34 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A6450 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     _DestroyMenu @ 0x1C00A77C0 (_DestroyMenu.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00D3DA0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 */

__int64 __fastcall NtUserDestroyMenu(__int64 a1)
{
  __int64 ThreadWin32Thread; // rax
  int v3; // edi
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 *v8; // [rsp+20h] [rbp-20h] BYREF
  __int64 v9; // [rsp+28h] [rbp-18h] BYREF
  __int64 v10; // [rsp+30h] [rbp-10h]
  char v11; // [rsp+58h] [rbp+18h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v11);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v3 = 0;
  v8 = (__int64 *)gSmartObjNullRef;
  v9 = *(_QWORD *)(ThreadWin32Thread + 1512);
  *(_QWORD *)(ThreadWin32Thread + 1512) = &v9;
  v10 = 0LL;
  v4 = ValidateHmenu(a1);
  v10 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(&v8, v4);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)&v8) && (*(_DWORD *)(*(_QWORD *)(*v8 + 40) + 40LL) & 0x40) == 0 )
  {
    v5 = v10;
    if ( !v10 )
      v5 = *v8;
    v3 = DestroyMenu(v5);
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(&v8);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v11);
  UserSessionSwitchLeaveCrit(v6);
  return v3;
}
