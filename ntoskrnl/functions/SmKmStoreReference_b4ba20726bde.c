unsigned __int64 __fastcall SmKmStoreReference(__int64 a1, unsigned int a2)
{
  struct _EX_RUNDOWN_REF *v3; // rax
  struct _EX_RUNDOWN_REF *v4; // rbx

  v3 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a1, a2 & 0x3FF);
  v4 = v3;
  if ( !v3 || !ExAcquireRundownProtection_0(v3 + 1) )
    return 0LL;
  if ( (v4[4].Count & 0x3F) != a2 >> 10 )
  {
    ExReleaseRundownProtection_0(v4 + 1);
    return 0LL;
  }
  return v4->Count;
}
