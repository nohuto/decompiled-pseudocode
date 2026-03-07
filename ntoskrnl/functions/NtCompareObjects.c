NTSTATUS __fastcall NtCompareObjects(void *a1, void *a2)
{
  KPROCESSOR_MODE PreviousMode; // bl
  NTSTATUS result; // eax
  NTSTATUS v5; // ebx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF
  PVOID v7; // [rsp+58h] [rbp+20h] BYREF

  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  result = ObReferenceObjectByHandle(a1, 0, 0LL, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v7 = 0LL;
    v5 = ObReferenceObjectByHandle(a2, 0, 0LL, PreviousMode, &v7, 0LL);
    if ( v5 >= 0 )
    {
      v5 = v7 != Object ? 0xC00001AC : 0;
      ObfDereferenceObject(v7);
    }
    ObfDereferenceObject(Object);
    return v5;
  }
  return result;
}
