signed int __fastcall ViDeadlockKeWaitForMultipleObjects_Exit(__int64 *a1)
{
  signed int result; // eax
  __int64 v2; // r9
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx

  result = *((_DWORD *)a1 + 13) & 0xFFFFFF7F;
  if ( !*((_BYTE *)a1 + 25) )
  {
    if ( result )
      return result;
    v2 = *a1;
    v3 = a1[2];
    v4 = a1[5];
    v5 = *((unsigned int *)a1 + 12);
    return ViDeadlockObjectAcquired(v5, v4, v3, v2);
  }
  if ( *((int *)a1 + 13) >= 0 && result < *((_DWORD *)a1 + 12) )
  {
    v2 = *a1;
    v3 = a1[2];
    v4 = a1[5] + 8LL * result;
    v5 = 1LL;
    return ViDeadlockObjectAcquired(v5, v4, v3, v2);
  }
  return result;
}
