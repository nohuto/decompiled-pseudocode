__int64 __fastcall OffTextOut(
        __int64 (__fastcall *a1)(__int64, struct _STROBJ *, __int64, struct _CLIPOBJ *, __int64, __int128 *, __int64, __int64, __int64, int),
        int *a2,
        __int64 a3,
        struct _STROBJ *a4,
        __int64 a5,
        struct _CLIPOBJ *a6,
        __int64 a7,
        __int128 *a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        int a12)
{
  __int128 *v12; // rbx
  int v16; // edi
  int v17; // esi
  int v18; // esi
  int v19; // edi
  unsigned int v20; // ebx
  __int128 v22; // [rsp+80h] [rbp-68h] BYREF

  v12 = a8;
  v16 = *a2;
  v17 = a2[1];
  v22 = 0LL;
  if ( a8 )
  {
    LODWORD(v22) = v16 + *(_DWORD *)a8;
    DWORD2(v22) = v16 + *((_DWORD *)a8 + 2);
    DWORD1(v22) = v17 + *((_DWORD *)a8 + 1);
    v12 = &v22;
    HIDWORD(v22) = v17 + *((_DWORD *)a8 + 3);
  }
  STROBJ_vOffset(a4, v16, v17);
  CLIPOBJ_vOffset(a6, v16, v17);
  v18 = -v17;
  v19 = -v16;
  v20 = a1(a3, a4, a5, a6, a7, v12, a9, a10, a11, a12);
  STROBJ_vOffset(a4, v19, v18);
  CLIPOBJ_vOffset(a6, v19, v18);
  return v20;
}
