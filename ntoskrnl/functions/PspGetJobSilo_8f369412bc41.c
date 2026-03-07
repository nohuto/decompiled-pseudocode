__int64 __fastcall PspGetJobSilo(__int64 a1)
{
  while ( a1 && (*(_DWORD *)(a1 + 1536) & 0x40000000) == 0 )
    a1 = *(_QWORD *)(a1 + 1288);
  return a1;
}
