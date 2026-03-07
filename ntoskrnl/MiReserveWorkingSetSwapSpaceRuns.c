unsigned __int64 __fastcall MiReserveWorkingSetSwapSpaceRuns(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5)
{
  char v5; // r15
  unsigned __int64 v6; // rbx
  __int64 v7; // r12
  unsigned __int64 v9; // rdi
  __int64 v10; // rsi
  unsigned int FreePageFileSpace; // eax

  v5 = a3;
  v6 = a2;
  v7 = a4;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 8LL * a3 + 17056) + 48LL) >= a2 )
  {
    v9 = a5;
    if ( a5 < a5 + 80 )
    {
      v10 = 80LL;
      do
      {
        if ( !v6 )
          break;
        *(_QWORD *)v9 = ((unsigned __int64)(v5 & 0xF) << 12) | MiMakePageFilePte(v7) & 0xFFFFFFFFFFFF0FFFuLL;
        FreePageFileSpace = MiFindFreePageFileSpace(a1, (unsigned __int64 *)v9, v6, 0x29uLL);
        *(_DWORD *)(v9 + 8) = FreePageFileSpace;
        if ( (unsigned __int64)FreePageFileSpace * (v10 >> 4) < v6 )
          break;
        v6 -= FreePageFileSpace;
        v9 += 16LL;
        v10 -= 16LL;
      }
      while ( v9 < a5 + 80 );
    }
  }
  return v6;
}
