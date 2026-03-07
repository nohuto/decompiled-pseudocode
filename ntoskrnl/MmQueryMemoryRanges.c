__int64 __fastcall MmQueryMemoryRanges(__int64 a1)
{
  unsigned __int64 v1; // rbx
  char v2; // r13
  PVOID v3; // rsi
  bool v4; // zf
  unsigned int v6; // edx
  void **v7; // rcx
  void ***v8; // r12
  int v9; // r15d
  void ***v11; // rax
  unsigned __int64 SetBits; // rax
  unsigned __int64 v13; // r14
  unsigned __int64 NextForwardRunClear; // rax
  __int64 v15; // rsi
  unsigned __int64 v16; // rsi
  __int128 v17; // [rsp+30h] [rbp-20h] BYREF
  PVOID P; // [rsp+40h] [rbp-10h]
  unsigned __int64 v19; // [rsp+90h] [rbp+40h] BYREF
  int v20; // [rsp+98h] [rbp+48h]
  __int64 v21; // [rsp+A0h] [rbp+50h] BYREF

  v1 = 0LL;
  v2 = 0;
  v21 = 0LL;
  v3 = 0LL;
  v4 = *(_DWORD *)a1 == 1;
  LOBYTE(v19) = 0;
  v17 = 0LL;
  P = 0LL;
  if ( !v4 )
    return 3221225485LL;
  if ( *(_QWORD *)(a1 + 40) )
    return 3221225485LL;
  v6 = *(_DWORD *)(a1 + 4);
  if ( v6 >= 0x40
    || KeGetCurrentIrql()
    || (*(_DWORD *)(a1 + 32) & 0x7FFFFFFFu) >= (unsigned __int16)KeNumberNodes
    || (v6 & 1) == 0
    || *(_QWORD *)(a1 + 24) != 0x40000000LL )
  {
    return 3221225485LL;
  }
  v7 = *(void ***)(a1 + 8);
  if ( v7 != (void **)-2LL )
  {
    v11 = MiPartitionObjectToPartition(v7, 0, &v19);
    v8 = v11;
    if ( v11 )
    {
      v2 = v19;
      v20 = *(unsigned __int16 *)v11;
      goto LABEL_10;
    }
    return 3221225485LL;
  }
  v8 = 0LL;
  v20 = 1025;
LABEL_10:
  v9 = 0;
  if ( qword_140C67A70 )
  {
    while ( 1 )
    {
      SetBits = RtlFindSetBitsEx((unsigned __int64 *)&qword_140C67A60, 1uLL, (unsigned __int64)v3);
      v13 = SetBits;
      if ( SetBits < (unsigned __int64)v3 || SetBits == -1LL )
      {
LABEL_25:
        v3 = P;
        goto LABEL_11;
      }
      NextForwardRunClear = RtlFindNextForwardRunClearEx(
                              (unsigned __int64 *)&qword_140C67A60,
                              SetBits,
                              (unsigned __int64 *)&v21);
      v15 = v21;
      v19 = NextForwardRunClear;
      if ( !NextForwardRunClear )
        v15 = qword_140C67A60;
      v16 = v15 - v13;
      v1 ^= ((unsigned int)v1 ^ (unsigned int)v13) & 0x3FFFFF;
      v9 = MiAddRuns(a1, (unsigned int)&v17, v1, v16, v20);
      if ( v9 < 0 )
        break;
      v3 = (PVOID)(v19 + v13 + v16);
      if ( (unsigned __int64)v3 >= qword_140C67A60 )
        goto LABEL_25;
    }
    v3 = P;
    if ( P )
    {
      ExFreePoolWithTag(P, 0);
      v3 = 0LL;
    }
  }
LABEL_11:
  if ( v2 )
    PsDereferencePartition((__int64)v8[25]);
  if ( v9 >= 0 )
  {
    *(_QWORD *)(a1 + 40) = v17;
    *(_QWORD *)(a1 + 48) = v3;
  }
  return (unsigned int)v9;
}
