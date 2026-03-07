__int64 __fastcall CmpIsKeyBodyEligibleForDump(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a2 + 32) == CmpMasterHive )
    return 3221225506LL;
  result = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( (int)result >= 0 )
    return (*(_DWORD *)(a2 + 184) & 0x40000) == 0 ? 0xC000000D : 0;
  return result;
}
