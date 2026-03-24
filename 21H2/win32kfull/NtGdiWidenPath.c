/*
 * XREFs of NtGdiWidenPath @ 0x1C02ADE20
 * Callers:
 *     <none>
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2BF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FDC44 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C013F6DC (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C01412F0 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0144D0C (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C0144D6C (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bInactive@DC@@QEBAHXZ @ 0x1C0145D94 (-bInactive@DC@@QEBAHXZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C016A4AC (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     ?vReComputeBounds@EPATHOBJ@@QEAAXXZ @ 0x1C02CFC10 (-vReComputeBounds@EPATHOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiWidenPath(HDC a1)
{
  unsigned int v1; // ebx
  ULONG v2; // ecx
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // eax
  struct _LINEATTRS *v6; // rdi
  ULONG v7; // ecx
  struct _XFORMOBJ v9; // [rsp+38h] [rbp-69h] BYREF
  DC *v10[6]; // [rsp+48h] [rbp-59h] BYREF
  _BYTE v11[8]; // [rsp+78h] [rbp-29h] BYREF
  __int64 v12; // [rsp+80h] [rbp-21h]

  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  v1 = 0;
  if ( v10[0] )
  {
    if ( !(unsigned int)DC::bInactive(v10[0]) )
    {
      v2 = 1003;
      goto LABEL_5;
    }
    XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v11, v10);
    if ( v12 )
    {
      v3 = *((unsigned __int16 *)v10[0] + 6);
      if ( (unsigned __int16)v3 > 1u )
      {
        v4 = *((_QWORD *)v10[0] + 6);
        if ( v4 )
          v5 = *(_DWORD *)(v4 + 40);
        else
          v5 = 0;
        TraceLoggingWriteUnsupportedGdiUsage(7, v5, v3, 0LL, 0LL);
        goto LABEL_14;
      }
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v9, (struct XDCOBJ *)v10, 516);
      v6 = (struct _LINEATTRS *)((char *)v10[0] + 208);
      if ( (*((_DWORD *)v10[0] + 52) & 1) == 0 )
      {
        if ( (*(_DWORD *)(*((_QWORD *)v10[0] + 18) + 40LL) & 0x800) == 0 )
        {
LABEL_14:
          v7 = 1003;
LABEL_20:
          EngSetLastError(v7);
LABEL_22:
          XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v11);
          goto LABEL_23;
        }
        v6 = (struct _LINEATTRS *)&unk_1C0333640;
      }
      if ( !(unsigned int)EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)v11, (struct EPATHOBJ *)v11, &v9, v6) )
      {
        v7 = 534;
        goto LABEL_20;
      }
      if ( (unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)v11, (struct EPATHOBJ *)v11, &v9, v6) )
      {
        EPATHOBJ::vReComputeBounds((EPATHOBJ *)v11);
        v1 = 1;
        goto LABEL_22;
      }
    }
    v7 = 8;
    goto LABEL_20;
  }
  v2 = 87;
LABEL_5:
  EngSetLastError(v2);
LABEL_23:
  DCOBJ::~DCOBJ((DCOBJ *)v10);
  return v1;
}
