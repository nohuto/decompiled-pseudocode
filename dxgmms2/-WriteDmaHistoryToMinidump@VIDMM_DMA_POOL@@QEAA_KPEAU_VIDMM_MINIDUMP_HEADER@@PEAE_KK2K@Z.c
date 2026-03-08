/*
 * XREFs of ?WriteDmaHistoryToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK2K@Z @ 0x1C00F0B74
 * Callers:
 *     ?LogInformationToMinidump@VIDMM_GLOBAL@@QEAA_KK_KKPEAE0@Z @ 0x1C00E4B54 (-LogInformationToMinidump@VIDMM_GLOBAL@@QEAA_KK_KKPEAE0@Z.c)
 * Callees:
 *     memset @ 0x1C001AC80 (memset.c)
 *     ?LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z @ 0x1C00B1F2C (-LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z.c)
 *     ?CheckIfDmaInformationPresent@VIDMM_DMA_POOL@@QEAAHPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_K_JKKKKKKK@Z @ 0x1C00EFB08 (-CheckIfDmaInformationPresent@VIDMM_DMA_POOL@@QEAAHPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_K_JKKKKKKK@Z.c)
 *     ?SearchDmaBufferInAllPool@VIDMM_DMA_POOL@@QEAAPEAU_VIDMM_DMA_BUFFER@@_J@Z @ 0x1C00F0480 (-SearchDmaBufferInAllPool@VIDMM_DMA_POOL@@QEAAPEAU_VIDMM_DMA_BUFFER@@_J@Z.c)
 *     ?WriteDmaBufferToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_DMA_BUFFER@@PEAE_KHKH2_JKKKKKKK@Z @ 0x1C00F0750 (-WriteDmaBufferToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_DMA_BUFFER@@PEAE_KHKH2_JKKKKKKK@Z.c)
 *     VidSchQueryDmaData @ 0x1C010A1FC (VidSchQueryDmaData.c)
 */

unsigned __int64 __fastcall VIDMM_DMA_POOL::WriteDmaHistoryToMinidump(
        VIDMM_DMA_POOL *this,
        struct _VIDMM_MINIDUMP_HEADER *a2,
        unsigned __int8 *a3,
        unsigned __int64 a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned int a7)
{
  unsigned __int64 v7; // r14
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r13
  int v12; // r15d
  int v13; // edi
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // rsi
  int v16; // ebx
  __int64 v17; // r9
  struct _LIST_ENTRY *v18; // rdx
  __int64 v19; // rax
  unsigned __int8 *v20; // rax
  int v22; // [rsp+28h] [rbp-D1h]
  unsigned int v23; // [rsp+30h] [rbp-C9h]
  int v24; // [rsp+38h] [rbp-C1h]
  int v25; // [rsp+88h] [rbp-71h]
  unsigned __int8 *v26; // [rsp+90h] [rbp-69h]
  __int64 v27[20]; // [rsp+98h] [rbp-61h] BYREF
  int v32; // [rsp+170h] [rbp+77h]

  v7 = a6;
  v26 = a3;
  v10 = a4;
  v11 = a4;
  memset(v27, 0, 0x58uLL);
  *((_DWORD *)a2 + 330) = 0;
  VIDMM_DMA_POOL::LockAllPoolForAddRemove(1);
  if ( (int)VidSchQueryDmaData(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 744LL), a5, a6, v27) >= 0
    && v27[1]
    && v27[0] )
  {
    if ( VIDMM_DMA_POOL::SearchDmaBufferInAllPool(this, (struct _LIST_ENTRY *)v27[0])
      && a7
      && a7 >= LODWORD(v27[4])
      && a7 < HIDWORD(v27[4]) )
    {
      v12 = 0;
      v13 = 1;
    }
    else
    {
      v12 = 0;
      v13 = 0;
    }
    v14 = a6;
    v15 = a6;
    if ( v10 >= 0x48 )
    {
      v16 = 0;
      while ( 1 )
      {
        if ( v16 && v13 )
        {
LABEL_36:
          v10 = a4;
          break;
        }
        if ( (int)VidSchQueryDmaData(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 744LL), a5, v7, v27) < 0 )
        {
          if ( v12 )
          {
            v16 = 1;
LABEL_22:
            if ( v13 )
            {
              if ( v15 )
                v7 = --v15;
              else
                v16 = 1;
              goto LABEL_35;
            }
            v12 = 0;
LABEL_34:
            v7 = ++v14;
            goto LABEL_35;
          }
          v20 = v26;
          v13 = 1;
        }
        else
        {
          v32 = HIDWORD(v27[5]) - LODWORD(v27[5]);
          v25 = HIDWORD(v27[4]) - LODWORD(v27[4]);
          if ( !(unsigned int)VIDMM_DMA_POOL::CheckIfDmaInformationPresent(
                                (VIDMM_DMA_POOL *)LODWORD(v27[7]),
                                a2,
                                a3,
                                v17,
                                v27[0],
                                v27[4],
                                HIDWORD(v27[4]) - LODWORD(v27[4]),
                                v27[7],
                                HIDWORD(v27[7]),
                                v27[6],
                                HIDWORD(v27[6]),
                                HIDWORD(v27[5]) - LODWORD(v27[5])) )
          {
            v18 = VIDMM_DMA_POOL::SearchDmaBufferInAllPool(this, (struct _LIST_ENTRY *)v27[0]);
            if ( v18 )
            {
              v19 = VIDMM_DMA_POOL::WriteDmaBufferToMinidump(
                      this,
                      (struct _VIDMM_DMA_BUFFER *)v18,
                      v26,
                      v11,
                      v22,
                      v23,
                      v24,
                      v7,
                      v27[0],
                      v27[4],
                      v25,
                      v27[7],
                      HIDWORD(v27[7]),
                      v27[6],
                      HIDWORD(v27[6]),
                      v32);
              v26 += v19;
              v11 -= v19;
              ++*((_DWORD *)a2 + 330);
            }
          }
          v20 = v26;
          if ( v12 )
            goto LABEL_22;
        }
        if ( v16 || !v15 )
        {
          v16 = 1;
          goto LABEL_34;
        }
        --v15;
        v26 = v20;
        v7 = v15;
        v12 = 1;
LABEL_35:
        if ( v11 < 0x48 )
          goto LABEL_36;
      }
    }
    ExReleaseResourceLite(VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock);
    return v10 - v11;
  }
  else
  {
    ExReleaseResourceLite(VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock);
    return 0LL;
  }
}
