__int64 __fastcall MiMoveZeroThreadsToOtherCores(__int64 a1)
{
  unsigned int v1; // r14d
  unsigned int v2; // ebp
  unsigned int v4; // r12d
  _QWORD **v5; // rdi
  int IdleProcessorCount; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rsi
  int v11; // r15d

  v1 = 0;
  v2 = 0;
  v4 = *(_DWORD *)(*(_QWORD *)(a1 + 168) + 92LL);
  if ( v4 )
  {
    v5 = (_QWORD **)(*(_QWORD *)(a1 + 128) + 16LL);
    do
    {
      IdleProcessorCount = MiGetIdleProcessorCount(a1, v2);
      v10 = *v5;
      v11 = IdleProcessorCount;
      while ( v10 != v5 )
      {
        if ( (unsigned int)MiZeroThreadContending(v10 - 21, v7, v8, v9) )
        {
          ++*(_DWORD *)(a1 + 216);
          if ( v11 )
          {
            ++*(_DWORD *)(a1 + 224);
            --v11;
            *(v10 - 6) = 0LL;
            v1 = 1;
          }
        }
        v10 = (_QWORD *)*v10;
      }
      v5 += 6;
      ++v2;
    }
    while ( v2 < v4 );
  }
  return v1;
}
