struct VIDMM_FLIP_QUEUE_REFERENCES *__fastcall VIDMM_GLOBAL::VidMmGetAllocationFlipQueueReferencesPointer(
        VIDMM_GLOBAL *this,
        struct _VIDMM_MULTI_ALLOC *a2)
{
  struct VIDMM_FLIP_QUEUE_REFERENCES *result; // rax

  result = *(struct VIDMM_FLIP_QUEUE_REFERENCES **)(*(_QWORD *)(**(_QWORD **)a2 + 536LL) + 16LL);
  if ( result )
    _InterlockedIncrement((volatile signed __int32 *)result);
  return result;
}
