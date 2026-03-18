/*
 * XREFs of xxxCalcMenuBar @ 0x1C00C27B0
 * Callers:
 *     NtUserCalcMenuBar @ 0x1C00C2670 (NtUserCalcMenuBar.c)
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     xxxMenuBarCompute @ 0x1C00C2488 (xxxMenuBarCompute.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 */

__int64 __fastcall xxxCalcMenuBar(__int64 a1, int a2, int a3, unsigned int a4, _DWORD *a5)
{
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 *v17[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v18; // [rsp+40h] [rbp-20h]
  __int128 v19; // [rsp+48h] [rbp-18h] BYREF
  __int64 v20; // [rsp+58h] [rbp-8h]

  SmartObjStackRefBase<tagMENU>::Init(v17, 0LL);
  v9 = 0;
  v20 = 0LL;
  v10 = *(_QWORD *)(a1 + 40);
  v18 = 0LL;
  v19 = 0LL;
  if ( (*(_BYTE *)(v10 + 31) & 0xC0) != 0x40 )
  {
    v11 = *(_QWORD *)(a1 + 168);
    if ( v11 )
    {
      SmartObjStackRefBase<tagMENU>::operator=((__int64)v17, v11);
      v13 = v18;
      if ( !v18 )
        v13 = *v17[0];
      *(_DWORD *)(*(_QWORD *)(v13 + 40) + 40LL) |= 0x200u;
      ThreadLock(v13, (__int64 *)&v19);
      xxxMenuBarCompute(v17, a1, a4, a2, a5[2] - *a5 - a2 - a3);
      v9 = *(_DWORD *)(*v17[0] + 68);
      v14 = *(_QWORD *)(*((_QWORD *)&v19 + 1) + 40LL);
      *(_DWORD *)(v14 + 40) &= ~0x200u;
      ThreadUnlock1(v14, v15, v16);
    }
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v17);
  return v9;
}
