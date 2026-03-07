__int64 __fastcall OffTransparentBlt(
        __int64 (__fastcall *a1)(__int64, __int64, struct _CLIPOBJ *, __int64, __int128 *, __int128 *, int, int),
        int *a2,
        __int64 a3,
        int *a4,
        __int64 a5,
        struct _CLIPOBJ *a6,
        __int64 a7,
        __int128 *a8,
        __int128 *a9,
        int a10,
        int a11)
{
  int v11; // r14d
  int v12; // esi
  __int128 *v13; // rdi
  __int128 *v14; // rbx
  int v15; // r15d
  int v16; // r12d
  unsigned int v17; // ebx
  __int128 v21; // [rsp+70h] [rbp-31h] BYREF
  __int128 v22; // [rsp+80h] [rbp-21h] BYREF

  v11 = a2[1];
  v12 = *a2;
  v13 = a8;
  v14 = a9;
  v15 = *a4;
  v16 = a4[1];
  CLIPOBJ_vOffset(a6, *a2, v11);
  v21 = 0LL;
  if ( a8 )
  {
    LODWORD(v21) = v12 + *(_DWORD *)a8;
    DWORD2(v21) = v12 + *((_DWORD *)a8 + 2);
    DWORD1(v21) = v11 + *((_DWORD *)a8 + 1);
    v13 = &v21;
    HIDWORD(v21) = v11 + *((_DWORD *)a8 + 3);
  }
  v22 = 0LL;
  if ( a9 )
  {
    LODWORD(v22) = v15 + *(_DWORD *)a9;
    DWORD2(v22) = v15 + *((_DWORD *)a9 + 2);
    DWORD1(v22) = v16 + *((_DWORD *)a9 + 1);
    v14 = &v22;
    HIDWORD(v22) = v16 + *((_DWORD *)a9 + 3);
  }
  v17 = a1(a3, a5, a6, a7, v13, v14, a10, a11);
  CLIPOBJ_vOffset(a6, -v12, -v11);
  return v17;
}
