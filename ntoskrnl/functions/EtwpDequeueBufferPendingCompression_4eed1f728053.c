__int64 __fastcall EtwpDequeueBufferPendingCompression(__int64 a1)
{
  __int64 *v1; // rdi
  __int64 v3; // rax
  __int64 *v4; // rdi
  __int64 v6; // rcx
  __int64 Pool2; // rax
  __int64 v8; // rsi
  __int64 v9; // r8
  unsigned __int8 v10; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(__int64 **)(a1 + 1184);
  v10 = 0;
  if ( v1 )
  {
    v3 = *v1;
    v4 = v1 - 4;
    *(_QWORD *)(a1 + 1184) = v3;
  }
  else
  {
    v6 = 256LL;
    if ( *(_DWORD *)(a1 + 300) != 1 )
      v6 = 64LL;
    Pool2 = ExAllocatePool2(v6, 72LL, 1115124805LL);
    v4 = (__int64 *)Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)(Pool2 + 32) = 0LL;
      *(_DWORD *)(Pool2 + 44) = 6;
      goto LABEL_9;
    }
  }
  if ( !v4 )
  {
    EtwpDisableCompression(a1);
    return 0LL;
  }
LABEL_9:
  EtwpLockBufferList(a1, &v10);
  v8 = EtwpDequeueBufferPendingCompressionFromQueue(a1 + 64, a1 + 228, v4);
  if ( !v8 )
    v8 = EtwpDequeueBufferPendingCompressionFromQueue(a1 + 48, a1 + 228, v9);
  EtwpUnlockBufferList(a1, &v10);
  if ( !v8 )
  {
    v4[4] = *(_QWORD *)(a1 + 1184);
    *(_QWORD *)(a1 + 1184) = v4 + 4;
  }
  return v8;
}
