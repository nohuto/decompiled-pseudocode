__int64 __fastcall CGlobalSurfaceManager::GetSurfaceUpdates(CGlobalSurfaceManager *this, unsigned int *a2, int *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  int FrameSurfaceUpdates; // eax
  __int64 v7; // rcx
  unsigned __int64 CurrentFrameId; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  CurrentFrameId = GetCurrentFrameId();
  FrameSurfaceUpdates = NtDCompositionGetFrameSurfaceUpdates(&CurrentFrameId, v4, v5);
  if ( FrameSurfaceUpdates < 0 )
  {
    v3 = FrameSurfaceUpdates | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_180339270, 3u, FrameSurfaceUpdates | 0x10000000, 0x7Fu, 0LL);
  }
  return v3;
}
