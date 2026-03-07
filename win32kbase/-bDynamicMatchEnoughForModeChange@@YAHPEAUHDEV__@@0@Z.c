__int64 __fastcall bDynamicMatchEnoughForModeChange(_DWORD *a1, _DWORD *a2)
{
  int v3; // edx
  unsigned int v5; // r12d
  __int64 v6; // rcx
  unsigned int v8; // ebx
  unsigned int v9; // ebx
  unsigned int v10; // edi
  unsigned int v11; // ebx
  unsigned int v12; // eax
  int v13; // ebx
  int v14; // edi
  int v15; // ebx
  unsigned int v16; // eax
  _DWORD *v17; // [rsp+60h] [rbp+30h] BYREF
  _DWORD *v18; // [rsp+68h] [rbp+38h] BYREF

  v17 = a2;
  v3 = 1;
  v18 = a1;
  if ( a1[519] == 1 || a2[519] == 1 )
    v3 = 0;
  v5 = 0;
  v6 = (unsigned int)(a2[448] ^ a1[448]);
  if ( (v6 & 0x840000) == 0 )
    v5 = v3;
  if ( *(_DWORD *)(*(_QWORD *)(SGDGetSessionState(v6) + 24) + 1284LL) )
  {
    v8 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v17);
    if ( v8 != PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v18)
      || (v9 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v17), v9 != PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v18)) )
    {
      PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v17);
      v10 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v17);
      v11 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v18);
      v12 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v18);
      WdLogSingleEntry4(2LL, v12, v11, v10);
      v13 = (unsigned __int16)PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v17);
      v14 = v13 + (PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v17) << 16);
      v15 = (unsigned __int16)PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v18);
      v16 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v18);
      DrvDxgkLogCodePointPacket(95LL, v15 + (v16 << 16), v14, 0);
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
