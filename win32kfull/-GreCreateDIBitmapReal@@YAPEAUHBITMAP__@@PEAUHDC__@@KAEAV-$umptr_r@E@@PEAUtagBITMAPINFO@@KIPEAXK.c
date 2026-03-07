__int64 __fastcall GreCreateDIBitmapReal(
        HDC a1,
        unsigned int a2,
        __int64 *a3,
        unsigned int *a4,
        int a5,
        unsigned int a6,
        void *a7,
        unsigned int a8,
        void *a9,
        char a10,
        unsigned __int64 a11,
        _QWORD *a12)
{
  int v12; // r14d
  __int64 v15; // r8
  int v16; // ecx
  int v17; // eax
  unsigned int v18; // r10d
  unsigned int v19; // r15d
  int v20; // ecx
  unsigned int v21; // r12d
  unsigned int v22; // r13d
  int v23; // eax
  unsigned int v24; // edi
  unsigned int v25; // esi
  unsigned int v26; // ebx
  __int64 v27; // rcx
  __int64 *v28; // rdx
  __int64 v29; // r13
  char v30; // r15
  unsigned int v31; // esi
  __int64 *ThreadWin32Thread; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  struct UMPDOBJ *v35; // rdx
  DC *v36; // r9
  int v37; // ebx
  __int64 v38; // rcx
  struct _DC_ATTR *UserAttr; // rax
  struct _DC_ATTR *v40; // rax
  __int64 v41; // rbx
  char v42; // r12
  _QWORD *v43; // r15
  int v44; // r12d
  __int64 v45; // rbx
  unsigned int v46; // eax
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rsi
  HDC v49; // r14
  void *v50; // rax
  void *v51; // rbx
  bool v52; // zf
  __int64 v53; // r8
  __int64 v54; // rdx
  __int64 v55; // r8
  ULONG v56; // ecx
  __int64 v57; // rcx
  unsigned int *v58; // rax
  const unsigned int *v59; // rsi
  unsigned int v60; // r8d
  unsigned int v61; // edx
  Gre::Base *v62; // rcx
  char *v63; // rdx
  char v64; // al
  signed __int32 v65; // ecx
  __int64 v66; // r8
  __int64 v67; // rdx
  char v68; // si
  int v69; // edi
  __int64 v70; // rbx
  int DCDpiScaleValue; // eax
  __int64 v72; // rcx
  float v73; // xmm0_4
  void *v74; // rax
  __int64 v75; // rbx
  DC *v76; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v77; // [rsp+68h] [rbp-98h]
  __int64 v78; // [rsp+70h] [rbp-90h] BYREF
  char v79; // [rsp+78h] [rbp-88h]
  int v80; // [rsp+7Ch] [rbp-84h]
  void *v81[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v82; // [rsp+90h] [rbp-70h] BYREF
  int v83; // [rsp+98h] [rbp-68h]
  int v84; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v85; // [rsp+A4h] [rbp-5Ch]
  unsigned int v86; // [rsp+A8h] [rbp-58h]
  _BYTE v87[12]; // [rsp+ACh] [rbp-54h] BYREF
  int v88; // [rsp+B8h] [rbp-48h]
  int v89; // [rsp+BCh] [rbp-44h]
  int v90; // [rsp+C0h] [rbp-40h]
  unsigned int v91; // [rsp+C4h] [rbp-3Ch]
  void *Src; // [rsp+C8h] [rbp-38h]
  __int64 v93; // [rsp+D0h] [rbp-30h]
  DC *v94[5]; // [rsp+D8h] [rbp-28h] BYREF
  __int16 v95; // [rsp+100h] [rbp+0h]
  __int64 v96; // [rsp+108h] [rbp+8h]
  __int64 v97; // [rsp+118h] [rbp+18h]
  __int16 v98; // [rsp+120h] [rbp+20h]
  unsigned int v100; // [rsp+178h] [rbp+78h] BYREF
  __int64 *v101; // [rsp+180h] [rbp+80h]

  v101 = a3;
  v100 = a2;
  v12 = a5;
  memset(v87, 0, sizeof(v87));
  v89 = 0;
  if ( a5 != 1 )
  {
    if ( a5 == 3 )
    {
      if ( (a10 & 1) == 0 )
        goto LABEL_4;
    }
    else if ( a5 )
    {
LABEL_4:
      EngSetLastError(0x57u);
      return 0LL;
    }
  }
  if ( !a7 && (a10 & 8) != 0 )
    goto LABEL_4;
  if ( !a4 )
    goto LABEL_4;
  if ( a6 < 0x28 )
    goto LABEL_4;
  v15 = *a4;
  v90 = v15;
  if ( a6 < (unsigned int)v15 )
    goto LABEL_4;
  if ( (unsigned int)v15 < 0x28 )
    goto LABEL_4;
  if ( a4[4] - 4 <= 1 )
    goto LABEL_4;
  v16 = a4[1];
  if ( v16 <= 0 )
    goto LABEL_4;
  v17 = a4[2];
  if ( !v17 )
    goto LABEL_4;
  v88 = 0x4000000;
  v85 = v16;
  if ( v17 < 0 )
  {
    v17 = -v17;
    v88 = 67108865;
  }
  v18 = a4[4];
  v19 = 0;
  v20 = *((unsigned __int16 *)a4 + 7);
  v21 = 0;
  v86 = v17;
  v22 = 0;
  v100 = a4[8];
  Src = (char *)a4 + v15;
  v84 = v20;
  v91 = v18;
  if ( v18 )
  {
    if ( v18 == 3 )
    {
      if ( a6 < 0x34 || a5 )
        goto LABEL_4;
      v19 = a4[10];
      v21 = a4[11];
      v24 = 0;
      v22 = a4[12];
      v26 = 2;
      Src = a4 + 10;
      v25 = 512;
      if ( v20 == 16 )
      {
        v84 = 4;
      }
      else
      {
        if ( v20 != 32 )
          goto LABEL_4;
        v84 = 6;
      }
      goto LABEL_56;
    }
    if ( v18 != 10 )
      goto LABEL_4;
    DCOBJ::DCOBJ((DCOBJ *)v94, a1);
    if ( !v94[0] || !(unsigned int)DC::bIsCMYKColor(v94[0]) )
    {
      EngSetLastError(0x57u);
      DCOBJ::~DCOBJ((DCOBJ *)v94);
      return 0LL;
    }
    switch ( v84 )
    {
      case 1:
        v84 = 1;
        v24 = 2;
        break;
      case 4:
        v84 = 2;
        v24 = 16;
        break;
      case 8:
        v84 = 3;
        v24 = 256;
        break;
      case 32:
        v24 = 0;
        v84 = 6;
        v26 = 16;
        v25 = 512;
        goto LABEL_54;
      default:
        EngSetLastError(0x57u);
        if ( v94[0] )
          XDCOBJ::vUnlockFast((XDCOBJ *)v94);
        return 0LL;
    }
    v26 = 1;
    v25 = 1024;
LABEL_54:
    if ( v27 )
      XDCOBJ::vUnlockFast((XDCOBJ *)v94);
    goto LABEL_56;
  }
  switch ( v20 )
  {
    case 1:
      v24 = 2;
      v84 = 1;
      v25 = 1024;
      v26 = 1;
      break;
    case 4:
      v25 = 1024;
      v84 = 2;
      v24 = 16;
      v26 = 1;
      break;
    case 8:
      v84 = 3;
      v24 = 256;
      v26 = 1;
      v25 = 1024;
      break;
    default:
      v23 = 0;
      v24 = 0;
      v25 = 512;
      if ( a5 != 1 )
        v23 = a5;
      v12 = v23;
      switch ( v20 )
      {
        case 16:
          v26 = 2;
          v84 = 4;
          v19 = 31744;
          v21 = 992;
          v22 = 31;
          break;
        case 24:
          v84 = 5;
          v26 = 8;
          break;
        case 32:
          v84 = 6;
          v26 = 8;
          break;
        default:
          goto LABEL_4;
      }
      break;
  }
LABEL_56:
  v83 = 0;
  v82 = 0LL;
  if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v82, v26, v24, 0LL, v19, v21, v22, v25, 1) )
  {
LABEL_121:
    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v82);
    return 0LL;
  }
  v28 = v101;
  v29 = 0LL;
  v30 = a10;
  v96 = 0LL;
  v31 = *((_DWORD *)v101 + 2) - *((_DWORD *)v101 + 4);
  *(_QWORD *)&v87[4] = *(_QWORD *)v82;
  v78 = 0LL;
  v79 = 0;
  v80 = 0;
  v97 = 0LL;
  v98 = 0;
  v93 = 0LL;
  v81[0] = 0LL;
  if ( (a10 & 2) == 0 )
  {
    if ( !a1 )
      goto LABEL_103;
    LOBYTE(v28) = 1;
    v77 = 0LL;
    v76 = (DC *)HmgLockEx(a1, v28, 0LL);
    if ( v76 )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( ThreadWin32Thread && (v33 = *ThreadWin32Thread) != 0 && (v34 = *(_QWORD *)(v33 + 40), v34 != v33 + 40) )
        v35 = (struct UMPDOBJ *)(v34 - 40);
      else
        v35 = 0LL;
      v36 = v76;
      if ( *((_WORD *)v76 + 6) == 1 )
      {
        *((_QWORD *)v76 + 271) = v35;
        *((_DWORD *)v76 + 544) = 0xFFFF;
        v36 = v76;
      }
      else if ( *((struct UMPDOBJ **)v76 + 271) != v35 )
      {
        XDCOBJ::LogUmpdCallbackStatus((XDCOBJ *)&v76, v35);
        v36 = 0LL;
        _InterlockedDecrement((volatile signed __int32 *)v76 + 3);
        v76 = 0LL;
        goto LABEL_93;
      }
      if ( !HIDWORD(v77) )
      {
LABEL_80:
        if ( !v36 )
          goto LABEL_103;
        if ( (*((_DWORD *)v36 + 11) & 2) == 0 )
        {
          if ( !HIDWORD(v77) )
          {
            UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v76);
            if ( UserAttr && !DC::SaveAttributes(v76, UserAttr) )
            {
              v36 = 0LL;
              _InterlockedDecrement((volatile signed __int32 *)v76 + 3);
              v76 = 0LL;
              goto LABEL_93;
            }
            v36 = v76;
          }
          *((_DWORD *)v36 + 11) |= 2u;
          v36 = v76;
          LODWORD(v77) = 1;
        }
        if ( (*((_DWORD *)v36 + 130) & 4) != 0 )
        {
          DC::vMarkTransformDirty(v36);
          v36 = v76;
        }
        if ( !v36 )
          goto LABEL_103;
        if ( (*(_DWORD *)(*((_QWORD *)v36 + 6) + 40LL) & 0x8000) != 0 )
          v88 |= 0x40000u;
LABEL_93:
        if ( v36 )
        {
          if ( (_DWORD)v77 && (*((_DWORD *)v36 + 11) & 2) != 0 )
          {
            if ( !HIDWORD(v77) )
            {
              v40 = XDCOBJ::GetUserAttr((XDCOBJ *)&v76);
              if ( v40 )
                DC::RestoreAttributes(v76, v40);
              v36 = v76;
            }
            *((_DWORD *)v36 + 11) &= ~2u;
            v36 = v76;
            LODWORD(v77) = 0;
          }
          a5 = 0;
          v41 = *(_QWORD *)v36;
          HmgDecrementExclusiveReferenceCountEx(v36, HIDWORD(v77), &a5);
          if ( a5 )
            GrepDeleteDC(v41, 0x2000000LL);
        }
        goto LABEL_103;
      }
      if ( (*(_DWORD *)(*((_QWORD *)v36 + 6) + 40LL) & 0x8000) == 0 )
      {
LABEL_73:
        _InterlockedDecrement((volatile signed __int32 *)v36 + 3);
        v36 = 0LL;
        v76 = 0LL;
        goto LABEL_93;
      }
      v37 = *((_DWORD *)v36 + 528);
      if ( v37 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v36 = v76;
        goto LABEL_73;
      }
    }
    else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
    {
      PsGetWin32KFilterSet(v38);
    }
    v36 = v76;
    goto LABEL_80;
  }
  *(_DWORD *)(v82 + 24) |= 0x8000u;
  v29 = *v28;
  v93 = v28[2];
  v81[0] = a7;
  if ( !v29 )
  {
LABEL_120:
    SURFMEM::~SURFMEM((SURFMEM *)&v78);
    goto LABEL_121;
  }
  v94[2] = 0LL;
  v94[4] = 0LL;
  v95 = 0;
  v28[2] = 0LL;
  v94[3] = 0LL;
  *v28 = 0LL;
  v28[1] = 0LL;
  *((_WORD *)v28 + 12) = 0;
