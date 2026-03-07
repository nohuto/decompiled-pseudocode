void HvlpMarkHvlPagesForHibernation()
{
  ULONG_PTR v0; // r9
  __int64 (__fastcall *v1)(_DWORD *, __int64); // r8
  unsigned int v2; // edi
  ULONG ActiveProcessorCount; // esi
  __int64 Prcb; // rax

  if ( (HvlpFlags & 2) != 0 )
  {
    v0 = 0LL;
    v1 = HvlGetReferenceTimeUsingTscPage;
  }
  else
  {
    PoSetHiberRange(0LL, 0x10000u, HvlpReferenceTscPage, 0x1000uLL, 0x646C7648u);
    v1 = (__int64 (__fastcall *)(_DWORD *, __int64))HvlpHypercallCodeVa;
    v0 = 4096LL;
  }
  PoSetHiberRange(0LL, 0x10000u, v1, v0, 0x636C7648u);
  PoSetHiberRange(0LL, 0x10000u, &HvlpFlags, 0LL, 0x646C7648u);
  v2 = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( ActiveProcessorCount )
  {
    do
    {
      Prcb = KeGetPrcb(v2);
      PoSetHiberRange(0LL, 0x10000u, *(PVOID *)(Prcb + 34560), 0x6000uLL, 0x646C7648u);
      ++v2;
    }
    while ( v2 < ActiveProcessorCount );
  }
}
