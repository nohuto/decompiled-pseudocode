/*
 * XREFs of NtGdiSelectClipPath @ 0x1C02C3CB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00287BC (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C004DAE8 (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C014D87C (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C028756C (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C02910AC (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     ?bInactive@DC@@QEBAHXZ @ 0x1C02C3208 (-bInactive@DC@@QEBAHXZ.c)
 */

__int64 __fastcall NtGdiSelectClipPath(HDC a1, int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  unsigned int v5; // ecx
  ULONG v6; // ecx
  DC *v8; // rcx
  DC *v9; // rcx
  DC *v10[2]; // [rsp+30h] [rbp-39h] BYREF
  _BYTE v11[8]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v12; // [rsp+48h] [rbp-21h]
  struct REGION *v13; // [rsp+E0h] [rbp+77h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  if ( !v10[0] || (unsigned int)(a2 - 1) > 4 )
  {
LABEL_8:
    v6 = 87;
LABEL_9:
    EngSetLastError(v6);
LABEL_10:
    DCOBJ::~DCOBJ((DCOBJ *)v10);
    return 0LL;
  }
  v3 = 1;
  if ( *((_WORD *)v10[0] + 6) > 1u )
  {
    v4 = *((_QWORD *)v10[0] + 6);
    if ( v4 )
      v5 = *(_DWORD *)(v4 + 40);
    else
      v5 = 0;
    TraceLoggingWriteUnsupportedGdiUsage(14, v5, *((unsigned __int16 *)v10[0] + 6), 0LL, 0LL);
    goto LABEL_8;
  }
  if ( !(unsigned int)DC::bInactive(v10[0]) )
  {
    v6 = 1003;
    goto LABEL_9;
  }
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v11, v10);
  if ( !v12 )
  {
    EngSetLastError(8u);
    v8 = v10[0];
    *((_DWORD *)v10[0] + 62) &= ~1u;
    DC::hpath(v8, 0LL);
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v11);
    goto LABEL_10;
  }
  RGNMEMOBJ::vCreate(
    (RGNMEMOBJ *)&v13,
    (struct EPATHOBJ *)v11,
    *(unsigned __int8 *)(*((_QWORD *)v10[0] + 122) + 214LL),
    0LL);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v13);
  if ( !v13 || !(unsigned int)DC::iSelect(v10[0], v13, a2) )
    v3 = 0;
  v9 = v10[0];
  *((_DWORD *)v10[0] + 62) &= ~1u;
  DC::hpath(v9, 0LL);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v13);
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v11);
  if ( v10[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v10);
  return v3;
}
