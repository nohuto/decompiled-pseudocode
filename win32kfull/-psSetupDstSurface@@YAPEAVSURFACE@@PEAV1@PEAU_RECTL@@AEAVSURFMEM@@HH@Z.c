struct SURFACE *__fastcall psSetupDstSurface(__int64 **a1, struct _RECTL *a2, struct SURFMEM *a3, int a4, int a5)
{
  int v6; // r15d
  int v8; // r12d
  struct SURFACE *v9; // rdi
  __int64 *v11; // rax
  __int64 *v12; // rbx
  int v13; // ecx
  Gre::Base *v14; // rcx
  struct Gre::Base::SESSION_GLOBALS *v15; // r9
  int v16; // eax
  _DWORD v17[2]; // [rsp+60h] [rbp-21h] BYREF
  _DWORD v18[4]; // [rsp+68h] [rbp-19h] BYREF
  __int64 v19; // [rsp+78h] [rbp-9h]
  int v20; // [rsp+80h] [rbp-1h]
  int v21; // [rsp+84h] [rbp+3h]
  struct _RECTL v22; // [rsp+88h] [rbp+7h] BYREF

  v6 = a2->right - a2->left;
  v8 = a2->bottom - a2->top;
  v9 = (struct SURFACE *)a1;
  if ( !a1 )
    return 0LL;
  if ( a4 || *((_WORD *)a1 + 50) )
  {
    v11 = a1[16];
    v12 = a1[6];
    v18[0] = *((_DWORD *)a1 + 24);
    v13 = (_DWORD)a1[14] & 0x40000;
    v18[3] = 0;
    v21 = 0;
    v18[1] = v6;
    v18[2] = v8;
    v20 = v13;
    v19 = 0LL;
    if ( v11 )
      v19 = *v11;
    if ( SURFMEM::bCreateDIB(a3, (struct _DEVBITMAPINFO *)v18, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0)
      && ((SURFACE::hdev(*(SURFACE **)a3, *((HDEV *)v9 + 6)),
           *(_QWORD *)&v22.left = 0LL,
           *(_QWORD *)&v22.right = __PAIR64__(v8, v6),
           !a5)
       || ((v17[0] = a2->left, v17[1] = a2->top, v15 = Gre::Base::Globals(v14), (*((_DWORD *)v9 + 28) & 0x400) == 0)
         ? (v16 = ((__int64 (__fastcall *)(__int64, char *, _QWORD, char *, struct _RECTL *, _DWORD *))EngCopyBits)(
                    (*(_QWORD *)a3 + 24LL) & -(__int64)(*(_QWORD *)a3 != 0LL),
                    (char *)v9 + 24,
                    0LL,
                    (char *)v15 + 6896,
                    &v22,
                    v17))
         : (v16 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, struct _RECTL *, _DWORD *))v12[352])(
                    (*(_QWORD *)a3 + 24LL) & -(__int64)(*(_QWORD *)a3 != 0LL),
                    (__int64)v9 + 24,
                    0LL,
                    (__int64)v15 + 6896,
                    &v22,
                    v17)),
           v16)) )
    {
      *a2 = v22;
      return *(struct SURFACE **)a3;
    }
    else
    {
      return 0LL;
    }
  }
  return v9;
}
