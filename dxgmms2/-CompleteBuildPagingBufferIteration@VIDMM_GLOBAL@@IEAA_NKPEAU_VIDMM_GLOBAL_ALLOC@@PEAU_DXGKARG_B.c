// write access to const memory has been detected, the output may be wrong!
bool __fastcall VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        struct _DXGKARG_BUILDPAGINGBUFFER *a4,
        int a5,
        int a6,
        void *a7)
{
  unsigned __int64 v7; // rsi
  __int64 v8; // r12
  int v9; // r14d
  int v13; // r15d
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  __int64 v16; // rsi
  __int64 v17; // rcx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  char v21; // al
  __int64 v22; // rcx
  unsigned __int64 v23; // [rsp+28h] [rbp-40h]
  unsigned __int64 v24; // [rsp+80h] [rbp+18h] BYREF

  v7 = -1LL;
  v8 = a2;
  v9 = 0;
  v24 = -1LL;
  if ( !a3 || (**((_DWORD **)a3 + 67) & 0x10000000) == 0 )
  {
    v9 = LODWORD(a4->pDmaBuffer) - *((_DWORD *)this + 2 * a2 + 670);
    v13 = LODWORD(a4->pDmaBufferPrivateData) - *((_DWORD *)this + 2 * a2 + 798);
    if ( LODWORD(a4->pDmaBuffer) != *((_DWORD *)this + 2 * a2 + 670) || v13 )
    {
      VIDMM_GLOBAL::GetOrGeneratePendingPagingBufferFence(this, a2, &v24);
      v7 = v24;
      if ( a3 )
      {
        if ( *((_QWORD *)a3 + 20) > v24 )
        {
          v19 = *((_DWORD *)a3 + 17) & 0x3F;
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 270LL, 31LL, a3, v19, v24);
        }
        *((_QWORD *)a3 + 20) = v7;
        if ( *((_DWORD *)this + 2) == 206 )
        {
          if ( *((_QWORD *)a3 + 19) > v7 )
          {
            v20 = *((_DWORD *)a3 + 17) & 0x3F;
            g_DxgMmsBugcheckExportIndex = 1;
            WdLogSingleEntry5(0LL, 270LL, 31LL, a3, v20, v7);
          }
          *((_QWORD *)a3 + 19) = v7;
        }
      }
      v21 = *((_BYTE *)this + 40937);
      if ( (v21 & 8) != 0 )
        *((_BYTE *)this + 40937) = v21 & 0xF7;
    }
    v14 = v9 + *((_DWORD *)this + v8 + 414);
    *((_DWORD *)this + v8 + 414) = v14;
    if ( v14 > *((_DWORD *)this + v8 + 29) )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 18LL, 0LL, 0LL, 0LL);
    }
    v15 = v13 + *((_DWORD *)this + v8 + 542);
    *((_DWORD *)this + v8 + 542) = v15;
    if ( v15 > *((_DWORD *)this + v8 + 93) )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 19LL, 0LL, 0LL, 0LL);
    }
  }
  v23 = v7;
  v16 = a5;
  VIDMM_GLOBAL::RecordPagingOperation(this, v8, a3, a4, a5, v23, a6, a7);
  if ( (int)v16 < 0 )
  {
    if ( (_DWORD)v16 == -1071775743 )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v17);
      VIDMM_GLOBAL::FlushPagingBufferInternal(this, v8, 1u, 0LL, 0LL, 1u, 0);
    }
    else
    {
      v22 = *((_QWORD *)this + 3);
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 11LL, a4, v16, v22);
    }
  }
  return v9 != 0;
}
