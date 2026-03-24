/*
 * XREFs of ?GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z @ 0x1C014C084
 * Callers:
 *     EtwTraceLifetimeAccum @ 0x1C0080640 (EtwTraceLifetimeAccum.c)
 *     EtwTraceDWMGetDirtyRegion @ 0x1C009DAE0 (EtwTraceDWMGetDirtyRegion.c)
 *     EtwTraceMoveRegion @ 0x1C014C740 (EtwTraceMoveRegion.c)
 * Callees:
 *     ?sizeSave@RGNOBJ@@QEAAKXZ @ 0x1C0020BB0 (-sizeSave@RGNOBJ@@QEAAKXZ.c)
 *     ?vDownload@RGNOBJ@@QEAAXPEAX@Z @ 0x1C0020BF0 (-vDownload@RGNOBJ@@QEAAXPEAX@Z.c)
 */

__int64 __fastcall GrepGetRegionPtrData(RECT *a1, DWORD a2, struct _RGNDATA *a3)
{
  DWORD v6; // ecx
  DWORD v7; // edi
  unsigned __int64 v8; // rax
  struct REGION *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = (struct REGION *)a1;
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
    a3->rdh.rcBound = a1[6];
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
