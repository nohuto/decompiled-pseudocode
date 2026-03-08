/*
 * XREFs of ?LockAllocInCpuVisibleSegment@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C00E4870
 * Callers:
 *     ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C008CD80 (-LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z.c)
 * Callees:
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E770C (-Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MD.c)
 *     ?VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z @ 0x1C00F1854 (-VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z.c)
 *     ?VidMmiBuildMdlFromMdl@@YAPEAU_MDL@@PEAX_KPEAU1@1@Z @ 0x1C00F1918 (-VidMmiBuildMdlFromMdl@@YAPEAU_MDL@@PEAX_KPEAU1@1@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::LockAllocInCpuVisibleSegment(VIDMM_GLOBAL *this, __int64 **a2)
{
  __int64 *v2; // rbx
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r9
  struct _MDL *v8; // rax
  struct _MDL *v9; // rsi
  int v11; // ebp

  v2 = *a2;
  v4 = **a2;
  v5 = *((_QWORD *)this + 3);
  v6 = *(_QWORD *)(v4 + 120);
  v7 = *(_QWORD *)(v4 + 128);
  if ( (*(_DWORD *)(v5 + 436) & 8) != 0 )
    v8 = VidMmiBuildMdlFromMdl((PVOID)v2[2], *(_QWORD *)(v4 + 16), *(struct _MDL **)(v6 + 32), v7 / 4096);
  else
    v8 = VidMmiBuildMdlForContiguousMmIo(
           (PVOID)v2[2],
           *(_QWORD *)(v4 + 8),
           (union _LARGE_INTEGER)(v7 + *(_QWORD *)(v6 + 32)));
  v9 = v8;
  if ( !v8 )
    return 3221225495LL;
  v11 = VIDMM_GLOBAL::Rotate(this, *(_QWORD *)(v2[1] + 24), v2[3], 1LL, v8, *(_QWORD *)(v4 + 16), 0LL, 0LL, 0, v4);
  if ( v11 < 0 )
  {
    ExFreePoolWithTag(v9, 0);
  }
  else
  {
    *((_BYTE *)v2 + 32) |= 1u;
    *(_BYTE *)(v4 + 83) = 1;
  }
  return (unsigned int)v11;
}
