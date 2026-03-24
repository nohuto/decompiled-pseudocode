/*
 * XREFs of ?InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C0096934
 * Callers:
 *     ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C009663C (-VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001FC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0015520 (-ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     ??_GVIDMM_DMA_POOL@@QEAAPEAXI@Z @ 0x1C001680C (--_GVIDMM_DMA_POOL@@QEAAPEAXI@Z.c)
 *     ?AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z @ 0x1C0080610 (-AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z.c)
 *     ?Init@VIDMM_DMA_POOL@@QEAAJXZ @ 0x1C008B728 (-Init@VIDMM_DMA_POOL@@QEAAJXZ.c)
 *     ??0VIDMM_DMA_POOL@@QEAA@PEAVVIDMM_GLOBAL@@KPEAVVIDMM_DEVICE@@PEAVDXGCONTEXT@@KKKKKH@Z @ 0x1C008C36C (--0VIDMM_DMA_POOL@@QEAA@PEAVVIDMM_GLOBAL@@KPEAVVIDMM_DEVICE@@PEAVDXGCONTEXT@@KKKKKH@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::InitDmaPools(VIDMM_GLOBAL *this)
{
  struct VIDMM_DEVICE *v1; // r14
  __int64 v2; // rbp
  char v4; // al
  unsigned int v5; // esi
  VIDMM_DMA_POOL *v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 i; // rdi
  VIDMM_DMA_POOL *v16; // rcx
  struct _VIDMM_DMA_BUFFER *v17; // rdx

  v1 = (struct VIDMM_DEVICE *)*((_QWORD *)this + 5049);
  v2 = 0LL;
  if ( *((_DWORD *)this + 1750) )
  {
    while ( 1 )
    {
      v4 = *((_BYTE *)this + v2 + 52);
      if ( v4 )
        v5 = 1 << (v4 - 1);
      else
        v5 = 0;
      v6 = (VIDMM_DMA_POOL *)operator new[](0x90uLL, 0x39326956u, (POOL_TYPE)512);
      if ( v6 )
        v6 = VIDMM_DMA_POOL::VIDMM_DMA_POOL(
               v6,
               this,
               v2,
               v1,
               0LL,
               *((_DWORD *)this + v2 + 29),
               0,
               0,
               v5,
               *((_DWORD *)this + v2 + 93),
               1);
      *((_QWORD *)this + v2 + 79) = v6;
      if ( !v6 )
        break;
      v8 = VIDMM_DMA_POOL::Init(v6);
      v10 = v8;
      if ( v8 < 0 )
      {
        _InterlockedAdd(&dword_1C0050704, 1u);
        v13 = WdLogNewEntry5_WdLowResource(v9);
        *(_QWORD *)(v13 + 24) = v10;
        WdLogEvent5_WdLowResource(v13);
        goto LABEL_14;
      }
      VIDMM_DMA_POOL::AcquireBuffer(
        *((VIDMM_DMA_POOL **)this + v2 + 79),
        (struct _VIDMM_DMA_BUFFER **)this + v2 + 143,
        0,
        1);
      v11 = *((_QWORD *)this + v2 + 143);
      v2 = (unsigned int)(v2 + 1);
      *(_DWORD *)(v11 + 32) = 1;
      if ( (unsigned int)v2 >= *((_DWORD *)this + 1750) )
        goto LABEL_9;
    }
    _InterlockedAdd(&dword_1C0050700, 1u);
    v14 = WdLogNewEntry5_WdLowResource(v7);
    *(_QWORD *)(v14 + 24) = 1929LL;
    WdLogEvent5_WdLowResource(v14);
    LODWORD(v10) = -1073741801;
LABEL_14:
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1750); i = (unsigned int)(i + 1) )
    {
      v16 = (VIDMM_DMA_POOL *)*((_QWORD *)this + i + 79);
      if ( v16 )
      {
        v17 = (struct _VIDMM_DMA_BUFFER *)*((_QWORD *)this + i + 143);
        if ( v17 )
        {
          VIDMM_DMA_POOL::ReleaseBuffer(v16, v17, 1);
          *((_QWORD *)this + i + 143) = 0LL;
          v16 = (VIDMM_DMA_POOL *)*((_QWORD *)this + i + 79);
        }
      }
      if ( v16 )
        VIDMM_DMA_POOL::`scalar deleting destructor'(v16);
      *((_QWORD *)this + i + 79) = 0LL;
    }
    return (unsigned int)v10;
  }
  else
  {
LABEL_9:
    *((_DWORD *)this + 10040) = 1;
    return 0LL;
  }
}
