int __fastcall VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(VIDMM_GLOBAL *this, struct _VIDMM_SYSTEM_COMMAND *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  unsigned int *v4; // r8
  unsigned int *v5; // r9

  v2 = *((unsigned int *)a2 + 1);
  v3 = *((_QWORD *)this + 5049);
  if ( (_DWORD)v2 == -1 )
  {
    v4 = *(unsigned int **)(v3 + 88);
    v5 = v4;
  }
  else
  {
    v5 = *(unsigned int **)(v3 + 88);
    v4 = &v5[44 * v2];
  }
  return VIDMM_GLOBAL::QueueSystemCommandAndWaitInternal(
           this,
           a2,
           (struct VIDMM_PAGING_QUEUE *)v4,
           *(struct _VIDSCH_SYNC_OBJECT **)&v5[44 * v4[36] + 38],
           1);
}
