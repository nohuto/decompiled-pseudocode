__int64 __fastcall KdPullRemoteFileEx(
        const void **a1,
        __int64 (__fastcall *a2)(__int64, const void **, unsigned __int64),
        __int64 (__fastcall *a3)(__int64, __int64, void *, _QWORD),
        void (__fastcall *a4)(__int64, _QWORD),
        __int64 a5)
{
  void *Pool2; // r14
  int RemoteFile; // ebx
  __int64 v10; // rdi
  unsigned __int64 v12; // rsi
  __int64 v13; // rbp
  int v14; // r9d
  __int64 v15; // r15
  __int64 v16; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v17; // [rsp+48h] [rbp-30h] BYREF

  v17 = 0LL;
  v16 = 0LL;
  if ( !(_BYTE)KdDebuggerEnabled || (_BYTE)KdDebuggerNotPresent || KdPitchDebugger )
    return 3221226324LL;
  Pool2 = (void *)ExAllocatePool2(64LL, 0x2000uLL, 0x6F49644Bu);
  if ( !Pool2 )
    return 3221225495LL;
  RemoteFile = KdpCreateRemoteFile(&v16, &v17, a1);
  if ( RemoteFile >= 0
    && (memmove(Pool2, a1[1], *(unsigned __int16 *)a1),
        *((_WORD *)Pool2 + ((unsigned __int64)*(unsigned __int16 *)a1 >> 1)) = 0,
        v12 = v17,
        DbgPrintEx(
          0,
          0,
          "KdPullRemoteFile(%p): About to overwrite %ls and preallocate to %I64x\n",
          KeGetCurrentThread(),
          (const wchar_t *)Pool2,
          v17),
        RemoteFile = a2(a5, a1, v12),
        RemoteFile >= 0)
    && (v13 = 0LL, v12) )
  {
    v10 = v16;
    do
    {
      LODWORD(v16) = 0;
      v14 = v12;
      if ( v12 > 0x2000 )
        v14 = 0x2000;
      RemoteFile = KdpReadRemoteFile(v10, v13, (_DWORD)Pool2, v14, (__int64)&v16);
      if ( RemoteFile < 0 )
        break;
      v15 = (unsigned int)v16;
      if ( !(_DWORD)v16 )
        break;
      RemoteFile = a3(a5, v13, Pool2, (unsigned int)v16);
      if ( RemoteFile < 0 )
        break;
      v13 += v15;
      v12 -= v15;
    }
    while ( v12 );
  }
  else
  {
    v10 = v16;
  }
  if ( v10 )
    KdpCloseRemoteFile(v10);
  a4(a5, (unsigned int)RemoteFile);
  ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)RemoteFile;
}
