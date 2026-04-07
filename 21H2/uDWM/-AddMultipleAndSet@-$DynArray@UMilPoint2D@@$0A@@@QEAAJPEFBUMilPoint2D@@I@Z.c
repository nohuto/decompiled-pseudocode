/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UMilPoint2D@@$0A@@@QEAAJPEFBUMilPoint2D@@I@Z @ 0x1800A2E04
 * Callers:
 *     ?TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEBUtagRECT@@PEAV?$DynArray@UMilPoint3F@@$0A@@@PEAV?$DynArray@UMilPoint2D@@$0A@@@PEAV?$DynArray@I$0A@@@PEAV?$DynArray@K$0A@@@@Z @ 0x1800A35A4 (-TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEB.c)
 *     ?GenerateMesh@CTetherVisual@@IEAAJPEAUMesh2D@@@Z @ 0x1800A50C8 (-GenerateMesh@CTetherVisual@@IEAAJPEAUMesh2D@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180026B04 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     memcpy_0 @ 0x18005817A (memcpy_0.c)
 */

__int64 __fastcall DynArray<MilPoint2D,0>::AddMultipleAndSet(__int64 a1, const void *a2, unsigned int a3)
{
  __int64 v3; // rax
  unsigned int v5; // esi
  unsigned int v6; // ebx
  int v7; // eax

  v3 = *(unsigned int *)(a1 + 24);
  v5 = v3 + a3;
  if ( (unsigned int)v3 + a3 >= (unsigned int)v3 )
  {
    v6 = 0;
    if ( v5 > *(_DWORD *)(a1 + 20) )
    {
      v7 = DynArrayImpl<0>::AddMultipleAndSet(a1, 0x10u, a3, a2);
      v6 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0xC0u);
    }
    else
    {
      memcpy_0((void *)(*(_QWORD *)a1 + 16 * v3), a2, 16LL * a3);
      *(_DWORD *)(a1 + 24) = v5;
    }
  }
  else
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
  }
  return v6;
}
