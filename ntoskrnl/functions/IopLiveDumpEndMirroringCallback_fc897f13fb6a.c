__int64 __fastcall IopLiveDumpEndMirroringCallback(int a1)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx

  v1 = IopLiveDumpContext;
  v2 = 0;
  if ( !a1 )
  {
    IopLiveDumpTraceMirroringPhase0End();
    IopLiveDumpEnterCorralledState(v1);
    if ( (*(_DWORD *)(v1 + 80) & 0x8000) == 0 )
      return v2;
    return (unsigned int)IopLiveDumpValidateProtectedProcessExclusions(v1);
  }
  if ( a1 == 1 )
  {
    IopLiveDumpTraceMirroringPhase1End();
    return (unsigned int)IopLiveDumpCollectPages(v1);
  }
  return (unsigned int)-1073741595;
}
