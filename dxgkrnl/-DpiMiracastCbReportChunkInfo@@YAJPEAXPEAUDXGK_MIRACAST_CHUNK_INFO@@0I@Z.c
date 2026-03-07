__int64 __fastcall DpiMiracastCbReportChunkInfo(_QWORD *a1, struct DXGK_MIRACAST_CHUNK_INFO *a2, void *a3, int a4)
{
  if ( a2 )
  {
    if ( a3 )
    {
      WdLogSingleEntry2(2LL, a1, -1073741583LL);
      return 3221225713LL;
    }
    else if ( a4 )
    {
      WdLogSingleEntry2(2LL, a1, -1073741582LL);
      return 3221225714LL;
    }
    else if ( a1 && *((_DWORD *)a1 + 4) == 1953656900 && *((_DWORD *)a1 + 5) == 14 && a1[54] )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
        McTemplateK0xqqqqqq_EtwWriteTransfer(
          a2->ChunkId.Value >> 40,
          (_DWORD)a1,
          0,
          a1[12],
          a2->ChunkType,
          *(_DWORD *)&a2->ChunkId.0,
          (unsigned __int16)WORD2(a2->ChunkId.Value) >> 8,
          a2->ProcessingTime,
          a2->EncodeRate,
          0);
      return 0LL;
    }
    else
    {
      WdLogSingleEntry2(2LL, a1, -1073741585LL);
      return 3221225711LL;
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, a1, -1073741584LL);
    return 3221225712LL;
  }
}
