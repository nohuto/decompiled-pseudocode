__int64 __fastcall PsCreateSystemThreadEx(
        __int64 a1,
        int a2,
        __int128 *a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int128 *a8,
        _DWORD *a9)
{
  __int128 *v10; // rdi
  char v14; // r15
  _KPROCESS *v15; // rbx
  int Thread; // ebx
  __int128 v18; // xmm0
  __int128 v19; // xmm0
  int v20; // eax
  __int128 v21; // xmm0
  unsigned int v22; // ebx
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  __int128 v24; // [rsp+78h] [rbp-88h] BYREF
  __m128i v25; // [rsp+88h] [rbp-78h]
  __int128 v26; // [rsp+98h] [rbp-68h]
  __int64 v27; // [rsp+A8h] [rbp-58h]
  __int64 v28; // [rsp+B0h] [rbp-50h]
  __int64 v29; // [rsp+B8h] [rbp-48h]
  __int128 v30; // [rsp+C0h] [rbp-40h] BYREF
  _OWORD v31[32]; // [rsp+D0h] [rbp-30h] BYREF

  v10 = a8;
  v29 = a5;
  v28 = a6;
  v27 = a7;
  memset(v31, 0, 0x1F5uLL);
  *(_QWORD *)&v26 = 0LL;
  Object = 0LL;
  v24 = 0LL;
  DWORD2(v26) = 0;
  v25 = 0LL;
  v30 = 0LL;
  if ( KeGetCurrentIrql() > 1u )
    KeBugCheckEx(0xC8u, ((unsigned __int64)KeGetCurrentIrql() << 16) | 4, 0LL, 0LL, 0LL);
  v14 = 0;
  if ( a4 )
  {
    Thread = ObReferenceObjectByHandleWithTag(a4, 2u, (POBJECT_TYPE)PsProcessType, 0, 0x72437350u, &Object, 0LL);
    if ( Thread < 0 )
      return (unsigned int)Thread;
    v15 = (_KPROCESS *)Object;
    v14 = 1;
  }
  else
  {
    v15 = (_KPROCESS *)*((_QWORD *)PspSystemPartition + 14);
    Object = v15;
  }
  if ( (HIDWORD(v15[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
  {
    if ( !a8 && !a9 )
    {
      v22 = (unsigned __int16)(_InterlockedExchangeAdd(&PspSystemThreadAssignment, 1u) + 1);
      v10 = &v30;
      WORD4(v30) = v22 % KeQueryActiveGroupCount();
      v15 = (_KPROCESS *)Object;
      *(_QWORD *)&v30 = qword_140D1EFE8[WORD4(v30)];
    }
    memset(v31, 0, 0x1F8uLL);
    if ( v10 )
    {
      v21 = *v10;
      v20 = 4096;
      DWORD1(v31[0]) = 4096;
      v31[20] = v21;
    }
    else
    {
      v20 = DWORD1(v31[0]);
    }
    if ( a9 )
    {
      DWORD1(v31[0]) = v20 | 0x4000;
      HIDWORD(v31[15]) = *a9;
    }
  }
  if ( a3 )
  {
    v18 = *a3;
    v25 = (__m128i)a3[1];
    v24 = v18;
    v19 = a3[2];
    v25.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v25, 8)) | 0x200;
    v26 = v19;
  }
  else
  {
    LODWORD(v24) = 48;
    v26 = 0LL;
    *((_QWORD *)&v24 + 1) = 0LL;
    v25.m128i_i32[2] = 512;
    v25.m128i_i64[0] = 0LL;
  }
  Thread = PspCreateThread(
             a1,
             a2,
             (ULONG_PTR)&v24,
             0LL,
             v15,
             (unsigned __int64)v31 & -(__int64)((HIDWORD(v15[2].Header.WaitListHead.Flink) & 0x1000) != 0),
             v29,
             0LL,
             0LL,
             0,
             v28,
             v27,
             0LL);
  if ( v14 )
    ObfDereferenceObjectWithTag(Object, 0x72437350u);
  return (unsigned int)Thread;
}
