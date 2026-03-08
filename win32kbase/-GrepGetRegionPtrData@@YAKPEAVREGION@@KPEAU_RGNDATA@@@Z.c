/*
 * XREFs of ?GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z @ 0x1C00EF31A
 * Callers:
 *     EtwTraceLifetimeAccum @ 0x1C00AAD00 (EtwTraceLifetimeAccum.c)
 *     EtwTraceDWMGetDirtyRegion @ 0x1C00D3540 (EtwTraceDWMGetDirtyRegion.c)
 *     EtwTraceMoveRegion @ 0x1C01983F0 (EtwTraceMoveRegion.c)
 * Callees:
 *     ?vDownload@RGNOBJ@@QEAAXPEAX@Z @ 0x1C003C610 (-vDownload@RGNOBJ@@QEAAXPEAX@Z.c)
 *     ?sizeSave@RGNOBJ@@QEAAKXZ @ 0x1C0184150 (-sizeSave@RGNOBJ@@QEAAKXZ.c)
 */

__int64 __fastcall GrepGetRegionPtrData(struct REGION *a1, DWORD a2, struct _RGNDATA *a3)
{
  DWORD v6; // ecx
  DWORD v7; // edi
  unsigned __int64 v8; // rax
  struct REGION *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = a1;
  if ( !a1 )
    return 0;
  v6 = RGNOBJ::sizeSave((RGNOBJ *)&v10);
  v7 = v6 + 32;
  if ( !a3 )
    return v7;
  if ( v7 > a2 )
    return 0;
  a3->rdh.dwSize = 32;
  v8 = ((unsigned __int64)v7 - 32) >> 4;
  a3->rdh.iType = 1;
  a3->rdh.nCount = v8;
  a3->rdh.nRgnSize = v6;
  if ( (_DWORD)v8 )
  {
    a3->rdh.rcBound = *(RECT *)((char *)a1 + 56);
  }
  else
  {
    a3->rdh.rcBound.left = 0;
    a3->rdh.rcBound.top = 0;
    a3->rdh.rcBound.right = 0;
    a3->rdh.rcBound.bottom = 0;
  }
  RGNOBJ::vDownload((RGNOBJ *)&v10, a3->Buffer);
  return v7;
}
