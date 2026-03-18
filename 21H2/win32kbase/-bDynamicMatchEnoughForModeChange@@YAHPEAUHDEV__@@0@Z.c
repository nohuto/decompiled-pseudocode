/*
 * XREFs of ?bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z @ 0x1C00C2644
 * Callers:
 *     bDynamicModeChange @ 0x1C00C9250 (bDynamicModeChange.c)
 * Callees:
 *     DrvDxgkLogCodePointPacket @ 0x1C00D05E0 (DrvDxgkLogCodePointPacket.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C016F2B0 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C016F2F4 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 */

__int64 __fastcall bDynamicMatchEnoughForModeChange(_DWORD *a1, _DWORD *a2)
{
  int v3; // edx
  unsigned int v5; // r12d
  unsigned int v7; // ebx
  unsigned int v8; // ebx
  unsigned int v9; // ebx
  unsigned int v10; // eax
  int v11; // ebx
  unsigned int v12; // edi
  int v13; // ebx
  unsigned int v14; // eax
  _DWORD *v15; // [rsp+60h] [rbp+30h] BYREF
  _DWORD *v16; // [rsp+68h] [rbp+38h] BYREF

  v15 = a2;
  v3 = 1;
  v16 = a1;
  if ( a1[519] == 1 || a2[519] == 1 )
    v3 = 0;
  v5 = 0;
  if ( ((a2[448] ^ a1[448]) & 0x840000) == 0 )
    v5 = v3;
  if ( gDrvDpiAdjustedForLoggedOnUser )
  {
    v7 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v15);
    if ( v7 != PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v16)
      || (v8 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v15), v8 != PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v16)) )
    {
      PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v15);
      PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v15);
      v9 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v16);
      v10 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v16);
      WdLogSingleEntry4(2LL, v10, v9);
      v11 = (unsigned __int16)PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v15);
      v12 = v11 + (PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v15) << 16);
      v13 = (unsigned __int16)PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v16);
      v14 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v16);
      DrvDxgkLogCodePointPacket(95LL, v13 + (v14 << 16), v12, 0LL);
    }
  }
  if ( *((_QWORD *)a2 + 359)
    || *((_QWORD *)a2 + 377)
    || *((_QWORD *)a2 + 378)
    || *((_QWORD *)a2 + 384)
    || *((_QWORD *)a2 + 370) )
  {
    v5 = 0;
  }
  if ( *((_QWORD *)a1 + 359)
    || *((_QWORD *)a1 + 377)
    || *((_QWORD *)a1 + 378)
    || *((_QWORD *)a1 + 384)
    || *((_QWORD *)a1 + 370) )
  {
    return 0;
  }
  return v5;
}
