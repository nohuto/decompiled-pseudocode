/*
 * XREFs of GreGetBitmapDpiScaleValue @ 0x1C02AA444
 * Callers:
 *     zzzUpdateWindowsAfterModeChange @ 0x1C0097D18 (zzzUpdateWindowsAfterModeChange.c)
 *     NtGdiGetBitmapDpiScaleValue @ 0x1C02C4C10 (NtGdiGetBitmapDpiScaleValue.c)
 * Callees:
 *     bFToL @ 0x1C00D1C50 (bFToL.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C0124F2C (--1EPALOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetBitmapDpiScaleValue(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  LOBYTE(a2) = 5;
  v2 = HmgShareLockCheck(a1, a2);
  v5 = 0;
  v3 = v2;
  v6 = v2;
  if ( v2 && (*(_DWORD *)(v2 + 116) & 0x800) != 0 && (unsigned int)bFToL(*(float *)(v2 + 660), (int *)&v5, 6u) )
  {
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v6);
    return v5;
  }
  else
  {
    if ( v3 )
      DEC_SHARE_REF_CNT(v3);
    return 1LL;
  }
}
