/*
 * XREFs of imp_WdfObjectReferenceActual @ 0x1C00431E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0006470 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?_GetObjectFromHandle@FxObject@@SAPEAV1@PEAXPEAG@Z @ 0x1C0017C04 (-_GetObjectFromHandle@FxObject@@SAPEAV1@PEAXPEAG@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfObjectReferenceActual(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Object,
        void *Tag,
        int Line,
        char *File)
{
  FxObject *ObjectFromHandle; // rax
  unsigned int v7; // r11d
  void *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int16 ObjectOffset; // [rsp+48h] [rbp+10h] BYREF

  if ( !Object )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  ObjectOffset = 0;
  ObjectFromHandle = FxObject::_GetObjectFromHandle(Object, &ObjectOffset);
  if ( ObjectOffset )
    ObjectFromHandle->AddRefOverride(ObjectFromHandle, ObjectOffset, Tag, v7, File);
  else
    FxObject::AddRef(ObjectFromHandle, Tag, v7, File);
}
