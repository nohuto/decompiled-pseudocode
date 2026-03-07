__int64 __fastcall NtFlipObjectPresentCancel(void *a1, unsigned __int64 *a2)
{
  unsigned __int64 v3; // rsi
  char v4; // r8
  int v5; // ebx
  struct FlipManagerObject *v6; // rdi
  struct FlipManagerObject *v8; // [rsp+58h] [rbp+10h] BYREF

  v8 = 0LL;
  v3 = 0LL;
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v3 = *a2;
  }
  KeEnterCriticalRegion();
  v5 = FlipManagerObject::ResolveHandle(a1, 2u, v4, &v8);
  v6 = v8;
  if ( v5 >= 0 )
    v5 = FlipManagerObject::PresentCancel(v8, v3);
  if ( v6 )
    ObfDereferenceObject(v6);
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
