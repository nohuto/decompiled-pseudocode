/*
 * XREFs of ?DrvUpdateDpiInfoOnOptimizedModeChange@@YAJPEAU_MDEV@@PEAE@Z @ 0x1C0172004
 * Callers:
 *     DrvProcessDxgkDisplayCallout @ 0x1C01749FC (DrvProcessDxgkDisplayCallout.c)
 * Callees:
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C0072044 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memcmp @ 0x1C00DD6E0 (memcmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvUpdateDpiInfoOnOptimizedModeChange(struct _MDEV *a1, unsigned __int8 *a2)
{
  unsigned int v2; // ebp
  unsigned int i; // esi
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  int v16; // eax
  __int64 v18; // [rsp+30h] [rbp-A8h] BYREF
  _OWORD Buf1[6]; // [rsp+40h] [rbp-98h] BYREF

  v2 = 0;
  *a2 = 0;
  if ( a1 )
  {
    for ( i = 0; i < *((_DWORD *)a1 + 5); ++i )
    {
      v6 = 56LL * i;
      v7 = *(_QWORD *)((char *)a1 + v6 + 40);
      v18 = v7;
      if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v18) )
      {
        v8 = *(_QWORD *)(v7 + 2552);
        v9 = *(_OWORD *)(v7 + 2440);
        Buf1[0] = *(_OWORD *)(v7 + 2424);
        v10 = *(_OWORD *)(v7 + 2456);
        v11 = *(unsigned int *)(v8 + 256);
        v12 = *(_QWORD *)(v8 + 240);
        Buf1[1] = v9;
        v13 = *(_OWORD *)(v7 + 2472);
        Buf1[2] = v10;
        v14 = *(_OWORD *)(v7 + 2488);
        Buf1[3] = v13;
        v15 = *(_OWORD *)(v7 + 2504);
        Buf1[4] = v14;
        Buf1[5] = v15;
        v16 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, __int64))qword_1C0296868)(
                v12,
                v11,
                0LL,
                v7 + 2104,
                v7 + 2424);
        v2 = v16;
        if ( v16 >= 0 )
        {
          if ( memcmp(Buf1, (const void *)(v7 + 2424), 0x60uLL) )
          {
            *(_DWORD *)((char *)a1 + v6 + 72) = *(_DWORD *)(v7 + 2432);
            *a2 = 1;
          }
        }
        else
        {
          WdLogSingleEntry3(
            2LL,
            v16,
            *(_QWORD *)(*(_QWORD *)(v7 + 2552) + 240LL),
            *(unsigned int *)(*(_QWORD *)(v7 + 2552) + 256LL));
        }
      }
    }
  }
  return v2;
}
