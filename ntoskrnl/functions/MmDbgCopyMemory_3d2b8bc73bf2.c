__int64 __fastcall MmDbgCopyMemory(char *BaseAddress, __int64 a2, unsigned int a3, unsigned int a4, int a5)
{
  unsigned int v5; // ebx
  __int64 result; // rax
  unsigned int v9; // edi

  v5 = a3;
  if ( a4 > 2 && a4 != 4 && a4 != 8 )
    return 2147483650LL;
  result = 0LL;
  if ( a3 )
  {
    do
    {
      v9 = v5;
      if ( 4096 - ((unsigned __int16)BaseAddress & 0xFFFu) <= v5 )
        v9 = 4096 - ((unsigned __int16)BaseAddress & 0xFFF);
      result = MiDbgCopyMemory(BaseAddress, a5);
      if ( (int)result < 0 )
        break;
      BaseAddress += v9;
      a2 += v9;
      v5 -= v9;
    }
    while ( v5 );
  }
  return result;
}
