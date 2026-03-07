__int64 __fastcall CompositionTokenObject::ObjectInit(
        struct DxgkCompositionObject *a1,
        const struct CompositionTokenInitInfo *a2,
        struct IDxgkCompositionObject **a3)
{
  struct IDxgkCompositionObject *v3; // rbx
  unsigned __int64 v5; // rax
  __int64 Pool2; // rax
  int v7; // edi

  v3 = (struct DxgkCompositionObject *)((char *)a1 + 32);
  if ( a1 )
  {
    *(_QWORD *)a1 = &SetElement::`vftable';
    *((_DWORD *)a1 + 17) = 0;
    *((_QWORD *)a1 + 9) = 0LL;
    *((_QWORD *)a1 + 10) = 0LL;
    *((_QWORD *)a1 + 11) = 0LL;
    *((_DWORD *)a1 + 24) = 0;
    *((_QWORD *)a1 + 13) = 0LL;
    *((_DWORD *)a1 + 28) = 0;
    *(_QWORD *)v3 = &CCompositionToken::`vftable'{for `IDxgkCompositionObject'};
    *((_QWORD *)a1 + 5) = &CCompositionToken::`vftable'{for `CTokenBase'};
    *((_DWORD *)a1 + 16) = 6;
  }
  *a3 = v3;
  *((_DWORD *)a1 + 16) = 0;
  v5 = 32LL * *((unsigned int *)a2 + 3);
  if ( !is_mul_ok(*((unsigned int *)a2 + 3), 0x20uLL) )
  {
    v7 = -1073741675;
LABEL_16:
    (*(void (__fastcall **)(char *))(*((_QWORD *)v3 + 1) + 56LL))((char *)v3 + 8);
    return (unsigned int)v7;
  }
  if ( !v5 )
  {
    v5 = 1LL;
    goto LABEL_6;
  }
  if ( v5 <= 0x7FFFFFFF )
  {
LABEL_6:
    Pool2 = ExAllocatePool2(256LL, v5, 1650675028LL);
    goto LABEL_7;
  }
  Pool2 = 0LL;
LABEL_7:
  v7 = 0;
  *((_QWORD *)v3 + 7) = Pool2;
  if ( !Pool2 )
    v7 = -1073741801;
  *((_DWORD *)v3 + 16) = 0;
  if ( v7 < 0 )
    goto LABEL_16;
  v7 = CCompositionToken::InitializeUpdates(v3, a2);
  if ( v7 < 0 )
    goto LABEL_16;
  *((_QWORD *)v3 + 9) = *((_QWORD *)a2 + 2);
  *((_DWORD *)v3 + 20) = *((_DWORD *)v3 + 16);
  return (unsigned int)v7;
}
