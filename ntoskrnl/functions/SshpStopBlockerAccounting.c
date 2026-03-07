unsigned __int64 __fastcall SshpStopBlockerAccounting(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 v5; // r10
  __int64 v6; // r9
  unsigned __int64 v8; // rcx
  unsigned int v9; // r8d
  __int64 *v10; // r11
  __int64 v11; // rdx

  result = *(_QWORD *)(a1 + 24);
  v5 = a2;
  v6 = a1 + ((unsigned __int64)((*(_DWORD *)(a1 + 8) & 1) == 0) << 7);
  if ( a2 >= result )
  {
    v8 = a2 - result;
    v9 = 0;
    *(_QWORD *)(v6 + 32) += a2 - result;
    v10 = PopFxAccountingBucketLimits;
    while ( 1 )
    {
      v11 = v9 + 1;
      if ( v8 >= *v10 && v8 < PopFxAccountingBucketLimits[v11] )
        break;
      ++v10;
      ++v9;
      if ( (unsigned int)v11 >= 5 )
        goto LABEL_7;
    }
    result = v9;
    if ( a3 )
    {
      ++*(_DWORD *)(v6 + 4LL * v9 + 140);
      *(_QWORD *)(v6 + 8LL * v9 + 80) += v8;
    }
    else
    {
      ++*(_DWORD *)(v6 + 4LL * v9 + 120);
      *(_QWORD *)(v6 + 8LL * v9 + 40) += v8;
    }
  }
LABEL_7:
  if ( a3 == 1 )
    v5 = 0LL;
  *(_QWORD *)(a1 + 24) = v5;
  return result;
}
