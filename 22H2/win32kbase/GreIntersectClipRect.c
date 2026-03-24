/*
 * XREFs of GreIntersectClipRect @ 0x1C0072520
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C0070940 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C00245D0 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0034F20 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003C8E8 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C003C948 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C003CF04 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0080F64 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     EngSetLastError @ 0x1C009F430 (EngSetLastError.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C00CA024 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0140900 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 */

__int64 __fastcall GreIntersectClipRect(HDC a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // ecx
  ULONG v12; // ecx
  __int64 v14; // rcx
  int v15; // ecx
  int v16; // eax
  float *v17; // [rsp+30h] [rbp-31h] BYREF
  int v18; // [rsp+38h] [rbp-29h]
  int v19; // [rsp+3Ch] [rbp-25h]
  DC *v20[6]; // [rsp+40h] [rbp-21h] BYREF
  struct _RECTL v21; // [rsp+70h] [rbp+Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v20, a1);
  v8 = 0;
  if ( !v20[0] )
  {
LABEL_7:
    v12 = 6;
LABEL_8:
    EngSetLastError(v12);
    goto LABEL_9;
  }
  v9 = *((unsigned __int16 *)v20[0] + 6);
  if ( (unsigned __int16)v9 > 1u )
  {
    v10 = *((_QWORD *)v20[0] + 6);
    if ( v10 )
      v11 = *(_DWORD *)(v10 + 40);
    else
      v11 = 0;
    TraceLoggingWriteUnsupportedGdiUsage(12LL, v11, v9);
    goto LABEL_7;
  }
  v14 = *((_QWORD *)v20[0] + 122);
  v18 = *(_DWORD *)(v14 + 208);
  v19 = *(_DWORD *)(v14 + 108) & 1;
  EXFORMOBJ::vInit(&v17, v20, 516, 0x80000000);
  v21.left = a2;
  v21.top = a3;
  v15 = *((_DWORD *)v17 + 8);
  v21.right = a4;
  v21.bottom = a5;
  if ( (v15 & 1) != 0 )
  {
    EXFORMOBJ::bXform((EXFORMOBJ *)&v17, (struct ERECTL *)&v21);
    ERECTL::vOrder((ERECTL *)&v21);
    v16 = DC::iCombine(v20[0], &v21, 1);
  }
  else
  {
    if ( (((a2 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
      || (((a5 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
      || (((a4 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
      || (((a3 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
    {
      v12 = 87;
      goto LABEL_8;
    }
    v16 = DC::iCombine(v20[0], (struct EXFORMOBJ *)&v17, &v21, 1);
  }
  v8 = v16;
  if ( v16 > 1 )
    v8 = 3;
LABEL_9:
  DCOBJ::~DCOBJ((DCOBJ *)v20);
  return v8;
}
