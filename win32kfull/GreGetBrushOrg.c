/*
 * XREFs of GreGetBrushOrg @ 0x1C02AA4C8
 * Callers:
 *     _DrawIconEx @ 0x1C003B618 (_DrawIconEx.c)
 *     MNEraseBackground @ 0x1C023756C (MNEraseBackground.c)
 *     xxxMNDrawFullNC @ 0x1C0237FB4 (xxxMNDrawFullNC.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetBrushOrg(HDC a1, _QWORD *a2)
{
  __int64 result; // rax
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v4, a1);
  result = v4[0];
  if ( v4[0] )
  {
    *a2 = *(_QWORD *)(v4[0] + 124LL);
    DCOBJ::~DCOBJ((DCOBJ *)v4);
    return 1LL;
  }
  return result;
}
