/*
 * XREFs of ?QueryPoolSize@CLeakTrackingAllocator@NSInstrumentation@@QEAA_KPEAXI@Z @ 0x1C019B744
 * Callers:
 *     Win32QueryPoolSize @ 0x1C017D7F0 (Win32QueryPoolSize.c)
 * Callees:
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?Lookup@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C019C360 (-Lookup@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 */

SIZE_T __fastcall NSInstrumentation::CLeakTrackingAllocator::QueryPoolSize(
        NSInstrumentation::CLeakTrackingAllocator *this,
        char *a2,
        int a3)
{
  __int64 v5; // r10
  NSInstrumentation::CPointerHashTable *v6; // rcx
  char *v7; // rcx
  void *QuotaCharged; // [rsp+30h] [rbp+10h] BYREF

  QuotaCharged = this;
  if ( *(_DWORD *)gpLeakTrackingAllocator )
  {
    if ( *(_DWORD *)gpLeakTrackingAllocator == 1 )
    {
      v7 = a2 - 16;
      goto LABEL_11;
    }
    if ( *(_DWORD *)gpLeakTrackingAllocator != 2 )
      return 0LL;
    if ( NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
           gpLeakTrackingAllocator,
           a3,
           (unsigned __int64 *)&QuotaCharged) )
    {
      v6 = *(NSInstrumentation::CPointerHashTable **)(v5 + 88);
      if ( v6 )
      {
        if ( ((unsigned __int16)a2 & 0xFFFu) >= 0x10uLL )
        {
          QuotaCharged = 0LL;
          if ( NSInstrumentation::CPointerHashTable::Lookup(v6, a2 - 16, &QuotaCharged) )
          {
            v7 = a2 - 16;
LABEL_11:
            LOBYTE(QuotaCharged) = 0;
            return ExQueryPoolBlockSize(v7, (PBOOLEAN)&QuotaCharged) - 16;
          }
        }
      }
    }
  }
  LOBYTE(QuotaCharged) = 0;
  return ExQueryPoolBlockSize(a2, (PBOOLEAN)&QuotaCharged);
}
