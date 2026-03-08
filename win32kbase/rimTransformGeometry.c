/*
 * XREFs of rimTransformGeometry @ 0x1C00F1872
 * Callers:
 *     rimPopulateContactFrameData @ 0x1C01D906C (rimPopulateContactFrameData.c)
 * Callees:
 *     RIMApplyPTPTranslation @ 0x1C00EFD5E (RIMApplyPTPTranslation.c)
 *     EtwTracePointerDeviceTransformationStart @ 0x1C0163DF0 (EtwTracePointerDeviceTransformationStart.c)
 *     EtwTracePointerDeviceTransformationStop @ 0x1C0163E20 (EtwTracePointerDeviceTransformationStop.c)
 *     RIMApplyTransforms @ 0x1C01BD0C8 (RIMApplyTransforms.c)
 *     rimComputeHimetricGeometry @ 0x1C01D5D8C (rimComputeHimetricGeometry.c)
 */

__int64 __fastcall rimTransformGeometry(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        int a2,
        unsigned int *a3,
        int a4,
        __int64 a5)
{
  EtwTracePointerDeviceTransformationStart(*a3);
  if ( *((_DWORD *)a1 + 6) == 7 )
  {
    RIMApplyPTPTranslation(a1, (__int64)a3);
  }
  else
  {
    RIMApplyTransforms((_DWORD)a1, a2, (_DWORD)a3, a4, a5);
    rimComputeHimetricGeometry(a1, a3, a3 + 8);
  }
  return EtwTracePointerDeviceTransformationStop(*a3);
}
