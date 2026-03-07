void __fastcall RFONTOBJ::vInit(RFONTOBJ *this, struct XDCOBJ *a2, struct PFE *a3, struct _EUDCLOGFONT *a4)
{
  __int64 v5; // rdx
  __int64 v9; // rbx
  __int64 v10; // r13
  int v11; // r9d
  int v12; // r8d
  unsigned int v13; // esi
  unsigned int v14; // r10d
  int v15; // ecx
  int v16; // eax
  size_t v17; // r15
  unsigned int v18; // eax
  PFEOBJ *v19; // rcx
  Gre::Base *v20; // rcx
  float v21; // xmm2_4
  struct PFE *v22; // r15
  __int64 v23; // rdi
  Gre::Base *v24; // rcx
  __int64 v25; // rcx
  unsigned int v26; // edi
  unsigned int v27; // [rsp+28h] [rbp-D8h]
  __int64 v28; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+68h] [rbp-98h] BYREF
  int v30; // [rsp+70h] [rbp-90h]
  struct _POINTL v31; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v32[2]; // [rsp+80h] [rbp-80h] BYREF
  struct PFE *v33; // [rsp+90h] [rbp-70h]
  __int64 v34; // [rsp+98h] [rbp-68h] BYREF
  int v35; // [rsp+A4h] [rbp-5Ch]
  __int64 v36; // [rsp+A8h] [rbp-58h] BYREF
  int v37; // [rsp+B8h] [rbp-48h]
  _FD_XFORM v38; // [rsp+C0h] [rbp-40h] BYREF
  struct tagENUMLOGFONTEXDVW v39; // [rsp+D0h] [rbp-30h] BYREF

  v33 = a3;
  v5 = *(_QWORD *)a2;
  v30 = *(_DWORD *)(v5 + 248) & 1;
  v28 = *(_QWORD *)(v5 + 48);
  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v29, *(struct HLFONT__ **)(v5 + 1744), (struct PDEVOBJ *)&v28);
  v9 = v29;
  if ( !v29 )
    goto LABEL_30;
  v10 = *((_QWORD *)a3 + 4);
  v11 = 0;
  v12 = *((_DWORD *)a4 + 1);
  v32[0] = v10;
  v13 = 0;
  if ( ((v12 & 0x4000) != 0 || (*(_DWORD *)a4 & 1) != 0)
    && (*(_BYTE *)(v10 + 52) & 1) == 0
    && *(_BYTE *)(v29 + 296)
    && (unsigned int)IFIOBJ::bSimItalic((IFIOBJ *)v32) )
  {
    v13 = v14;
  }
  if ( ((*(_DWORD *)(v28 + 40) & 1) != 0 || *((_DWORD *)a4 + 6) != v11)
    && ((*(_BYTE *)a4 & 0x20) != 0 || (v12 & 0x2000) != 0) )
  {
    v15 = 400;
    if ( *(_DWORD *)(v9 + 292) )
      v15 = *(_DWORD *)(v9 + 292);
    v13 |= ((*(unsigned __int16 *)(v10 + 46) - v15) >> 31) & 0x2000;
  }
  v16 = *(_DWORD *)(v10 + 48);
  if ( (v16 & 1) != 0 && *(_DWORD *)(v9 + 276) <= v11 )
    v13 |= 0x8000u;
  if ( (v12 & 0x10000) != 0 && (v16 & 0x40) != 0 )
    v13 |= v12 & 0x10010000;
  v17 = 420LL;
  memset_0(&v39, 0, sizeof(v39));
  v18 = *(_DWORD *)(v9 + 272);
  if ( v18 < 0x1A4 )
    v17 = v18;
  memmove(&v39, (const void *)(v9 + 276), v17);
  v39.elfEnumLogfontEx.elfLogFont.lfHeight = *((_DWORD *)a4 + 3);
  v39.elfEnumLogfontEx.elfLogFont.lfWidth = *((_DWORD *)a4 + 2);
  v39.elfEnumLogfontEx.elfLogFont.lfOrientation = *((_DWORD *)a4 + 5);
  v39.elfEnumLogfontEx.elfLogFont.lfEscapement = *((_DWORD *)a4 + 4);
  v38 = 0LL;
  if ( (*(_DWORD *)(v10 + 48) & 0x3000010) == 0 )
    goto LABEL_30;
  v31.x = 1;
  v31.y = 1;
  if ( (unsigned int)PFEOBJ::bSetFontXform(
                       v19,
                       a2,
                       &v39.elfEnumLogfontEx.elfLogFont,
                       &v38,
                       0,
                       v27,
                       &v31,
                       (struct IFIOBJ *)v32,
                       1) )
  {
    v21 = *((float *)a4 + 7);
    v38.eXX = v38.eXX * v21;
    v38.eXY = v38.eXY * v21;
    v32[0] = *((_QWORD *)Gre::Base::Globals(v20) + 6);
    GreAcquireSemaphore(v32[0]);
    v22 = v33;
    v36 = *(_QWORD *)v33;
    v23 = v36;
    Gre::Base::Globals(v24);
    ++*(_DWORD *)(v23 + 68);
    v37 = 0;
    SEMOBJ::vUnlock((SEMOBJ *)v32);
    v25 = *(_QWORD *)a2;
    v26 = v30;
    v35 = 0;
    v34 = v25 + 320;
    if ( (unsigned int)RFONTOBJ::bFindRFONT(
                         this,
                         &v38,
                         v13,
                         0,
                         (struct PDEVOBJ *)&v28,
                         (struct EXFORMOBJ *)&v34,
                         v22,
                         v30,
                         *(_DWORD *)(*(_QWORD *)(v25 + 976) + 208LL),
                         0,
                         2u) )
    {
      GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 504LL));
      *(_DWORD *)(*(_QWORD *)a2 + 252LL) &= ~1u;
    }
    else
    {
      if ( (unsigned int)RFONTOBJ::bRealizeFont(
                           this,
                           a2,
                           (struct PDEVOBJ *)&v28,
                           &v39,
                           v22,
                           &v38,
                           &v31,
                           v13,
                           0,
                           v26,
                           0,
                           2u) )
      {
        GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 504LL));
        *(_DWORD *)(*(_QWORD *)a2 + 252LL) &= ~1u;
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v9);
        return;
      }
      *(_QWORD *)this = 0LL;
    }
    PFFREFOBJ::~PFFREFOBJ((PFFREFOBJ *)&v36);
  }
  else
  {
LABEL_30:
    *(_QWORD *)this = 0LL;
  }
  LFONTOBJ::~LFONTOBJ((LFONTOBJ *)&v29);
}
