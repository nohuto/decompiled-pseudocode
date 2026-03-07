void __fastcall CInteraction::ResetDefaultStateForAllInteractions(__int64 a1, char a2)
{
  int v2; // ebx
  __int64 v3; // rdi

  v2 = 0;
  if ( dword_1803E30E8 > 0 )
  {
    v3 = 0LL;
    do
    {
      CInteraction::ResetDefaultInteractionForCurrentMC(
        *(CInteraction **)((char *)CInteraction::s_DefaultStateLockedInteractions + v3),
        a2);
      ++v2;
      v3 += 8LL;
    }
    while ( v2 < dword_1803E30E8 );
  }
  CArray<CInteraction *,CArrayEqualHelper<CInteraction *>>::RemoveAll((__int64)&CInteraction::s_DefaultStateLockedInteractions);
}
