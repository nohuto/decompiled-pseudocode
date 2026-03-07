__int64 __fastcall RoundToNearestScaleFactor(unsigned int a1, const struct _DPI_SCALE_FACTOR_COLLECTION *a2)
{
  unsigned int v2; // ebx
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  __int64 v11; // r8
  __int64 v12; // r10

  v2 = 0;
  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 817LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v6,
          v5,
          v7,
          0LL,
          2,
          -1,
          L"pScaleFactorCollection != nullptr",
          817LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( !*((_QWORD *)a2 + 2) )
  {
    WdLogSingleEntry1(1LL, 818LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v9,
          v8,
          v10,
          0LL,
          2,
          -1,
          L"pScaleFactorCollection->pScaleFactors != nullptr",
          818LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  v11 = *((_QWORD *)a2 + 2);
  if ( !v11 )
    return 0LL;
  if ( *((_DWORD *)a2 + 2) != 1 )
  {
    do
    {
      v12 = v2 + 1;
      if ( a1 <= (unsigned int)(*(_DWORD *)(v11 + 4LL * v2) + *(_DWORD *)(v11 + 4 * v12)) >> 1 )
        break;
      ++v2;
    }
    while ( (unsigned int)v12 < *((_DWORD *)a2 + 2) - 1 );
  }
  return *(unsigned int *)(v11 + 4LL * v2);
}
