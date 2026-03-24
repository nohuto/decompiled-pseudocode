/*
 * XREFs of NtGdiIcmBrushInfo @ 0x1C02B7320
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C009FE48 (PALLOCMEM2.c)
 *     GreGetBitmapBitsSize @ 0x1C00ABFB4 (GreGetBitmapBitsSize.c)
 *     ?GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x1C02B65A4 (-GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z.c)
 *     ?GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z @ 0x1C02B67A4 (-GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z.c)
 */

_OWORD *__fastcall NtGdiIcmBrushInfo(
        HDC a1,
        HBRUSH a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        ULONG64 a5,
        ULONG64 a6,
        ULONG64 a7,
        int a8)
{
  _OWORD *result; // rax
  _OWORD *v11; // rsi
  struct tagBITMAPINFO *v12; // r15
  unsigned int v13; // edi
  __int64 v14; // rcx
  unsigned int *v15; // rcx
  unsigned int BitmapBitsSize; // eax
  unsigned int v17; // r11d
  ULONG64 v18; // rcx
  unsigned int *v19; // rdx
  __int64 v20; // rcx
  _DWORD *v21; // rdx
  _DWORD *v22; // rcx
  _DWORD *v23; // rcx
  unsigned int v24; // [rsp+40h] [rbp-48h] BYREF
  int v25; // [rsp+44h] [rbp-44h] BYREF
  unsigned int v26; // [rsp+48h] [rbp-40h] BYREF
  _OWORD *v27; // [rsp+50h] [rbp-38h]

  v24 = 0;
  result = PALLOCMEM2(0x428uLL, 1835231559LL, 0);
  v11 = result;
  v12 = (struct tagBITMAPINFO *)result;
  v27 = result;
  if ( result )
  {
    if ( !a8 )
    {
      v25 = 0;
      v26 = 0;
      if ( a4 )
      {
        v19 = (unsigned int *)a5;
        if ( a5 >= MmUserProbeAddress )
          v19 = (unsigned int *)MmUserProbeAddress;
        v24 = *v19;
        ProbeForWrite((volatile void *)a4, v24, 4u);
      }
      v13 = GreIcmQueryBrushBitmap(a1, a2, v12, a4, &v24, &v26, &v25);
      if ( v13 )
      {
        ProbeForWrite((volatile void *)a3, 0x428uLL, 4u);
        v20 = 8LL;
        do
        {
          *(_OWORD *)a3 = *v11;
          *(_OWORD *)(a3 + 16) = v11[1];
          *(_OWORD *)(a3 + 32) = v11[2];
          *(_OWORD *)(a3 + 48) = v11[3];
          *(_OWORD *)(a3 + 64) = v11[4];
          *(_OWORD *)(a3 + 80) = v11[5];
          *(_OWORD *)(a3 + 96) = v11[6];
          a3 += 128LL;
          *(_OWORD *)(a3 - 16) = v11[7];
          v11 += 8;
          --v20;
        }
        while ( v20 );
        *(_OWORD *)a3 = *v11;
        *(_OWORD *)(a3 + 16) = v11[1];
        *(_QWORD *)(a3 + 32) = *((_QWORD *)v11 + 4);
        v21 = (_DWORD *)a5;
        if ( a5 >= MmUserProbeAddress )
          v21 = (_DWORD *)MmUserProbeAddress;
        *v21 = v24;
        v22 = (_DWORD *)a7;
        if ( a7 )
        {
          if ( a7 >= MmUserProbeAddress )
            v22 = (_DWORD *)MmUserProbeAddress;
          *v22 = v25;
        }
        v23 = (_DWORD *)a6;
        if ( a6 )
        {
          if ( a6 >= MmUserProbeAddress )
            v23 = (_DWORD *)MmUserProbeAddress;
          *v23 = v26;
        }
      }
      goto LABEL_40;
    }
    if ( a8 == 1 )
    {
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a3 + 1064 > MmUserProbeAddress || a3 + 1064 < a3 )
        *(_BYTE *)MmUserProbeAddress = 0;
      v14 = 8LL;
      do
      {
        *v11 = *(_OWORD *)a3;
        v11[1] = *(_OWORD *)(a3 + 16);
        v11[2] = *(_OWORD *)(a3 + 32);
        v11[3] = *(_OWORD *)(a3 + 48);
        v11[4] = *(_OWORD *)(a3 + 64);
        v11[5] = *(_OWORD *)(a3 + 80);
        v11[6] = *(_OWORD *)(a3 + 96);
        v11 += 8;
        *(v11 - 1) = *(_OWORD *)(a3 + 112);
        a3 += 128LL;
        --v14;
      }
      while ( v14 );
      *v11 = *(_OWORD *)a3;
      v11[1] = *(_OWORD *)(a3 + 16);
      *((_QWORD *)v11 + 4) = *(_QWORD *)(a3 + 32);
      v15 = (unsigned int *)a5;
      if ( a5 >= MmUserProbeAddress )
        v15 = (unsigned int *)MmUserProbeAddress;
      v24 = *v15;
      BitmapBitsSize = GreGetBitmapBitsSize((__int64)result);
      if ( BitmapBitsSize && BitmapBitsSize <= v17 )
      {
        if ( (a4 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v18 = a4 + BitmapBitsSize;
        if ( v18 > MmUserProbeAddress || v18 < a4 )
          *(_BYTE *)MmUserProbeAddress = 0;
        v13 = GreIcmSetBrushBitmap(a1, a2, v12, (void *)a4);
        goto LABEL_40;
      }
    }
    else
    {
      EngSetLastError(0x57u);
    }
    v13 = 0;
LABEL_40:
    Win32FreePool(v12);
    return (_OWORD *)v13;
  }
  return result;
}
