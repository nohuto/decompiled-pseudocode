/*
 * XREFs of sub_1800D2D34 @ 0x1800D2D34
 * Callers:
 *     sub_1800DCF40 @ 0x1800DCF40 (sub_1800DCF40.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800D2D34(__int64 a1, unsigned int a2, float a3, _DWORD *a4)
{
  __int64 v6; // rax
  float v7; // xmm7_4
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  if ( a2 < *(_DWORD *)(a1 + 92) )
  {
    v6 = *(_QWORD *)(a1 + 112);
    v7 = *(float *)(v6 + 4LL * a2);
    *(float *)(v6 + 4LL * a2) = a3;
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 120LL))(a1, 0LL, 0LL);
    if ( a4 )
      *a4 = v7 == a3;
    return 0LL;
  }
  else
  {
    sub_18004BD84((int)retaddr, 879, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", -2147024809);
    return 2147942487LL;
  }
}
