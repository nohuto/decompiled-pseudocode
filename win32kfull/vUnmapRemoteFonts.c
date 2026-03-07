void __fastcall vUnmapRemoteFonts(__int64 a1)
{
  int v1; // eax
  int v3; // eax
  void *v4; // rcx
  void *v5; // rcx

  if ( a1 )
  {
    v1 = *(_DWORD *)(a1 + 100);
    if ( !v1 || (v3 = v1 - 1, (*(_DWORD *)(a1 + 100) = v3) == 0) )
    {
      if ( *(_QWORD *)(a1 + 32) )
      {
        v4 = *(void **)(a1 + 104);
        if ( v4 )
        {
          UmfdHostLifeTimeManager::MmUnmapViewOfSection(v4, *(_QWORD *)(a1 + 72));
          *(_QWORD *)(a1 + 104) = 0LL;
        }
        ObfDereferenceObject(*(PVOID *)(a1 + 32));
        v5 = *(void **)(a1 + 48);
        *(_QWORD *)(a1 + 32) = 0LL;
        if ( v5 )
        {
          ZwClose(v5);
          *(_QWORD *)(a1 + 48) = 0LL;
        }
      }
    }
  }
}
