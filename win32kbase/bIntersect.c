_BOOL8 __fastcall bIntersect(_DWORD *a1, _DWORD *a2)
{
  return *a1 < a2[2] && a1[1] < a2[3] && a1[2] > *a2 && a1[3] > a2[1];
}
