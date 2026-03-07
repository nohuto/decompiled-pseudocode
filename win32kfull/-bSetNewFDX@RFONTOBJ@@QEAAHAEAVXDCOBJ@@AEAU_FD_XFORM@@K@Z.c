__int64 __fastcall RFONTOBJ::bSetNewFDX(RFONTOBJ *this, struct XDCOBJ *a2, struct _FD_XFORM *a3, unsigned int a4)
{
  Gre::Base *v8; // rcx
  __int64 v9; // r10
  int v10; // r15d
  __int64 v11; // rbx
  Gre::Base *v12; // rcx
  unsigned int v13; // esi
  struct LFONT *v14; // rbx
  struct PFE *v16; // [rsp+60h] [rbp-19h]
  struct LFONT *v17; // [rsp+68h] [rbp-11h] BYREF
  struct _POINTL v18; // [rsp+70h] [rbp-9h] BYREF
  _BYTE v19[16]; // [rsp+78h] [rbp-1h] BYREF
  __int64 v20; // [rsp+88h] [rbp+Fh] BYREF
  int v21; // [rsp+98h] [rbp+1Fh]
  unsigned int v22; // [rsp+E0h] [rbp+67h]
  __int64 v23; // [rsp+E8h] [rbp+6Fh] BYREF

  v23 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v19, a2, 516);
  v9 = *(_QWORD *)this;
  v22 = *(_DWORD *)(*(_QWORD *)this + 40LL);
  v10 = *(_DWORD *)(*(_QWORD *)this + 12LL) & 0x3001E000;
  v18 = *(struct _POINTL *)(*(_QWORD *)this + 648LL);
  v16 = *(struct PFE **)(v9 + 120);
  if ( v9 )
    RFONTOBJ::vReleaseCache(this);
  v17 = (struct LFONT *)*((_QWORD *)Gre::Base::Globals(v8) + 6);
  GreAcquireSemaphore(v17);
  v20 = *(_QWORD *)(*(_QWORD *)this + 128LL);
  v11 = v20;
  Gre::Base::Globals(v12);
  v13 = 1;
  ++*(_DWORD *)(v11 + 68);
  v21 = 0;
  SEMOBJ::vUnlock((SEMOBJ *)&v17);
  *(_QWORD *)this = 0LL;
  if ( (unsigned int)RFONTOBJ::bFindRFONT(
                       this,
                       a3,
                       v10,
                       v22,
                       (struct PDEVOBJ *)&v23,
                       (struct EXFORMOBJ *)v19,
                       v16,
                       0,
                       *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 208LL),
                       0,
                       a4) )
  {
    GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 504LL));
LABEL_10:
    PFFREFOBJ::~PFFREFOBJ((PFFREFOBJ *)&v20);
    return v13;
  }
  LFONTOBJ::LFONTOBJ(
    (LFONTOBJ *)&v17,
    *(struct HLFONT__ **)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 296LL),
    (struct PDEVOBJ *)&v23);
  v14 = v17;
  if ( !v17
    || !(unsigned int)RFONTOBJ::bRealizeFont(
                        this,
                        a2,
                        (struct PDEVOBJ *)&v23,
                        (struct tagENUMLOGFONTEXDVW *)((char *)v17 + 276),
                        v16,
                        a3,
                        &v18,
                        v10,
                        v22,
                        0,
                        0,
                        a4) )
  {
    *(_QWORD *)this = 0LL;
    LFONTOBJ::~LFONTOBJ(&v17);
    v13 = 0;
    goto LABEL_10;
  }
  GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 504LL));
  if ( v14 )
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v14);
  return v13;
}
