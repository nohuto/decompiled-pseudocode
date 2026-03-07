__int64 __fastcall RtlpCopyExtendedContext(char a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  unsigned int v8; // ebx
  __int64 result; // rax
  int v12; // ecx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // rdx
  int v19; // eax
  _DWORD v20[10]; // [rsp+30h] [rbp-28h] BYREF

  v8 = 0;
  v20[0] = 0;
  result = RtlpValidateContextFlags(a4, v20);
  if ( (int)result >= 0 )
  {
    v13 = a2;
    if ( a3 )
      v13 = a3;
    v14 = a5;
    if ( a6 )
      v14 = a6;
    if ( (v20[0] & 1) != 0 )
    {
      v15 = *(int *)(v13 + 8);
      v16 = *(int *)(v14 + 8);
      if ( (_DWORD)v15 != (_DWORD)v16 || *(_DWORD *)(v13 + 12) < *(_DWORD *)(v14 + 12) )
        return 3221225485LL;
      v17 = a5 + v16;
      v18 = a2 + v15;
      LOBYTE(v15) = a1;
      RtlpCopyLegacyContext(v15, v18, a4, v17);
    }
    if ( (v20[0] & 2) == 0 || (LOBYTE(v12) = a1, result = RtlpCopyXStateChunk(v12, a2, v13, a5, v14), (int)result >= 0) )
    {
      if ( (v20[0] & 4) != 0 )
      {
        LOBYTE(v12) = a1;
        v19 = RtlpCopyKernelCetChunk(v12, a2, v13, a5, v14);
        if ( v19 < 0 )
          return (unsigned int)v19;
        return v8;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return result;
}
