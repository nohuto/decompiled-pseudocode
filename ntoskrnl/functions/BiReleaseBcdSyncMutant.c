__int64 __fastcall BiReleaseBcdSyncMutant(char a1)
{
  __int64 result; // rax

  if ( !a1 && BcdMutantHandle != (HANDLE)-1LL )
    return ZwReleaseMutant((__int64)BcdMutantHandle, 0LL);
  return result;
}
