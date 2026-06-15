/*
 * XREFs of sub_18002E880 @ 0x18002E880
 * Callers:
 *     sub_18002E6A0 @ 0x18002E6A0 (sub_18002E6A0.c)
 * Callees:
 *     sub_18002EAA8 @ 0x18002EAA8 (sub_18002EAA8.c)
 *     sub_1800457EC @ 0x1800457EC (sub_1800457EC.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18006DFE8 @ 0x18006DFE8 (sub_18006DFE8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CB290 @ 0x1800CB290 (sub_1800CB290.c)
 */

__int64 __fastcall sub_18002E880(__int64 a1, float a2, __int64 a3, int *a4)
{
  int v7; // edi
  int v9; // xmm6_4
  float v10; // xmm6_4
  int v11; // [rsp+20h] [rbp-58h]
  double v12; // [rsp+20h] [rbp-58h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    v12 = a2;
    sub_1800CB290(*((_QWORD *)off_18019C348 + 2), 17, a3, *(_QWORD *)(a1 + 728), SLOBYTE(v12));
  }
  v7 = 0;
  if ( (unsigned __int8)sub_18002EAA8() )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 808));
    v9 = *(_DWORD *)(a1 + 848);
    sub_1800457EC(a1 + 864);
    *(_DWORD *)(a1 + 948) = v9;
    *(float *)(a1 + 952) = a2;
    v10 = *(float *)(a1 + 848);
    *(float *)(a1 + 848) = a2;
    if ( a1 != -808 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 808));
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 432));
    sub_18006DFE8(a1 + 472);
    if ( a1 != -432 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 432));
    LOBYTE(v11) = 0;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, int, _QWORD))(*(_QWORD *)(a1 + 16) + 24LL))(
      a1 + 16,
      0LL,
      a3,
      0xFFFFFFFFLL,
      v11,
      0LL);
    if ( a4 )
    {
      if ( v10 == a2 )
        v7 = 1;
      *a4 = v7;
    }
    return 0LL;
  }
  else
  {
    sub_18004BD84(retaddr, 872LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp", 2147942487LL);
    return 2147942487LL;
  }
}
