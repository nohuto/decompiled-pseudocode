__int64 __fastcall HalpKdEnumerateDebuggingDevices(__int64 a1, __int64 a2)
{
  _OWORD *v3; // rcx
  __int64 v4; // rdx
  _OWORD *v5; // rax
  __int128 v6; // xmm1
  ULONG_PTR v7; // rax
  int v8; // ecx
  void *Memory; // rax
  __int64 v11; // rcx
  size_t v12; // rdi
  void *Pool2; // rax

  if ( !a2 )
    return 3221225485LL;
  if ( *(_BYTE *)(a2 + 19) )
    return 0LL;
  if ( KdDebugDevice && *(_BYTE *)(KdDebugDevice + 19) && (unsigned __int8)HalpDeviceEquals() )
  {
    v3 = (_OWORD *)KdDebugDevice;
    v4 = 2LL;
    v5 = (_OWORD *)a2;
    do
    {
      *v5 = *v3;
      v5[1] = v3[1];
      v5[2] = v3[2];
      v5[3] = v3[3];
      v5[4] = v3[4];
      v5[5] = v3[5];
      v5[6] = v3[6];
      v5 += 8;
      v6 = v3[7];
      v3 += 8;
      *(v5 - 1) = v6;
      --v4;
    }
    while ( v4 );
    *v5 = *v3;
    v7 = *(unsigned int *)(KdDebugDevice + 216);
    if ( !(_DWORD)v7 || !*(_QWORD *)(KdDebugDevice + 208) )
      goto LABEL_9;
    if ( HalpMmLoaderBlock )
      Memory = (void *)HalpMmAllocateMemory((unsigned int)v7);
    else
      Memory = (void *)ExAllocatePool2(256LL, v7, 0x646C6148u);
    *(_QWORD *)(a2 + 208) = Memory;
    if ( Memory )
    {
      memmove(Memory, *(const void **)(KdDebugDevice + 208), *(unsigned int *)(KdDebugDevice + 216));
LABEL_9:
      v8 = *(_DWORD *)(KdDebugDevice + 232);
      if ( !v8 || !*(_QWORD *)(KdDebugDevice + 224) )
        goto LABEL_10;
      v11 = (unsigned int)(v8 + 2);
      v12 = (unsigned int)v11;
      if ( HalpMmLoaderBlock )
        Pool2 = (void *)HalpMmAllocateMemory(v11);
      else
        Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)v11, 0x646C6148u);
      *(_QWORD *)(a2 + 224) = Pool2;
      if ( Pool2 )
      {
        memset(Pool2, 0, v12);
        wcsncpy_s(
          *(wchar_t **)(a2 + 224),
          v12 >> 1,
          *(const wchar_t **)(KdDebugDevice + 224),
          (unsigned __int64)*(unsigned int *)(KdDebugDevice + 232) >> 1);
LABEL_10:
        *(_WORD *)(a2 + 18) = 256;
        return 0LL;
      }
    }
  }
  return 3221225473LL;
}
