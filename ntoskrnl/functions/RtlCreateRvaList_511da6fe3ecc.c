__int64 __fastcall RtlCreateRvaList(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        void *Src,
        int a6,
        __int64 *a7)
{
  __int64 v7; // r14
  __int64 v8; // rbx
  int v9; // edi
  __int64 v10; // rbp
  unsigned __int64 v11; // rdi
  __int64 v12; // rsi
  unsigned __int64 v13; // r12
  size_t v14; // r13
  __int64 Pool2; // rax
  __int64 v16; // rsi
  const void *v17; // rdx
  char *v18; // rsi
  __int64 v21; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v22; // [rsp+90h] [rbp+18h] BYREF
  int v23; // [rsp+94h] [rbp+1Ch]

  v23 = HIDWORD(a3);
  v7 = a4;
  v22 = 0;
  v21 = 0LL;
  v8 = 0LL;
  v9 = RtlpCompressRvaList(
         0LL,
         a1,
         MiImageRvaRawEnumFirst,
         (__int64 (__fastcall *)(__int64, unsigned __int32 *))MiImageRvaRawEnumNext,
         0LL,
         &v21,
         (int *)&v22);
  if ( v9 >= 0 )
  {
    v10 = v22;
    if ( (unsigned int)v7 <= 1 )
      v11 = 0LL;
    else
      v11 = (((unsigned __int64)((unsigned int)v7 * v22) + 63) >> 3) & 0x1FFFFFFFFFFFFFF8LL;
    v12 = v21;
    v13 = (v21 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    v14 = v11 + 4 * v7 + v13;
    Pool2 = ExAllocatePool2(256LL, v14 + 64, 1281455698LL);
    v8 = Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)(Pool2 + 24) = v12;
      v16 = Pool2 + 64;
      *(_QWORD *)Pool2 = v10;
      *(_DWORD *)(Pool2 + 8) = v7;
      *(_QWORD *)(Pool2 + 16) = Pool2 + 64;
      memset((void *)(Pool2 + 64), 0, v14);
      v17 = Src;
      v18 = (char *)(v13 + v16);
      if ( Src )
      {
        *(_QWORD *)(v8 + 48) = v18;
        memmove(v18, v17, 4 * v7);
        v18 += 4 * v7;
      }
      if ( v11 )
      {
        *(_QWORD *)(v8 + 40) = v18;
        *(_QWORD *)(v8 + 32) = (unsigned int)(v7 * v10);
      }
      v9 = RtlpCompressRvaList(
             v8,
             a1,
             MiImageRvaRawEnumFirst,
             (__int64 (__fastcall *)(__int64, unsigned __int32 *))MiImageRvaRawEnumNext,
             *(_DWORD **)(v8 + 16),
             &v21,
             (int *)&v22);
      if ( v9 < 0 )
      {
        ExFreePoolWithTag((PVOID)v8, 0x4C617652u);
        v8 = 0LL;
      }
    }
    else
    {
      v9 = -1073741670;
    }
  }
  *a7 = v8;
  return (unsigned int)v9;
}
