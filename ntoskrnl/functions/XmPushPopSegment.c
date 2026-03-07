__int64 __fastcall XmPushPopSegment(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rdx
  unsigned int v3; // r8d

  v1 = *(unsigned __int8 *)(a1 + 81) + 28LL;
  *(_DWORD *)(a1 + 120) = 1;
  v2 = a1 + 2 * v1;
  if ( *(_DWORD *)(a1 + 124) == 36 )
    XmSetSourceValue(a1, v2);
  else
    XmSetDestinationValue(a1, v2);
  return v3;
}
