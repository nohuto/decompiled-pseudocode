__int64 __fastcall HalpWdatExecuteActionBeforeInitialize(char a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v8; // edx
  int v9; // r8d
  unsigned int v10; // ebx
  __int64 i; // rsi
  int v12; // eax
  int v13; // eax
  __int16 *v14; // rdi
  __int64 v15; // rsi
  int v16; // eax
  int v17; // eax
  _BYTE v19[64]; // [rsp+40h] [rbp-48h] BYREF

  memset(v19, 0, sizeof(v19));
  v10 = 0;
  if ( a4 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a4 + 64); i = (unsigned int)(i + 1) )
    {
      if ( *(_BYTE *)(a4 + 24 * i + 68) == a1 )
      {
        LOBYTE(v9) = *(_BYTE *)(a4 + 24 * i + 69);
        LOBYTE(v8) = a1;
        v12 = WdInstrInitializeInstruction(
                (unsigned int)v19,
                v8,
                v9,
                (int)a4 + 72 + 24 * (int)i,
                *(_DWORD *)(a4 + 24 * i + 84),
                *(_DWORD *)(a4 + 24 * i + 88),
                0);
        if ( v12 < 0 )
        {
          v10 = v12;
        }
        else
        {
          v13 = WdInstrExecuteInstruction(v19, 0LL, a3);
          if ( v13 < 0 )
            v10 = v13;
          WdInstrDestroyInstruction(v19);
        }
      }
    }
  }
  else if ( a5 )
  {
    v14 = &word_14003E8C2;
    v15 = 15LL;
    do
    {
      if ( *((_BYTE *)v14 - 2) == a1 )
      {
        LOBYTE(v9) = *((_BYTE *)v14 - 1);
        LOBYTE(v8) = a1;
        v16 = WdInstrInitializeInstruction(
                (unsigned int)v19,
                v8,
                v9,
                (unsigned int)a5 + (*(_BYTE *)v14 != 0 ? 48 : 36),
                *(_DWORD *)(v14 + 1),
                *(_DWORD *)(v14 + 3),
                1);
        if ( v16 < 0 )
        {
          v10 = v16;
        }
        else
        {
          v17 = WdInstrExecuteInstruction(v19, 0LL, a3);
          if ( v17 < 0 )
            v10 = v17;
          WdInstrDestroyInstruction(v19);
        }
      }
      v14 += 6;
      --v15;
    }
    while ( v15 );
  }
  return v10;
}
