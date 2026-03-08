/*
 * XREFs of ?IVMeasureRimCompleteFrame@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame@@U_UNICODE_STRING@@AEAVCIVTouchSerializer@@@Z @ 0x1C021D5F0
 * Callers:
 *     ?SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z @ 0x1C0227C1C (-SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z.c)
 * Callees:
 *     ?Serialize@CIVSerializer@@IEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z @ 0x1C02340D0 (-Serialize@CIVSerializer@@IEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z.c)
 *     ?Serialize@CIVTouchSerializer@@QEAAJPEAPEAU_IVRIMPOINTERRAWDATA@@PEBUCPointerRawData@@K_N@Z @ 0x1C02343BC (-Serialize@CIVTouchSerializer@@QEAAJPEAPEAU_IVRIMPOINTERRAWDATA@@PEBUCPointerRawData@@K_N@Z.c)
 */

int __fastcall IVMeasureRimCompleteFrame(
        struct RIMCOMPLETEFRAME *a1,
        const struct CPointerRawData **a2,
        struct _UNICODE_STRING *a3,
        struct CIVTouchSerializer *a4)
{
  __int64 v4; // rsi
  int result; // eax

  v4 = *((_QWORD *)a4 + 2);
  result = CIVSerializer::Serialize(a4, (struct _UNICODE_STRING *)v4, a3, 1);
  if ( result >= 0 )
  {
    result = CIVTouchSerializer::Serialize(
               a4,
               (struct _IVRIMPOINTERRAWDATA **)(v4 + 208),
               a2[29],
               *((_DWORD *)a1 + 7),
               1);
    if ( result >= 0 )
    {
      *((_DWORD *)a4 + 2) += 176 * *((_DWORD *)a1 + 6);
      return 0;
    }
  }
  return result;
}
