/*
 * XREFs of NtGdiIcmBrushInfo @ 0x1C02D1330
 * Callers:
 *     <none>
 * Callees:
 *     GreGetBitmapBitsSize @ 0x1C0091230 (GreGetBitmapBitsSize.c)
 *     ?GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x1C02D0778 (-GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z.c)
 *     ?GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z @ 0x1C02D0964 (-GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z.c)
 */

__int64 __fastcall NtGdiIcmBrushInfo(
        HDC a1,
        HBRUSH a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        ULONG64 a5,
        ULONG64 a6,
        ULONG64 a7,
        int a8)
{
  unsigned __int64 v9; // rbx
  __int64 result; // rax
  struct tagBITMAPINFO *v11; // r14
  unsigned int v12; // edi
  _OWORD *v13; // rcx
  __int64 v14; // r8
  unsigned int *v15; // rcx
  unsigned int BitmapBitsSize; // eax
  unsigned int v17; // r11d
  ULONG64 v18; // rdx
  unsigned int *v19; // rdx
  struct tagBITMAPINFO *v20; // rax
  __int64 v21; // r8
  _DWORD *v22; // rdx
  _DWORD *v23; // rcx
  _DWORD *v24; // rcx
  unsigned int v25; // [rsp+40h] [rbp-48h] BYREF
  int v26; // [rsp+44h] [rbp-44h] BYREF
  unsigned int v27; // [rsp+48h] [rbp-40h] BYREF
  __int64 v28; // [rsp+50h] [rbp-38h]

  v9 = a3;
  v25 = 0;
  result = Win32AllocPool(1064LL, 1835231559LL, a3, a4);
  v11 = (struct tagBITMAPINFO *)result;
  v28 = result;
  if ( result )
  {
    if ( !a8 )
    {
      v26 = 0;
      v27 = 0;
      if ( a4 )
      {
        v19 = (unsigned int *)a5;
        if ( a5 >= MmUserProbeAddress )
          v19 = (unsigned int *)MmUserProbeAddress;
        v25 = *v19;
        ProbeForWrite((volatile void *)a4, v25, 4u);
      }
      v12 = GreIcmQueryBrushBitmap(a1, a2, v11, a4, &v25, &v27, &v26);
      if ( v12 )
      {
        ProbeForWrite((volatile void *)v9, 0x428uLL, 4u);
        v20 = v11;
        v21 = 8LL;
        do
        {
          *(_OWORD *)v9 = *(_OWORD *)&v20->bmiHeader.biSize;
          *(_OWORD *)(v9 + 16) = *(_OWORD *)&v20->bmiHeader.biCompression;
          *(_OWORD *)(v9 + 32) = *(_OWORD *)&v20->bmiHeader.biClrUsed;
          *(_OWORD *)(v9 + 48) = *(_OWORD *)&v20[1].bmiHeader.biWidth;
          *(_OWORD *)(v9 + 64) = *(_OWORD *)&v20[1].bmiHeader.biSizeImage;
          *(_OWORD *)(v9 + 80) = *(_OWORD *)&v20[1].bmiHeader.biClrImportant;
          *(_OWORD *)(v9 + 96) = *(_OWORD *)&v20[2].bmiHeader.biHeight;
          v9 += 128LL;
          *(_OWORD *)(v9 - 16) = *(_OWORD *)&v20[2].bmiHeader.biXPelsPerMeter;
          v20 = (struct tagBITMAPINFO *)((char *)v20 + 128);
          --v21;
        }
        while ( v21 );
        *(_OWORD *)v9 = *(_OWORD *)&v20->bmiHeader.biSize;
        *(_OWORD *)(v9 + 16) = *(_OWORD *)&v20->bmiHeader.biCompression;
        *(_QWORD *)(v9 + 32) = *(_QWORD *)&v20->bmiHeader.biClrUsed;
        v22 = (_DWORD *)a5;
        if ( a5 >= MmUserProbeAddress )
          v22 = (_DWORD *)MmUserProbeAddress;
        *v22 = v25;
        v23 = (_DWORD *)a7;
        if ( a7 )
        {
          if ( a7 >= MmUserProbeAddress )
            v23 = (_DWORD *)MmUserProbeAddress;
          *v23 = v26;
        }
        v24 = (_DWORD *)a6;
        if ( a6 )
        {
          if ( a6 >= MmUserProbeAddress )
            v24 = (_DWORD *)MmUserProbeAddress;
          *v24 = v27;
        }
      }
      goto LABEL_40;
    }
    if ( a8 == 1 )
    {
      if ( (v9 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v9 + 1064 > MmUserProbeAddress || v9 + 1064 < v9 )
        *(_BYTE *)MmUserProbeAddress = 0;
      v13 = (_OWORD *)result;
      v14 = 8LL;
      do
      {
        *v13 = *(_OWORD *)v9;
        v13[1] = *(_OWORD *)(v9 + 16);
        v13[2] = *(_OWORD *)(v9 + 32);
        v13[3] = *(_OWORD *)(v9 + 48);
        v13[4] = *(_OWORD *)(v9 + 64);
        v13[5] = *(_OWORD *)(v9 + 80);
        v13[6] = *(_OWORD *)(v9 + 96);
        v13 += 8;
        *(v13 - 1) = *(_OWORD *)(v9 + 112);
        v9 += 128LL;
        --v14;
      }
      while ( v14 );
      *v13 = *(_OWORD *)v9;
      v13[1] = *(_OWORD *)(v9 + 16);
      *((_QWORD *)v13 + 4) = *(_QWORD *)(v9 + 32);
      v15 = (unsigned int *)a5;
      if ( a5 >= MmUserProbeAddress )
        v15 = (unsigned int *)MmUserProbeAddress;
      v25 = *v15;
      BitmapBitsSize = GreGetBitmapBitsSize(result);
      if ( BitmapBitsSize && BitmapBitsSize <= v17 )
      {
        if ( (a4 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v18 = a4 + BitmapBitsSize;
        if ( v18 > MmUserProbeAddress || v18 < a4 )
          *(_BYTE *)MmUserProbeAddress = 0;
        v12 = GreIcmSetBrushBitmap(a1, a2, v11, (void *)a4);
        goto LABEL_40;
      }
    }
    else
    {
      EngSetLastError(0x57u);
    }
    v12 = 0;
LABEL_40:
    Win32FreePool(v11);
    return v12;
  }
  return result;
}
