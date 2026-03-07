__int64 __fastcall CmSiProcessTupleStartFromHandle(__int64 a1, void *a2)
{
  NTSTATUS ProcessWorkingSetLimits; // ebx
  __int64 v4; // rcx
  PVOID Object; // [rsp+30h] [rbp-48h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v7; // [rsp+38h] [rbp-40h] BYREF

  Object = 0LL;
  memset(&v7, 0, sizeof(v7));
  ProcessWorkingSetLimits = ObReferenceObjectByHandle(a2, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
  if ( ProcessWorkingSetLimits < 0 )
  {
    if ( Object )
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  }
  else
  {
    *(_QWORD *)&CmpRegistryProcess = a2;
    *((_QWORD *)&CmpRegistryProcess + 1) = Object;
    KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v7);
    ProcessWorkingSetLimits = CmSipQueryProcessWorkingSetLimits(v4, &xmmword_140C13E20, (char *)&xmmword_140C13E20 + 8);
    KiUnstackDetachProcess(&v7);
    if ( ProcessWorkingSetLimits >= 0 )
      return 0;
  }
  return (unsigned int)ProcessWorkingSetLimits;
}
