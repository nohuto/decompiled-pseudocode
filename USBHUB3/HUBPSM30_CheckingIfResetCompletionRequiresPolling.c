__int64 __fastcall HUBPSM30_CheckingIfResetCompletionRequiresPolling(__int64 a1)
{
  _BYTE *v1; // rdx
  __int64 result; // rax

  v1 = *(_BYTE **)(a1 + 960);
  if ( (v1[194] & 0x10) == 0 )
    return 3005LL;
  result = 3089LL;
  if ( (*(_DWORD *)(*(_QWORD *)v1 + 40LL) & 0x80000) == 0 )
    return 3005LL;
  return result;
}
