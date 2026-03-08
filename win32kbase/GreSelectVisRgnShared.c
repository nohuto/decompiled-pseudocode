/*
 * XREFs of GreSelectVisRgnShared @ 0x1C0197EE0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0041EF8 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C004592C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00467B8 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreSelectVisRgnShared(HDC a1, HRGN a2, int a3)
{
  unsigned int v5; // ebx
  DC *v7[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v7, a1);
  v5 = GreSelectVisRgnInternal(v7, a2, a3);
  if ( v7[0] )
    XDCOBJ::vAltUnlockFast((XDCOBJ *)v7);
  return v5;
}
