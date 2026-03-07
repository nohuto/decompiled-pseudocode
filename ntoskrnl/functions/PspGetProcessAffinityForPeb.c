__int64 __fastcall PspGetProcessAffinityForPeb(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_OWORD *)a2 = 0LL;
  if ( (*(_DWORD *)(a1 + 632) & 0x1000) == 0 )
    return KeQueryPrimaryGroupAffinityProcess(a1, a2);
  result = *(unsigned __int16 *)(a1 + 1040);
  *(_WORD *)(a2 + 8) = result;
  return result;
}
