__int64 __fastcall SmcProcessStoreCreateRequest(unsigned __int64 a1, int a2, char a3)
{
  int v4; // ebx
  __int64 v5; // rcx
  int ProcessPartition; // eax
  __int128 v8; // [rsp+38h] [rbp-40h] BYREF
  __int128 v9; // [rsp+48h] [rbp-30h]
  int v10; // [rsp+98h] [rbp+20h] BYREF

  v10 = -1;
  v8 = 0LL;
  v9 = 0LL;
  if ( a2 == 32 )
  {
    if ( a3 )
    {
      if ( (a1 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v5 = 0x7FFFFFFF0000LL;
      if ( a1 < 0x7FFFFFFF0000LL )
        v5 = a1;
      *(_BYTE *)v5 = *(_BYTE *)v5;
      *(_BYTE *)(v5 + 31) = *(_BYTE *)(v5 + 31);
    }
    v8 = *(_OWORD *)a1;
    v9 = *(_OWORD *)(a1 + 16);
    if ( (_BYTE)v8 != 2 || (v8 & 0xFFFFFF00) != 0 )
      return (unsigned int)-1073741811;
    if ( SDWORD2(v9) >= 2 )
      return (unsigned int)-1073741822;
    if ( (DWORD1(v8) & 0xFFFEE000) != 0 )
      return (unsigned int)-1073741811;
    ProcessPartition = SmpGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
    v4 = SmcStoreCreate(ProcessPartition + 2128, DWORD2(v9), (unsigned int)&v8 + 4, DWORD1(v9), (__int64)&v10);
    if ( v4 >= 0 )
    {
      v4 = 0;
      *(_DWORD *)(a1 + 28) = v10;
    }
  }
  else
  {
    return (unsigned int)-1073741306;
  }
  return (unsigned int)v4;
}
