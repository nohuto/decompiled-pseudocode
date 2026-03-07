__int64 __fastcall NtFlipObjectConsumerAdjustUsageReference(void *a1, unsigned __int64 *a2, int a3)
{
  unsigned __int64 v5; // r14
  char v6; // r8
  int v7; // ebx
  struct FlipManagerObject *v8; // rdi
  struct FlipManagerObject *v10; // [rsp+78h] [rbp+20h] BYREF

  if ( a1 && a2 )
  {
    v10 = 0LL;
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v5 = *a2;
    KeEnterCriticalRegion();
    v7 = FlipManagerObject::ResolveHandle(a1, 1u, v6, &v10);
    v8 = v10;
    if ( v7 >= 0 )
      v7 = FlipManagerObject::ConsumerAdjustUsageReference(v10, v5, a3 != 0);
    if ( v8 )
      ObfDereferenceObject(v8);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v7;
}
