bool __fastcall tagTHREADINFO::IsHandleILChecksEnabledForCurrentThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return *((_DWORD *)PtiCurrentShared(a1, a2, a3, a4) + 387) == 1;
}
