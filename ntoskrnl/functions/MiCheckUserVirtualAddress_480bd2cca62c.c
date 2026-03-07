__int64 __fastcall MiCheckUserVirtualAddress(unsigned __int64 a1, __int64 a2, __int64 a3, int *a4)
{
  unsigned __int64 v7; // rax
  int v8; // eax
  unsigned __int64 v9; // rdi
  __int64 ProtoPteAddress; // r8
  char v11; // al
  int v12; // ecx
  _QWORD *v13; // rdx
  __int64 result; // rax
  int v15; // eax
  int v16; // r9d
  unsigned __int64 LockedVadEvent; // rax
  _BYTE v18[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 1) == 0 )
  {
    v7 = a1 & 0xFFFFFFFFFFFFF000uLL;
    if ( (a1 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
    {
      result = qword_140C656A8;
      *a4 = 1;
      return result;
    }
    if ( v7 == qword_140C656B8 && v7 )
    {
      result = qword_140C656B0;
      *a4 = 1;
      return result;
    }
  }
  if ( (*(_DWORD *)(a2 + 48) & 0x70) == 0x20 && (*(_DWORD *)(a2 + 64) & 0x10000000) != 0 )
  {
    LockedVadEvent = MiLocateLockedVadEvent(a2, 32);
    if ( LockedVadEvent && *(struct _KTHREAD **)(LockedVadEvent + 8) != KeGetCurrentThread() )
      goto LABEL_25;
  }
  v8 = *(_DWORD *)(a2 + 48);
  if ( (v8 & 4) != 0 )
    goto LABEL_25;
  if ( (v8 & 0x200000) != 0 )
  {
    v15 = *(_DWORD *)(a2 + 48) & 0x70;
    if ( v15 != 16 && v15 != 48 && !(unsigned int)MiIsVadLargePrivate(a2) && *(int *)(a2 + 52) < 0 )
    {
      v16 = (*(_DWORD *)(a2 + 48) >> 7) & 0x1F;
LABEL_24:
      result = 0LL;
      *a4 = v16;
      return result;
    }
LABEL_25:
    v16 = 24;
    goto LABEL_24;
  }
  if ( (*(_DWORD *)(a2 + 64) & 0x1000000) != 0 && (*(_BYTE *)(a2 + 48) & 0x70) != 0x50 )
    goto LABEL_25;
  v9 = a1 >> 12;
  ProtoPteAddress = MiGetProtoPteAddress(a2, v9, 4LL, v18);
  if ( ProtoPteAddress )
  {
    v11 = *(_DWORD *)(a2 + 48) & 0x70;
    v12 = (*(_DWORD *)(a2 + 48) >> 7) & 0x1F;
    *a4 = v12;
    if ( v11 == 32 )
    {
      if ( v12 == 7 )
        v12 = 256;
      *a4 = v12;
    }
  }
  else
  {
    *a4 = 24;
  }
  v13 = *(_QWORD **)(a2 + 120);
  if ( (__int64)v13 < 0
    && v9 - (*(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32)) > (unsigned __int64)(*v13 - 1LL) >> 12 )
  {
    *a4 = 24;
  }
  return ProtoPteAddress;
}
