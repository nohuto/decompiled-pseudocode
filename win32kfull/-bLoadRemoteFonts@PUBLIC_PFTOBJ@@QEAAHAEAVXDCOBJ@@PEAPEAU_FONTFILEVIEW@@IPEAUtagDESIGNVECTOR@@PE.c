__int64 __fastcall PUBLIC_PFTOBJ::bLoadRemoteFonts(
        PUBLIC_PFTOBJ *this,
        struct XDCOBJ *a2,
        struct _FONTFILEVIEW **a3,
        unsigned int a4,
        struct tagDESIGNVECTOR *Src,
        struct PFF **a6,
        int *a7)
{
  unsigned int v8; // edi
  __int64 v9; // r15
  unsigned int v10; // esi
  __int64 v11; // rax
  void **v12; // rbx
  unsigned int *v13; // rdx
  unsigned int *v14; // r10
  struct _FONTFILEVIEW **v15; // r8
  __int64 v16; // r11
  __int64 v17; // rax
  unsigned int FontFile; // r12d
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rsi
  struct PFF *v22; // rbx
  struct PFF **v23; // r9
  Gre::Base *v24; // rcx
  unsigned int v25; // r8d
  PUBLIC_PFTOBJ *v26; // rsi
  __int64 v27; // rcx
  struct PFF **v28; // rcx
  size_t Size; // [rsp+30h] [rbp-E0h]
  unsigned int v31; // [rsp+90h] [rbp-80h]
  struct PFF **v32; // [rsp+98h] [rbp-78h] BYREF
  HDEV v33; // [rsp+A0h] [rbp-70h] BYREF
  unsigned __int64 v34; // [rsp+A8h] [rbp-68h] BYREF
  HDEV v35; // [rsp+B0h] [rbp-60h] BYREF
  int *v36; // [rsp+B8h] [rbp-58h] BYREF
  __int64 v37; // [rsp+C0h] [rbp-50h] BYREF
  PUBLIC_PFTOBJ *v38; // [rsp+C8h] [rbp-48h]
  struct PFF *v39[3]; // [rsp+D0h] [rbp-40h] BYREF
  XDCOBJ *v40; // [rsp+E8h] [rbp-28h]
  void *v41[2]; // [rsp+F0h] [rbp-20h] BYREF
  __int128 v42; // [rsp+100h] [rbp-10h]
  unsigned int v43; // [rsp+110h] [rbp+0h] BYREF
  wchar_t Dst[32]; // [rsp+120h] [rbp+10h] BYREF

  v32 = a6;
  v8 = 0;
  v36 = a7;
  v9 = a4;
  v40 = a2;
  v38 = this;
  v34 = 0LL;
  if ( Src )
    v10 = 4 * *((_DWORD *)Src + 1) + 8;
  else
    v10 = 0;
  v31 = v10;
  v37 = 0LL;
  *(_OWORD *)v41 = 0LL;
  v42 = 0LL;
  if ( ScrutinizeFontLoad(2u, 0LL) < 0 )
    goto LABEL_32;
  if ( (unsigned int)v9 > 4 )
  {
    if ( !(16 * (_DWORD)v9) )
      goto LABEL_32;
    v11 = Win32AllocPoolZInit((unsigned int)(16 * v9), 1986422343LL);
    v12 = (void **)v11;
    if ( !v11 )
      goto LABEL_32;
    v13 = (unsigned int *)(v11 + 32);
    goto LABEL_10;
  }
  v12 = v41;
  v13 = &v43;
  if ( (_DWORD)v9 )
  {
LABEL_10:
    v14 = v13;
    v15 = a3;
    v16 = v9;
    do
    {
      *(struct _FONTFILEVIEW **)((char *)v15 + (char *)v12 - (char *)a3) = (struct _FONTFILEVIEW *)*((_QWORD *)*v15 + 2);
      v17 = (__int64)*v15++;
      *v14++ = *(_DWORD *)(v17 + 24);
      --v16;
    }
    while ( v16 );
  }
  v33 = 0LL;
  vLoadFontFileView(0LL, 0, a3, v9, v12, v13, Src, v10, &v34, (struct PDEV **)&v33, (struct _FNTCHECKSUM *)&v37, 1, 0LL);
  v35 = v33;
  if ( v12 != v41 )
    Win32FreePool(v12);
  if ( v34 )
  {
    FontFile = PDEVOBJ::QueryFontFile((PDEVOBJ *)&v35, v34, 2u, 0, 0LL);
    v19 = FontFile - 1;
    if ( (unsigned int)v19 <= 0xFFFFFFFD )
    {
      v20 = SGDGetSessionState(v19);
      swprintf_s(
        Dst,
        0x1EuLL,
        L"REMOTE-%u",
        (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v20 + 32) + 23372LL)));
      v21 = -1LL;
      do
        ++v21;
      while ( Dst[v21] );
      LODWORD(Size) = v31;
      PFFMEMOBJ::PFFMEMOBJ(
        (PFFMEMOBJ *)v39,
        FontFile,
        Dst,
        v21 + 1,
        v9,
        Src,
        Size,
        v34,
        v33,
        0LL,
        *(struct PFT **)v38,
        0x20u,
        0x20u,
        (struct _FNTCHECKSUM *)&v37,
        a3,
        (struct _UNIVERSAL_FONT_ID *)v32,
        0);
      v22 = v39[0];
      if ( v39[0] )
      {
        v23 = v32;
        a3 = 0LL;
        *v36 = 0;
        if ( (unsigned int)PFFMEMOBJ::bLoadFontFileTable(
                             (PFFMEMOBJ *)v39,
                             Dst,
                             FontFile,
                             (struct _UNIVERSAL_FONT_ID *)v23,
                             0LL) )
        {
          v36 = (int *)*((_QWORD *)Gre::Base::Globals(v24) + 6);
          GreAcquireSemaphore(v36);
          v8 = PFFOBJ::bAddHash((PFFOBJ *)v39, 0);
          if ( v8 )
          {
            v25 = v21 + 1;
            v26 = v38;
            v32 = 0LL;
            if ( PUBLIC_PFTOBJ::pPFFGet(v38, Dst, v25, v9, Src, v31, &v32, 0) )
            {
              v8 = 0;
            }
            else
            {
              v8 = XDCOBJ::bAddRemoteFont(v40, v22);
              if ( v8 )
              {
                v27 = *(_QWORD *)v26;
                if ( (*((_DWORD *)v22 + 13) & 0x200) == 0 )
                  ++*(_DWORD *)(v27 + 32);
                ++*(_DWORD *)(v27 + 28);
                v28 = v32;
                if ( *v32 )
                  *((_QWORD *)*v32 + 2) = v22;
                *((_QWORD *)v22 + 1) = *v28;
                *((_QWORD *)v22 + 2) = 0LL;
                *v28 = v22;
                PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v39);
              }
            }
          }
          else
          {
            PFFOBJ::vRemoveHash((PFFOBJ *)v39);
          }
          SEMOBJ::vUnlock((SEMOBJ *)&v36);
        }
      }
      PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v39);
    }
  }
LABEL_32:
  if ( a3 )
    Win32FreePool(a3);
  return v8;
}
