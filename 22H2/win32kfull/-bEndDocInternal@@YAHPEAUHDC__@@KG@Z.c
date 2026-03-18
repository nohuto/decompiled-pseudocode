/*
 * XREFs of ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C0276684
 * Callers:
 *     NtGdiAbortDoc @ 0x1C0277E40 (NtGdiAbortDoc.c)
 *     NtGdiEndDoc @ 0x1C0278310 (NtGdiEndDoc.c)
 *     NtGdiStartPage @ 0x1C0278EF0 (NtGdiStartPage.c)
 * Callees:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C0010D14 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C001D278 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011BFF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C011C0E4 (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C013E430 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 *     ?UmpdSecurityGateNoUmpdObj@@YA_NXZ @ 0x1C0276638 (-UmpdSecurityGateNoUmpdObj@@YA_NXZ.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C0277800 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1C0277954 (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     ?vSaveAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C02779B4 (-vSaveAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 *     ?UMPDServer@@YAHPEAVSURFACE@@@Z @ 0x1C02BEC28 (-UMPDServer@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall bEndDocInternal(HDC a1, unsigned int a2, __int16 a3)
{
  DC *v6; // r9
  __int64 v7; // rdx
  unsigned int v8; // ebx
  Gre::Base *v9; // rcx
  __int64 v10; // rax
  int v11; // edx
  struct SURFACE *v12; // rsi
  int v13; // edi
  int v14; // r15d
  int v15; // r14d
  __int64 v16; // rsi
  __int64 v17; // rdx
  DC *v18; // rax
  SURFACE *v19; // rcx
  int v20; // edx
  XDCOBJ *v22; // [rsp+28h] [rbp-29h] BYREF
  DC *v23[2]; // [rsp+30h] [rbp-21h] BYREF
  char v24[32]; // [rsp+40h] [rbp-11h] BYREF
  DC *v25; // [rsp+60h] [rbp+Fh] BYREF
  int v26; // [rsp+68h] [rbp+17h]
  int v27; // [rsp+6Ch] [rbp+1Bh]
  _OWORD v28[2]; // [rsp+70h] [rbp+1Fh] BYREF
  __int64 v29; // [rsp+D0h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v23, a1);
  if ( !v23[0]
    || (*((_DWORD *)v23[0] + 9) & 0x200800) != 0
    || *((_WORD *)v23[0] + 6) != a3
    || !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v23)
    || ((unsigned int)a1 & 0x7F0000) == 0x10000
    || ((unsigned int)a1 & 0x7F0000) == 0x660000 )
  {
    goto LABEL_38;
  }
  v7 = *((unsigned int *)v6 + 27);
  if ( *((_DWORD *)v6 + 26) > (int)v7 )
  {
    GreRestoreDC(a1, v7);
    v6 = v23[0];
  }
  *((_DWORD *)v6 + 9) |= 0x200000u;
  v8 = 1;
  v9 = v23[0];
  v10 = *((_QWORD *)v23[0] + 6);
  v29 = v10;
  v11 = *(_DWORD *)(v10 + 40);
  if ( (v11 & 1) != 0 || !*(_QWORD *)(v10 + 2536) )
  {
LABEL_38:
    EngSetLastError(0x3EBu);
    DCOBJ::~DCOBJ((DCOBJ *)v23);
    return 0LL;
  }
  else
  {
    v22 = 0LL;
    v12 = (struct SURFACE *)*((_QWORD *)v23[0] + 62);
    if ( (v11 & 0x8000) != 0 )
    {
      v22 = (XDCOBJ *)v23;
      if ( (*((_DWORD *)v23[0] + 11) & 2) != 0 )
      {
        XDCOBJ::RestoreAttributesHelper((XDCOBJ *)v23);
        *((_DWORD *)v23[0] + 11) &= ~2u;
      }
    }
    if ( !UmpdSecurityGateNoUmpdObj(v9) || *(_QWORD *)(v29 + 2936) )
      v13 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v29 + 2936))(
              ((unsigned __int64)v12 + 24) & -(__int64)(v12 != 0LL),
              a2);
    else
      v13 = 0;
    RESTORESAVEDCATTRS::vDone((RESTORESAVEDCATTRS *)&v22);
    v14 = *(_DWORD *)(v29 + 40) & 0x8000;
    *((_WORD *)v23[0] + 1044) = -1;
    UMPDServer(v12);
    DC::pSurface(v23[0], 0LL);
    v15 = 0;
    *((_DWORD *)v23[0] + 79) |= 0xFu;
    v16 = *((_QWORD *)v23[0] + 14);
    if ( *((_DWORD *)v23[0] + 26) - 1 > 0 )
    {
      while ( 1 )
      {
        v25 = 0LL;
        v26 = 0;
        v27 = 0;
        UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v28);
        v25 = 0LL;
        LOBYTE(v17) = 1;
        v18 = (DC *)HmgLockIgnoreOwner(v16, v17);
        v25 = v18;
        if ( !v18 )
        {
LABEL_29:
          UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v28);
          goto LABEL_30;
        }
        if ( !*((_QWORD *)v18 + 62) )
        {
          XDCOBJ::vUnlockFast((XDCOBJ *)&v25);
          goto LABEL_29;
        }
        v19 = (SURFACE *)*((_QWORD *)v18 + 62);
        v20 = *((_DWORD *)v19 + 28);
        if ( (v20 & 0x800) != 0 )
          break;
        if ( v20 >= 0 )
        {
          SURFACE::vDec_cRef(v19);
          goto LABEL_25;
        }
LABEL_26:
        DC::pSurface(v18, 0LL);
        *((_DWORD *)v25 + 79) |= 0xFu;
        v16 = *((_QWORD *)v25 + 14);
        XDCOBJ::vUnlockFast((XDCOBJ *)&v25);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v28);
        if ( ++v15 >= *((_DWORD *)v23[0] + 26) - 1 )
          goto LABEL_30;
      }
      DEC_SHARE_REF_CNT(v19);
LABEL_25:
      v18 = v25;
      goto LABEL_26;
    }
LABEL_30:
    PDEVOBJ::vDisableSurface((PDEVOBJ *)&v29, 1u);
    *((_DWORD *)v23[0] + 9) &= ~0x200000u;
    if ( !v14 || !v13 )
      v8 = 0;
    if ( v22 )
      XDCOBJ::vSaveAttributesAlways(v22);
    if ( v23[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v23);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v24);
    return v8;
  }
}
