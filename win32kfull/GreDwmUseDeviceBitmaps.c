__int64 __fastcall GreDwmUseDeviceBitmaps(Gre::Base *a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rcx

  v1 = 0;
  if ( IsDwmActive(a1) )
    return *(unsigned int *)(*(_QWORD *)(SGDGetSessionState(v2) + 32) + 8688LL);
  return v1;
}
