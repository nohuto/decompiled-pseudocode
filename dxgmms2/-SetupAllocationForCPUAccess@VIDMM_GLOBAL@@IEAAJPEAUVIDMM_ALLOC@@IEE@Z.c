/*
 * XREFs of ?SetupAllocationForCPUAccess@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@IEE@Z @ 0x1C00E7B54
 * Callers:
 *     ?BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAPEAX@Z @ 0x1C00B188C (-BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAPEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001BE4A (McTemplateK0q_EtwWriteTransfer.c)
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E770C (-Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MD.c)
 *     ?VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z @ 0x1C00F1854 (-VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z.c)
 *     ?VidMmiBuildMdlFromMdl@@YAPEAU_MDL@@PEAX_KPEAU1@1@Z @ 0x1C00F1918 (-VidMmiBuildMdlFromMdl@@YAPEAU_MDL@@PEAX_KPEAU1@1@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::SetupAllocationForCPUAccess(VIDMM_GLOBAL *this, __int64 **a2)
{
  __int64 *v2; // r14
  VIDMM_GLOBAL *v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rbx
  int v7; // edx
  union _LARGE_INTEGER v8; // rbx
  void *v9; // rcx
  struct _MDL *v10; // rax
  struct _MDL *v11; // rbx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rcx

  v2 = *a2;
  v3 = this;
  LODWORD(v4) = 0;
  v5 = **a2;
  v6 = *(_QWORD *)(v5 + 120);
  if ( (*(_DWORD *)(v6 + 80) & 4) != 0
    && (v7 = **(_DWORD **)(v5 + 536), (v7 & 0x38) == 0)
    && (LOBYTE(this) = (*(_DWORD *)(v5 + 72) & 0x10000) == 0, ((unsigned __int8)this & ((v7 & 2) == 0)) != 0) )
  {
    v8.QuadPart = *(_QWORD *)(v5 + 128) + *(_QWORD *)(v6 + 32);
    if ( (v2[4] & 1) == 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(this);
      if ( (*((_DWORD *)v3 + 1764) & 0x1000) != 0 )
      {
        LODWORD(v4) = -1073741823;
      }
      else
      {
        v9 = (void *)v2[2];
        if ( (*(_DWORD *)(*((_QWORD *)v3 + 3) + 436LL) & 8) != 0 )
          v10 = VidMmiBuildMdlFromMdl(
                  v9,
                  *(_QWORD *)(v5 + 16),
                  *(struct _MDL **)(*(_QWORD *)(v5 + 120) + 32LL),
                  (v8.QuadPart - *(_QWORD *)(*(_QWORD *)(v5 + 120) + 32LL)) / 4096);
        else
          v10 = VidMmiBuildMdlForContiguousMmIo(v9, *(_QWORD *)(v5 + 16), v8);
        v11 = v10;
        if ( v10 )
        {
          v12 = VIDMM_GLOBAL::Rotate(
                  (__int64)v3,
                  *(_QWORD *)(v2[1] + 24),
                  v2[3],
                  1u,
                  (__int64)v10,
                  *(_QWORD *)(v5 + 16),
                  0LL,
                  0LL,
                  0,
                  v5);
          v4 = v12;
          if ( v12 < 0 )
          {
            ExFreePoolWithTag(v11, 0);
            if ( bTracingEnabled )
            {
              if ( (byte_1C00769C1 & 1) != 0 )
                McTemplateK0q_EtwWriteTransfer(v13, &EventPerformanceWarning, v14, 7);
            }
            _InterlockedIncrement(&dword_1C0076884);
            WdLogSingleEntry1(6LL, v4);
            DxgkLogInternalTriageEvent(v15, 262145LL);
          }
          else
          {
            *((_BYTE *)v2 + 32) |= 1u;
            *(_BYTE *)(v5 + 83) = 1;
          }
        }
        else
        {
          _InterlockedIncrement(&dword_1C0076864);
          WdLogSingleEntry1(6LL, 20149LL);
          DxgkLogInternalTriageEvent(v16, 262145LL);
          LODWORD(v4) = -1073741801;
        }
      }
    }
    return (unsigned int)v4;
  }
  else
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(this);
    return 3221225473LL;
  }
}
