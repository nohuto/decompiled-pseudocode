/*
 * XREFs of imp_WdfObjectDereferenceActual @ 0x1C0043110
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?_GetObjectFromHandle@FxObject@@SAPEAV1@PEAXPEAG@Z @ 0x1C0017C04 (-_GetObjectFromHandle@FxObject@@SAPEAV1@PEAXPEAG@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfObjectDereferenceActual(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Object,
        void *Tag,
        int Line,
        const char *File)
{
  FxObject *ObjectFromHandle; // r10
  int v7; // r11d
  FxObject_vtbl *v8; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int16 ObjectOffset; // [rsp+48h] [rbp+10h] BYREF

  if ( !Object )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  ObjectOffset = 0;
  ObjectFromHandle = FxObject::_GetObjectFromHandle(Object, &ObjectOffset);
  v8 = ObjectFromHandle->__vftable;
  if ( ObjectOffset )
    v8->ReleaseOverride(ObjectFromHandle, ObjectOffset, Tag, v7, File);
  else
    v8->Release(ObjectFromHandle, Tag, v7, File);
}
