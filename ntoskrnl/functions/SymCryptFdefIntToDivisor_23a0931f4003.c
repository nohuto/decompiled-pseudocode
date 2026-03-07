__int64 __fastcall SymCryptFdefIntToDivisor(__int64 a1, __int64 a2)
{
  int v4; // ebx
  unsigned int v5; // r9d
  unsigned int v6; // r8d
  char v7; // bp
  unsigned int v8; // r10d
  unsigned int v9; // r8d
  unsigned __int64 v10; // rdx
  unsigned int *v11; // r11
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 result; // rax

  xHalTimerWatchdogStop();
  SymCryptFdefIntCopy(a1, a2 + 32);
  v4 = SymCryptIntBitsizeOfValue();
  if ( !v4 )
    SymCryptIntSetValueUint32();
  *(_DWORD *)(a2 + 12) = v4;
  v5 = (unsigned int)(v4 + 31) >> 5;
  v6 = 0;
  v7 = ((v4 - 1) & 0x1F) + 1;
  v8 = 0x80000000;
  do
  {
    v9 = v8 | v6;
    v10 = 0LL;
    if ( v5 )
    {
      v11 = (unsigned int *)(a2 + 64);
      v12 = v5;
      do
      {
        v13 = *v11++;
        v10 = v13 + ((v9 * (unsigned __int64)(unsigned int)v13 + v10) >> 32);
        --v12;
      }
      while ( v12 );
    }
    v6 = v8 & -((v10 >> v7) & 1) ^ v9;
    v8 >>= 1;
  }
  while ( v8 );
  result = v6;
  *(_QWORD *)(a2 + 24) = v6;
  return result;
}
