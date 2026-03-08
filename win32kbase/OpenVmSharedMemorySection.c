/*
 * XREFs of OpenVmSharedMemorySection @ 0x1C02755DC
 * Callers:
 *     DirectComposition::TryOpenSharedSectionAndGetUserModeHandle @ 0x1C0261EB0 (DirectComposition--TryOpenSharedSectionAndGetUserModeHandle.c)
 * Callees:
 *     ConstructVmSharedMemorySectionHostPath @ 0x1C02753C4 (ConstructVmSharedMemorySectionHostPath.c)
 */

__int64 __fastcall OpenVmSharedMemorySection(PHANDLE SectionHandle, unsigned int *a2, unsigned int *a3)
{
  NTSTATUS v4; // ebx
  PVOID P[2]; // [rsp+20h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF

  memset(&ObjectAttributes, 0, 44);
  *(_OWORD *)P = 0LL;
  v4 = ConstructVmSharedMemorySectionHostPath((PUNICODE_STRING)P, a2, a3);
  if ( v4 >= 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)P;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = ZwOpenSection(SectionHandle, 6u, &ObjectAttributes);
  }
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0x6B684D53u);
  return (unsigned int)v4;
}
