/*
 * XREFs of ExpCaptureWnfStateName @ 0x14071A22C
 * Callers:
 *     ExpWnfCompleteThreadSubscriptions @ 0x140719114 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpNtUpdateWnfStateData @ 0x14071943C (ExpNtUpdateWnfStateData.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140719A64 (ExpWnfSubscribeWnfStateChange.c)
 *     NtQueryWnfStateData @ 0x140719DF0 (NtQueryWnfStateData.c)
 *     NtUnsubscribeWnfStateChange @ 0x14071D2B0 (NtUnsubscribeWnfStateChange.c)
 *     NtDeleteWnfStateName @ 0x140778FE0 (NtDeleteWnfStateName.c)
 *     NtQueryWnfStateNameInformation @ 0x14077DEB0 (NtQueryWnfStateNameInformation.c)
 *     ExpNtDeleteWnfStateData @ 0x14085860C (ExpNtDeleteWnfStateData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpCaptureWnfStateName(__int64 *a1, unsigned __int64 *a2, char a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // ecx
  int v10; // ecx

  if ( a3 )
  {
    v3 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v3 = (__int64)a1;
    v4 = *(_QWORD *)v3;
  }
  else
  {
    v4 = *a1;
  }
  v5 = v4 ^ 0x41C64E6DA3BC0074LL;
  *a2 = v5;
  if ( (v5 & 0xF) != 1 )
    return 3221225485LL;
  v6 = (v5 >> 6) & 0xF;
  v7 = (v5 >> 10) & 1;
  v8 = (v5 >> 4) & 3;
  if ( v8 )
  {
    v10 = v8 - 1;
    if ( v10 )
    {
      if ( (unsigned int)(v10 - 1) >= 2 )
        return 3221225485LL;
    }
  }
  if ( (unsigned int)v6 >= 4 && (unsigned int)(v6 - 4) >= 2 || (_DWORD)v7 && ((v6 & 0xFFFFFFF9) != 0 || (_DWORD)v6 == 6) )
    return 3221225485LL;
  else
    return 0LL;
}
