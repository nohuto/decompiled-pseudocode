/*
 * XREFs of MiRelinkDecayClusterTimer @ 0x14021456C
 * Callers:
 *     MiInsertDecayClusterTimer @ 0x14021450C (MiInsertDecayClusterTimer.c)
 *     MiEmptyDecayClusterTimers @ 0x140224EE0 (MiEmptyDecayClusterTimers.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiRelinkDecayClusterTimer(__int64 a1, unsigned int a2)
{
  __int64 v2; // r11
  __int64 v3; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r9

  v2 = a2;
  *(_BYTE *)(a1 + 34) = ((_BYTE)a2 << 6) | *(_BYTE *)(a1 + 34) & 0x3F;
  v3 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  result = *(_QWORD *)(v3 + 8LL * a2 + 15744);
  v5 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4) - qword_140C67DE0;
  v6 = result >> 1;
  LODWORD(v6) = (result >> 1) & 0x7FFFFFFF;
  *(_QWORD *)(a1 + 8) = 2 * (((unsigned int)result >> 1) | 0xFFFFFFFF00000000uLL);
  v7 = v5 << 33;
  if ( v6 == 0x7FFFFFFF )
    result = v7 | result & 0x1FFFFFFFFLL;
  else
    *(_QWORD *)(48 * (qword_140C67DE0 + v6) - 0x220000000000LL + 8) = v7 | *(_QWORD *)(48 * (qword_140C67DE0 + v6)
                                                                                     - 0x220000000000LL
                                                                                     + 8) & 0x1FFFFFFFFLL;
  *(_QWORD *)(v3 + 8 * v2 + 15744) = result ^ (result ^ (2 * v5)) & 0xFFFFFFFE;
  return result;
}
