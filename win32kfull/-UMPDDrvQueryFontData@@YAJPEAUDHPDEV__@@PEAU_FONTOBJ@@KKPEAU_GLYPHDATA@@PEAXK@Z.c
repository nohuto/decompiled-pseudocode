__int64 __fastcall UMPDDrvQueryFontData(
        struct DHPDEV__ *a1,
        struct _FONTOBJ *a2,
        int a3,
        int a4,
        struct _GLYPHDATA *a5,
        unsigned __int64 a6,
        size_t Size)
{
  struct UMPDOBJ *v9; // rbx
  void *v10; // r14
  int v11; // eax
  unsigned int v12; // r15d
  char *KernelPtr; // rax
  size_t v15; // [rsp+20h] [rbp-91h]
  struct _FONTOBJ *v16; // [rsp+30h] [rbp-81h] BYREF
  unsigned int v17; // [rsp+38h] [rbp-79h] BYREF
  int v18; // [rsp+3Ch] [rbp-75h]
  struct UMPDOBJ *v19[2]; // [rsp+40h] [rbp-71h] BYREF
  _DWORD v20[2]; // [rsp+50h] [rbp-61h] BYREF
  __int64 v21; // [rsp+58h] [rbp-59h]
  __int64 v22; // [rsp+60h] [rbp-51h]
  struct DHPDEV__ *v23; // [rsp+68h] [rbp-49h]
  struct _FONTOBJ *v24; // [rsp+70h] [rbp-41h] BYREF
  int v25; // [rsp+78h] [rbp-39h]
  int v26; // [rsp+7Ch] [rbp-35h]
  void *v27; // [rsp+80h] [rbp-31h] BYREF
  void *v28; // [rsp+88h] [rbp-29h] BYREF
  int v29; // [rsp+90h] [rbp-21h]
  int v30; // [rsp+94h] [rbp-1Dh]

  v21 = 0LL;
  v30 = 0;
  v17 = 0;
  LODWORD(v16) = a4;
  v18 = a3;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)v19);
  v9 = v19[0];
  v21 = 0LL;
  v30 = 0;
  if ( !v19[0] )
    goto LABEL_12;
  v20[0] = 72;
  v20[1] = 28;
  v22 = *(_QWORD *)v19[0];
  v23 = a1;
  v25 = v18;
  v10 = (void *)(a6 & -(__int64)((_DWORD)Size != 0));
  v28 = v10;
  v24 = a2;
  v26 = (int)v16;
  v27 = a5;
  v29 = Size;
  if ( !(unsigned int)UMPDOBJ::ThunkMemBlock(v19[0], (const void **)&v27, 0x40u) )
    goto LABEL_12;
  if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v9, (const void **)&v28, Size)
    && (unsigned int)UMPDOBJ::pfo(v9, (__m128i **)&v24) )
  {
    v16 = a2;
    UMPDReleaseRFONTSem((struct RFONTOBJ *)&v16, v9, 0LL, 0LL, 0LL);
    LODWORD(v15) = 4;
    v11 = UMPDOBJ::Thunk(v9, v20, 0x48u, &v17, v15);
    v12 = v17;
    if ( v11 == -1 )
      v12 = -1;
    UMPDAcquireRFONTSem((struct RFONTOBJ *)&v16, v9, 0, 0, 0LL);
    v16 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v16);
    if ( v12 != -1 )
    {
      if ( v10 )
      {
        KernelPtr = UMPDOBJ::GetKernelPtr((char **)v9, (char *)v28);
        memmove(v10, KernelPtr, (unsigned int)Size);
      }
      if ( a5 )
        *a5 = *(struct _GLYPHDATA *)UMPDOBJ::GetKernelPtr((char **)v9, (char *)v27);
    }
  }
  else
  {
LABEL_12:
    v12 = -1;
  }
  XUMPDOBJ::~XUMPDOBJ(v19);
  return v12;
}
