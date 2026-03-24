/*
 * XREFs of ?AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z @ 0x1C0080610
 * Callers:
 *     VidMmAcquireDmaBuffer @ 0x1C0011970 (VidMmAcquireDmaBuffer.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C006DDC0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C0096934 (-InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ?IsAllowedToGrow@VIDMM_DMA_POOL@@IEAAHKKK@Z @ 0x1C00807E8 (-IsAllowedToGrow@VIDMM_DMA_POOL@@IEAAHKKK@Z.c)
 *     ?WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z @ 0x1C00808F8 (-WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C008A300 (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C008B81C (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 */

__int64 __fastcall VIDMM_DMA_POOL::AcquireBuffer(VIDMM_DMA_POOL *this, struct _VIDMM_DMA_BUFFER **a2, char a3, char a4)
{
  unsigned int v8; // ebp
  struct _VIDMM_DMA_BUFFER **v9; // rdi
  struct _VIDMM_DMA_BUFFER *v10; // rbx
  struct _VIDMM_DMA_BUFFER *v11; // rcx
  struct _VIDMM_DMA_BUFFER **v12; // rax
  struct _VIDMM_DMA_BUFFER ***v13; // rax
  struct _ERESOURCE *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r15
  signed __int64 v18; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  bool v22; // zf
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdi
  _QWORD *v26; // rax
  __int64 v27; // rax
  unsigned __int8 v28; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int8 v29; // [rsp+58h] [rbp+10h] BYREF

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
  v8 = 0;
  v9 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 96);
  *a2 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v10 = *v9;
        if ( *((_BYTE *)*v9 + 24) )
          break;
        if ( *((_BYTE *)v10 + 25) != 1 )
        {
          if ( g_IsInternalReleaseOrDbg )
            *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = v10;
          ExAcquireResourceSharedLite(VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock, 1u);
          v11 = *(struct _VIDMM_DMA_BUFFER **)v10;
          if ( *(struct _VIDMM_DMA_BUFFER **)(*(_QWORD *)v10 + 8LL) != v10
            || (v12 = (struct _VIDMM_DMA_BUFFER **)*((_QWORD *)v10 + 1), *v12 != v10)
            || (*v12 = v11,
                *((_QWORD *)v11 + 1) = v12,
                v13 = (struct _VIDMM_DMA_BUFFER ***)*((_QWORD *)this + 13),
                *v13 != v9) )
          {
            __fastfail(3u);
          }
          v14 = VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock;
          *(_QWORD *)v10 = v9;
          *((_QWORD *)v10 + 1) = v13;
          *v13 = (struct _VIDMM_DMA_BUFFER **)v10;
          *((_QWORD *)this + 13) = v10;
          ExReleaseResourceLite(v14);
          v17 = *((_QWORD *)this + 7);
          if ( v17 != *((_QWORD *)v10 + 5)
            || *((_DWORD *)this + 18) != *((_DWORD *)v10 + 12)
            || *((_DWORD *)this + 21) != *((_DWORD *)v10 + 13) )
          {
            v25 = *((unsigned int *)this + 18);
            v26 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, v15);
            v26[3] = 270LL;
            v26[4] = 22LL;
            v26[5] = v10;
            v26[6] = v17;
            v26[7] = v25;
            WdLogEvent5_WdCriticalError(v26);
          }
          if ( (*((_BYTE *)this + 32) & 1) != 0 )
            *((_QWORD *)v10 + 21) = 0LL;
          *((_OWORD *)v10 + 1) = 0LL;
          v18 = _InterlockedIncrement64(&VIDMM_DMA_POOL::_DmaBufferUniqueness);
          *((_BYTE *)v10 + 24) = 1;
          *((_DWORD *)v10 + 7) |= 1u;
          *((_QWORD *)v10 + 20) = v18;
          *a2 = v10;
          return v8;
        }
        VIDMM_DMA_POOL::RemoveDmaBufferFromPool(this, *v9);
      }
      if ( !(unsigned int)VIDMM_DMA_POOL::IsAllowedToGrow(
                            this,
                            *((_DWORD *)this + 10),
                            *((_DWORD *)this + 16),
                            *((_DWORD *)this + 19)) )
        break;
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v20);
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v23) + 24) = *((unsigned int *)this + 23);
      }
      if ( (int)VIDMM_DMA_POOL::AddDmaBufferToPool(
                  this,
                  *((_QWORD *)this + 5),
                  *((_DWORD *)this + 16),
                  *((_DWORD *)this + 19)) < 0 )
      {
        if ( a3 )
          return 3223191810LL;
        v28 = 0;
        VIDMM_DMA_POOL::WaitDmaBufferNotBusy(this, v10, a4 == 0, &v28);
        v22 = v28 == 0;
        goto LABEL_23;
      }
    }
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(v20);
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v24) + 24) = v10;
    }
    if ( a3 )
      return 3223191810LL;
    v29 = 0;
    VIDMM_DMA_POOL::WaitDmaBufferNotBusy(this, v10, a4 == 0, &v29);
    v22 = v29 == 0;
LABEL_23:
    if ( !v22 )
    {
      v27 = WdLogNewEntry5_WdEvent(this, v21);
      *(_QWORD *)(v27 + 24) = v10;
      WdLogEvent5_WdEvent(v27);
      return (unsigned int)-1073741130;
    }
  }
}
