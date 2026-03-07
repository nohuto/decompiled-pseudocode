__int64 __fastcall PnpCompileDeviceInstancePaths(unsigned int a1, __int64 a2, char a3, __int64 *a4)
{
  unsigned int v4; // edi
  int v7; // r15d
  int v9; // ebx
  __int64 v10; // rcx
  __int64 CriticalMemory; // rax
  _WORD *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rbx
  _WORD *v16; // rsi
  __int64 v18; // [rsp+30h] [rbp-10h] BYREF
  __int64 v19; // [rsp+38h] [rbp-8h] BYREF
  int v20; // [rsp+78h] [rbp+38h] BYREF

  v4 = 0;
  v19 = 0LL;
  v20 = 0;
  v7 = a2;
  if ( !a2 )
    __fastfail(5u);
  *a4 = 0LL;
  v9 = 0;
  v18 = 0LL;
  while ( (unsigned __int8)IopEnumerateRelations(v7, (unsigned int)&v18, (unsigned int)&v19, (unsigned int)&v20, 0LL) )
  {
    if ( v19 )
    {
      v10 = *(_QWORD *)(*(_QWORD *)(v19 + 312) + 40LL);
      if ( v10 )
      {
        if ( *(_QWORD *)(v10 + 48) && (!a3 || v20) )
          v9 += *(unsigned __int16 *)(v10 + 40) + 2;
      }
    }
  }
  CriticalMemory = PnpAllocateCriticalMemory(a1, 256LL, (unsigned int)(v9 + 2), 1265659472LL);
  *a4 = CriticalMemory;
  v12 = (_WORD *)CriticalMemory;
  if ( CriticalMemory )
  {
    v18 = 2LL;
    while ( (unsigned __int8)IopEnumerateRelations(v7, (unsigned int)&v18, (unsigned int)&v19, (unsigned int)&v20, 0LL) )
    {
      if ( v19 )
      {
        v13 = *(_QWORD *)(v19 + 312);
        v14 = *(_QWORD *)(v13 + 40);
        if ( v14 )
        {
          if ( *(_QWORD *)(v14 + 48) && (!a3 || v20) )
          {
            v15 = *(_QWORD *)(v13 + 40);
            memmove(v12, *(const void **)(v14 + 48), *(unsigned __int16 *)(v14 + 40));
            v16 = &v12[(unsigned __int64)*(unsigned __int16 *)(v15 + 40) >> 1];
            *v16 = 0;
            v12 = v16 + 1;
          }
        }
      }
    }
    *v12 = 0;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
