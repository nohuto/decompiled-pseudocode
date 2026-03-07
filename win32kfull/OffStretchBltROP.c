__int64 __fastcall OffStretchBltROP(
        __int64 (__fastcall *a1)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, __int64, __int64 *, __int128 *, __int128 *, __int64, int, __int64, int),
        LONG *a2,
        __int64 a3,
        int *a4,
        __int64 a5,
        __int64 a6,
        struct _CLIPOBJ *a7,
        __int64 a8,
        __int64 a9,
        __int64 *a10,
        __int128 *a11,
        __int128 *a12,
        __int64 a13,
        int a14,
        __int64 a15,
        int a16)
{
  LONG v16; // r14d
  LONG v17; // esi
  LONG v18; // edx
  __int64 *v19; // rbx
  __int128 *v20; // r15
  __int128 *v21; // rdi
  int v22; // r12d
  int v23; // r13d
  unsigned int v24; // ebx
  __int64 v26; // [rsp+70h] [rbp-81h] BYREF
  __int64 v27; // [rsp+78h] [rbp-79h]
  __int64 v28; // [rsp+80h] [rbp-71h]
  __int64 v29; // [rsp+88h] [rbp-69h]
  __int64 v30; // [rsp+90h] [rbp-61h]
  struct _CLIPOBJ *v31; // [rsp+98h] [rbp-59h]
  __int64 v32; // [rsp+A0h] [rbp-51h]
  __int64 v33; // [rsp+A8h] [rbp-49h]
  __int64 v34; // [rsp+B0h] [rbp-41h]
  __int64 (__fastcall *v35)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, __int64, __int64 *, __int128 *, __int128 *, __int64, int, __int64, int); // [rsp+B8h] [rbp-39h]
  __int128 v36; // [rsp+C0h] [rbp-31h] BYREF
  __int128 v37; // [rsp+D0h] [rbp-21h] BYREF

  v16 = a2[1];
  v17 = *a2;
  v18 = *a2;
  v19 = a10;
  v20 = a11;
  v21 = a12;
  v22 = *a4;
  v23 = a4[1];
  v35 = a1;
  v30 = a8;
  v29 = a9;
  v33 = a5;
  v28 = a13;
  v32 = a6;
  v27 = a15;
  v34 = a3;
  v31 = a7;
  CLIPOBJ_vOffset(a7, v18, v16);
  v36 = 0LL;
  if ( a11 )
  {
    LODWORD(v36) = v17 + *(_DWORD *)a11;
    DWORD2(v36) = v17 + *((_DWORD *)a11 + 2);
    DWORD1(v36) = v16 + *((_DWORD *)a11 + 1);
    v20 = &v36;
    HIDWORD(v36) = v16 + *((_DWORD *)a11 + 3);
  }
  v37 = 0LL;
  if ( a12 )
  {
    LODWORD(v37) = v22 + *(_DWORD *)a12;
    DWORD2(v37) = v22 + *((_DWORD *)a12 + 2);
    DWORD1(v37) = v23 + *((_DWORD *)a12 + 1);
    v21 = &v37;
    HIDWORD(v37) = v23 + *((_DWORD *)a12 + 3);
  }
  v26 = 0LL;
  if ( a10 )
  {
    LODWORD(v26) = v17 + *(_DWORD *)a10;
    v19 = &v26;
    HIDWORD(v26) = v16 + *((_DWORD *)a10 + 1);
  }
  v24 = v35(v34, v33, v32, v31, v30, v29, v19, v20, v21, v28, a14, v27, a16);
  CLIPOBJ_vOffset(v31, -v17, -v16);
  return v24;
}
