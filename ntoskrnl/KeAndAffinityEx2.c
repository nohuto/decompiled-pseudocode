__int64 __fastcall KeAndAffinityEx2(unsigned __int16 *a1, unsigned __int16 *a2, __int64 a3)
{
  unsigned __int16 v3; // ax

  v3 = 0;
  if ( a3 )
    v3 = *(_WORD *)(a3 + 2);
  return KiAndAffinityEx(a1, a2, (_BYTE *)a3, v3);
}
