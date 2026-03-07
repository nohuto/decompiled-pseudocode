__int64 __fastcall PUBLIC_PFTOBJ::hLoadMemFonts(
        struct PFT **this,
        struct _FONTFILEVIEW **a2,
        struct tagDESIGNVECTOR *a3,
        unsigned int a4,
        unsigned int *a5,
        int *a6)
{
  struct _FONTFILEVIEW **v6; // rsi
  struct _FONTFILEVIEW *v7; // rdx
  __int64 v11; // r15
  unsigned int FontFile; // eax
  unsigned int v13; // r14d
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rbx
  Gre::Base *v18; // rcx
  struct PFT *v19; // rcx
  struct PFF **v20; // rcx
  size_t Size; // [rsp+30h] [rbp-E0h]
  struct PFF **v23; // [rsp+90h] [rbp-80h] BYREF
  unsigned int v24; // [rsp+98h] [rbp-78h] BYREF
  unsigned int v25; // [rsp+9Ch] [rbp-74h]
  HDEV v26; // [rsp+A0h] [rbp-70h] BYREF
  unsigned __int64 v27; // [rsp+A8h] [rbp-68h] BYREF
  int *v28; // [rsp+B0h] [rbp-60h] BYREF
  _QWORD v29[3]; // [rsp+B8h] [rbp-58h] BYREF
  void *v30; // [rsp+D0h] [rbp-40h] BYREF
  HDEV v31; // [rsp+D8h] [rbp-38h] BYREF
  wchar_t Dst[32]; // [rsp+E0h] [rbp-30h] BYREF

  v6 = a2;
  v7 = *a2;
  v28 = a6;
  v25 = a4;
  v11 = 0LL;
  v23 = 0LL;
  v30 = (void *)*((_QWORD *)v7 + 2);
  v24 = *((_DWORD *)v7 + 6);
  v27 = 0LL;
  v26 = 0LL;
  if ( ScrutinizeFontLoad(1u, 0LL) >= 0 )
  {
    vLoadFontFileView(
      0LL,
      0,
      v6,
      1u,
      &v30,
      &v24,
      a3,
      a4,
      &v27,
      (struct PDEV **)&v26,
      (struct _FNTCHECKSUM *)&v23,
      1,
      0LL);
    v31 = v26;
    if ( v27 )
    {
      FontFile = PDEVOBJ::QueryFontFile((PDEVOBJ *)&v31, v27, 2u, 0, 0LL);
      v13 = FontFile;
      v14 = FontFile - 1;
      if ( (unsigned int)v14 <= 0xFFFFFFFD )
      {
        *a5 = FontFile;
        v15 = SGDGetSessionState(v14);
        swprintf_s(
          Dst,
          0x1EuLL,
          L"MEMORY-%u",
          (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v15 + 32) + 23368LL)));
        v16 = -1LL;
        do
          ++v16;
        while ( Dst[v16] );
        LODWORD(Size) = a4;
        PFFMEMOBJ::PFFMEMOBJ(
          (PFFMEMOBJ *)v29,
          v13,
          Dst,
          v16 + 1,
          1u,
          a3,
          Size,
          v27,
          v26,
          0LL,
          *this,
          0x10u,
          0x30u,
          (struct _FNTCHECKSUM *)&v23,
          v6,
          0LL,
          0);
        v17 = v29[0];
        if ( v29[0] )
        {
          v6 = 0LL;
          *v28 = 0;
          if ( (unsigned int)PFFMEMOBJ::bLoadFontFileTable((PFFMEMOBJ *)v29, Dst, v13, 0LL, 0LL) )
          {
            v28 = (int *)*((_QWORD *)Gre::Base::Globals(v18) + 6);
            GreAcquireSemaphore(v28);
            if ( (unsigned int)PFFOBJ::bAddHash((PFFOBJ *)v29, 0) )
            {
              v23 = 0LL;
              if ( !PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)this, Dst, (int)v16 + 1, 1, a3, v25, &v23, 0) )
              {
                v19 = *this;
                if ( (*(_DWORD *)(v17 + 52) & 0x200) == 0 )
                  ++*((_DWORD *)v19 + 8);
                ++*((_DWORD *)v19 + 7);
                v20 = v23;
                if ( *v23 )
                  *((_QWORD *)*v23 + 2) = v17;
                *(_QWORD *)(v17 + 8) = *v20;
                *(_QWORD *)(v17 + 16) = 0LL;
                *v20 = (struct PFF *)v17;
                PFFOBJ::vSetUniqueness((PFFOBJ *)v29);
                PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v29);
                v11 = *(unsigned int *)(v17 + 140);
              }
            }
            else
            {
              PFFOBJ::vRemoveHash((PFFOBJ *)v29);
            }
            SEMOBJ::vUnlock((SEMOBJ *)&v28);
          }
        }
        PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v29);
      }
    }
  }
  if ( v6 )
    Win32FreePool(v6);
  return v11;
}
