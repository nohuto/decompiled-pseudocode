__int64 __fastcall ViDeadlockKeWaitForSingleObject_Exit(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 32) & 0xFFFFFF7F) == 0 )
    return ViDeadlockObjectAcquired(1LL, a1 + 24, *(_QWORD *)(a1 + 8), *(_QWORD *)a1);
  return result;
}
