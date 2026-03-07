__int64 __fastcall ViThunkApplyWdmThunksCurrentSession(__int64 a1)
{
  int v2; // ebx
  __int64 Node; // rax
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rdx
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  v2 = 0;
  Node = VfTargetDriversGetNode(*(_QWORD *)(a1 + 48));
  v4 = Node;
  if ( Node && (*(_DWORD *)(Node + 24) & 1) == 0 && (unsigned int)ViIsDriverSuspectForVerifier(a1) )
  {
    if ( ViWdmThunksWithIatIndex )
    {
      memset(ViWdmThunksWithIatIndex, 0, 24LL * (unsigned int)ViNumberOfWdmThunks);
      ViThunkFindAllThunkedImports(a1, v5, &v8);
      if ( v8 )
      {
        ViThunkFindAllSharedExports(v4, v6, &v8);
        v2 = MmApplyVerifierToRunningImage(a1, ViWdmThunksWithIatIndex, v8);
        if ( v2 >= 0 )
          VfUtilPrintCheckinString((unsigned __int16 *)(a1 + 88), 0);
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v2;
}
