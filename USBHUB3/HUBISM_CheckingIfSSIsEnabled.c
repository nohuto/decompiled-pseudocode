__int64 __fastcall HUBISM_CheckingIfSSIsEnabled(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 - 56);
  if ( (*(_DWORD *)(v1 + 40) & 0x80u) != 0 )
    return 6004LL;
  result = 6005LL;
  if ( (*(_DWORD *)(v1 + 44) & 1) != 0 )
    return 6004LL;
  return result;
}
