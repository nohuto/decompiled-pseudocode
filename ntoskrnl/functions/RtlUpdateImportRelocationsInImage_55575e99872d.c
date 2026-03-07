__int64 __fastcall RtlUpdateImportRelocationsInImage(
        unsigned __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int (*a4)(void),
        __int64 a5,
        __int64 a6,
        char a7,
        char a8)
{
  _DWORD *v11; // rsi
  int v13; // ebx
  int v14; // eax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 i; // rcx
  _DWORD *v18; // rdi
  unsigned __int64 v19; // r15
  unsigned int v20; // esi
  unsigned int *v21; // r12
  unsigned __int64 v22; // r13
  int v23; // ecx
  int v24; // ebx
  unsigned int v26; // [rsp+40h] [rbp-71h] BYREF
  unsigned __int64 v27; // [rsp+48h] [rbp-69h] BYREF
  _DWORD *Pool2; // [rsp+58h] [rbp-59h]
  __int64 v29; // [rsp+60h] [rbp-51h]
  __int128 v30; // [rsp+68h] [rbp-49h] BYREF
  __int128 v31; // [rsp+78h] [rbp-39h]
  __int128 v32; // [rsp+88h] [rbp-29h]
  __int64 v33; // [rsp+98h] [rbp-19h] BYREF
  int v34; // [rsp+A0h] [rbp-11h]
  __int16 v35; // [rsp+A4h] [rbp-Dh]

  LODWORD(v27) = 0;
  v11 = 0LL;
  v26 = 0;
  v29 = a6;
  Pool2 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v13 = RtlpCaptureRetpolineBinaryInfoForImage(a1, a2, a3, a5, a6, (__int64)&v30);
  if ( v13 < 0 )
    return (unsigned int)v13;
  if ( a7 )
  {
    if ( !DWORD2(v30) )
      return 0;
    *(_QWORD *)&v32 = a2;
    *((_QWORD *)&v31 + 1) = a1 + DWORD2(v30);
    *((_QWORD *)&v32 + 1) = a4;
  }
  else
  {
    v14 = RtlCaptureRetpolineImportRvas(a1, a2, a3, a4, 0LL, &v26);
    v13 = v14;
    if ( v14 >= 0 )
      return (unsigned int)-1073741637;
    if ( v14 != -1073741789 )
      return (unsigned int)v13;
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, v26, 1231843410LL);
    v11 = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    v13 = RtlCaptureRetpolineImportRvas(a1, a2, a3, a4, Pool2, &v26);
    if ( v13 < 0 )
      goto LABEL_22;
    *(_QWORD *)&v31 = v11;
  }
  v13 = RtlpCaptureDynamicRelocationTableRva(a1, a3, &v27);
  if ( v13 >= 0 )
  {
    v15 = a1 + (unsigned int)v27;
    v16 = *(unsigned int *)(v15 + 4) + v15 + 8;
    for ( i = v15 + 8; ; i += *(unsigned int *)(i + 8) + 12LL )
    {
      if ( i >= v16 )
      {
        v13 = -1073741637;
        goto LABEL_21;
      }
      if ( *(_QWORD *)i == 3LL )
        break;
    }
    v18 = (_DWORD *)(i + 12);
    v19 = i + 12 + *(unsigned int *)(i + 8);
    v27 = v19;
    if ( i + 12 < v19 )
    {
      v20 = a3;
      do
      {
        v21 = v18 + 2;
        v22 = (unsigned __int64)v18 + (unsigned int)v18[1];
        if ( (unsigned __int64)(v18 + 2) < v22 )
        {
          do
          {
            v23 = *v21 & 0xFFF;
            if ( !v23 && v21 != v18 + 2 )
              break;
            v24 = *v18;
            v33 = 0LL;
            v34 = 0;
            v35 = 0;
            RtlpConstructImportRelocationFixup(v24 + v23, (__int64)&v30, v29, v21, 1, a8, (__int64)&v33);
            RtlpApplyGenericRetpolineFixup(a1, v20, &v33, v24 + (*v21++ & 0xFFF));
          }
          while ( (unsigned __int64)v21 < v22 );
          v19 = v27;
        }
        v18 = (_DWORD *)((char *)v18 + (unsigned int)v18[1]);
      }
      while ( (unsigned __int64)v18 < v19 );
      v11 = Pool2;
    }
    v13 = 0;
  }
LABEL_21:
  if ( v11 )
LABEL_22:
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)v13;
}
