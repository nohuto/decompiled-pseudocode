__int16 __fastcall KeComplementAffinityEx2(__int64 a1, unsigned __int16 *a2)
{
  return KiComplementAffinityEx(a1, *(_WORD *)(a1 + 2), a2);
}
