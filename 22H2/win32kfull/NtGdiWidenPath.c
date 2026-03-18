/*
 * XREFs of NtGdiWidenPath @ 0x1C02C1980
 * Callers:
 *     <none>
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0099E60 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011BFF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C015A6C4 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEBU_LINEATTRS@@@Z @ 0x1C015DC06 (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEBU_LINEATTRS@@@Z.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C02651F8 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C0284C7C (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bInactive@DC@@QEBAHXZ @ 0x1C02C0988 (-bInactive@DC@@QEBAHXZ.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEBU_LINEATTRS@@@Z @ 0x1C02F1580 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEBU_LINEATTRS@@@Z.c)
 *     ?vReComputeBounds@EPATHOBJ@@QEAAXXZ @ 0x1C02F3308 (-vReComputeBounds@EPATHOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiWidenPath(HDC a1)
{
  ULONG v1; // ecx
  __int64 v2; // rdx
  unsigned int v3; // eax
  ULONG v4; // ecx
  const struct _LINEATTRS *v5; // rbx
  DC *v7[2]; // [rsp+30h] [rbp-69h] BYREF
  _BYTE v8[32]; // [rsp+40h] [rbp-59h] BYREF
  struct _XFORMOBJ v9; // [rsp+60h] [rbp-39h] BYREF
  _BYTE v10[8]; // [rsp+70h] [rbp-29h] BYREF
  __int64 v11; // [rsp+78h] [rbp-21h]

  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  if ( !v7[0] )
  {
    v1 = 87;
LABEL_3:
    EngSetLastError(v1);
LABEL_24:
    DCOBJ::~DCOBJ((DCOBJ *)v7);
    return 0LL;
  }
  if ( !(unsigned int)DC::bInactive(v7[0]) )
  {
    v1 = 1003;
    goto LABEL_3;
  }
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v10, v7);
  if ( !v11 )
    goto LABEL_22;
  if ( *((_WORD *)v7[0] + 6) > 1u )
  {
    v2 = *((_QWORD *)v7[0] + 6);
    if ( v2 )
      v3 = *(_DWORD *)(v2 + 40);
    else
      v3 = 0;
    TraceLoggingWriteUnsupportedGdiUsage(7, v3, *((unsigned __int16 *)v7[0] + 6), 0LL, 0LL);
    goto LABEL_12;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v9, (struct XDCOBJ *)v7, 516);
  v5 = (const struct _LINEATTRS *)((char *)v7[0] + 208);
  if ( (*((_DWORD *)v7[0] + 52) & 1) == 0 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v7[0] + 18) + 40LL) & 0x800) == 0 )
    {
LABEL_12:
      v4 = 1003;
LABEL_23:
      EngSetLastError(v4);
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v10);
      goto LABEL_24;
    }
    v5 = (const struct _LINEATTRS *)&unk_1C0329238;
  }
  if ( !(unsigned int)EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)v10, (struct EPATHOBJ *)v10, &v9, v5) )
  {
    v4 = 534;
    goto LABEL_23;
  }
  if ( !EPATHOBJ::bWiden((EPATHOBJ *)v10, (struct EPATHOBJ *)v10, &v9, v5) )
  {
LABEL_22:
    v4 = 8;
    goto LABEL_23;
  }
  EPATHOBJ::vReComputeBounds((EPATHOBJ *)v10);
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v10);
  if ( v7[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v7);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v8);
  return 1LL;
}
