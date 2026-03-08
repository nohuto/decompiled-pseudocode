/*
 * XREFs of ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAV1@PEAPEAV1@@Z @ 0x18020FD4C
 * Callers:
 *     ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x18020EFFC (-CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z.c)
 * Callees:
 *     ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W46MilCompositingMode@@W46MilBitmapInterpolationMode@@_N7PEAUD2D_VECTOR_4F@@PEAPEAV1@@Z @ 0x18020FDD4 (-Create@CPolygon@@SAJPEAV-$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMa.c)
 */

__int64 __fastcall CPolygon::Create(int a1, __int64 a2, __int64 a3)
{
  return CPolygon::Create(
           a1,
           *(_QWORD *)(a2 + 216),
           *(_QWORD *)(a2 + 248),
           (int)a2 + 144,
           *(_DWORD *)(a2 + 224),
           *(_DWORD *)(a2 + 264),
           *(_DWORD *)(a2 + 236),
           *(_DWORD *)(a2 + 228),
           *(_DWORD *)(a2 + 232),
           *(_BYTE *)(a2 + 240),
           *(_BYTE *)(a2 + 241),
           a2 + 128,
           a3);
}
