__int64 __fastcall ComputeEventEntryHash(char a1, unsigned __int8 a2, __int64 a3)
{
  unsigned __int8 v6; // bl
  __int64 v7; // r11
  __int64 v8; // rbx
  __int64 v9; // r11
  int v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0;
  RunningHash(&v11, a3 + 16, 8LL);
  v6 = a1 + 2;
  if ( v6 < a2 )
  {
    v7 = a3 + 16LL * v6;
    v8 = (unsigned __int8)(a2 - v6);
    do
    {
      RunningHash(&v11, *(_QWORD *)v7, *(unsigned int *)(v7 + 8));
      v7 = v9 + 16;
      --v8;
    }
    while ( v8 );
  }
  return 32769 * ((9 * v11) ^ ((unsigned int)(9 * v11) >> 11));
}
