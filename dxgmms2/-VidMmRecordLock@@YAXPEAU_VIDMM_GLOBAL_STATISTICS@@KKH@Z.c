/*
 * XREFs of ?VidMmRecordLock@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@KKH@Z @ 0x1C00EEE00
 * Callers:
 *     ?BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAPEAX@Z @ 0x1C00B188C (-BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VidMmRecordLock(struct _VIDMM_GLOBAL_STATISTICS *a1, char a2, char a3, int a4)
{
  ++*((_DWORD *)a1 + 108);
  if ( (a2 & 1) != 0 )
    ++*((_DWORD *)a1 + 109);
  if ( (a2 & 0x10) != 0 )
    ++*((_DWORD *)a1 + 110);
  if ( (a2 & 2) != 0 )
    ++*((_DWORD *)a1 + 111);
  if ( a2 < 0 )
    ++*((_DWORD *)a1 + 112);
  if ( a3 < 0 )
    ++*((_DWORD *)a1 + 113);
  if ( a4 )
    ++*((_DWORD *)a1 + 114);
}
