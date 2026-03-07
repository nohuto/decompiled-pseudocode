__int64 __fastcall IopLiveDumpCapture(__int64 a1)
{
  int v1; // eax
  bool v4; // cf
  int v5; // eax
  _QWORD v6[3]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v7; // [rsp+38h] [rbp-20h]

  v1 = *(_DWORD *)(a1 + 40);
  v7 = 0LL;
  if ( (v1 & 0x20) != 0 )
  {
    IopLiveDumpEnterCorralledState();
    return IopLiveDumpCollectPages(a1);
  }
  else
  {
    v6[0] = IopLiveDumpStartMirroringCallback;
    v4 = (v1 & 4) != 0;
    v5 = *(_DWORD *)(a1 + 80);
    v6[1] = IopLiveDumpEndMirroringCallback;
    v6[2] = IopLiveDumpMirrorPhysicalMemoryCallback;
    DWORD2(v7) = v4 ? 657 : 593;
    if ( (v5 & 0x20) != 0 )
      DWORD2(v7) = (v4 ? 657 : 593) | 0x100;
    return MmDuplicateMemory(v6);
  }
}
