bool __fastcall operator!=(_WORD *a1, _WORD *a2)
{
  return *a1 != *a2 || a1[1] != a2[1] || a1[2] != a2[2];
}
