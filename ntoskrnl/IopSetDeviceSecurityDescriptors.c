/*
 * XREFs of IopSetDeviceSecurityDescriptors @ 0x140750EA4
 * Callers:
 *     IopGetSetSecurityObject @ 0x14074EA70 (IopGetSetSecurityObject.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140750F44 (IopSetDeviceSecurityDescriptor.c)
 */

__int64 __fastcall IopSetDeviceSecurityDescriptors(
        PVOID *a1,
        PVOID *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned int v7; // edi
  PVOID *v10; // rbx
  unsigned int v11; // eax
  PVOID *v12; // rsi

  v7 = 0;
  v10 = a2;
  ObfReferenceObject(a2);
  do
  {
    v11 = IopSetDeviceSecurityDescriptor(v10, a3, a4, a5, a6);
    v12 = (PVOID *)v10[3];
    if ( v10 == a1 )
      v7 = v11;
    if ( v12 )
      ObfReferenceObject(v10[3]);
    ObfDereferenceObject(v10);
    v10 = v12;
  }
  while ( v12 );
  return v7;
}
