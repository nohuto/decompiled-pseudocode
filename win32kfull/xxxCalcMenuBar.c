/*
 * XREFs of xxxCalcMenuBar @ 0x1C00A4B90
 * Callers:
 *     NtUserCalcMenuBar @ 0x1C00A4A50 (NtUserCalcMenuBar.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A6450 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00D3DA0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ThreadUnlockMenuNoModify @ 0x1C0202554 (ThreadUnlockMenuNoModify.c)
 *     xxxMenuBarCompute @ 0x1C023BEA8 (xxxMenuBarCompute.c)
 */

__int64 __fastcall xxxCalcMenuBar(__int64 a1, int a2, int a3, int a4, _DWORD *a5)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v13; // rcx
  unsigned int v14; // ebx
  __int64 *v15; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16; // [rsp+38h] [rbp-28h] BYREF
  __int64 v17; // [rsp+40h] [rbp-20h]
  __int128 v18; // [rsp+48h] [rbp-18h] BYREF
  __int64 v19; // [rsp+58h] [rbp-8h]

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v15 = (__int64 *)gSmartObjNullRef;
  v16 = *(_QWORD *)(ThreadWin32Thread + 1512);
  *(_QWORD *)(ThreadWin32Thread + 1512) = &v16;
  v17 = 0LL;
  v19 = 0LL;
  v10 = *(_QWORD *)(a1 + 40);
  v18 = 0LL;
  if ( (*(_BYTE *)(v10 + 31) & 0xC0) != 0x40 && (v11 = *(_QWORD *)(a1 + 168)) != 0 )
  {
    SmartObjStackRefBase<tagMENU>::operator=(&v15, v11);
    v13 = v17;
    if ( !v17 )
      v13 = *v15;
    *(_DWORD *)(*(_QWORD *)(v13 + 40) + 40LL) |= 0x200u;
    ThreadLock(v13, &v18);
    xxxMenuBarCompute((unsigned int)&v15, a1, a4, a2, a5[2] - *a5 - a2 - a3);
    v14 = *(_DWORD *)(*v15 + 68);
    ThreadUnlockMenuNoModify(&v18);
    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(&v15);
    return v14;
  }
  else
  {
    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(&v15);
    return 0LL;
  }
}
