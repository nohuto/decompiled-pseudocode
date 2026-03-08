/*
 * XREFs of KeFreeCalloutStack @ 0x140880190
 * Callers:
 *     <none>
 * Callees:
 *     MmDeleteKernelStack @ 0x1403D0A50 (MmDeleteKernelStack.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall KeFreeCalloutStack(_BYTE *P)
{
  __int64 v1; // rsi
  unsigned int i; // ebp

  v1 = 0LL;
  for ( i = P[4] != 0; (unsigned int)v1 < (unsigned __int8)P[5]; v1 = (unsigned int)(v1 + 1) )
  {
    MmDeleteKernelStack(*(_QWORD *)&P[8 * v1 + 64], i);
    *(_QWORD *)&P[8 * v1 + 64] = (char *)MmBadPointer + 4096;
  }
  ExFreePoolWithTag(P, 0);
}
