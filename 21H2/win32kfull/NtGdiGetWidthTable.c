/*
 * XREFs of NtGdiGetWidthTable @ 0x1C0019440
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0019ED8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z @ 0x1C0019F70 (-bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C001A598 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00364E0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     memmove @ 0x1C0160280 (memmove.c)
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
  _BYTE *v16; // rdx
  _DWORD *v17; // rdx
  unsigned __int16 v19; // dx
  __int64 v20; // rcx
  unsigned __int16 *v21; // rdi
  __int64 v22; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int16 *v23; // [rsp+38h] [rbp-80h]
  unsigned __int16 *v24; // [rsp+40h] [rbp-78h]
  __int128 v25; // [rsp+48h] [rbp-70h] BYREF
  _QWORD v26[7]; // [rsp+58h] [rbp-60h] BYREF

  v7 = a4;
  WidthTable = -1;
  DCOBJ::DCOBJ((DCOBJ *)v26, a1);
  if ( !(_DWORD)v7 || !v26[0] )
    goto LABEL_35;
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
      goto LABEL_22;
    v11 = *(_DWORD *)(v22 + 716);
    if ( *(_DWORD *)(v22 + 344) >= 0xFFFu )
      goto LABEL_22;
    v15 = *(_DWORD *)(v22 + 312);
    if ( v15 )
    {
      v19 = 16 * v15;
      v20 = (unsigned int)v7;
      v21 = v12;
      while ( v20 )
      {
        *v21++ = v19;
        --v20;
      }
      WidthTable = 1;
    }
    else
    {
      WidthTable = RFONTOBJ::bGetWidthTable((RFONTOBJ *)&v22, (struct XDCOBJ *)v26, a2, v13, v7, v12);
      if ( WidthTable == -1 )
      {
LABEL_22:
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v22);
        goto LABEL_23;
      }
    }
    if ( !(unsigned int)RFONTOBJ::bGetWidthData((RFONTOBJ *)&v22, (struct _WIDTHDATA *)&v25, (struct XDCOBJ *)v26) )
      WidthTable = -1;
    goto LABEL_22;
  }
LABEL_23:
  if ( WidthTable != -1 )
  {
    ProbeForWrite(Address, 2LL * (unsigned int)v7, 2u);
    memmove((void *)Address, v12, 2LL * (unsigned int)v7);
    if ( a6 )
    {
      if ( (a6 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v16 = (_BYTE *)a6;
      if ( a6 >= MmUserProbeAddress )
        v16 = (_BYTE *)MmUserProbeAddress;
      *v16 = *v16;
      v16[15] = v16[15];
      *(_OWORD *)a6 = v25;
    }
    v17 = (_DWORD *)a7;
    if ( a7 >= MmUserProbeAddress )
      v17 = (_DWORD *)MmUserProbeAddress;
    *v17 = v11;
  }
  if ( v12 )
    FreeTmpBuffer(v12);
LABEL_35:
  DCOBJ::~DCOBJ((DCOBJ *)v26);
  return WidthTable;
}
