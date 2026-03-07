void __fastcall VfCtxInit(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rbx
  __int64 v3; // rdi

  if ( (KeFeatureBits & 0x800000) != 0 && MEMORY[0xFFFFF780000003D8] )
  {
    ViCtxXStateEnabledMask = MEMORY[0xFFFFF780000003D8];
    ViCtxXStateSize = MEMORY[0xFFFFF780000003E8];
  }
  v2 = &unk_140D73180;
  v3 = 16LL;
  do
  {
    if ( ViCtxXStateEnabledMask && (int)KeAllocateXStateContext((__int64)(v2 - 8), a2, ViCtxXStateSize) >= 0 )
    {
      if ( (int)KeAllocateXStateContext((__int64)v2, a2, ViCtxXStateSize) >= 0 )
        *(v2 - 11) |= 1u;
      else
        KeFreeXStateContext((__int64)v2);
    }
    _InterlockedIncrement(&ViCtxInitializedIsrStateBlocks);
    v2 += 20;
    --v3;
  }
  while ( v3 );
}
