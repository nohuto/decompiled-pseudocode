/*
 * XREFs of NtGdiGetWidthTable @ 0x1C010F0B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C0057C50 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z @ 0x1C010F3B4 (-bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z.c)
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1C0114AF8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z @ 0x1C0114B84 (--0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C011DDB0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C01211B4 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall NtGdiGetWidthTable(
        HDC a1,
        unsigned int a2,
        char *a3,
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
  Gre::Base *v26; // [rsp+30h] [rbp-98h] BYREF
  unsigned __int16 *v27; // [rsp+38h] [rbp-90h] BYREF
  unsigned __int16 *v28; // [rsp+40h] [rbp-88h]
  _QWORD v29[2]; // [rsp+48h] [rbp-80h] BYREF
  __int128 v30; // [rsp+58h] [rbp-70h] BYREF
  _BYTE v31[56]; // [rsp+68h] [rbp-60h] BYREF

  v7 = a4;
  WidthTable = -1;
  DCOBJ::DCOBJ((DCOBJ *)v29, a1);
  if ( !(_DWORD)v7 || !v29[0] )
    goto LABEL_35;
  v30 = 0LL;
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
      if ( ((unsigned __int8)a3 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a3[v17] > MmUserProbeAddress || &a3[v17] < a3 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(&v15[v7], a3, v17);
  }
  else
  {
    LODWORD(v7) = 0;
  }
  if ( (_DWORD)v7 )
  {
    v18 = SGDGetSessionState(v12);
    EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)v31, *(struct Gre::Full::SESSION_GLOBALS **)(v18 + 32));
    v19 = *(unsigned __int16 *)(v29[0] + 12LL);
    LODWORD(v27) = 2;
    HIDWORD(v27) = v19;
    v26 = 0LL;
    if ( (unsigned int)RFONTOBJ::bInit(&v26, (struct XDCOBJ *)v29, 0, 2u, (const struct RFONTOBJ::Tag *)&v27) )
      GreAcquireSemaphore(*((_QWORD *)v26 + 63));
    if ( !v26 )
      goto LABEL_22;
    v14 = *((_DWORD *)v26 + 179);
    if ( *((_DWORD *)v26 + 86) >= 0xFFFu )
      goto LABEL_22;
    v20 = *((_DWORD *)v26 + 78);
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
      WidthTable = RFONTOBJ::bGetWidthTable((RFONTOBJ *)&v26, (struct XDCOBJ *)v29, a2, v16, v7, v15);
      if ( WidthTable == -1 )
      {
LABEL_22:
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v26);
        EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v31);
        goto LABEL_23;
      }
    }
    if ( !(unsigned int)RFONTOBJ::bGetWidthData((RFONTOBJ *)&v26, (struct _WIDTHDATA *)&v30, (struct XDCOBJ *)v29) )
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
      *(_OWORD *)a6 = v30;
    }
    v11 = (_DWORD *)a7;
    if ( a7 >= MmUserProbeAddress )
      v11 = (_DWORD *)MmUserProbeAddress;
    *v11 = v14;
  }
  if ( v15 )
    FreeTmpBuffer(v15, v11, v13);
LABEL_35:
  DCOBJ::~DCOBJ((DCOBJ *)v29);
  return WidthTable;
}
