void __fastcall VIDMM_GLOBAL::ForceDecommitOffer(VIDMM_GLOBAL *this, struct VIDMM_ALLOC *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  struct VIDMM_PAGING_QUEUE *v6; // rdx
  _QWORD v7[12]; // [rsp+30h] [rbp-68h] BYREF

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  VIDMM_GLOBAL::ForceDiscardOffer(this, a2);
  v4 = **(_QWORD **)a2;
  memset(v7, 0, 0x58uLL);
  v5 = *(_DWORD *)(v4 + 68) & 0x3F;
  v7[1] = *((_QWORD *)a2 + 1);
  v6 = (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(v7[1] + 88LL) + 176 * v5);
  LODWORD(v7[0]) = 215;
  v7[4] = v4;
  VIDMM_GLOBAL::QueueDeferredCommand(this, v6, (struct _VIDMM_DEFERRED_COMMAND *)v7, 1, 0LL);
}
