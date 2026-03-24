/*
 * XREFs of NtGdiSelectClipPath @ 0x1C0144B80
 * Callers:
 *     <none>
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2BF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C00B2D00 (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00B9858 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0144D0C (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C0144D6C (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bInactive@DC@@QEBAHXZ @ 0x1C0145D94 (-bInactive@DC@@QEBAHXZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C016A4AC (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

__int64 __fastcall NtGdiSelectClipPath(HDC a1, int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  int v5; // edi
  __int64 v6; // rax
  unsigned int v7; // ecx
  ULONG v8; // ecx
  DC *v10; // rcx
  unsigned int v11; // r8d
  DC *v12; // rcx
  struct REGION *v13; // [rsp+38h] [rbp-69h] BYREF
  int v14; // [rsp+40h] [rbp-61h]
  DC *v15[6]; // [rsp+48h] [rbp-59h] BYREF
  _BYTE v16[8]; // [rsp+78h] [rbp-29h] BYREF
  __int64 v17; // [rsp+80h] [rbp-21h]

  DCOBJ::DCOBJ((DCOBJ *)v15, a1);
  v3 = 0;
  if ( !v15[0] || (unsigned int)(a2 - 1) > 4 )
  {
LABEL_8:
    v8 = 87;
LABEL_9:
    EngSetLastError(v8);
    goto LABEL_10;
  }
  v4 = *((unsigned __int16 *)v15[0] + 6);
  v5 = 1;
  if ( (unsigned __int16)v4 > 1u )
  {
    v6 = *((_QWORD *)v15[0] + 6);
    if ( v6 )
      v7 = *(_DWORD *)(v6 + 40);
    else
      v7 = 0;
    TraceLoggingWriteUnsupportedGdiUsage(14LL, v7, v4, 0LL, 0LL);
    goto LABEL_8;
  }
  if ( !(unsigned int)DC::bInactive(v15[0]) )
  {
    v8 = 1003;
    goto LABEL_9;
  }
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v16, (struct XDCOBJ *)v15);
  if ( v17 )
  {
    v11 = *(unsigned __int8 *)(*((_QWORD *)v15[0] + 122) + 214LL);
    v13 = 0LL;
    v14 = 0;
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v13, (struct EPATHOBJ *)v16, v11, 0LL);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v13);
    if ( !v13 || !(unsigned int)DC::iSelect(v15[0], v13, a2) )
      v5 = 0;
    v12 = v15[0];
    *((_DWORD *)v15[0] + 62) &= ~1u;
    DC::hpath(v12, 0LL);
    v3 = v5;
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v13);
  }
  else
  {
    EngSetLastError(8u);
    v10 = v15[0];
    *((_DWORD *)v15[0] + 62) &= ~1u;
    DC::hpath(v10, 0LL);
  }
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v16);
LABEL_10:
  DCOBJ::~DCOBJ((DCOBJ *)v15);
  return v3;
}
