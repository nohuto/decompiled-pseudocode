__int64 __fastcall MiSplitDriverPage(__int64 a1, ULONG_PTR *a2)
{
  return MiMakeDriverPagesPrivate(a1, a2, (unsigned __int64)a2, 0);
}