LABEL_103:
  v42 = v30;
  v43 = a12;
  v44 = v42 & 8;
  if ( !SURFMEM::bCreateDIB(
          (SURFMEM *)&v78,
          (struct _DEVBITMAPINFO *)&v84,
          (void *)(v29 + v93),
          v81[0],
          a8,
          a9,
          a11,
          0,
          1,
          v44 != 0,
          a12 != 0LL) )
    goto LABEL_120;
  v45 = v78;
  if ( !*(_WORD *)(v78 + 100) && *(_QWORD *)(v78 + 192) && *(_DWORD *)(v78 + 64) != v31 )
    goto LABEL_120;
  if ( *v101 )
  {
    v46 = *(_DWORD *)(v78 + 64);
    if ( v46 > v31 )
    {
LABEL_158:
      EngSetLastError(0x57u);
      goto LABEL_126;
    }
    umptr_r<unsigned char>::read<unsigned char>(v101, *(_QWORD *)(v78 + 72), v46, 0LL);
    v45 = v78;
  }
  if ( v100 && v100 < v24 )
  {
    v24 = v100;
  }
  else if ( !v24 )
  {
    goto LABEL_159;
  }
  v47 = a6 - v90;
  if ( v12 )
  {
    if ( v12 == 1 )
    {
      v48 = 2LL * v24;
      if ( v48 <= 0xFFFFFFFF && v47 >= v48 )
      {
        v49 = a1;
        DCOBJ::DCOBJ((DCOBJ *)v81, a1);
        if ( !v81[0] )
        {
          DCOBJ::~DCOBJ((DCOBJ *)v81);
          goto LABEL_120;
        }
        v50 = (void *)AllocFreeTmpBuffer(2 * v24);
        v51 = v50;
        if ( !v50 )
        {
          EngSetLastError(0xEu);
          v52 = v81[0] == 0LL;
          goto LABEL_124;
        }
        memmove(v50, Src, 2LL * v24);
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v100);
        v53 = *((_QWORD *)XDCOBJ::pSurfaceEff((XDCOBJ *)v81) + 16);
        if ( !v53 )
          v53 = *(_QWORD *)(*((_QWORD *)v81[0] + 6) + 1776LL);
        XEPALOBJ::vGetEntriesFrom(&v82, *((_QWORD *)v81[0] + 11), v53, v51, v24);
        FreeTmpBuffer(v51, v54, v55);
        DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v100);
        if ( v81[0] )
        {
          XDCOBJ::vUnlockFast((XDCOBJ *)v81);
          v45 = v78;
LABEL_160:
          v68 = a10;
          goto LABEL_161;
        }
        v68 = a10;
        goto LABEL_157;
      }
      v56 = 87;
