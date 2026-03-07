// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_DMA_POOL::AcquireBuffer(VIDMM_DMA_POOL *this, struct _VIDMM_DMA_BUFFER **a2, char a3, char a4)
{
  struct _VIDMM_DMA_BUFFER **v8; // r14
  struct _VIDMM_DMA_BUFFER *v9; // rbx
  struct _VIDMM_DMA_BUFFER *v10; // rcx
  struct _VIDMM_DMA_BUFFER **v11; // rax
  struct _VIDMM_DMA_BUFFER ***v12; // rax
  struct _ERESOURCE *v13; // rcx
  __int64 v14; // rdx
  signed __int64 v15; // rax
  unsigned int v16; // esi
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned __int8 v22; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int8 v23; // [rsp+78h] [rbp+10h] BYREF

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
  *a2 = 0LL;
  v8 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 96);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = *v8;
        if ( *((_BYTE *)*v8 + 24) )
          break;
        if ( *((_BYTE *)v9 + 25) != 1 )
        {
          if ( g_IsInternalReleaseOrDbg )
            *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = v9;
          ExAcquireResourceSharedLite(VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock, 1u);
          v10 = *(struct _VIDMM_DMA_BUFFER **)v9;
          if ( *(struct _VIDMM_DMA_BUFFER **)(*(_QWORD *)v9 + 8LL) != v9
            || (v11 = (struct _VIDMM_DMA_BUFFER **)*((_QWORD *)v9 + 1), *v11 != v9)
            || (*v11 = v10,
                *((_QWORD *)v10 + 1) = v11,
                v12 = (struct _VIDMM_DMA_BUFFER ***)*((_QWORD *)this + 13),
                *v12 != v8) )
          {
            __fastfail(3u);
          }
          v13 = VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock;
          *(_QWORD *)v9 = v8;
          *((_QWORD *)v9 + 1) = v12;
          *v12 = (struct _VIDMM_DMA_BUFFER **)v9;
          *((_QWORD *)this + 13) = v9;
          ExReleaseResourceLite(v13);
          v14 = *((_QWORD *)this + 7);
          if ( v14 != *((_QWORD *)v9 + 5)
            || *((_DWORD *)this + 18) != *((_DWORD *)v9 + 12)
            || *((_DWORD *)this + 21) != *((_DWORD *)v9 + 13) )
          {
            v21 = *((unsigned int *)this + 18);
            g_DxgMmsBugcheckExportIndex = 1;
            WdLogSingleEntry5(0LL, 270LL, 22LL, v9, v14, v21);
          }
          if ( (*((_BYTE *)this + 32) & 1) != 0 )
            *((_QWORD *)v9 + 21) = 0LL;
          *((_OWORD *)v9 + 1) = 0LL;
          v15 = _InterlockedIncrement64(&VIDMM_DMA_POOL::_DmaBufferUniqueness);
          *((_BYTE *)v9 + 24) = 1;
          *((_DWORD *)v9 + 7) |= 1u;
          v16 = 0;
          *((_QWORD *)v9 + 20) = v15;
          *a2 = v9;
          return v16;
        }
        VIDMM_DMA_POOL::RemoveDmaBufferFromPool((struct VIDMM_DEVICE **)this, *v8);
      }
      if ( !(unsigned int)VIDMM_DMA_POOL::IsAllowedToGrow(
                            this,
                            *((_DWORD *)this + 10),
                            *((_DWORD *)this + 16),
                            *((_DWORD *)this + 19)) )
        break;
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v18);
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v19) + 24) = *((unsigned int *)this + 23);
      }
      if ( (int)VIDMM_DMA_POOL::AddDmaBufferToPool(
                  this,
                  *((_QWORD *)this + 5),
                  *((_DWORD *)this + 16),
                  *((_DWORD *)this + 19)) < 0 )
      {
        if ( a3 )
          return 3223191810LL;
        v22 = 0;
        VIDMM_DMA_POOL::WaitDmaBufferNotBusy(this, v9, a4 == 0, &v22);
        if ( v22 )
        {
LABEL_25:
          WdLogSingleEntry1(4LL, v9);
          return (unsigned int)-1073741130;
        }
      }
    }
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(v18);
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v20) + 24) = v9;
    }
    if ( a3 )
      return 3223191810LL;
    v23 = 0;
    VIDMM_DMA_POOL::WaitDmaBufferNotBusy(this, v9, a4 == 0, &v23);
    if ( v23 )
      goto LABEL_25;
  }
}
