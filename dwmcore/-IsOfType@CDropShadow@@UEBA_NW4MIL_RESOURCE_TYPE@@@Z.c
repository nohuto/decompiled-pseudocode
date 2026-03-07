bool __fastcall CDropShadow::IsOfType(__int64 a1, int a2)
{
  return ((a2 - 39) & 0xFFFFFFE7) == 0 && a2 != 63;
}
