/*
 * XREFs of FillControllerRuntimeLog @ 0x1C0007908
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C0007CD0 (NVMeHwFindAdapter.c)
 *     ControllerReset @ 0x1C0009668 (ControllerReset.c)
 *     NVMeControllerInitPart1 @ 0x1C000D7A8 (NVMeControllerInitPart1.c)
 *     NVMeControllerInitPart2 @ 0x1C000D9F0 (NVMeControllerInitPart2.c)
 *     NVMeControllerReset @ 0x1C000E4D8 (NVMeControllerReset.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x1C001C690 (NVMeControllerPanicResetActionWorkItem.c)
 * Callees:
 *     memset @ 0x1C0004580 (memset.c)
 */

__int64 __fastcall FillControllerRuntimeLog(__int64 a1, _DWORD *a2)
{
  __int64 v4; // r8
  __int64 result; // rax
  _DWORD *v6; // rdx
  __int64 v7; // r11

  memset(a2, 0, 0x58uLL);
  *a2 = 88;
  v4 = 0LL;
  a2[1] = 88;
  *((_BYTE *)a2 + 8) = *(_BYTE *)(a1 + 25);
  *((_BYTE *)a2 + 9) = *(_BYTE *)(a1 + 26);
  a2[3] = *(_DWORD *)(a1 + 32);
  a2[4] = *(_DWORD *)(a1 + 36);
  *((_QWORD *)a2 + 3) = *(_QWORD *)(a1 + 4064);
  a2[8] = *(_DWORD *)(a1 + 4072);
  *((_WORD *)a2 + 18) = *(_WORD *)(a1 + 328);
  *((_WORD *)a2 + 19) = *(_WORD *)(a1 + 330);
  *((_WORD *)a2 + 20) = *(_WORD *)(a1 + 332);
  *((_WORD *)a2 + 21) = *(_WORD *)(a1 + 334);
  *((_WORD *)a2 + 22) = *(_WORD *)(a1 + 336);
  *((_WORD *)a2 + 23) = *(_WORD *)(a1 + 338);
  *((_WORD *)a2 + 24) = *(_WORD *)(a1 + 340);
  *((_WORD *)a2 + 25) = *(_WORD *)(a1 + 888);
  *((_WORD *)a2 + 26) = *(_WORD *)(a1 + 890);
  *((_WORD *)a2 + 27) = *(_WORD *)(a1 + 912);
  *((_WORD *)a2 + 28) = *(_WORD *)(a1 + 914);
  *((_WORD *)a2 + 29) = *(_WORD *)(a1 + 916);
  result = *(unsigned __int16 *)(a1 + 918);
  for ( *((_WORD *)a2 + 30) = result; (unsigned int)v4 < *(_DWORD *)(a1 + 232); v4 = (unsigned int)(v4 + 1) )
  {
    result = *(_QWORD *)(a1 + 8 * v4 + 1952);
    if ( result )
    {
      v6 = a2 + 18;
      *((_QWORD *)a2 + 8) += *(_QWORD *)(result + 24);
      v7 = 4LL;
      do
      {
        result = *(_QWORD *)(a1 + 8 * v4 + 1952);
        *v6 += *(_DWORD *)((char *)v6 + result - (_QWORD)a2 - 40);
        ++v6;
        --v7;
      }
      while ( v7 );
    }
  }
  return result;
}
