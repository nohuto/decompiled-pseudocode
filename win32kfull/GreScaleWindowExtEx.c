/*
 * XREFs of GreScaleWindowExtEx @ 0x1C02D22F4
 * Callers:
 *     NtGdiScaleWindowExtEx @ 0x1C02C71D0 (NtGdiScaleWindowExtEx.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?MirrorWindowOrg@DC@@QEAAXXZ @ 0x1C02D179C (-MirrorWindowOrg@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreScaleWindowExtEx(HDC a1, int a2, int a3, int a4, int a5, _QWORD *a6)
{
  unsigned int v9; // ebx
  DC *v10; // r9
  _DWORD *v11; // rcx
  int v12; // ebp
  int v13; // esi
  DC *v15[3]; // [rsp+20h] [rbp-18h] BYREF

  v9 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v15, a1);
  v10 = v15[0];
  if ( !v15[0] )
    return v9;
  if ( a6 )
  {
    *a6 = *(_QWORD *)(*((_QWORD *)v15[0] + 122) + 316LL);
    if ( (*(_DWORD *)(*((_QWORD *)v10 + 122) + 108LL) & 1) != 0 )
      *(_DWORD *)a6 = -*(_DWORD *)a6;
  }
  v11 = (_DWORD *)*((_QWORD *)v10 + 122);
  if ( v11[26] > 6u )
  {
    if ( !a3 )
      goto LABEL_16;
    if ( !a5 )
      goto LABEL_16;
    v12 = v11[79] * a2;
    if ( v12 == 0x80000000 && a3 == -1 )
      goto LABEL_16;
    v13 = v11[80] * a4;
    if ( v13 == 0x80000000 && a5 == -1 )
      goto LABEL_16;
    if ( !(v12 / a3) || !(v13 / a5) )
      goto LABEL_16;
    v11[79] = v12 / a3;
    *(_DWORD *)(*((_QWORD *)v15[0] + 122) + 320LL) = v13 / a5;
    DC::MirrorWindowOrg(v15[0]);
    *(_DWORD *)(*((_QWORD *)v15[0] + 122) + 340LL) |= 0x4090u;
    v10 = v15[0];
  }
  v9 = 1;
LABEL_16:
  if ( v10 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v15);
  return v9;
}
