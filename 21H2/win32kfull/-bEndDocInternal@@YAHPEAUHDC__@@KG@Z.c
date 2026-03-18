/*
 * XREFs of ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C012C564
 * Callers:
 *     NtGdiStartPage @ 0x1C012C8A0 (NtGdiStartPage.c)
 *     NtGdiEndDoc @ 0x1C012CC40 (NtGdiEndDoc.c)
 *     NtGdiAbortDoc @ 0x1C027A8E0 (NtGdiAbortDoc.c)
 * Callees:
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C002BB70 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C0113C20 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?UMPDServer@@YAHPEAVSURFACE@@@Z @ 0x1C012C514 (-UMPDServer@@YAHPEAVSURFACE@@@Z.c)
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C012CA30 (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1C012CA70 (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     ?vSaveAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C012CA98 (-vSaveAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C015D588 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C027A0F8 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C0285520 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall bEndDocInternal(HDC a1, unsigned int a2, __int16 a3)
{
  int v6; // eax
  DC *v7; // r9
  __int64 v8; // rdx
  unsigned int v9; // ebx
  __int64 v10; // rax
  int v11; // edx
  struct SURFACE *v12; // rsi
  int v13; // ecx
  struct _EPROCESS *CurrentProcess; // rax
  bool v15; // zf
  int v16; // edi
  int v17; // r15d
  __int64 v18; // r8
  int v19; // r14d
  __int64 v20; // rsi
  __int64 v21; // rdx
  DC *v22; // rax
  SURFACE *v23; // rcx
  int v24; // edx
  XDCOBJ *v26; // [rsp+28h] [rbp-29h] BYREF
  DC *v27[2]; // [rsp+30h] [rbp-21h] BYREF
  char v28[32]; // [rsp+40h] [rbp-11h] BYREF
  DC *v29; // [rsp+60h] [rbp+Fh] BYREF
  int v30; // [rsp+68h] [rbp+17h]
  int v31; // [rsp+6Ch] [rbp+1Bh]
  _BYTE v32[40]; // [rsp+70h] [rbp+1Fh] BYREF
  __int64 v33; // [rsp+D0h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v27, a1);
  if ( !v27[0] )
    goto LABEL_39;
  v6 = *((_DWORD *)v27[0] + 9);
  if ( (v6 & 0x800) != 0
    || (v6 & 0x200000) != 0
    || *((_WORD *)v27[0] + 6) != a3
    || !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v27)
    || ((unsigned int)a1 & 0x7F0000) == 0x10000
    || ((unsigned int)a1 & 0x7F0000) == 0x660000 )
  {
    goto LABEL_39;
  }
  v8 = *((unsigned int *)v7 + 27);
  if ( *((_DWORD *)v7 + 26) > (int)v8 )
  {
    GreRestoreDC(a1, v8);
    v7 = v27[0];
  }
  *((_DWORD *)v7 + 9) |= 0x200000u;
  v9 = 1;
  v10 = *((_QWORD *)v27[0] + 6);
  v33 = v10;
  v11 = *(_DWORD *)(v10 + 40);
  if ( (v11 & 1) != 0 || !*(_QWORD *)(v10 + 2536) )
  {
LABEL_39:
    EngSetLastError(0x3EBu);
    v9 = 0;
  }
  else
  {
    v26 = 0LL;
    v12 = (struct SURFACE *)*((_QWORD *)v27[0] + 62);
    if ( (v11 & 0x8000) != 0 )
    {
      v13 = *((_DWORD *)v27[0] + 11);
      v26 = (XDCOBJ *)v27;
      if ( (v13 & 2) != 0 )
      {
        XDCOBJ::RestoreAttributesHelper((XDCOBJ *)v27);
        *((_DWORD *)v27[0] + 11) &= ~2u;
        v10 = v33;
      }
    }
    if ( gUMPDSecurityLevel == 2
      || gUMPDSecurityLevel
      && (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, gUMPDSecurityLevel),
          v15 = (unsigned int)bIsProcessLocalSystem(CurrentProcess) == 0,
          v10 = v33,
          !v15)
      || *(_QWORD *)(v10 + 2936) )
    {
      v16 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v10 + 2936))(
              ((unsigned __int64)v12 + 24) & -(__int64)(v12 != 0LL),
              a2);
    }
    else
    {
      if ( gfUMPDDebug )
        DbgPrint(
          "clientcore\\windows\\core\\ntgdi\\gre\\windows\\print.cxx:%d:bEndDocInternal:!(PPFNVALID(po,EndDoc))\n",
          2121);
      v16 = 0;
    }
    RESTORESAVEDCATTRS::vDone((RESTORESAVEDCATTRS *)&v26);
    v17 = *(_DWORD *)(v33 + 40) & 0x8000;
    *((_WORD *)v27[0] + 1044) = -1;
    UMPDServer(v12);
    DC::pSurface(v27[0], 0LL);
    v19 = 0;
    *((_DWORD *)v27[0] + 79) |= 0xFu;
    v20 = *((_QWORD *)v27[0] + 14);
    if ( *((_DWORD *)v27[0] + 26) - 1 > 0 )
    {
      while ( 1 )
      {
        v29 = 0LL;
        v30 = 0;
        v31 = 0;
        UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v32);
        v29 = 0LL;
        LOBYTE(v21) = 1;
        v22 = (DC *)HmgLockIgnoreOwner(v20, v21);
        v29 = v22;
        if ( !v22 || (v23 = (SURFACE *)*((_QWORD *)v22 + 62)) == 0LL )
        {
          MDCOBJ::~MDCOBJ((MDCOBJ *)&v29);
          UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v32);
          goto LABEL_34;
        }
        v24 = *((_DWORD *)v23 + 28);
        if ( (v24 & 0x800) != 0 )
          break;
        if ( v24 >= 0 )
        {
          SURFACE::vDec_cRef(v23);
          goto LABEL_30;
        }
LABEL_31:
        DC::pSurface(v22, 0LL);
        *((_DWORD *)v29 + 79) |= 0xFu;
        v20 = *((_QWORD *)v29 + 14);
        MDCOBJ::~MDCOBJ((MDCOBJ *)&v29);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v32);
        if ( ++v19 >= *((_DWORD *)v27[0] + 26) - 1 )
          goto LABEL_34;
      }
      DEC_SHARE_REF_CNT(v23);
LABEL_30:
      v22 = v29;
      goto LABEL_31;
    }
LABEL_34:
    LOBYTE(v18) = 1;
    PDEVOBJ::vDisableSurface(&v33, 0LL, v18);
    *((_DWORD *)v27[0] + 9) &= ~0x200000u;
    if ( !v17 || !v16 )
      v9 = 0;
    if ( v26 )
      XDCOBJ::vSaveAttributesAlways(v26);
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v27);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v28);
  return v9;
}
