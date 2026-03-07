__int64 __fastcall MULTISURF::bCreateDIB(MULTISURF *this)
{
  __int64 v1; // rdi
  __int64 v3; // rbx
  int v4; // eax
  __int64 *v5; // rax
  void (__fastcall *v6)(__int64, __int64, _QWORD, _QWORD, __int64 *, __int64 *); // rax
  _DWORD *v7; // rdx
  __int64 result; // rax
  _DWORD v9[4]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v10; // [rsp+70h] [rbp+7h]
  int v11; // [rsp+78h] [rbp+Fh]
  int v12; // [rsp+7Ch] [rbp+13h]
  __int64 v13; // [rsp+80h] [rbp+17h] BYREF
  int v14; // [rsp+88h] [rbp+1Fh]
  int v15; // [rsp+8Ch] [rbp+23h]
  __int64 v16; // [rsp+90h] [rbp+27h] BYREF
  int v17; // [rsp+98h] [rbp+2Fh]
  int v18; // [rsp+9Ch] [rbp+33h]

  v1 = *(_QWORD *)this;
  v3 = *(_QWORD *)(*(_QWORD *)this + 48LL);
  v4 = *(_DWORD *)(*(_QWORD *)this + 56LL);
  v15 = *(_DWORD *)(*(_QWORD *)this + 60LL);
  v13 = 0LL;
  v14 = v4;
  ERECTL::operator*=((int *)&v13, (int *)this + 2);
  v17 = v14 - v13;
  v16 = 0LL;
  v18 = v15 - HIDWORD(v13);
  v9[3] = 0;
  v12 = 0;
  v9[0] = *(_DWORD *)(v1 + 96);
  v9[1] = v14 - v13;
  v9[2] = v15 - HIDWORD(v13);
  v5 = *(__int64 **)(v1 + 128);
  if ( v5 )
    v10 = *v5;
  else
    v10 = 0LL;
  v11 = 1;
  if ( !SURFMEM::bCreateDIB(
          (MULTISURF *)((char *)this + 40),
          (struct _DEVBITMAPINFO *)v9,
          0LL,
          0LL,
          0,
          0LL,
          0LL,
          0,
          1,
          0,
          0) )
    return 0LL;
  v6 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64 *, __int64 *))(v3 + 2816);
  if ( !v6 )
    return 0LL;
  v6(
    (*((_QWORD *)this + 5) + 24LL) & -(__int64)(*((_QWORD *)this + 5) != 0LL),
    *(_QWORD *)this + 24LL,
    0LL,
    0LL,
    &v16,
    &v13);
  v7 = (_DWORD *)*((_QWORD *)this + 12);
  result = 1LL;
  *((_DWORD *)this + 14) = *v7 - v13;
  *((_DWORD *)this + 15) = v7[1] - HIDWORD(v13);
  *((_DWORD *)this + 16) = v7[2] - v13;
  *((_DWORD *)this + 17) = v7[3] - HIDWORD(v13);
  return result;
}
