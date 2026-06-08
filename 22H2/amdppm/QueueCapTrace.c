/*
 * XREFs of QueueCapTrace @ 0x1C002A038
 * Callers:
 *     ProcLibCapChange @ 0x1C0028C54 (ProcLibCapChange.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall QueueCapTrace(__int64 a1, int a2)
{
  BOOLEAN result; // al

  result = KeSetTimerEx(
             (PKTIMER)a1,
             (LARGE_INTEGER)-(__int64)(unsigned int)(10000000 * a2),
             1000 * a2,
             (PKDPC)(a1 + 64));
  *(_BYTE *)(a1 + 148) = 1;
  return result;
}
