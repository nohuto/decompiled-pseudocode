__int64 __fastcall KeOrAffinityEx2(char *a1, _WORD *a2, __int64 a3)
{
  unsigned __int16 v3; // ax

  v3 = 0;
  if ( a3 )
    v3 = *(_WORD *)(a3 + 2);
  return KiOrAffinityEx(a1, a2, (_BYTE *)a3, v3);
}
