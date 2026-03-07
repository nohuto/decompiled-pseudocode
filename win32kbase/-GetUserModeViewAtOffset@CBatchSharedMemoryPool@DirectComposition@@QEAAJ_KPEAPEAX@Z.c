__int64 __fastcall DirectComposition::CBatchSharedMemoryPool::GetUserModeViewAtOffset(
        DirectComposition::CBatchSharedMemoryPool *this,
        __int64 a2,
        void **a3)
{
  __int64 v3; // rax
  int v4; // r9d
  __int64 v8; // rax
  __int64 v10; // [rsp+50h] [rbp-18h] BYREF
  __int64 v11; // [rsp+70h] [rbp+8h] BYREF
  __int64 v12; // [rsp+88h] [rbp+20h] BYREF

  v3 = *((_QWORD *)this + 6);
  v4 = 0;
  if ( v3 )
    goto LABEL_4;
  v8 = *((_QWORD *)this + 2);
  v10 = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  v4 = MmMapViewOfSection(*((_QWORD *)this + 3), *(_QWORD *)(v8 + 16), &v11, 0LL, 4096LL, &v10, &v12, 2, 0x400000, 2);
  if ( v4 >= 0 )
  {
    v3 = v11;
    *((_QWORD *)this + 6) = v11;
LABEL_4:
    *a3 = (void *)(v3 + a2);
  }
  return (unsigned int)v4;
}
