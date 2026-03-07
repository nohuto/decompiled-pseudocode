__int64 __fastcall VfThunkApplyThunksCurrentSession(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v3; // ebx
  __int64 Node; // rax
  int v5; // edx
  __int64 v6; // rdi
  __int64 v7; // r14
  unsigned int v8; // esi
  unsigned int IsDriverSuspectForVerifier; // eax
  unsigned int v11; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v3 = 0;
  v11 = 0;
  Node = VfTargetDriversGetNode(v1);
  v6 = Node;
  if ( Node )
  {
    if ( (*(_DWORD *)(Node + 24) & 1) == 0 )
    {
      LOBYTE(v5) = 1;
      v7 = RtlImageDirectoryEntryToData(v1, v5, 12, (int)&v11);
      if ( v7 )
      {
        v8 = v11;
        if ( v11 )
        {
          IsDriverSuspectForVerifier = ViIsDriverSuspectForVerifier(a1);
          if ( (unsigned int)ViThunkReplaceAllThunkedImports(v7, v8 >> 3, IsDriverSuspectForVerifier) )
          {
            ViThunkReplaceAllSharedExports(v6);
            return 1;
          }
        }
      }
    }
  }
  return v3;
}
