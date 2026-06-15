/*
 * XREFs of sub_180100144 @ 0x180100144
 * Callers:
 *     sub_180102930 @ 0x180102930 (sub_180102930.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180100144(__int64 a1, __int64 a2, float a3, int a4, _OWORD *a5)
{
  *(float *)a1 = a3;
  *(_DWORD *)(a1 + 4) = a4;
  *(_OWORD *)(a1 + 8) = *a5;
  *(_QWORD *)(a1 + 24) = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  *(_QWORD *)(a1 + 32) = 0LL;
  return a1;
}
