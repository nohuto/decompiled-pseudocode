_BYTE *__fastcall KiAcquirePrcbLocksForPreemptionAttempt(__int64 a1, int a2, __int64 *a3)
{
  int v6; // r9d
  unsigned __int8 v7; // bl
  __int64 *v8; // rsi
  unsigned int v9; // ecx
  __int64 v10; // rbp
  __int64 v11; // rdi
  _BYTE *result; // rax
  _BYTE *v13; // rax
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF
  int v15; // [rsp+58h] [rbp+10h] BYREF

  v6 = a2;
  v7 = **(_BYTE **)(a1 + 56);
  if ( a2 < v7 >> 7 )
    v6 = v7 >> 7;
  v14 = a1;
  *a3 = a1 ^ ((unsigned __int8)a1 ^ (unsigned __int8)v6) & 1;
  if ( v6 )
  {
    if ( v6 != 1 )
      goto LABEL_9;
    v13 = *(_BYTE **)(a1 + 34904);
    v9 = (unsigned __int8)*v13;
    v8 = (__int64 *)(v13 + 8);
    if ( !*v13 )
      goto LABEL_9;
  }
  else
  {
    v8 = &v14;
    v9 = 1;
  }
  v10 = v9;
  do
  {
    v11 = *v8;
    v15 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 48), 0LL) )
    {
      do
        KeYieldProcessorEx(&v15);
      while ( *(_QWORD *)(v11 + 48) );
    }
    ++v8;
    --v10;
  }
  while ( v10 );
LABEL_9:
  result = *(_BYTE **)(a1 + 56);
  if ( ((*result ^ v7) & 0x80u) != 0 )
    return (_BYTE *)KiAcquirePrcbLocksForPreemptionAttemptSlowPath(a1, (unsigned int)a2, a3);
  return result;
}
