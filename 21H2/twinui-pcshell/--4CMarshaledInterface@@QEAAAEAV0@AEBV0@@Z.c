/*
 * XREFs of ??4CMarshaledInterface@@QEAAAEAV0@AEBV0@@Z @ 0x1800C734C
 * Callers:
 *     ?Get@?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@Windows@@@Internal@Windows@@QEAAJPEAPEAU?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@3@@Z @ 0x1802A1938 (-Get@-$CMarshaledInterfaceResult@U-$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Ac.c)
 *     ?Get@?$CMarshaledInterfaceResult@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Internal@Windows@@QEAAJPEAPEAUIGetCurrentActivityForViewOperationResults@Activities@Data@23@@Z @ 0x1802A1A0C (-Get@-$CMarshaledInterfaceResult@UIGetCurrentActivityForViewOperationResults@Activities@Data@Int.c)
 * Callees:
 *     ??4?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18007F418 (--4-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 *__fastcall CMarshaledInterface::operator=(__int64 *a1, __int64 *a2)
{
  Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>::operator=(a1, a2);
  return a1;
}
