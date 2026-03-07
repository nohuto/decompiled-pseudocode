void __fastcall VIDMM_GLOBAL::VidMmSetAllocationFlipQueueReferencesPointer(
        VIDMM_GLOBAL *this,
        __int64 **a2,
        struct VIDMM_FLIP_QUEUE_REFERENCES *a3)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  struct _KTHREAD **v6; // rsi
  int *v7; // rcx

  v4 = **a2;
  v5 = *(_QWORD *)(v4 + 536);
  v6 = (struct _KTHREAD **)(v4 + 296);
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v4 + 296));
  v7 = *(int **)(v5 + 16);
  if ( v7 )
    VIDMM_FLIP_QUEUE_REFERENCES::ReleaseReference(v7);
  *(_QWORD *)(v5 + 16) = a3;
  if ( a3 )
    _InterlockedIncrement((volatile signed __int32 *)a3);
  DXGFASTMUTEX::Release(v6);
}
