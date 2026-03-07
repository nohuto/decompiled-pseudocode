_BYTE *__fastcall PopFxQueryCurrentComponentPerfState(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        _QWORD *a5,
        _BYTE *a6)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  _BYTE *result; // rax
  unsigned int v11; // [rsp+20h] [rbp-18h] BYREF
  _BYTE v12[12]; // [rsp+24h] [rbp-14h]

  *(_QWORD *)v12 = 0LL;
  v7 = *(_QWORD *)(a2 + 424);
  v11 = a3;
  v8 = *(_QWORD *)(v7 + 152) + 32LL * a3;
  if ( *(_BYTE *)(v7 + 73) && *(_QWORD *)(a1 + 64) )
  {
    PopPluginQueryCurrentComponentPerfState(a1, *(unsigned int *)(a2 + 16), &v11);
    v9 = *(unsigned int *)&v12[4];
    if ( *(_DWORD *)(*(_QWORD *)v8 + 28LL) )
      v9 = *(_QWORD *)&v12[4];
    *a5 = v9;
    if ( v9 != *(_QWORD *)(v8 + 8) )
    {
      *(_QWORD *)(v8 + 16) = MEMORY[0xFFFFF78000000008];
      *(_BYTE *)(v8 + 24) = a4;
      *(_QWORD *)(v8 + 8) = *a5;
      result = a6;
      if ( a6 )
        *a6 = 1;
      return result;
    }
  }
  else
  {
    *a5 = *(_QWORD *)(v8 + 8);
  }
  result = a6;
  if ( a6 )
    *a6 = 0;
  return result;
}
