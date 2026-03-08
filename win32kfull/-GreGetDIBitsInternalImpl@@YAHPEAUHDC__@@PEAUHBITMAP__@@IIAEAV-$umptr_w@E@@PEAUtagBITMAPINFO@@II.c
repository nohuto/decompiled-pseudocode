/*
 * XREFs of ?GreGetDIBitsInternalImpl@@YAHPEAUHDC__@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x1C0089BF0
 * Callers:
 *     GreExtGetObjectW @ 0x1C0065580 (GreExtGetObjectW.c)
 *     NtGdiGetDIBitsInternal @ 0x1C0089270 (NtGdiGetDIBitsInternal.c)
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C00ADAA0 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     GreGetDIBitsInternal @ 0x1C02E044C (GreGetDIBitsInternal.c)
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x1C008A530 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0123BD8 (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C0124F2C (--1EPALOBJ@@QEAA@XZ.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0269660 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetDIBitsInternalImpl(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        unsigned int *a6,
        int a7,
        int a8,
        unsigned int a9)
{
  unsigned int *v9; // rsi
  int v10; // eax
  int v11; // r13d
  __int64 v12; // rbx
  int v13; // r14d
  __int64 *ThreadWin32Thread; // rax
  Gre::Base *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  struct UMPDOBJ *v18; // rdx
  DC *v19; // r9
  int v20; // edi
  struct _DC_ATTR *UserAttr; // rax
  struct _DC_ATTR *v22; // rax
  __int64 v23; // rdi
  char v24; // r15
  struct Gre::Base::SESSION_GLOBALS *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rdx
  _DWORD *v28; // rdi
  unsigned int v29; // r14d
  __int16 v30; // cx
  unsigned int v32; // r8d
  unsigned int v33; // r9d
  int v34; // ecx
  int v35; // eax
  int v36; // edi
  __int64 *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  bool v40; // zf
  struct UMPDOBJ *v41; // rax
  DC *v42; // rdx
  int v43; // edi
  __int64 v44; // rcx
  struct _DC_ATTR *v45; // rax
  int v46; // ecx
  unsigned int v47; // edi
  unsigned int DIBitsInternalWorker; // eax
  DC *v49; // r9
  unsigned int v50; // edi
  struct _DC_ATTR *v51; // rax
  __int64 v52; // rbx
  Gre::Base *v53; // rcx
  struct Gre::Base::SESSION_GLOBALS *v54; // rbx
  DC *v55; // [rsp+70h] [rbp-90h] BYREF
  __int64 v56; // [rsp+78h] [rbp-88h]
  DC *v57; // [rsp+80h] [rbp-80h] BYREF
  __int64 v58; // [rsp+88h] [rbp-78h]
  __int64 v59; // [rsp+90h] [rbp-70h] BYREF
  int v60; // [rsp+98h] [rbp-68h] BYREF
  int v61; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v62; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v63[4]; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v64; // [rsp+D0h] [rbp-30h]

  v9 = a6;
  v10 = a4;
  if ( !a6 )
    goto LABEL_130;
  v11 = a7;
  if ( a7 )
  {
    if ( a7 != 1 && a7 != 2 )
      goto LABEL_130;
    v10 = a4;
  }
  if ( a9 < 0xC )
  {
LABEL_130:
    EngSetLastError(0x57u);
    return 0LL;
  }
  v12 = 0LL;
  if ( !v10 )
  {
    v63[1] = 0LL;
    v63[3] = 0LL;
    v64 = 0;
    *(_QWORD *)(a5 + 16) = 0LL;
    v63[2] = 0LL;
    *(_QWORD *)a5 = 0LL;
    *(_QWORD *)(a5 + 8) = 0LL;
    *(_WORD *)(a5 + 24) = 0;
  }
  v58 = 0LL;
  v13 = 1;
  v57 = (DC *)HmgLockEx(a1, 1LL, 0LL);
  if ( !v57 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet(v15);
LABEL_27:
    v19 = v57;
    goto LABEL_28;
  }
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread && (v16 = *ThreadWin32Thread) != 0 && (v17 = *(_QWORD *)(v16 + 40), v17 != v16 + 40) )
    v18 = (struct UMPDOBJ *)(v17 - 40);
  else
    v18 = 0LL;
  v19 = v57;
  if ( *((_WORD *)v57 + 6) == 1 )
  {
    *((_QWORD *)v57 + 271) = v18;
    *((_DWORD *)v57 + 544) = 0xFFFF;
    v19 = v57;
  }
  else if ( *((struct UMPDOBJ **)v57 + 271) != v18 )
  {
    XDCOBJ::LogUmpdCallbackStatus((XDCOBJ *)&v57, v18);
    v19 = 0LL;
    _InterlockedDecrement((volatile signed __int32 *)v57 + 3);
    v57 = 0LL;
    goto LABEL_42;
  }
  if ( HIDWORD(v58) )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v19 + 6) + 40LL) & 0x8000) == 0 )
    {
LABEL_21:
      _InterlockedDecrement((volatile signed __int32 *)v19 + 3);
      v19 = 0LL;
      v57 = 0LL;
      goto LABEL_42;
    }
    v20 = *((_DWORD *)v19 + 528);
    if ( v20 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      v19 = v57;
      goto LABEL_21;
    }
    goto LABEL_27;
  }
LABEL_28:
  if ( !v19 )
    goto LABEL_52;
  if ( (*((_DWORD *)v19 + 11) & 2) == 0 )
  {
    if ( !HIDWORD(v58) )
    {
      UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v57);
      if ( UserAttr && !DC::SaveAttributes(v57, UserAttr) )
      {
        v19 = 0LL;
        _InterlockedDecrement((volatile signed __int32 *)v57 + 3);
        v57 = 0LL;
LABEL_42:
        if ( v19 )
        {
          if ( (_DWORD)v58 && (*((_DWORD *)v19 + 11) & 2) != 0 )
          {
            if ( !HIDWORD(v58) )
            {
              v22 = XDCOBJ::GetUserAttr((XDCOBJ *)&v57);
              if ( v22 )
                DC::RestoreAttributes(v57, v22);
              v19 = v57;
            }
            *((_DWORD *)v19 + 11) &= ~2u;
            v19 = v57;
            LODWORD(v58) = 0;
          }
          v60 = 0;
          v23 = *(_QWORD *)v19;
          HmgDecrementExclusiveReferenceCountEx(v19, HIDWORD(v58), &v60);
          if ( v60 )
            GrepDeleteDC(v23, 0x2000000LL);
        }
        goto LABEL_52;
      }
      v19 = v57;
    }
    *((_DWORD *)v19 + 11) |= 2u;
    v19 = v57;
    LODWORD(v58) = 1;
  }
  if ( (*((_DWORD *)v19 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v19);
    v19 = v57;
  }
  if ( v19 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v19 + 6) + 40LL) & 0x8000) != 0 )
      v13 = 0;
    goto LABEL_42;
  }
LABEL_52:
  if ( v13 )
  {
    v24 = 1;
    LOBYTE(a6) = 1;
    v25 = Gre::Base::Globals(v15);
    GreAcquireSemaphoreSharedInternal(*((_QWORD *)v25 + 10));
    EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDynamicModeChange", *((_QWORD *)v25 + 10));
  }
  else
  {
    v24 = 0;
    LOBYTE(a6) = 0;
  }
  LOBYTE(v18) = 5;
  v26 = HmgShareLockCheck(a2, v18);
  v59 = v26;
  v28 = (_DWORD *)v26;
  if ( !v26 )
    goto LABEL_73;
  v29 = *v9;
  if ( *(_QWORD *)a5 )
    goto LABEL_70;
  if ( v29 != 12 )
  {
    if ( a9 < 0x28 )
      goto LABEL_73;
    if ( !*((_WORD *)v9 + 7) )
    {
      if ( v29 > 0x28 )
        memset_0(v9, 0, *v9);
      *v9 = 40;
      v32 = v28[14];
      v9[1] = v32;
      v33 = v28[15];
      v9[2] = v33;
      *((_WORD *)v9 + 6) = 1;
      v9[4] = 0;
      v34 = (unsigned __int16)gaulConvert[2 * v28[24]];
      *((_WORD *)v9 + 7) = v34;
      if ( v34 == 16 || v34 == 32 )
        v9[4] = 3;
      *((_QWORD *)v9 + 3) = 0LL;
      v9[5] = v33 * (((int)(v32 * v34 + 31) >> 3) & 0xFFFFFFFC);
      v35 = dword_1C031B048[v28[24]];
      v9[9] = v35;
      v9[8] = v35;
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v59);
      NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&a6);
      return 1LL;
    }
LABEL_70:
    if ( v29 < 0x28 || v9[4] - 4 > 1 )
      goto LABEL_75;
    EngSetLastError(0x57u);
LABEL_73:
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v59);
    NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&a6);
    return 0LL;
  }
  if ( !*((_WORD *)v9 + 5) )
  {
    *((_WORD *)v9 + 2) = *(_WORD *)(v26 + 56);
    *((_WORD *)v9 + 3) = *(_WORD *)(v26 + 60);
    *((_WORD *)v9 + 4) = 1;
    v30 = gaulConvert[2 * *(unsigned int *)(v26 + 96)];
    *((_WORD *)v9 + 5) = v30;
    if ( (unsigned __int16)v30 >= 0x10u )
      *((_WORD *)v9 + 5) = 24;
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v59);
    NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&a6);
    return 1LL;
  }
LABEL_75:
  v36 = a1;
  LOBYTE(v27) = 1;
  v56 = 0LL;
  v55 = (DC *)HmgLockEx(a1, v27, 0LL);
  if ( !v55 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet(v44);
LABEL_94:
    v42 = v55;
    goto LABEL_95;
  }
  v37 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( !v37
    || (v38 = *v37) == 0
    || (v39 = *(_QWORD *)(v38 + 40), v40 = v39 == v38 + 40, v41 = (struct UMPDOBJ *)(v39 - 40), v40) )
  {
    v41 = 0LL;
  }
  v42 = v55;
  if ( *((_WORD *)v55 + 6) == 1 )
  {
    *((_QWORD *)v55 + 271) = v41;
    *((_DWORD *)v55 + 544) = 0xFFFF;
    v42 = v55;
  }
  else if ( *((struct UMPDOBJ **)v55 + 271) != v41 )
  {
    XDCOBJ::LogUmpdCallbackStatus((XDCOBJ *)&v55, v41);
    goto LABEL_90;
  }
  if ( HIDWORD(v56) )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v42 + 6) + 40LL) & 0x8000) == 0 )
    {
LABEL_86:
      _InterlockedDecrement((volatile signed __int32 *)v42 + 3);
      v55 = 0LL;
LABEL_87:
      DCOBJ::~DCOBJ((DCOBJ *)&v55);
      goto LABEL_73;
    }
    v43 = *((_DWORD *)v42 + 528);
    if ( v43 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      v42 = v55;
      goto LABEL_86;
    }
    v36 = a1;
    goto LABEL_94;
  }
LABEL_95:
  if ( !v42 )
    goto LABEL_87;
  if ( (*((_DWORD *)v42 + 11) & 2) != 0 )
    goto LABEL_102;
  if ( !HIDWORD(v56) )
  {
    v45 = XDCOBJ::GetUserAttr((XDCOBJ *)&v55);
    if ( !v45 || DC::SaveAttributes(v55, v45) )
    {
      v42 = v55;
      goto LABEL_101;
    }
LABEL_90:
    _InterlockedDecrement((volatile signed __int32 *)v55 + 3);
    v55 = 0LL;
    DCOBJ::~DCOBJ((DCOBJ *)&v55);
    goto LABEL_73;
  }
LABEL_101:
  *((_DWORD *)v42 + 11) |= 2u;
  v42 = v55;
  LODWORD(v56) = 1;
LABEL_102:
  if ( (*((_DWORD *)v42 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v42);
    v42 = v55;
  }
  if ( !v42 )
    goto LABEL_87;
  v63[0] = *((_QWORD *)v42 + 6);
  v62 = *((_QWORD *)v42 + 11);
  if ( (*(_DWORD *)(v63[0] + 40LL) & 0x8000) != 0 )
  {
    DIBitsInternalWorker = GreGetDIBitsInternalWorker(
                             v29,
                             (unsigned int)&v55,
                             (unsigned int)v63,
                             (unsigned int)&v59,
                             (__int64)&v62,
                             v36,
                             a2,
                             a3,
                             a4,
                             a5,
                             (__int64)v9,
                             v11,
                             a8,
                             a9);
    v49 = v55;
    v50 = DIBitsInternalWorker;
    if ( v55 )
    {
      if ( (_DWORD)v56 && (*((_DWORD *)v55 + 11) & 2) != 0 )
      {
        if ( !HIDWORD(v56) )
        {
          v51 = XDCOBJ::GetUserAttr((XDCOBJ *)&v55);
          if ( v51 )
            DC::RestoreAttributes(v55, v51);
          v49 = v55;
        }
        *((_DWORD *)v49 + 11) &= ~2u;
        v49 = v55;
        LODWORD(v56) = 0;
      }
      v61 = 0;
      v52 = *(_QWORD *)v49;
      HmgDecrementExclusiveReferenceCountEx(v49, HIDWORD(v56), &v61);
      if ( v61 )
        GrepDeleteDC(v52, 0x2000000LL);
    }
    v53 = (Gre::Base *)v59;
    if ( v59 )
      DEC_SHARE_REF_CNT(v59);
    if ( v24 )
    {
      v54 = Gre::Base::Globals(v53);
      EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange");
      GreReleaseSemaphoreInternal(*((_QWORD *)v54 + 10));
    }
    return v50;
  }
  else
  {
    NEEDGRELOCK::vLock((NEEDGRELOCK *)&v61, (struct XDCOBJ *)&v55);
    if ( v59 )
    {
      if ( v59 != -24 )
      {
        v46 = *(_DWORD *)(v59 + 112);
        if ( (v46 & 0x80004000) != 0 && (v46 & 0x200) == 0 )
        {
          v12 = v59;
          GreLockDisplayDevice(*(_QWORD *)(v59 + 48));
        }
      }
    }
    v47 = GreGetDIBitsInternalWorker(
            v29,
            (unsigned int)&v55,
            (unsigned int)v63,
            (unsigned int)&v59,
            (__int64)&v62,
            v36,
            a2,
            a3,
            a4,
            a5,
            (__int64)v9,
            v11,
            a8,
            a9);
    if ( v12 )
      GreUnlockDisplayDevice(*(_QWORD *)(v12 + 48));
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v61);
    DCOBJ::~DCOBJ((DCOBJ *)&v55);
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v59);
    NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&a6);
    return v47;
  }
}
