/*
 * XREFs of MiMarkKernelStack @ 0x140371560
 * Callers:
 *     MiMarkBootKernelStack @ 0x140B3AD3C (MiMarkBootKernelStack.c)
 * Callees:
 *     MiSetPfnKernelStack @ 0x1402A7DF0 (MiSetPfnKernelStack.c)
 *     MiSetPfnIdentity @ 0x14034BE78 (MiSetPfnIdentity.c)
 */

char __fastcall MiMarkKernelStack(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  char v5; // al
  char result; // al

  MiSetPfnIdentity(a2, 2);
  MiSetPfnKernelStack((__int64 *)a2, a3);
  v5 = *(_BYTE *)(a2 + 35);
  *(_QWORD *)(a2 + 16) |= 0x3E0uLL;
  result = v5 & 0xF8 | 5;
  *(_BYTE *)(a2 + 35) = result;
  return result;
}
