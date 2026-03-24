/*
 * XREFs of ?bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z @ 0x1C00B2554
 * Callers:
 *     bDynamicModeChange @ 0x1C00BAA30 (bDynamicModeChange.c)
 * Callees:
 *     DrvDxgkLogCodePointPacket @ 0x1C00C3ED0 (DrvDxgkLogCodePointPacket.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C01427E8 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C0142824 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 */

__int64 __fastcall bDynamicMatchEnoughForModeChange(_DWORD *a1, _DWORD *a2)
{
  int v3; // edx
  unsigned int v5; // r12d
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // ebx
  _QWORD *v11; // rbx
  int v12; // esi
  unsigned int v13; // edi
  unsigned int v14; // eax
  _DWORD *v15; // [rsp+50h] [rbp+30h] BYREF
  _DWORD *v16; // [rsp+58h] [rbp+38h] BYREF

  v15 = a2;
  v3 = 1;
  v16 = a1;
  if ( a1[527] == 1 || a2[527] == 1 )
    v3 = 0;
  v5 = 0;
  if ( ((a2[456] ^ a1[456]) & 0x840000) == 0 )
    v5 = v3;
  if ( gDrvDpiAdjustedForLoggedOnUser )
  {
    v7 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v15);
    if ( v7 != PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v16)
      || (v10 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v15), v10 != PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v16)) )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8);
      v11[3] = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v16);
      v11[4] = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v16);
      v11[5] = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v15);
      v11[6] = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v15);
      WdLogEvent5_WdError(v11);
      LODWORD(v11) = (unsigned __int16)PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v15);
      v12 = (unsigned __int16)PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v16);
      v13 = (_DWORD)v11 + (PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v15) << 16);
      v14 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v16);
      DrvDxgkLogCodePointPacket(95LL, v12 + (v14 << 16), v13);
    }
  }
  if ( *((_QWORD *)a2 + 362)
    || *((_QWORD *)a2 + 380)
    || *((_QWORD *)a2 + 381)
    || *((_QWORD *)a2 + 387)
    || *((_QWORD *)a2 + 373) )
  {
    v5 = 0;
  }
  if ( *((_QWORD *)a1 + 362)
    || *((_QWORD *)a1 + 380)
    || *((_QWORD *)a1 + 381)
    || *((_QWORD *)a1 + 387)
    || *((_QWORD *)a1 + 373) )
  {
    return 0;
  }
  return v5;
}
