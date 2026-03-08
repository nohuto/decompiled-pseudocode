/*
 * XREFs of ?DrvUpdateDpiInfoOnOptimizedModeChange@@YAJPEAU_MDEV@@PEAE@Z @ 0x1C018F3A4
 * Callers:
 *     DrvProcessDxgkDisplayCallout @ 0x1C0194740 (DrvProcessDxgkDisplayCallout.c)
 * Callees:
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C001F7C4 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     memcmp @ 0x1C00E17D0 (memcmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvUpdateDpiInfoOnOptimizedModeChange(struct _MDEV *a1, unsigned __int8 *a2)
{
  unsigned int v2; // ebp
  unsigned int i; // edi
  __int64 v6; // r15
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int64 DxgkWin32kInterface; // rax
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
        v10 = *(_OWORD *)(v7 + 2440);
        Buf1[0] = *(_OWORD *)(v7 + 2424);
        v11 = *(_OWORD *)(v7 + 2456);
        Buf1[1] = v10;
        v12 = *(_OWORD *)(v7 + 2472);
        Buf1[2] = v11;
        v13 = *(_OWORD *)(v7 + 2488);
        Buf1[3] = v12;
        v14 = *(_OWORD *)(v7 + 2504);
        Buf1[4] = v13;
        Buf1[5] = v14;
        DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v9, v8);
        v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, __int64))(DxgkWin32kInterface + 520))(
                *(_QWORD *)(*(_QWORD *)(v7 + 2552) + 232LL),
                *(unsigned int *)(*(_QWORD *)(v7 + 2552) + 248LL),
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
            *(_QWORD *)(*(_QWORD *)(v7 + 2552) + 232LL),
            *(unsigned int *)(*(_QWORD *)(v7 + 2552) + 248LL));
        }
      }
    }
  }
  return v2;
}
