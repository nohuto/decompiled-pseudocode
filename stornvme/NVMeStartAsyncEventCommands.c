char __fastcall NVMeStartAsyncEventCommands(__int64 a1)
{
  __int64 v2; // rax
  unsigned __int16 v3; // cx
  int v4; // edx
  __int64 v5; // rdi
  __int64 v6; // rsi

  if ( !*(_BYTE *)(a1 + 20) )
  {
    v2 = *(_QWORD *)(a1 + 1840);
    v3 = 4;
    v4 = *(unsigned __int8 *)(v2 + 259);
    if ( (unsigned int)(v4 + 1) < 4 )
      v3 = v4 + 1;
    v5 = a1 + 1072;
    v6 = v3;
    do
    {
      NVMeIssueAsyncEventCommand(a1, v5);
      v5 += 128LL;
      --v6;
    }
    while ( v6 );
  }
  return 1;
}
