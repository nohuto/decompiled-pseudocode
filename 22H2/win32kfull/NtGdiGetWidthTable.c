/*
 * XREFs of NtGdiGetWidthTable @ 0x1C0085310
 * Callers:
 *     <none>
 * Callees:
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C007DDB4 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C007F350 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z @ 0x1C0085224 (-bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z.c)
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1C00F8AA8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z @ 0x1C00FA9A0 (--0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C010CB90 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011BFF0 (--1DCOBJ@@QEAA@XZ.c)
 *     memmove @ 0x1C0141300 (memmove.c)
 */

__int64 __fastcall NtGdiGetWidthTable(
        HDC a1,
        unsigned int a2,
        char *Src,
        unsigned int a4,
        volatile void *Address,
        ULONG64 a6,
        ULONG64 a7)
{
  __int64 v7; // r14
  unsigned int WidthTable; // esi
  _DWORD *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // r12d
  unsigned __int16 *v15; // rbx
  unsigned __int16 *v16; // rdi
  size_t v17; // r8
  __int64 v18; // rax
  int v19; // ecx
  int v20; // edx
  _BYTE *v21; // rdx
  unsigned __int16 v23; // dx
  __int64 v24; // rcx
  unsigned __int16 *v25; // rdi
  __int64 v26; // [rsp+30h] [rbp-B8h] BYREF
  unsigned __int16 *v27; // [rsp+38h] [rbp-B0h] BYREF
  unsigned __int16 *v28; // [rsp+40h] [rbp-A8h]
  __int128 v29; // [rsp+48h] [rbp-A0h] BYREF
  _QWORD v30[6]; // [rsp+58h] [rbp-90h] BYREF
  _BYTE v31[56]; // [rsp+88h] [rbp-60h] BYREF

  v7 = a4;
  WidthTable = -1;
  DCOBJ::DCOBJ((DCOBJ *)v30, a1);
  if ( !(_DWORD)v7 || !v30[0] )
    goto LABEL_35;
  v29 = 0LL;
  v14 = 0;
  v15 = 0LL;
  v28 = 0LL;
  v16 = 0LL;
  if ( (unsigned int)v7 <= 0x9C4000 )
  {
    v15 = (unsigned __int16 *)AllocFreeTmpBuffer((unsigned int)(4 * v7));
    v28 = v15;
  }
  if ( v15 )
  {
    v17 = 2 * v7;
    v16 = &v15[v7];
    v27 = v16;
    if ( 2 * v7 )
    {
      if ( ((unsigned __int8)Src & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&Src[v17] > MmUserProbeAddress || &Src[v17] < Src )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(&v15[v7], Src, v17);
  }
  else
  {
    LODWORD(v7) = 0;
  }
  if ( (_DWORD)v7 )
  {
    v18 = SGDGetSessionState(v12);
    EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)v31, *(struct Gre::Full::SESSION_GLOBALS **)(v18 + 32));
    v19 = *(unsigned __int16 *)(v30[0] + 12LL);
    LODWORD(v27) = 2;
    HIDWORD(v27) = v19;
    v26 = 0LL;
    if ( (unsigned int)RFONTOBJ::bInit(
                         (RFONTOBJ *)&v26,
                         (struct XDCOBJ *)v30,
                         0,
                         2u,
                         (const struct RFONTOBJ::Tag *)&v27) )
      GreAcquireSemaphore(*(_QWORD *)(v26 + 504));
    if ( !v26 )
      goto LABEL_22;
    v14 = *(_DWORD *)(v26 + 716);
    if ( *(_DWORD *)(v26 + 344) >= 0xFFFu )
      goto LABEL_22;
    v20 = *(_DWORD *)(v26 + 312);
    if ( v20 )
    {
      v23 = 16 * v20;
      v24 = (unsigned int)v7;
      v25 = v15;
      while ( v24 )
      {
        *v25++ = v23;
        --v24;
      }
      WidthTable = 1;
    }
    else
    {
      WidthTable = RFONTOBJ::bGetWidthTable((RFONTOBJ *)&v26, (struct XDCOBJ *)v30, a2, v16, v7, v15);
      if ( WidthTable == -1 )
      {
LABEL_22:
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v26);
        EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v31);
        goto LABEL_23;
      }
    }
    if ( !(unsigned int)RFONTOBJ::bGetWidthData((RFONTOBJ *)&v26, (struct _WIDTHDATA *)&v29, (struct XDCOBJ *)v30) )
      WidthTable = -1;
    goto LABEL_22;
  }
LABEL_23:
  if ( WidthTable != -1 )
  {
    ProbeForWrite(Address, 2LL * (unsigned int)v7, 2u);
    memmove((void *)Address, v15, 2LL * (unsigned int)v7);
    if ( a6 )
    {
      if ( (a6 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v21 = (_BYTE *)a6;
      if ( a6 >= MmUserProbeAddress )
        v21 = (_BYTE *)MmUserProbeAddress;
      *v21 = *v21;
      v21[15] = v21[15];
      *(_OWORD *)a6 = v29;
    }
    v11 = (_DWORD *)a7;
    if ( a7 >= MmUserProbeAddress )
      v11 = (_DWORD *)MmUserProbeAddress;
    *v11 = v14;
  }
  if ( v15 )
    FreeTmpBuffer(v15, v11, v13);
LABEL_35:
  DCOBJ::~DCOBJ((DCOBJ *)v30);
  return WidthTable;
}
