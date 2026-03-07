__int64 __fastcall CHolographicComposition::GetDesc(
        CHolographicComposition *this,
        struct HOLOGRAPHIC_COMPOSITION_DESC *a2)
{
  *(_OWORD *)a2 = *(_OWORD *)((char *)this + 24);
  *((_DWORD *)a2 + 4) = *((_DWORD *)this + 10);
  return 0LL;
}
