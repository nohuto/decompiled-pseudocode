/*
 * XREFs of SmDecompressBuffer @ 0x14035AD38
 * Callers:
 *     PfSnGetPrefetchInstructions @ 0x1407E1BA4 (PfSnGetPrefetchInstructions.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x1402B8B70 (RtlComputeCrc32.c)
 *     RtlGetCompressionWorkSpaceSize @ 0x14035AEA0 (RtlGetCompressionWorkSpaceSize.c)
 *     RtlDecompressBufferEx @ 0x14035AF00 (RtlDecompressBufferEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

__int64 __fastcall SmDecompressBuffer(__int64 a1, unsigned int a2, _QWORD *a3, _DWORD *a4, _DWORD *a5, __int64 a6)
{
  __int64 v6; // r12
  NTSTATUS CompressionWorkSpaceSize; // ebx
  __int64 v9; // rbp
  int v11; // ecx
  unsigned int v12; // esi
  char *v13; // r14
  size_t v14; // rdi
  void *v15; // r15
  unsigned __int8 v16; // al
  unsigned __int16 v17; // r13
  _DWORD *v19; // rbx
  int v20; // eax
  int v21; // eax
  int v22; // [rsp+40h] [rbp-58h] BYREF
  ULONG CompressBufferWorkSpaceSize[21]; // [rsp+44h] [rbp-54h] BYREF
  ULONG CompressFragmentWorkSpaceSize; // [rsp+A0h] [rbp+8h] BYREF
  int v25; // [rsp+A8h] [rbp+10h] BYREF
  _QWORD *v26; // [rsp+B0h] [rbp+18h]
  _DWORD *v27; // [rsp+B8h] [rbp+20h]

  v27 = a4;
  v26 = a3;
  v6 = a6;
  CompressionWorkSpaceSize = 0;
  v25 = 0;
  CompressFragmentWorkSpaceSize = 0;
  CompressBufferWorkSpaceSize[0] = 0;
  v9 = 0LL;
  if ( a2 < 8 )
    return (unsigned int)-1073741246;
  v11 = *(_DWORD *)a1;
  v12 = a2 - 8;
  if ( (v11 & 0xFFFFFF) != 0x4D414D )
    return (unsigned int)-1073741672;
  if ( v11 < 0 )
  {
    if ( v12 >= 4 )
    {
      v19 = (_DWORD *)(a1 + 8);
      v22 = 0;
      v13 = (char *)(a1 + 12);
      v12 = a2 - 12;
      v20 = RtlComputeCrc32(0, (char *)a1, 8LL);
      v21 = RtlComputeCrc32(v20, (char *)&v22, 4LL);
      if ( (unsigned int)RtlComputeCrc32(v21, v13, v12) == *v19 )
      {
        CompressionWorkSpaceSize = 0;
        goto LABEL_5;
      }
    }
    return (unsigned int)-1073741246;
  }
  v13 = (char *)(a1 + 8);
LABEL_5:
  v14 = *(unsigned int *)(a1 + 4);
  if ( a5 && (unsigned int)v14 > *a5 )
    return (unsigned int)-1073739516;
  v15 = (void *)(*(__int64 (__fastcall **)(_QWORD))v6)((unsigned int)v14);
  if ( !v15 )
    return (unsigned int)-1073741670;
  v16 = *(_BYTE *)(a1 + 3) & 0x7F;
  v17 = v16;
  if ( !v16 )
  {
    if ( v12 == (_DWORD)v14 )
    {
      memmove(v15, v13, v14);
      v25 = v14;
      goto LABEL_15;
    }
    goto LABEL_29;
  }
  CompressionWorkSpaceSize = RtlGetCompressionWorkSpaceSize(
                               v16,
                               CompressBufferWorkSpaceSize,
                               &CompressFragmentWorkSpaceSize);
  if ( CompressionWorkSpaceSize >= 0 )
  {
    if ( CompressFragmentWorkSpaceSize && (v9 = (*(__int64 (**)(void))v6)()) == 0 )
    {
      CompressionWorkSpaceSize = -1073741670;
    }
    else
    {
      CompressionWorkSpaceSize = RtlDecompressBufferEx(v17, (_DWORD)v15, v14, (_DWORD)v13, v12, (__int64)&v25, v9);
      if ( CompressionWorkSpaceSize >= 0 )
      {
        if ( (_DWORD)v14 == v25 )
        {
          CompressionWorkSpaceSize = 0;
LABEL_15:
          *v26 = v15;
          *v27 = v14;
          goto LABEL_16;
        }
LABEL_29:
        CompressionWorkSpaceSize = -1073741246;
      }
    }
  }
  (*(void (__fastcall **)(void *))(v6 + 8))(v15);
LABEL_16:
  if ( v9 )
    (*(void (__fastcall **)(__int64))(v6 + 8))(v9);
  return (unsigned int)CompressionWorkSpaceSize;
}
