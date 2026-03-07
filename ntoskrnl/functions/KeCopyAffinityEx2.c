unsigned __int16 __fastcall KeCopyAffinityEx2(__int64 a1, unsigned __int16 *a2)
{
  return KiCopyAffinityEx(a1, *(_WORD *)(a1 + 2), a2);
}