LABEL_132:
      EngSetLastError(v56);
      SURFMEM::~SURFMEM((SURFMEM *)&v78);
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v82);
      return 0LL;
    }
LABEL_159:
    v49 = a1;
    goto LABEL_160;
  }
  if ( 4 * (unsigned __int64)v24 > 0xFFFFFFFF )
    goto LABEL_158;
  v57 = 4 * v24;
  if ( (unsigned int)v47 < (unsigned int)v57 )
    goto LABEL_158;
  v58 = (unsigned int *)AllocFreeTmpBuffer(v57);
  v59 = v58;
  if ( !v58 )
  {
    v56 = 14;
    goto LABEL_132;
  }
  memmove(v58, Src, 4LL * v24);
  if ( v91 - 10 <= 2 )
  {
    XEPALOBJ::vCopy_cmykquad((XEPALOBJ *)&v82, v59, v60, v24);
  }
  else
  {
    v61 = *(_DWORD *)(v82 + 28);
    v62 = *(Gre::Base **)(v82 + 112);
    if ( v24 <= v61 || (v24 = *(_DWORD *)(v82 + 28), v61) )
    {
      v63 = (char *)v59 + 1;
      do
      {
        *((_BYTE *)v62 + 3) = 0;
        v62 = (Gre::Base *)((char *)v62 + 4);
        v64 = *(v63 - 1);
        v63 += 4;
        *((_BYTE *)v62 - 2) = v64;
        *((_BYTE *)v62 - 4) = *(v63 - 3);
        *((_BYTE *)v62 - 3) = *(v63 - 4);
        --v24;
      }
      while ( v24 );
    }
    v65 = _InterlockedIncrement((volatile signed __int32 *)Gre::Base::Globals(v62) + 962);
    *(_DWORD *)(v82 + 32) = v65;
    v67 = *(_QWORD *)(v82 + 120);
    if ( v67 != v82 )
      *(_DWORD *)(v67 + 32) = v65;
  }
  FreeTmpBuffer(v59, v67, v66);
  v68 = a10;
  v49 = a1;
  if ( (a10 & 4) == 0 || v84 != 3 )
  {
LABEL_157:
    v45 = v78;
    goto LABEL_161;
  }
  DCOBJ::DCOBJ((DCOBJ *)v81, a1);
  v69 = 0;
  if ( !v81[0] )
  {
LABEL_126:
    SURFMEM::~SURFMEM((SURFMEM *)&v78);
    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v82);
    return 0LL;
  }
  v70 = *((_QWORD *)v81[0] + 6);
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v100);
  if ( *(_DWORD *)(v70 + 2076) == 3 && (*(_DWORD *)(v70 + 2140) & 0x100) != 0 && (*(_DWORD *)(v70 + 40) & 1) != 0 )
  {
    v69 = 1;
    XEPALOBJ::apalColorSet((XEPALOBJ *)&v82, *(struct PALETTE **)(v70 + 1776));
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v100);
  if ( !v69 )
  {
    v52 = v81[0] == 0LL;
LABEL_124:
    if ( !v52 )
      XDCOBJ::vUnlockFast((XDCOBJ *)v81);
    goto LABEL_126;
  }
  if ( !v81[0] )
    goto LABEL_157;
  XDCOBJ::vUnlockFast((XDCOBJ *)v81);
  v45 = v78;
LABEL_161:
  if ( v43 )
  {
    if ( v44 )
      *v43 = 0LL;
    else
      *v43 = *(_QWORD *)(v45 + 72);
  }
  v79 |= 1u;
  v83 = 1;
  if ( (v68 & 0x10) != 0 )
  {
    DCDpiScaleValue = GreGetDCDpiScaleValue(v49);
    if ( DCDpiScaleValue > 1 )
    {
      LODWORD(v81[0]) = v85 / DCDpiScaleValue;
      v72 = v78;
      v73 = (float)DCDpiScaleValue;
      HIDWORD(v81[0]) = v86 / DCDpiScaleValue;
      v74 = v81[0];
      *(_DWORD *)(v78 + 116) |= 0x800u;
      *(_QWORD *)(v72 + 668) = v74;
      *(float *)(v72 + 660) = v73;
      *(float *)(v72 + 664) = v73;
    }
    v45 = v78;
  }
  v75 = *(_QWORD *)(v45 + 32);
  SURFMEM::~SURFMEM((SURFMEM *)&v78);
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v82);
  return v75;
}
