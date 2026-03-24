/*
 * XREFs of xxxCalcMenuBar @ 0x1C0102164
 * Callers:
 *     NtUserCalcMenuBar @ 0x1C0102020 (NtUserCalcMenuBar.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C008A94C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C010104C (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxMenuBarCompute @ 0x1C0102284 (xxxMenuBarCompute.c)
 *     ThreadLockMenuNoModify @ 0x1C01024BC (ThreadLockMenuNoModify.c)
 */

__int64 __fastcall xxxCalcMenuBar(__int64 a1, int a2, int a3, int a4, _DWORD *a5)
{
  __int64 ThreadWin32Thread; // rax
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 *v16; // [rsp+30h] [rbp-30h] BYREF
  __int64 v17; // [rsp+38h] [rbp-28h] BYREF
  __int64 v18; // [rsp+40h] [rbp-20h]
  __int128 v19; // [rsp+48h] [rbp-18h] BYREF
  __int64 v20; // [rsp+58h] [rbp-8h]

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v16 = (__int64 *)gSmartObjNullRef;
  v10 = 0;
  v17 = *(_QWORD *)(ThreadWin32Thread + 1472);
  *(_QWORD *)(ThreadWin32Thread + 1472) = &v17;
  v20 = 0LL;
  v11 = *(_QWORD *)(a1 + 40);
  v18 = 0LL;
  v19 = 0LL;
  if ( (*(_BYTE *)(v11 + 31) & 0xC0) != 0x40 )
  {
    v12 = *(_QWORD *)(a1 + 168);
    if ( v12 )
    {
      SmartObjStackRefBase<tagMENU>::operator=(&v16, v12);
      v14 = v18;
      if ( !v18 )
        v14 = *v16;
      ThreadLockMenuNoModify(v14, &v19);
      xxxMenuBarCompute((unsigned int)&v16, a1, a4, a2, a5[2] - *a5 - a2 - a3);
      v10 = *(_DWORD *)(*v16 + 68);
      v15 = *(_QWORD *)(*((_QWORD *)&v19 + 1) + 40LL);
      *(_DWORD *)(v15 + 40) &= ~0x200u;
      ThreadUnlock1(v15);
    }
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(&v16);
  return v10;
}
