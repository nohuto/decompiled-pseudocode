/*
 * XREFs of ?RemoveAnyObject@?$CGenericTable@UMaterialPropertyId@MaterialProperty@@U2@$0HEHCEDEE@$0A@@DirectComposition@@QEAAPEAUMaterialProperty@@XZ @ 0x1C0099D44
 * Callers:
 *     DCompositionSessionUninitialize @ 0x1C0099C08 (DCompositionSessionUninitialize.c)
 * Callees:
 *     <none>
 */

__int64 DirectComposition::CGenericTable<MaterialProperty::MaterialPropertyId,MaterialProperty,1953645380,0>::RemoveAnyObject()
{
  struct _RTL_GENERIC_TABLE *v0; // rdi
  __int64 v1; // rbx
  _QWORD *v2; // rax
  PVOID v4; // [rsp+30h] [rbp+8h] BYREF

  v0 = Table;
  v1 = 0LL;
  v4 = 0LL;
  v2 = RtlEnumerateGenericTableWithoutSplaying(Table, &v4);
  if ( v2 )
  {
    v1 = v2[2];
    RtlDeleteElementGenericTable(v0, v2);
  }
  return v1;
}
