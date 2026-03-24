/*
 * XREFs of MiMapViewOfSectionExCommon @ 0x1406FCBD8
 * Callers:
 *     MmMapViewOfSectionEx @ 0x1403529F0 (MmMapViewOfSectionEx.c)
 *     NtMapViewOfSectionEx @ 0x1406FB970 (NtMapViewOfSectionEx.c)
 *     MiPerformImageHotPatch @ 0x1408CCF14 (MiPerformImageHotPatch.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x140413800 (memset.c)
 *     MiCaptureAllocateMapExtendedParameters @ 0x1405F9738 (MiCaptureAllocateMapExtendedParameters.c)
 *     MiMapViewOfSectionCommon @ 0x140638690 (MiMapViewOfSectionCommon.c)
 *     MiMapViewOfSection @ 0x140639150 (MiMapViewOfSection.c)
 *     MiMapParametersInitialize @ 0x1406396D0 (MiMapParametersInitialize.c)
 *     EtwTiLogMapExecView @ 0x1406A0AF4 (EtwTiLogMapExecView.c)
 *     MiMapExParametersInitialize @ 0x1406FCE88 (MiMapExParametersInitialize.c)
 *     DbgkMapViewOfSection @ 0x1406FCFD4 (DbgkMapViewOfSection.c)
 */

NTSTATUS __fastcall MiMapViewOfSectionExCommon(
        void *a1,
        __int64 a2,
        int a3,
        __int64 *a4,
        _QWORD *a5,
        _QWORD *a6,
        int a7,
        int a8,
        __int64 *Address,
        ULONGLONG ullMultiplicand,
        int a11,
        __int64 a12,
        KPROCESSOR_MODE a13,
        int a14)
{
  NTSTATUS result; // eax
  int MapExtendedParameters; // ebx
  void *v19; // [rsp+20h] [rbp-168h]
  int v20[2]; // [rsp+28h] [rbp-160h]
  __int64 v21[2]; // [rsp+50h] [rbp-138h] BYREF
  __int128 v22; // [rsp+60h] [rbp-128h] BYREF
  PADAPTER_OBJECT DmaAdapter[2]; // [rsp+70h] [rbp-118h]
  int v24; // [rsp+80h] [rbp-108h]
  _QWORD v25[16]; // [rsp+90h] [rbp-F8h] BYREF
  _QWORD v26[15]; // [rsp+110h] [rbp-78h] BYREF

  memset(v25, 0, sizeof(v25));
  *(_OWORD *)v21 = 0LL;
  v22 = 0LL;
  *(_OWORD *)DmaAdapter = 0LL;
  memset(v26, 0, 0x48uLL);
  result = MiMapViewOfSectionCommon(a2, a1, a3, a4, (unsigned __int64)a6, (unsigned __int64)a5, a8, 0, a13, v21);
  if ( result < 0 )
  {
    if ( v21[0] )
      ++dword_140C4E7E4;
    else
      ++dword_140C4E7E0;
    return result;
  }
  MapExtendedParameters = MiCaptureAllocateMapExtendedParameters(Address, (unsigned int)ullMultiplicand, a13, 38, v26);
  if ( MapExtendedParameters < 0 )
  {
LABEL_12:
    if ( MapExtendedParameters >= 0 )
      goto LABEL_13;
    goto LABEL_22;
  }
  if ( (v26[7] & 0xFFFFFFFFFFFFFFDFuLL) == 0 )
  {
    MapExtendedParameters = MiMapParametersInitialize(
                              v25,
                              (__int64)DmaAdapter[0],
                              (__int64)DmaAdapter[1],
                              v21[0],
                              v21[1],
                              a7,
                              a8,
                              0LL);
    if ( MapExtendedParameters >= 0 )
    {
      MapExtendedParameters = MiMapExParametersInitialize(v25, v21, v26);
      if ( MapExtendedParameters >= 0 )
      {
        HIDWORD(v25[9]) = a11;
        v25[10] = a12;
        HIDWORD(v25[7]) |= a14;
        MapExtendedParameters = MiMapViewOfSection(
                                  (__int64)DmaAdapter[0],
                                  (__int64)v25,
                                  (void **)v21,
                                  0LL,
                                  (unsigned __int64 *)&v22,
                                  1,
                                  0);
        v24 = MapExtendedParameters;
        if ( MapExtendedParameters >= 0 )
        {
          if ( (v25[9] & 4) != 0 )
            DbgkMapViewOfSection((ULONG_PTR)DmaAdapter[1]);
          if ( ((__int64)DmaAdapter[0][3].DmaOperations & 0x20) == 0 && (BYTE8(v22) & 2) != 0 )
          {
            v20[0] = a8;
            LODWORD(v19) = a7;
            EtwTiLogMapExecView((__int64)DmaAdapter[1], a13, v21[0], v21[1], v19, *(_QWORD *)v20);
          }
          *a4 = v21[0];
          *a6 = v25[3];
          if ( a5 )
            *a5 = v22;
        }
      }
    }
    goto LABEL_12;
  }
  MapExtendedParameters = -1073741811;
LABEL_22:
  if ( v21[0] )
    ++dword_140C4E7E4;
  else
    ++dword_140C4E7E0;
LABEL_13:
  if ( !a3 )
  {
    HalPutDmaAdapter(DmaAdapter[0]);
    ObfDereferenceObjectWithTag(DmaAdapter[1], 0x77566D4Du);
  }
  return MapExtendedParameters;
}
