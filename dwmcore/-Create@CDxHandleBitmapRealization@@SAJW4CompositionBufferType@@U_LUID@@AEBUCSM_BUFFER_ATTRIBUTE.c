__int64 __fastcall CDxHandleBitmapRealization::Create(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        _QWORD *a6)
{
  LPVOID v10; // rax
  unsigned int v11; // ecx
  __int64 v12; // rax
  CDxHandleBitmapRealization *v13; // rbx
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // edi
  void *v18; // [rsp+28h] [rbp-30h]

  v10 = operator new(0x1F8uLL);
  if ( !v10 )
  {
    v13 = 0LL;
    goto LABEL_10;
  }
  LOBYTE(v18) = a5;
  v12 = CDxHandleBitmapRealization::CDxHandleBitmapRealization((__int64)v10, a1, a2, a3, a4, (__int64)v18, 1, 0LL, 1);
  v13 = (CDxHandleBitmapRealization *)v12;
  if ( !v12 )
  {
LABEL_10:
    v16 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024882, 0x1Eu, 0LL);
    goto LABEL_6;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  v14 = CDxHandleBitmapRealization::Initialize(v13);
  v16 = v14;
  if ( v14 >= 0 )
  {
    *a6 = (char *)v13 + 360;
    return v16;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x1Fu, 0LL);
  *((_QWORD *)v13 + 31) = 0LL;
LABEL_6:
  *a6 = 0LL;
  if ( v13 )
    (*(void (__fastcall **)(CDxHandleBitmapRealization *))(*(_QWORD *)v13 + 16LL))(v13);
  return v16;
}
