int __fastcall VIDMM_GLOBAL::QueueSystemCommandAndWait(VIDMM_GLOBAL *this, struct _VIDMM_SYSTEM_COMMAND *a2, bool a3)
{
  __int64 v3; // r10
  __int64 v5; // rax
  unsigned int *v6; // r9
  unsigned int *v7; // r8

  v3 = *((unsigned int *)a2 + 1);
  v5 = *((_QWORD *)this + 5049);
  if ( (_DWORD)v3 == -1 )
  {
    v7 = *(unsigned int **)(v5 + 80);
    v6 = v7;
  }
  else
  {
    v6 = *(unsigned int **)(v5 + 80);
    v7 = &v6[44 * v3];
  }
  return VIDMM_GLOBAL::QueueSystemCommandAndWaitInternal(
           this,
           a2,
           (struct VIDMM_PAGING_QUEUE *)v7,
           *(struct _VIDSCH_SYNC_OBJECT **)&v6[44 * v7[36] + 38],
           a3);
}
