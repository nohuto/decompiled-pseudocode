_BOOL8 __fastcall DEVICE_PFTOBJ::bLoadFonts(DEVICE_PFTOBJ *this, struct PDEVOBJ *a2)
{
  Gre::Base *v4; // rcx
  BOOL v6; // r13d
  HDEV v7; // rsi
  struct PFT *v8; // rdi
  struct DHPDEV__ *v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdx
  struct PFF **v13; // rdx
  size_t Size; // [rsp+30h] [rbp-59h]
  struct Gre::Base::SESSION_GLOBALS *v15; // [rsp+90h] [rbp+7h]
  _QWORD v16[9]; // [rsp+98h] [rbp+Fh] BYREF
  struct PFF **v17; // [rsp+100h] [rbp+77h] BYREF
  __int64 v18; // [rsp+108h] [rbp+7Fh] BYREF

  v17 = 0LL;
  if ( ScrutinizeFontLoad(3u, 0LL) < 0 )
    return 1LL;
  v15 = Gre::Base::Globals(v4);
  v18 = *((_QWORD *)v15 + 6);
  GreAcquireSemaphore(v18);
  v6 = DEVICE_PFTOBJ::pPFFGet(this, *(_QWORD *)a2, &v17) != 0LL;
  SEMOBJ::vUnlock((SEMOBJ *)&v18);
  if ( !v6 )
  {
    v7 = *(HDEV *)a2;
    v8 = *(struct PFT **)this;
    v18 = 0LL;
    v9 = (struct DHPDEV__ *)*((_QWORD *)v7 + 221);
    v10 = PDEVOBJ::cFonts(a2);
    LODWORD(Size) = 0;
    PFFMEMOBJ::PFFMEMOBJ(
      (PFFMEMOBJ *)v16,
      v10,
      0LL,
      0,
      0,
      0LL,
      Size,
      0LL,
      v7,
      v9,
      v8,
      0,
      0,
      (struct _FNTCHECKSUM *)&v18,
      0LL,
      0LL,
      0);
    if ( v16[0] && (unsigned int)PFFMEMOBJ::bLoadDeviceFontTable((PFFMEMOBJ *)v16, a2) )
    {
      v18 = *((_QWORD *)v15 + 6);
      GreAcquireSemaphore(v18);
      if ( !DEVICE_PFTOBJ::pPFFGet(this, *(_QWORD *)a2, &v17) )
      {
        if ( (unsigned int)PFFOBJ::bAddHash((PFFOBJ *)v16, 0) )
        {
          v11 = v16[0];
          v12 = *(_QWORD *)this;
          if ( (*(_DWORD *)(v16[0] + 52LL) & 0x200) == 0 )
            ++*(_DWORD *)(v12 + 32);
          ++*(_DWORD *)(v12 + 28);
          v13 = v17;
          if ( *v17 )
            *((_QWORD *)*v17 + 2) = v11;
          *(_QWORD *)(v11 + 8) = *v13;
          *(_QWORD *)(v11 + 16) = 0LL;
          *v13 = (struct PFF *)v11;
          PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v16);
          v6 = 1;
        }
        else
        {
          PFFOBJ::vRemoveHash((PFFOBJ *)v16);
        }
      }
      SEMOBJ::vUnlock((SEMOBJ *)&v18);
    }
    PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v16);
  }
  return v6;
}
