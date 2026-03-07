__int64 __fastcall OffAlphaBlend(
        __int64 (__fastcall *a1)(__int64, __int64, struct _CLIPOBJ *, __int64, __int128 *, __int128 *, __int64),
        int *a2,
        __int64 a3,
        int *a4,
        __int64 a5,
        struct _CLIPOBJ *a6,
        __int64 a7,
        __int128 *a8,
        __int128 *a9,
        __int64 a10)
{
  int v10; // r14d
  int v11; // esi
  __int128 *v12; // rdi
  __int128 *v13; // rbx
  int v14; // r15d
  int v15; // r12d
  int v16; // r8d
  unsigned int v17; // ebx
  __int128 v21; // [rsp+68h] [rbp-29h] BYREF
  __int128 v22; // [rsp+78h] [rbp-19h] BYREF

  v10 = a2[1];
  v11 = *a2;
  v12 = a8;
  v13 = a9;
  v14 = *a4;
  v15 = a4[1];
  CLIPOBJ_vOffset(a6, *a2, v10);
  v21 = 0LL;
  if ( a8 )
  {
    LODWORD(v21) = v11 + *(_DWORD *)a8;
    DWORD2(v21) = v11 + *((_DWORD *)a8 + 2);
    DWORD1(v21) = v10 + *((_DWORD *)a8 + 1);
    v12 = &v21;
    HIDWORD(v21) = v10 + *((_DWORD *)a8 + 3);
  }
  v22 = 0LL;
  if ( a9 )
  {
    v16 = *((_DWORD *)a9 + 3);
    LODWORD(v22) = v14 + *(_DWORD *)a9;
    DWORD2(v22) = v14 + *((_DWORD *)a9 + 2);
    v13 = &v22;
    DWORD1(v22) = v15 + *((_DWORD *)a9 + 1);
    HIDWORD(v22) = v15 + v16;
  }
  v17 = a1(a3, a5, a6, a7, v12, v13, a10);
  CLIPOBJ_vOffset(a6, -v11, -v10);
  return v17;
}
