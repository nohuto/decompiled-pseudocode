__int64 __fastcall EtwpUpdateProcessorTraceEvents(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v4; // rax
  __int64 i; // r8
  signed __int32 v7[6]; // [rsp+0h] [rbp-18h] BYREF

  if ( a3 - 1 > 3 )
    return 3221225485LL;
  v4 = *(_QWORD **)(a1 + 1032);
  if ( !v4 || !*v4 )
    return 3221225485LL;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v7[0] = i;
    if ( (unsigned int)i >= a3 )
      break;
    *(_WORD *)(*(_QWORD *)(a1 + 1032) + 2 * i + 28) = *(_WORD *)(a2 + 4 * i);
  }
  _InterlockedOr(v7, 0);
  *(_DWORD *)(*(_QWORD *)(a1 + 1032) + 24LL) = a3;
  return 0LL;
}
