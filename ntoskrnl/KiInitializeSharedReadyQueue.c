/*
 * XREFs of KiInitializeSharedReadyQueue @ 0x14037DCF8
 * Callers:
 *     KiInitPrcb @ 0x140A88DD8 (KiInitPrcb.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 (__fastcall *__fastcall KiInitializeSharedReadyQueue(__int64 a1, __int64 a2))()
{
  _QWORD *v2; // rax
  __int64 v5; // rcx
  __int64 (__fastcall *result)(); // rax

  v2 = (_QWORD *)(a1 + 16);
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 672) = 0;
  *(_QWORD *)(a1 + 680) = 0LL;
  v5 = 32LL;
  do
  {
    v2[1] = v2;
    *v2 = v2;
    v2 += 2;
    --v5;
  }
  while ( v5 );
  memset((void *)(a1 + 528), 63, 0x40uLL);
  *(_BYTE *)(a1 + 656) = 1;
  *(_BYTE *)(a1 + 657) = *(_BYTE *)(a2 + 209);
  *(_BYTE *)(a1 + 658) = 1;
  *(_BYTE *)(a1 + 660) = 1;
  *(_WORD *)(a1 + 662) = *(unsigned __int8 *)(a2 + 208);
  *(_QWORD *)(a1 + 664) = *(_QWORD *)(a2 + 200);
  result = KiSoftParkElectionDpcRoutine;
  *(_QWORD *)(a1 + 776) = 0LL;
  *(_QWORD *)(a1 + 736) = 0LL;
  *(_QWORD *)(a1 + 744) = KiSoftParkElectionDpcRoutine;
  *(_DWORD *)(a1 + 720) = 275;
  *(_QWORD *)(a1 + 752) = a1;
  return result;
}
