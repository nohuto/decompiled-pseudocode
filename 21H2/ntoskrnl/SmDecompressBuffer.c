/*
 * XREFs of SmDecompressBuffer @ 0x14035F614
 * Callers:
 *     PfSnGetPrefetchInstructions @ 0x1407D84EC (PfSnGetPrefetchInstructions.c)
 * Callees:
 *     RtlDecompressBufferEx @ 0x14035F780 (RtlDecompressBufferEx.c)
 *     RtlGetCompressionWorkSpaceSize @ 0x14035F800 (RtlGetCompressionWorkSpaceSize.c)
 *     RtlComputeCrc32 @ 0x140369820 (RtlComputeCrc32.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall SmDecompressBuffer(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        __int64 (__fastcall **a6)(_QWORD))
{
  NTSTATUS CompressionWorkSpaceSize; // ebx
  __int64 v8; // r15
  int v10; // ecx
  unsigned int v11; // esi
  const void *v12; // r14
  size_t v13; // rdi
  __int64 v14; // r12
  void *v15; // rbp
  unsigned __int8 v16; // al
  unsigned __int16 v17; // r13
  _DWORD *v19; // rbx
  unsigned int v20; // eax
  unsigned int v21; // eax
  int v22; // [rsp+40h] [rbp-58h] BYREF
  ULONG CompressBufferWorkSpaceSize[21]; // [rsp+44h] [rbp-54h] BYREF
  ULONG CompressFragmentWorkSpaceSize; // [rsp+A0h] [rbp+8h] BYREF
  int v25; // [rsp+A8h] [rbp+10h] BYREF
  _QWORD *v26; // [rsp+B0h] [rbp+18h]
  _DWORD *v27; // [rsp+B8h] [rbp+20h]

  v27 = a4;
  v26 = a3;
  CompressionWorkSpaceSize = 0;
  v25 = 0;
  CompressFragmentWorkSpaceSize = 0;
  v8 = 0LL;
  CompressBufferWorkSpaceSize[0] = 0;
  if ( a2 < 8 )
    return (unsigned int)-1073741246;
  v10 = *(_DWORD *)a1;
  v11 = a2 - 8;
  if ( (v10 & 0xFFFFFF) != 0x4D414D )
    return (unsigned int)-1073741672;
  if ( v10 < 0 )
  {
    if ( v11 >= 4 )
    {
      v19 = (_DWORD *)(a1 + 8);
      v22 = 0;
      v12 = (const void *)(a1 + 12);
      v11 = a2 - 12;
      v20 = RtlComputeCrc32(0LL, a1, 8LL);
      v21 = RtlComputeCrc32(v20, &v22, 4LL);
      if ( (unsigned int)RtlComputeCrc32(v21, v12, v11) == *v19 )
      {
        CompressionWorkSpaceSize = 0;
        goto LABEL_5;
      }
    }
    return (unsigned int)-1073741246;
  }
  v12 = (const void *)(a1 + 8);
LABEL_5:
  v13 = *(unsigned int *)(a1 + 4);
  if ( a5 && (unsigned int)v13 > *a5 )
    return (unsigned int)-1073739516;
  v14 = (__int64)a6;
  v15 = (void *)(*a6)((unsigned int)v13);
  if ( !v15 )
    return (unsigned int)-1073741670;
  v16 = *(_BYTE *)(a1 + 3) & 0x7F;
  v17 = v16;
  if ( !v16 )
  {
    if ( v11 == (_DWORD)v13 )
    {
      memmove(v15, v12, v13);
      v25 = v13;
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
    if ( CompressFragmentWorkSpaceSize && (v8 = (*(__int64 (**)(void))v14)()) == 0 )
    {
      CompressionWorkSpaceSize = -1073741670;
    }
    else
    {
      CompressionWorkSpaceSize = RtlDecompressBufferEx(v17, (_DWORD)v15, v13, (_DWORD)v12, v11, (__int64)&v25, v8);
      if ( CompressionWorkSpaceSize >= 0 )
      {
        if ( (_DWORD)v13 == v25 )
        {
          CompressionWorkSpaceSize = 0;
LABEL_15:
          *v26 = v15;
          *v27 = v13;
          goto LABEL_16;
        }
LABEL_29:
        CompressionWorkSpaceSize = -1073741246;
      }
    }
  }
  (*(void (__fastcall **)(void *))(v14 + 8))(v15);
LABEL_16:
  if ( v8 )
    (*(void (__fastcall **)(__int64))(v14 + 8))(v8);
  return (unsigned int)CompressionWorkSpaceSize;
}
