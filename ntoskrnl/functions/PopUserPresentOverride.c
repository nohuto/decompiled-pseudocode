__int64 __fastcall PopUserPresentOverride(char a1, __int64 a2)
{
  unsigned int v3; // ebx
  int v4; // eax

  PopAcquireAdaptiveLock(1, a2);
  v3 = 0;
  if ( a1 )
  {
    v4 = PopUserPresentOverrideCount + 1;
  }
  else
  {
    if ( !PopUserPresentOverrideCount )
    {
      v3 = -1073741811;
      goto LABEL_11;
    }
    v4 = PopUserPresentOverrideCount - 1;
  }
  PopUserPresentOverrideCount = v4;
  if ( v4 == 1 && a1 || !v4 && !a1 )
    PopEvaluateGlobalUserStatus();
LABEL_11:
  PopReleaseAdaptiveLock();
  return v3;
}
