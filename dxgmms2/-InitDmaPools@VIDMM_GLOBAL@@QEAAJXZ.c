__int64 __fastcall VIDMM_GLOBAL::InitDmaPools(VIDMM_GLOBAL *this)
{
  struct VIDMM_DEVICE *v1; // r14
  unsigned int v3; // esi
  char v4; // al
  unsigned int v5; // ebp
  VIDMM_DMA_POOL *v6; // rax
  VIDMM_DMA_POOL *v7; // rax
  int v8; // eax
  unsigned int v9; // ebp
  __int64 v10; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned int i; // esi
  __int64 v15; // rbx
  VIDMM_DMA_POOL *v16; // rcx
  struct _VIDMM_DMA_BUFFER *v17; // rdx
  VIDMM_DMA_POOL *v18; // rcx

  v1 = (struct VIDMM_DEVICE *)*((_QWORD *)this + 5049);
  v3 = 0;
  if ( *((_DWORD *)this + 1754) )
  {
    while ( 1 )
    {
      v4 = *((_BYTE *)this + v3 + 52);
      v5 = v4 ? 1 << (v4 - 1) : 0;
      v6 = (VIDMM_DMA_POOL *)operator new(144LL, 0x39326956u, 64LL);
      v7 = v6
         ? VIDMM_DMA_POOL::VIDMM_DMA_POOL(
             v6,
             this,
             v3,
             v1,
             0LL,
             *((_DWORD *)this + v3 + 29),
             0,
             0,
             v5,
             *((_DWORD *)this + v3 + 93),
             1)
         : 0LL;
      *((_QWORD *)this + v3 + 79) = v7;
      if ( !v7 )
        break;
      v8 = VIDMM_DMA_POOL::Init(v7);
      v9 = v8;
      if ( v8 < 0 )
      {
        _InterlockedAdd(&dword_1C0076824, 1u);
        WdLogSingleEntry1(6LL, v8);
        DxgkLogInternalTriageEvent(v12, 262145LL);
        goto LABEL_14;
      }
      VIDMM_DMA_POOL::AcquireBuffer(
        *((VIDMM_DMA_POOL **)this + v3 + 79),
        (struct _VIDMM_DMA_BUFFER **)this + v3 + 143,
        0,
        1);
      v10 = *((_QWORD *)this + v3++ + 143);
      *(_DWORD *)(v10 + 32) = 1;
      if ( v3 >= *((_DWORD *)this + 1754) )
        goto LABEL_9;
    }
    _InterlockedAdd(&dword_1C0076820, 1u);
    WdLogSingleEntry1(6LL, 2058LL);
    DxgkLogInternalTriageEvent(v13, 262145LL);
    v9 = -1073741801;
LABEL_14:
    for ( i = 0; i < *((_DWORD *)this + 1754); *((_QWORD *)this + v15 + 79) = 0LL )
    {
      v15 = i;
      v16 = (VIDMM_DMA_POOL *)*((_QWORD *)this + i + 79);
      if ( v16 )
      {
        v17 = (struct _VIDMM_DMA_BUFFER *)*((_QWORD *)this + i + 143);
        if ( v17 )
        {
          VIDMM_DMA_POOL::ReleaseBuffer(v16, v17, 1);
          *((_QWORD *)this + i + 143) = 0LL;
        }
      }
      v18 = (VIDMM_DMA_POOL *)*((_QWORD *)this + i + 79);
      if ( v18 )
        VIDMM_DMA_POOL::`scalar deleting destructor'(v18);
      ++i;
    }
    return v9;
  }
  else
  {
LABEL_9:
    *((_DWORD *)this + 10042) = 1;
    return 0LL;
  }
}
