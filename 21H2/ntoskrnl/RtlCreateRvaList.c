/*
 * XREFs of RtlCreateRvaList @ 0x1406C200C
 * Callers:
 *     MiParseImageLoadConfig @ 0x1406C14D8 (MiParseImageLoadConfig.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     RtlpCompressRvaList @ 0x140701240 (RtlpCompressRvaList.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall RtlCreateRvaList(
        int a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        void *Src,
        size_t Size,
        __int64 **a7)
{
  __int64 v7; // r14
  __int64 *v9; // rbx
  int v10; // edi
  __int64 v11; // rbp
  unsigned __int64 v12; // rdi
  __int64 v13; // rsi
  unsigned __int64 v14; // r12
  __int64 *PoolWithTag; // rax
  size_t v16; // r8
  char *v17; // rsi
  int v18; // r8d
  int v19; // r9d
  const void *v20; // rdx
  char *v21; // rsi
  __int64 v23; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v24; // [rsp+90h] [rbp+18h] BYREF
  int v25; // [rsp+94h] [rbp+1Ch]

  v25 = HIDWORD(a3);
  v7 = a4;
  v24 = 0;
  v23 = 0LL;
  v9 = 0LL;
  v10 = RtlpCompressRvaList(0, a1, a3, a4, 0LL, (__int64)&v23, (__int64)&v24);
  if ( v10 >= 0 )
  {
    v11 = v24;
    if ( (unsigned int)v7 <= 1 )
      v12 = 0LL;
    else
      v12 = (((unsigned __int64)((unsigned int)v7 * v24) + 63) >> 3) & 0x1FFFFFFFFFFFFFF8LL;
    v13 = v23;
    v14 = (v23 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    Size = v12 + 4 * v7 + v14;
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, Size + 64, 0x4C617652u);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      v16 = Size;
      PoolWithTag[3] = v13;
      v17 = (char *)(PoolWithTag + 8);
      *PoolWithTag = v11;
      *((_DWORD *)PoolWithTag + 2) = v7;
      PoolWithTag[2] = (__int64)(PoolWithTag + 8);
      memset(PoolWithTag + 8, 0, v16);
      v20 = Src;
      v21 = &v17[v14];
      if ( Src )
      {
        v9[6] = (__int64)v21;
        memmove(v21, v20, 4 * v7);
        v21 += 4 * v7;
      }
      if ( v12 )
      {
        v9[5] = (__int64)v21;
        v9[4] = (unsigned int)(v7 * v11);
      }
      v10 = RtlpCompressRvaList((_DWORD)v9, a1, v18, v19, v9[2], (__int64)&v23, (__int64)&v24);
      if ( v10 < 0 )
      {
        ExFreePoolWithTag(v9, 0x4C617652u);
        v9 = 0LL;
      }
    }
    else
    {
      v10 = -1073741670;
    }
  }
  *a7 = v9;
  return (unsigned int)v10;
}
