/*
 * XREFs of ?DisableIoMmuIsolation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00ADA78
 * Callers:
 *     ?VidMmDisableIoMmuIsolation@@YAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C00226C0 (-VidMmDisableIoMmuIsolation@@YAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0067150 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x1C0012C10 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     memset @ 0x1C0018D80 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0088380 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::DisableIoMmuIsolation(VIDMM_GLOBAL *this)
{
  bool v2; // zf
  __int64 v3; // rcx
  __int64 v4; // [rsp+20h] [rbp-78h] BYREF
  char v5; // [rsp+28h] [rbp-70h]
  _DWORD v6[26]; // [rsp+30h] [rbp-68h] BYREF

  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)this + 8LL) )
  {
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
      (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v4,
      (VIDMM_GLOBAL *)((char *)this + 3816));
    v2 = v5 == 0;
    *((_BYTE *)this + 40172) = 0;
    if ( !v2 )
    {
      v3 = v4;
      *(_QWORD *)(v4 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v3, 0LL);
      KeLeaveCriticalRegion();
    }
    *((_BYTE *)this + 40171) = 0;
  }
  else
  {
    memset(&v6[1], 0, 0x54uLL);
    v6[0] = 131;
    VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v6, 1);
  }
}
