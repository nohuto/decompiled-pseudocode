/*
 * XREFs of ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x18021C7E0
 * Callers:
 *     ?_GetNthMostDominantColorFromBits@@YA_NPEAUtagRGBQUAD@@HHHI_N1PEAK@Z @ 0x1804F6FBC (-_GetNthMostDominantColorFromBits@@YA_NPEAUtagRGBQUAD@@HHHI_N1PEAK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  char *v5; // rdi
  __int64 v6; // rbx

  v5 = &a1[8 * a3];
  v6 = a3;
  do
  {
    v5 -= 8;
    a4(v5);
    --v6;
  }
  while ( v6 );
}
