__int64 __fastcall SmmIoMmuUnmapStagingMdl(__int64 a1, unsigned int *a2)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  unsigned int v7; // edx
  __int64 v8; // rcx
  unsigned int v9; // edx
  __int64 result; // rax

  do
  {
    if ( (int)SmmIoMmuReferenceMdl(a1 + 64, (__int64)a2, 0) < 0 )
    {
      WdLogSingleEntry1(1LL, 738LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v5,
            v4,
            v6,
            0LL,
            2,
            -1,
            L"(((NTSTATUS)(Status)) >= 0)",
            738LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    v7 = a2[7];
    if ( v7 )
    {
      v8 = *(_QWORD *)(a1 + 176);
      v9 = v7 << 12;
      *(_DWORD *)(v8 + 40) = v9;
      *(_QWORD *)v8 = 0LL;
      *(_WORD *)(v8 + 10) = 0;
      *(_QWORD *)(v8 + 32) = 0LL;
      *(_DWORD *)(v8 + 44) = 0;
      *(_WORD *)(v8 + 8) = 8 * ((v9 >> 12) + 6);
      SmmUnmapIommu(a1, 0LL, *(_QWORD *)(a1 + 176));
    }
    result = a2[4];
  }
  while ( a2[6] != (_DWORD)result );
  return result;
}
