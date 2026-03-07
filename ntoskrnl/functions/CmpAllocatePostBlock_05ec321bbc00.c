__int64 __fastcall CmpAllocatePostBlock(int a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // esi
  __int64 Pool2; // rdi
  struct _KEVENT *v10; // rax
  int v11; // ebx
  __int64 v13; // rax
  _QWORD *v14; // rax

  v7 = 257;
  Pool2 = ExAllocatePool2(257LL, 72LL, 1651526979LL);
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 56) = a2 | a1;
    if ( ((a2 | a1) & 0x10000) != 0 )
    {
      *(_QWORD *)(Pool2 + 48) = 0LL;
      if ( (unsigned int)(a1 - 3) > 1 )
        v7 = 65;
      v10 = (struct _KEVENT *)ExAllocatePool2(v7, 112LL, 875842883LL);
      *(_QWORD *)(Pool2 + 64) = v10;
      if ( v10 )
      {
        v11 = a1 - 1;
        if ( v11 )
        {
          if ( v11 == 2 )
          {
            *(_OWORD *)&v10->Header.Lock = 0LL;
            v10->Header.WaitListHead.Blink = 0LL;
          }
        }
        else
        {
          KeInitializeEvent(v10, SynchronizationEvent, 0);
        }
        return Pool2;
      }
    }
    else
    {
      *(_QWORD *)(Pool2 + 64) = *(_QWORD *)(a4 + 64);
      v13 = ExAllocatePool2(257LL, 24LL, 892620099LL);
      *(_QWORD *)(Pool2 + 48) = v13;
      if ( v13 )
      {
        *(_QWORD *)(v13 + 16) = a3;
        v14 = *(_QWORD **)(Pool2 + 48);
        v14[1] = v14;
        *v14 = v14;
        return Pool2;
      }
    }
    ExFreePoolWithTag((PVOID)Pool2, 0);
  }
  return 0LL;
}
