/*
 * XREFs of ??B?$ComPtr@VInputSite@@@WRL@Microsoft@@QEBAPEQBoolStruct@Details@12@HXZ @ 0x180044FDC
 * Callers:
 *     ?StartResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x1800FF3CC (-StartResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ComPtr<InputSite>::operator int Microsoft::WRL::Details::BoolStruct::*(_QWORD *a1)
{
  return (unsigned int)(*a1 != 0LL) - 1;
}
