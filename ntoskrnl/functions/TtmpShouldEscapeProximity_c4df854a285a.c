char __fastcall TtmpShouldEscapeProximity(__int64 a1)
{
  char v1; // di
  __int64 v2; // rdx
  __int64 v4; // rsi
  __int64 v5; // rax

  ++*(_DWORD *)(a1 + 264);
  v1 = 0;
  v2 = -1LL;
  v4 = MEMORY[0xFFFFF78000000008];
  v5 = *(_QWORD *)(a1 + 256);
  if ( v5 != -1 )
  {
    v2 = MEMORY[0xFFFFF78000000008] - v5;
    if ( MEMORY[0xFFFFF78000000008] - v5 < (unsigned __int64)(unsigned int)(10000 * TtmpProximityEscapeMsec) )
    {
      ++*(_DWORD *)(a1 + 272);
      v1 = 1;
    }
  }
  TtmiLogProximityPowerPress(v1, v2, *(_DWORD *)(a1 + 264), *(_DWORD *)(a1 + 268), *(_DWORD *)(a1 + 272));
  *(_QWORD *)(a1 + 256) = v4;
  return v1;
}
