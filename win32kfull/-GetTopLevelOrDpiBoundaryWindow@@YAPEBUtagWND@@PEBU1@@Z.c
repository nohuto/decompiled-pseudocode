/*
 * XREFs of ?GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z @ 0x1C00A366C
 * Callers:
 *     PhysicalToLogicalInPlaceRgnWorker @ 0x1C0052B04 (PhysicalToLogicalInPlaceRgnWorker.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00A35E4 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00A3628 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     LogicalToPhysicalInPlaceRgnWorker @ 0x1C00DB9C4 (LogicalToPhysicalInPlaceRgnWorker.c)
 *     ?PhysicalToLogicalDPIPointWithHitTest@@YAHPEAUtagPOINT@@0PEBU_SUBPIXELS@@PEBUtagWND@@@Z @ 0x1C0144B3C (-PhysicalToLogicalDPIPointWithHitTest@@YAHPEAUtagPOINT@@0PEBU_SUBPIXELS@@PEBUtagWND@@@Z.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x1C0145150 (PhysicalToLogicalInPlacePointWithParent.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0035AF0 (_GetTopLevelWindow.c)
 *     ?GetWindowCoordinateSpaceDpi@@YAGPEBUtagWND@@@Z @ 0x1C00A3840 (-GetWindowCoordinateSpaceDpi@@YAGPEBUtagWND@@@Z.c)
 *     ScaleDPIRect @ 0x1C00A3890 (ScaleDPIRect.c)
 */

const struct tagWND *__fastcall GetTopLevelOrDpiBoundaryWindow(const struct tagWND *a1)
{
  const struct tagWND *v1; // rbp
  const struct tagWND **v2; // r15
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int16 WindowCoordinateSpaceDpi; // bx
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rax
  unsigned __int16 v14; // r12
  int v15; // r14d
  unsigned __int16 v16; // r14
  INT v17; // edi
  __int64 v18; // rbx
  __int64 v19; // rcx
  INT a[4]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v21; // [rsp+70h] [rbp+8h]

  v1 = a1;
  if ( !*(_DWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 32) + 8720LL) )
    return (const struct tagWND *)GetTopLevelWindow((__int64)v1);
  if ( v1 )
  {
    do
    {
      v2 = (const struct tagWND **)((char *)v1 + 104);
      v3 = *((_QWORD *)v1 + 13);
      if ( v3 )
      {
        v4 = *((_QWORD *)v1 + 3);
        v5 = 0LL;
        if ( v4 )
        {
          v6 = *(_QWORD *)(v4 + 8);
          if ( v6 )
            v5 = *(_QWORD *)(v6 + 24);
        }
        if ( v3 == v5 )
          break;
        v7 = *((_QWORD *)v1 + 3);
        if ( (!v7 || (v8 = *(_QWORD *)(v7 + 8)) == 0 || v3 != *(_QWORD *)(v8 + 24))
          && (((unsigned __int16)(*(_DWORD *)(*((_QWORD *)v1 + 5) + 288LL) >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(v3 + 40) + 288LL) >> 8)) & 0x1FF) != 0 )
        {
          WindowCoordinateSpaceDpi = GetWindowCoordinateSpaceDpi(v1);
          if ( WindowCoordinateSpaceDpi != GetWindowCoordinateSpaceDpi(*v2) )
            break;
          v11 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)v1 + 5) + 256LL));
          v12 = v11;
          if ( v11 )
          {
            v13 = *(_QWORD *)(v11 + 40);
            v14 = *(_WORD *)(v13 + 60);
            v15 = *(_DWORD *)(*((_QWORD *)v1 + 5) + 288LL) >> 8;
            *(_OWORD *)a = *(_OWORD *)(v13 + 28);
            v16 = v15 & 0x1FF;
            if ( v16 )
            {
              v17 = *(unsigned __int16 *)(v13 + 62);
              v18 = *(_QWORD *)a;
              LODWORD(v21) = EngMulDiv(a[0], v16, v17);
              HIDWORD(v21) = EngMulDiv(a[1], v16, v17);
              ScaleDPIRect((unsigned int)a, (unsigned int)a, v16, v14, v21, v18);
            }
            v19 = *(_QWORD *)(v12 + 40);
            if ( *(_DWORD *)(v19 + 28) != a[0] || *(_DWORD *)(v19 + 32) != a[1] )
              break;
          }
        }
      }
      v1 = *v2;
    }
    while ( *v2 );
  }
  return v1;
}
