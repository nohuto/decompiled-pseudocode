/*
 * XREFs of NtGdiBeginPath @ 0x1C02C33D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall NtGdiBeginPath(HDC a1)
{
  DC *v1; // rcx
  int v3; // eax
  DC *v4[2]; // [rsp+20h] [rbp-39h] BYREF
  _BYTE v5[8]; // [rsp+30h] [rbp-29h] BYREF
  struct HPATH__ **v6; // [rsp+38h] [rbp-21h]

  DCOBJ::DCOBJ((DCOBJ *)v4, a1);
  v1 = v4[0];
  if ( !v4[0] )
  {
    EngSetLastError(6u);
LABEL_3:
    DCOBJ::~DCOBJ((DCOBJ *)v4);
    return 0LL;
  }
  if ( *((_QWORD *)v4[0] + 25) )
  {
    v3 = *((_DWORD *)v4[0] + 62);
    if ( (v3 & 2) != 0 )
    {
      *((_DWORD *)v4[0] + 62) = v3 & 0xFFFFFFFD;
      v1 = v4[0];
    }
    *((_DWORD *)v1 + 62) &= ~1u;
    DC::hpath(v1, 0LL);
  }
  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v5);
  if ( !v6 )
  {
    EngSetLastError(8u);
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v5);
    goto LABEL_3;
  }
  DC::hpath(v4[0], *v6);
  *((_DWORD *)v4[0] + 62) |= 1u;
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v5);
  if ( v4[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v4);
  return 1LL;
}
