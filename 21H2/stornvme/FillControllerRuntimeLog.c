/*
 * XREFs of FillControllerRuntimeLog @ 0x1C0017A04
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C0006F74 (NVMeControllerInitPart2.c)
 *     NVMeControllerInitPart1 @ 0x1C0007384 (NVMeControllerInitPart1.c)
 *     ControllerReset @ 0x1C0007A88 (ControllerReset.c)
 *     NVMeHwFindAdapter @ 0x1C000ACD0 (NVMeHwFindAdapter.c)
 *     NVMeControllerReset @ 0x1C001906C (NVMeControllerReset.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x1C0021E00 (NVMeControllerPanicResetActionWorkItem.c)
 * Callees:
 *     memset @ 0x1C00109C0 (memset.c)
 */

__int64 __fastcall FillControllerRuntimeLog(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rdx
  __int64 result; // rax
  _DWORD *v6; // rcx
  __int64 v7; // r10

  memset(a2, 0, 0x58uLL);
  *a2 = 88;
  v4 = 0LL;
  a2[1] = 88;
  *((_BYTE *)a2 + 8) = *(_BYTE *)(a1 + 25);
  *((_BYTE *)a2 + 9) = *(_BYTE *)(a1 + 26);
  a2[3] = *(_DWORD *)(a1 + 32);
  a2[4] = *(_DWORD *)(a1 + 36);
  *((_QWORD *)a2 + 3) = *(_QWORD *)(a1 + 3864);
  a2[8] = *(_DWORD *)(a1 + 3872);
  *((_WORD *)a2 + 18) = *(_WORD *)(a1 + 296);
  *((_WORD *)a2 + 19) = *(_WORD *)(a1 + 298);
  *((_WORD *)a2 + 20) = *(_WORD *)(a1 + 300);
  *((_WORD *)a2 + 21) = *(_WORD *)(a1 + 302);
  *((_WORD *)a2 + 22) = *(_WORD *)(a1 + 304);
  *((_WORD *)a2 + 23) = *(_WORD *)(a1 + 306);
  *((_WORD *)a2 + 24) = *(_WORD *)(a1 + 308);
  *((_WORD *)a2 + 25) = *(_WORD *)(a1 + 808);
  *((_WORD *)a2 + 26) = *(_WORD *)(a1 + 810);
  *((_WORD *)a2 + 27) = *(_WORD *)(a1 + 832);
  *((_WORD *)a2 + 28) = *(_WORD *)(a1 + 834);
  *((_WORD *)a2 + 29) = *(_WORD *)(a1 + 836);
  result = *(unsigned __int16 *)(a1 + 838);
  for ( *((_WORD *)a2 + 30) = result; (unsigned int)v4 < *(_DWORD *)(a1 + 224); v4 = (unsigned int)(v4 + 1) )
  {
    result = *(_QWORD *)(a1 + 8 * v4 + 1752);
    if ( result )
    {
      v6 = a2 + 18;
      *((_QWORD *)a2 + 8) += *(_QWORD *)(result + 24);
      v7 = 4LL;
      do
      {
        result = *(unsigned int *)((char *)v6 + -40LL - (_QWORD)a2 + *(_QWORD *)(a1 + 8 * v4 + 1752));
        *v6++ += result;
        --v7;
      }
      while ( v7 );
    }
  }
  return result;
}
