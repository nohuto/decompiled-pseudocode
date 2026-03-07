bool __fastcall PsIsCurrentThreadInServerSilo(__int64 a1, __int64 a2)
{
  return PsGetCurrentServerSilo(a1, a2) != 0;
}
