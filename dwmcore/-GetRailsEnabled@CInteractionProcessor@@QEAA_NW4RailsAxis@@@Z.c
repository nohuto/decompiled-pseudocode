char __fastcall CInteractionProcessor::GetRailsEnabled(__int64 a1, int a2)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
    return (*(_BYTE *)(a1 + 148) & 0x40) != 0;
  if ( a2 != 1 )
    ModuleFailFastForHRESULT(2147942487LL, retaddr);
  return *(_BYTE *)(a1 + 148) >> 7;
}
