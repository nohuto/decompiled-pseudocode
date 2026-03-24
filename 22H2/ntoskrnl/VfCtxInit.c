/*
 * XREFs of VfCtxInit @ 0x1409E417C
 * Callers:
 *     VfInitVerifierComponents @ 0x1409C6E80 (VfInitVerifierComponents.c)
 * Callees:
 *     KeAllocateXStateContext @ 0x14031A874 (KeAllocateXStateContext.c)
 *     KeFreeXStateContext @ 0x14031C170 (KeFreeXStateContext.c)
 *     memset @ 0x140413800 (memset.c)
 */

void __fastcall VfCtxInit(__int64 a1, __int64 a2)
{
  void **v2; // rbx
  __int64 v3; // rdi

  if ( (MmVerifierData & 0x800) != 0 )
  {
    if ( (KeFeatureBits & 0x800000) != 0 && MEMORY[0xFFFFF780000003D8] )
    {
      ViCtxXStateEnabledMask = MEMORY[0xFFFFF780000003D8];
      LODWORD(ViCtxXStateSize) = MEMORY[0xFFFFF780000003E8];
    }
    v2 = (void **)&unk_140D4CC30;
    v3 = 16LL;
    do
    {
      if ( ViCtxXStateEnabledMask && (int)KeAllocateXStateContext((__int64)(v2 - 4), a2, ViCtxXStateSize) >= 0 )
      {
        if ( (int)KeAllocateXStateContext((__int64)v2, a2, ViCtxXStateSize) >= 0 )
        {
          memset(*(v2 - 2), 0, (unsigned int)ViCtxXStateSize);
          memset(v2[2], 0, (unsigned int)ViCtxXStateSize);
          *((_DWORD *)v2 - 11) |= 1u;
        }
        else
        {
          KeFreeXStateContext((__int64)v2);
        }
      }
      _InterlockedIncrement(&ViCtxInitializedIsrStateBlocks);
      v2 += 10;
      --v3;
    }
    while ( v3 );
  }
}
