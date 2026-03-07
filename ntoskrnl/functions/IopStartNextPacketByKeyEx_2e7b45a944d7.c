__int64 __fastcall IopStartNextPacketByKeyEx(__int64 a1, ULONG a2, int a3)
{
  signed __int32 v6; // r8d
  __int64 v7; // rcx
  int v8; // eax
  int v9; // edx
  __int64 result; // rax

  do
  {
    v6 = _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(a1 + 312) + 56LL), 1u);
    v7 = *(_QWORD *)(a1 + 312);
    v8 = *(_DWORD *)(v7 + 64);
    if ( v6 + 1 <= 1 )
    {
      *(_DWORD *)(v7 + 64) = v8 & 0xFFFFFF1F;
      v9 = a3 & 0x80;
      *(_DWORD *)(*(_QWORD *)(a1 + 312) + 60LL) = 0;
      if ( (a3 & 0x40) != 0 )
      {
        IopStartNextPacketByKey(a1, v9, a2);
      }
      else if ( (a3 & 0x20) != 0 )
      {
        IopStartNextPacket(a1, v9);
      }
    }
    else
    {
      *(_DWORD *)(v7 + 64) = a3 | v8;
      *(_DWORD *)(*(_QWORD *)(a1 + 312) + 60LL) = a2;
    }
    result = (unsigned int)_InterlockedExchangeAdd(
                             (volatile signed __int32 *)(*(_QWORD *)(a1 + 312) + 56LL),
                             0xFFFFFFFF);
    if ( (_DWORD)result != 1 )
      break;
    result = *(_QWORD *)(a1 + 312);
    a2 = *(_DWORD *)(result + 60);
    a3 = *(_DWORD *)(result + 64) & 0xE0;
  }
  while ( (*(_BYTE *)(result + 64) & 0x60) != 0 );
  return result;
}
