__int64 __fastcall AddMessageToFilter(void ***a1, unsigned int a2, int *a3)
{
  void **v3; // rdi
  unsigned int v4; // ebx
  unsigned __int64 v5; // r15
  _BYTE *v7; // rbp
  _QWORD *v8; // rsi
  __int64 v9; // r9
  int v10; // r8d
  int v11; // r13d
  __int64 v12; // rax

  v3 = *a1;
  v4 = 0;
  v5 = a2;
  v7 = 0LL;
  if ( *a1 || (v3 = (void **)MsgLookupTableAlloc(0)) != 0LL )
  {
    v8 = v3[v5 >> 13];
    if ( v8 || (v8 = MsgLookupTableAlloc(1u)) != 0LL )
    {
      v7 = (_BYTE *)v8[(v5 >> 9) & 0xF];
      if ( v7 || (v7 = MsgLookupTableAlloc(2u)) != 0LL )
      {
        v9 = (v5 >> 3) & 0x3F;
        v10 = (unsigned __int8)v7[v9];
        v11 = v10 & (1 << (v5 & 7));
        if ( !v11 )
          v7[v9] = v10 | (1 << (v5 & 7));
        if ( a3 )
          *a3 = v11;
        v12 = (v5 >> 9) & 0xF;
        if ( v7 != (_BYTE *)v8[v12] )
          v8[v12] = v7;
        if ( v8 != v3[v5 >> 13] )
          v3[v5 >> 13] = v8;
        if ( v3 != *a1 )
          *a1 = v3;
        goto LABEL_17;
      }
    }
    if ( v8 && v8 != v3[v5 >> 13] )
      Win32FreePool(v8);
  }
  if ( v3 && v3 != *a1 )
    Win32FreePool(v3);
LABEL_17:
  LOBYTE(v4) = v7 != 0LL;
  return v4;
}
