__int64 __fastcall MmAllocatePoolMemory(ULONG_PTR *a1, unsigned __int64 *a2, int a3, int a4, char a5, unsigned int a6)
{
  unsigned int v10; // ebx
  int v11; // edi
  unsigned __int64 v13; // rax
  _QWORD v14[10]; // [rsp+40h] [rbp-78h] BYREF

  memset(v14, 0, sizeof(v14));
  if ( !a6 || a6 > (unsigned __int16)KeNumberNodes )
    return 3221225713LL;
  v10 = a6 - 1;
  if ( (a3 & 0x2000) != 0 )
  {
    *a1 = 0LL;
    v13 = MiReservePoolMemory(0LL, (a5 & 1u) + 5, *a2, v10);
    if ( !v13 )
      return 3221225495LL;
    *a1 = v13;
  }
  v11 = 0;
  if ( (a3 & 0x1000) != 0 )
  {
    v11 = MiInitializePoolCommitPacket((_DWORD)a1, (_DWORD)a2, a3, a4, a5, v10, 0LL, (__int64)v14);
    if ( v11 < 0 || (v11 = MiCommitPoolMemory(v14), v11 < 0) )
    {
      if ( (a3 & 0x2000) != 0 )
        MmFreePoolMemory(a1, a2);
      *a1 = 0LL;
    }
    *a2 = (*a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  }
  return (unsigned int)v11;
}
