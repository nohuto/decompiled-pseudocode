/*
 * XREFs of DxgkEngGetClientRect @ 0x1C014D450
 * Callers:
 *     <none>
 * Callees:
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C0007358 (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C012FB74 (--1DCOBJA@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkEngGetClientRect(HDC a1, _OWORD *a2)
{
  __int64 result; // rax
  __int64 *v4[3]; // [rsp+20h] [rbp-18h] BYREF

  MDCOBJA::MDCOBJA((MDCOBJA *)v4, a1);
  result = (__int64)v4[0];
  if ( v4[0] )
  {
    *a2 = *(_OWORD *)(v4[0] + 129);
    DCOBJA::~DCOBJA(v4);
    return 1LL;
  }
  return result;
}
