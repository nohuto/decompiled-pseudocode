/*
 * XREFs of MiMarkKernelStack @ 0x140376810
 * Callers:
 *     MiMarkBootKernelStack @ 0x140B4944C (MiMarkBootKernelStack.c)
 * Callees:
 *     MiSetPfnIdentity @ 0x1402194A8 (MiSetPfnIdentity.c)
 *     MiSetPfnKernelStack @ 0x14021B4F8 (MiSetPfnKernelStack.c)
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
