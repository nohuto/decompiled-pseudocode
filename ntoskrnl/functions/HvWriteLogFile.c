__int64 __fastcall HvWriteLogFile(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v6; // r10
  __int64 v7; // r12
  unsigned int v8; // ebp
  __int64 v9; // rsi
  _QWORD *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdi
  _DWORD *v13; // r14
  __int64 result; // rax
  unsigned int v15; // eax

  if ( (*(_DWORD *)(a1 + 160) & 0x8001) != 0 )
    return 0LL;
  v6 = *(unsigned int *)(a1 + 168);
  if ( !(_DWORD)v6 || !*(_QWORD *)(a1 + 8 * v6 + 1544) )
    return 3221225485LL;
  v7 = *(_QWORD *)(a1 + 1712);
  v8 = *(_DWORD *)(a1 + 1720);
  v9 = *(unsigned int *)(a1 + 1724);
  if ( (_DWORD)v6 == 1 || (_DWORD)v6 == 4 )
  {
    v10 = (_QWORD *)(a1 + 1808);
  }
  else if ( (_DWORD)v6 == 5 )
  {
    v10 = (_QWORD *)(a1 + 1816);
  }
  else
  {
    v10 = 0LL;
  }
  v11 = v9 + *(unsigned int *)(a1 + 180);
  if ( v11 > *v10 )
    CmpDoFileSetSizeEx(a1, (unsigned int)v6, v11, 1LL);
  v12 = 0LL;
  if ( !v8 )
  {
LABEL_12:
    result = CmpFileFlushAndPurge(a1, *(unsigned int *)(a1 + 168));
    if ( (int)result < 0 )
      return result;
    ++*(_DWORD *)(a1 + 172);
    LOBYTE(v15) = HvpLogTypeToLogArrayIndex(*(_DWORD *)(a1 + 168));
    *(_BYTE *)(v15 + a1 + 192) = 1;
    CmpTraceHiveFlushWroteLogFile(v15, (unsigned int)v9);
    *a4 = v9;
    return 0LL;
  }
  while ( 1 )
  {
    v13 = (_DWORD *)(v7 + 24 * v12);
    *v13 = *(_DWORD *)(a1 + 180);
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64, _DWORD))(a1 + 40))(
               a1,
               *(unsigned int *)(a1 + 168),
               v13,
               1LL,
               0);
    if ( (int)result < 0 )
      return result;
    v12 = (unsigned int)(v12 + 1);
    *(_DWORD *)(a1 + 180) += v13[4];
    if ( (unsigned int)v12 >= v8 )
      goto LABEL_12;
  }
}
