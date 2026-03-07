__int64 __fastcall MiFillPerSessionProtos(
        __int64 *a1,
        __int64 a2,
        __int64 *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        __int128 *a8,
        __int128 *a9)
{
  __int64 *v9; // r15
  unsigned int v11; // r14d
  __int64 v12; // r11
  __int64 v14; // r8
  _QWORD *v15; // r13
  __int64 DriverPage; // rsi
  int v17; // r9d
  unsigned int NextPageColor; // edi
  unsigned int i; // edx
  __int128 *v20; // rdi
  int v21; // eax
  unsigned __int64 v22; // rdi
  __int64 v23; // r8
  int v24; // eax
  int v25; // [rsp+28h] [rbp-70h]
  int v26; // [rsp+40h] [rbp-58h]
  unsigned int v27; // [rsp+44h] [rbp-54h]
  unsigned __int64 v28; // [rsp+48h] [rbp-50h]
  __int64 ControlAreaPartition; // [rsp+50h] [rbp-48h]
  __int128 v30; // [rsp+58h] [rbp-40h] BYREF
  __int64 v32; // [rsp+A8h] [rbp+10h]

  v26 = 0;
  v9 = 0LL;
  v27 = 0;
  v11 = a4;
  v12 = (__int64)a1;
  v30 = 0LL;
  if ( !a8 )
  {
    if ( a7 )
    {
      v27 = a4;
      v9 = (__int64 *)MiReservePtes((__int64)&qword_140C695C0, a4);
      if ( !v9 )
        return 3221225626LL;
    }
    MiInitializePageColorBase(0LL, 0, (__int64)&v30);
  }
  ControlAreaPartition = MiGetControlAreaPartition(v12);
  v15 = (_QWORD *)ControlAreaPartition;
  if ( v11 )
  {
    v32 = v14 - (_QWORD)a3;
    while ( 1 )
    {
      if ( a8 )
      {
        DriverPage = MiAllocateDriverPage((__int64)v15, a5, 0);
      }
      else
      {
        NextPageColor = MiGetNextPageColor((__int64)&v30);
        for ( i = NextPageColor; ; i = NextPageColor )
        {
          DriverPage = MiGetPage((__int64)v15, i, 0);
          if ( DriverPage != -1 )
            break;
          MiWaitForFreePage(v15);
        }
      }
      MiInitializeProtoPfn(DriverPage, (__int64 *)((char *)a3 + v32), a5, v17);
      if ( !a8 )
        break;
      v20 = a9;
      v21 = KeCopyPrivilegedPage(DriverPage, a9, *a3, a8, 0LL, 0);
      if ( v21 < 0 )
        KeBugCheckEx(0x1Au, 0x5150AuLL, *a3, DriverPage, v21);
      MiMarkPfnVerified(48 * DriverPage - 0x220000000000LL, 0);
LABEL_29:
      ++a6;
      ++a3;
      --v11;
      if ( a8 )
      {
        *(_QWORD *)a8 += 4096LL;
        *(_QWORD *)v20 += 4096LL;
      }
      if ( !v11 )
        goto LABEL_34;
      v15 = (_QWORD *)ControlAreaPartition;
    }
    MiCopyPage(DriverPage, *a3, 72);
    if ( !a7 )
    {
LABEL_28:
      MiReturnPfnReferenceCount(48 * DriverPage - 0x220000000000LL);
      v20 = a9;
      goto LABEL_29;
    }
    v28 = (unsigned __int64)&v9[v26++];
    MiMapSinglePage((__int64)(v28 << 25) >> 16, DriverPage, 0x40000000, 0);
    MiRelocateImagePfn(a1, (__int64)(v28 << 25) >> 16, a6, DriverPage, a7, v25, 37);
    v22 = ZeroPte;
    if ( MiPteInShadowRange(v28) )
    {
      if ( MiPteHasShadow() )
      {
        v24 = 1;
        if ( !HIBYTE(word_140C6697C) && (ZeroPte & 1) != 0 )
          v22 = ZeroPte | 0x8000000000000000uLL;
        goto LABEL_26;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v22 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    v24 = 0;
LABEL_26:
    *(_QWORD *)v28 = v22;
    if ( v24 )
      MiWritePteShadow(v28, v22, v23);
    goto LABEL_28;
  }
LABEL_34:
  if ( v9 )
    MiReleasePtes((__int64)&qword_140C695C0, v9, v27);
  return 0LL;
}
