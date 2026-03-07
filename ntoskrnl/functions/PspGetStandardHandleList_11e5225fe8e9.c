__int64 __fastcall PspGetStandardHandleList(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 *v3; // r9
  unsigned int i; // ecx
  __int64 v5; // rax
  __int64 v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+60h] [rbp+18h]
  __int64 v10; // [rsp+68h] [rbp+20h]

  v8 = 0LL;
  v2 = 0LL;
  v3 = *(__int64 **)(a1 + 1408);
  if ( v3 )
    v2 = *v3;
  v10 = v2;
  if ( v2 )
  {
    v7 = 0LL;
    v8 = *(unsigned int *)(v2 + 16) + 24LL;
    if ( (v8 & 3) == 0 )
      goto LABEL_5;
LABEL_11:
    ExRaiseDatatypeMisalignment();
  }
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 1360) + 32LL);
  v7 = v9 + 32;
  if ( (((_BYTE)v9 + 32) & 3) != 0 )
    goto LABEL_11;
LABEL_5:
  for ( i = 0; i < 3; ++i )
  {
    if ( v10 )
      v5 = *(unsigned int *)(v8 + 4LL * i);
    else
      v5 = *(_QWORD *)(v7 + 8LL * i);
    *(_QWORD *)(a2 + 8LL * i) = v5;
  }
  return 0LL;
}
