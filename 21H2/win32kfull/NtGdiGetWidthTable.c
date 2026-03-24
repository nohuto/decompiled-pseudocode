/*
 * XREFs of NtGdiGetWidthTable @ 0x1C009CC30
 * Callers:
 *     <none>
 * Callees:
 *     ?bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z @ 0x1C00642C4 (-bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0093AC0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C0098FC0 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009AF04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2BF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
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
  __int64 v7; // rsi
  unsigned int WidthTable; // r14d
  int v11; // r12d
  unsigned __int16 *v12; // rbx
  unsigned __int16 *v13; // r15
  size_t v14; // r8
  int v15; // edx
  unsigned __int16 v16; // dx
  __int64 v17; // rcx
  unsigned __int16 *v18; // rdi
  _BYTE *v19; // rdx
  _DWORD *v20; // rdx
  __int64 v22; // [rsp+38h] [rbp-80h] BYREF
  unsigned __int16 *v23; // [rsp+40h] [rbp-78h]
  unsigned __int16 *v24; // [rsp+48h] [rbp-70h]
  __int128 v25; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v26[6]; // [rsp+60h] [rbp-58h] BYREF

  v7 = a4;
  WidthTable = -1;
  DCOBJ::DCOBJ((DCOBJ *)v26, a1);
  if ( !(_DWORD)v7 || !v26[0] )
    goto LABEL_41;
  v25 = 0LL;
  v11 = 0;
  v12 = 0LL;
  v23 = 0LL;
  v13 = 0LL;
  if ( (unsigned int)v7 <= 0x9C4000 )
  {
    v12 = (unsigned __int16 *)AllocFreeTmpBuffer((unsigned int)(4 * v7));
    v23 = v12;
  }
  if ( v12 )
  {
    v14 = 2 * v7;
    v13 = &v12[v7];
    v24 = v13;
    if ( 2 * v7 )
    {
      if ( ((unsigned __int8)Src & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&Src[v14] > MmUserProbeAddress || &Src[v14] < Src )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(&v12[v7], Src, v14);
  }
  else
  {
    LODWORD(v7) = 0;
  }
  if ( (_DWORD)v7 )
  {
    v22 = 0LL;
    if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v22, (struct XDCOBJ *)v26, 0, 2u) )
      GreAcquireSemaphore(*(_QWORD *)(v22 + 504));
    if ( !v22 )
      goto LABEL_28;
    v11 = *(_DWORD *)(v22 + 716);
    if ( *(_DWORD *)(v22 + 344) >= 0xFFFu )
      goto LABEL_28;
    v15 = *(_DWORD *)(v22 + 312);
    if ( v15 )
    {
      v16 = 16 * v15;
      v17 = (unsigned int)v7;
      v18 = v12;
      while ( v17 )
      {
        *v18++ = v16;
        --v17;
      }
      WidthTable = 1;
    }
    else
    {
      WidthTable = RFONTOBJ::bGetWidthTable((RFONTOBJ *)&v22, (struct XDCOBJ *)v26, a2, v13, v7, v12);
      if ( WidthTable == -1 )
      {
LABEL_28:
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v22);
        goto LABEL_29;
      }
    }
    if ( !(unsigned int)RFONTOBJ::bGetWidthData((RFONTOBJ *)&v22, (struct _WIDTHDATA *)&v25, (struct XDCOBJ *)v26) )
      WidthTable = -1;
    goto LABEL_28;
  }
LABEL_29:
  if ( WidthTable != -1 )
  {
    ProbeForWrite(Address, 2LL * (unsigned int)v7, 2u);
    memmove((void *)Address, v12, 2LL * (unsigned int)v7);
    if ( a6 )
    {
      if ( (a6 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v19 = (_BYTE *)a6;
      if ( a6 >= MmUserProbeAddress )
        v19 = (_BYTE *)MmUserProbeAddress;
      *v19 = *v19;
      v19[15] = v19[15];
      *(_OWORD *)a6 = v25;
    }
    v20 = (_DWORD *)a7;
    if ( a7 >= MmUserProbeAddress )
      v20 = (_DWORD *)MmUserProbeAddress;
    *v20 = v11;
  }
  if ( v12 )
    FreeTmpBuffer(v12);
LABEL_41:
  DCOBJ::~DCOBJ((DCOBJ *)v26);
  return WidthTable;
}
