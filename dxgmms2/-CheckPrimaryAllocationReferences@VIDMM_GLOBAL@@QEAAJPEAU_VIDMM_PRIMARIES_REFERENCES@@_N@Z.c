/*
 * XREFs of ?CheckPrimaryAllocationReferences@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_PRIMARIES_REFERENCES@@_N@Z @ 0x1C001BC1A
 * Callers:
 *     ?VidSchiPacketBlockedOnWaitCondition@@YA_NPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C001D260 (-VidSchiPacketBlockedOnWaitCondition@@YA_NPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     ?HasOutstandingPresentReferences@_VIDMM_GLOBAL_ALLOC_NONPAGED@@QEAA_NXZ @ 0x1C001BCB2 (-HasOutstandingPresentReferences@_VIDMM_GLOBAL_ALLOC_NONPAGED@@QEAA_NXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CheckPrimaryAllocationReferences(
        VIDMM_GLOBAL *this,
        struct _VIDMM_PRIMARIES_REFERENCES *a2,
        char a3)
{
  char v3; // r10
  struct _VIDMM_PRIMARIES_REFERENCES *v4; // r9
  __int64 v6; // r8
  _VIDMM_GLOBAL_ALLOC_NONPAGED *v7; // rcx
  int v8; // eax

  v3 = a3;
  v4 = a2;
  if ( *(_DWORD *)a2 > 0x10u )
    return 2147483653LL;
  v6 = 0LL;
  if ( !*(_DWORD *)a2 )
    return 0LL;
  while ( 1 )
  {
    if ( (v7 = *(_VIDMM_GLOBAL_ALLOC_NONPAGED **)(*((_QWORD *)v4 + v6 + 1) + 96LL), !v3)
      || (v8 = *(_DWORD *)v7, (*(_DWORD *)v7 & 0x20000000) != 0) && v8 < 0
      || (v8 & 0x80000) != 0
      || (v8 & 0x100) != 0 )
    {
      if ( _VIDMM_GLOBAL_ALLOC_NONPAGED::HasOutstandingPresentReferences(v7) )
        break;
    }
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= *(_DWORD *)v4 )
      return 0LL;
  }
  return 3223191810LL;
}
