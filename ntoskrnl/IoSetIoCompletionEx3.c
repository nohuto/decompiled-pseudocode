__int64 __fastcall IoSetIoCompletionEx3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __int64 a7,
        char a8,
        char a9)
{
  __int64 MiniCompletionPacket; // rax
  unsigned int v10; // ebx
  int v11; // edi
  __int64 v13; // rbp
  __int64 v14; // r14

  MiniCompletionPacket = a7;
  v10 = 0;
  v11 = a4;
  v13 = a2;
  v14 = a1;
  if ( a7 || (LOBYTE(a2) = a6, LOBYTE(a1) = 1, (MiniCompletionPacket = IopAllocateMiniCompletionPacket(a1, a2)) != 0) )
  {
    LOBYTE(a4) = a8;
    *(_QWORD *)(MiniCompletionPacket + 48) = a5;
    *(_QWORD *)(MiniCompletionPacket + 24) = v13;
    *(_QWORD *)(MiniCompletionPacket + 32) = a3;
    *(_DWORD *)(MiniCompletionPacket + 40) = v11;
    KeInsertQueueEx(v14, MiniCompletionPacket, (unsigned int)a9, a4);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v10;
}
