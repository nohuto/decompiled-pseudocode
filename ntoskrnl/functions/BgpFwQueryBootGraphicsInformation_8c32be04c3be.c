__int64 __fastcall BgpFwQueryBootGraphicsInformation(int a1, __int64 a2)
{
  unsigned int v2; // esi
  void *v3; // rbp
  int v5; // eax
  int v7; // ecx
  PVOID v8; // r15
  size_t v9; // r14
  void *Memory; // rax
  _DWORD *Pool2; // rax
  _DWORD *v12; // rbx

  v2 = 0;
  v3 = 0LL;
  if ( a1 )
  {
    if ( a1 == 2 )
    {
      *(_DWORD *)a2 = 8;
      *(_DWORD *)a2 = Size + 8;
    }
    else if ( a1 == 3 )
    {
      *(_OWORD *)a2 = xmmword_140C0E490;
      *(_OWORD *)(a2 + 16) = xmmword_140C0E4A0;
      *(_OWORD *)(a2 + 32) = xmmword_140C0E4B0;
      *(_OWORD *)(a2 + 48) = xmmword_140C0E4C0;
      *(_OWORD *)(a2 + 64) = xmmword_140C0E4D0;
      *(_OWORD *)(a2 + 80) = xmmword_140C0E4E0;
      *(_OWORD *)(a2 + 96) = xmmword_140C0E4F0;
      *(_OWORD *)(a2 + 112) = xmmword_140C0E500;
    }
    else if ( qword_140C0E3F8 || qword_140C0E400 )
    {
      v8 = qword_140C0E400;
      v9 = (unsigned int)Size;
      if ( !qword_140C0E400 )
      {
        Memory = (void *)BgpFwAllocateMemory((unsigned int)Size);
        v3 = Memory;
        if ( !Memory )
          return (unsigned int)-1073741801;
        v8 = Memory;
        memmove(Memory, qword_140C0E3F8, v9);
      }
      if ( (int)v9 + 8 < (unsigned int)v9 )
      {
        v2 = -1073741675;
      }
      else
      {
        BgpFwReleaseLock();
        Pool2 = (_DWORD *)ExAllocatePool2(256LL, (unsigned int)(v9 + 8), 1263093570LL);
        v12 = Pool2;
        if ( Pool2 )
        {
          *Pool2 = (dword_140C0E3B0 & 0x800000) != 0;
          Pool2[1] = 8;
          memmove(Pool2 + 2, v8, v9);
          BgpFwAcquireLock();
          *(_QWORD *)a2 = v12;
        }
        else
        {
          BgpFwAcquireLock();
          v2 = -1073741801;
        }
      }
      if ( v3 )
        BgpFwFreeMemory(v3);
    }
    else
    {
      *(_QWORD *)a2 = 0LL;
    }
  }
  else
  {
    *(_OWORD *)a2 = xmmword_140C0E390;
    *(_OWORD *)(a2 + 16) = xmmword_140C0E3A0;
    *(_DWORD *)(a2 + 20) = 0;
    v5 = *(_DWORD *)(a2 + 20);
    if ( (dword_140C0E3B0 & 2) != 0 )
      v5 = 1;
    *(_DWORD *)(a2 + 20) = v5;
    if ( ((BYTE2(BgInternal) - 1) & 0xFD) == 0 )
    {
      v7 = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a2 + 8) = *(_DWORD *)(a2 + 12);
      *(_DWORD *)(a2 + 12) = v7;
    }
    *(_DWORD *)(a2 + 28) = BYTE2(BgInternal);
  }
  return v2;
}
