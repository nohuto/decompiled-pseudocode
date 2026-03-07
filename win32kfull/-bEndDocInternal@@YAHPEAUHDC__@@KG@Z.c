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
  __int64 v15; // rdx
  int v16; // r14d
  __int64 v17; // rsi
  DC *v18; // rax
  SURFACE *v19; // rcx
  int v20; // edx
  XDCOBJ *v22; // [rsp+20h] [rbp-30h] BYREF
  DC *v23[2]; // [rsp+28h] [rbp-28h] BYREF
  DC *v24; // [rsp+38h] [rbp-18h] BYREF
  int v25; // [rsp+40h] [rbp-10h]
  int v26; // [rsp+44h] [rbp-Ch]
  __int64 v27; // [rsp+88h] [rbp+38h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v23, a1);
  if ( !v23[0]
    || (*((_DWORD *)v23[0] + 9) & 0x200800) != 0
    || *((_WORD *)v23[0] + 6) != a3
    || !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v23)
    || ((unsigned int)a1 & 0x7F0000) == 0x10000
    || ((unsigned int)a1 & 0x7F0000) == 0x660000 )
  {
    goto LABEL_37;
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
  v27 = v10;
  v11 = *(_DWORD *)(v10 + 40);
  if ( (v11 & 1) != 0 || !*(_QWORD *)(v10 + 2536) )
  {
LABEL_37:
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
    if ( !UmpdSecurityGateNoUmpdObj(v9) || *(_QWORD *)(v27 + 2936) )
      v13 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v27 + 2936))(
              ((unsigned __int64)v12 + 24) & -(__int64)(v12 != 0LL),
              a2);
    else
      v13 = 0;
    RESTORESAVEDCATTRS::vDone((RESTORESAVEDCATTRS *)&v22);
    v14 = *(_DWORD *)(v27 + 40) & 0x8000;
    *((_WORD *)v23[0] + 1044) = -1;
    UMPDServer(v12);
    DC::pSurface(v23[0], 0LL);
    v16 = 0;
    *((_DWORD *)v23[0] + 79) |= 0xFu;
    v17 = *((_QWORD *)v23[0] + 14);
    if ( *((_DWORD *)v23[0] + 26) - 1 > 0 )
    {
      while ( 1 )
      {
        v25 = 0;
        LOBYTE(v15) = 1;
        v26 = 0;
        v24 = 0LL;
        v18 = (DC *)HmgLockIgnoreOwner(v17, v15);
        v24 = v18;
        if ( !v18 )
          goto LABEL_29;
        if ( !*((_QWORD *)v18 + 62) )
        {
          XDCOBJ::vUnlockFast((XDCOBJ *)&v24);
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
        *((_DWORD *)v24 + 79) |= 0xFu;
        v17 = *((_QWORD *)v24 + 14);
        XDCOBJ::vUnlockFast((XDCOBJ *)&v24);
        if ( ++v16 >= *((_DWORD *)v23[0] + 26) - 1 )
          goto LABEL_29;
      }
      DEC_SHARE_REF_CNT(v19);
LABEL_25:
      v18 = v24;
      goto LABEL_26;
    }
LABEL_29:
    PDEVOBJ::vDisableSurface((PDEVOBJ *)&v27, 1u);
    *((_DWORD *)v23[0] + 9) &= ~0x200000u;
    if ( !v14 || !v13 )
      v8 = 0;
    if ( v22 )
      XDCOBJ::vSaveAttributesAlways(v22);
    if ( v23[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v23);
    return v8;
  }
}
