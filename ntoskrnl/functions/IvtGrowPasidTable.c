__int64 __fastcall IvtGrowPasidTable(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v7; // rbx
  unsigned int v8; // r14d
  int v9; // edi
  __int64 v10; // rbp
  void **v11; // r14
  __int64 v12; // r15
  __int64 v13; // rbx
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  if ( a3 >= 0x100000 )
    return 3221225485LL;
  v14 = 0LL;
  v7 = *(_QWORD *)(a2 + 40);
  if ( v7 )
  {
    v8 = *(_DWORD *)(v7 + 36);
    v9 = IvtExtendScalableModePasidTables(a1, *(_QWORD *)(a2 + 40), a3);
    if ( v9 >= 0 )
      goto LABEL_5;
  }
  else
  {
    v8 = 0;
    v9 = -1073741823;
  }
  if ( a3 < v8 )
    return (unsigned int)v9;
  v9 = IvtAllocateScalableModePasidTables(a1, 0xFFFFFFFE, a3, a3, &v14);
  if ( v9 < 0 )
    return (unsigned int)v9;
  v10 = v14;
  if ( v14 )
  {
    if ( v7 && ((*(_DWORD *)(v7 + 32) >> 6) & 0x3FFF) != 0 )
    {
      v11 = (void **)(v14 + 56);
      v12 = (*(_DWORD *)(v7 + 32) >> 6) & 0x3FFF;
      v13 = v7 - v14;
      do
      {
        memmove(*v11, *(void **)((char *)v11 + v13), 0x1000uLL);
        ++v11;
        --v12;
      }
      while ( v12 );
    }
    *(_QWORD *)(a2 + 56) = *(_QWORD *)(a2 + 40);
    *(_QWORD *)(a2 + 40) = v10;
    *(_DWORD *)(a2 + 48) = *(_DWORD *)(v10 + 32);
    return (unsigned int)v9;
  }
LABEL_5:
  *(_DWORD *)(a2 + 48) = *(_DWORD *)(v7 + 32);
  return (unsigned int)v9;
}
