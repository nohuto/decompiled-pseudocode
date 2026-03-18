/*
 * XREFs of MiInitializeMdlSinglePage @ 0x14046B40C
 * Callers:
 *     MiAllocateKernelStackPages @ 0x1402731A0 (MiAllocateKernelStackPages.c)
 * Callees:
 *     MiInitializeMdlPfn @ 0x140389D10 (MiInitializeMdlPfn.c)
 *     MiConvertLargePfnToSmall @ 0x14038E00C (MiConvertLargePfnToSmall.c)
 */

char __fastcall MiInitializeMdlSinglePage(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, int a5)
{
  __int64 v8; // rax

  if ( _bittest64((const signed __int64 *)(a2 + 40), 0x28u) && ((a5 & 0x3001000) == 0 || a5 >= 0) )
    MiConvertLargePfnToSmall(a1, a2, a3, 1);
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0xFFFFF68000000000uLL;
  v8 = *(_QWORD *)(a2 + 40) & 0x7FFFFF0000000000LL;
  *(_QWORD *)(a2 + 16) = a4;
  *(_QWORD *)(a2 + 40) = v8 | 0x3FFFFFFFFELL;
  *(_QWORD *)a2 = (a3 >> 3) & 0xFFFFFFFFFFELL;
  return MiInitializeMdlPfn(a2, a5);
}
