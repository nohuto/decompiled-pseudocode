__int64 __fastcall CTouchProcessor::NodeMatchesMTGeneration(CTouchProcessor *this, const struct CPointerInfoNode *a2)
{
  BOOL v2; // eax
  __int64 v3; // rdx
  int v4; // r8d
  unsigned int v5; // r9d
  int v6; // eax

  v2 = CPointerInfoNode::IsForManipulationThread(a2);
  v5 = 0;
  if ( v2 == (v4 != 0) )
  {
    if ( !v4 )
      return 1;
    v6 = *(_DWORD *)(v3 + 4);
    if ( (v6 & 0x200) != 0 && (v6 & 0x400) == 0 )
      return 1;
  }
  return v5;
}
