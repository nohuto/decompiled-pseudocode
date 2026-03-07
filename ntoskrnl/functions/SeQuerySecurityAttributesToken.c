__int64 __fastcall SeQuerySecurityAttributesToken(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rdx
  unsigned int SecurityAttributesToken; // ebx

  if ( a5 )
  {
    if ( a4 )
    {
LABEL_3:
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
      SecurityAttributesToken = SepInternalQuerySecurityAttributesTokenEx(a1, v11, a2, a3, 0, a4, a5, a6);
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
      KeLeaveCriticalRegion();
      return SecurityAttributesToken;
    }
  }
  else if ( !a4 )
  {
    goto LABEL_3;
  }
  return 3221225485LL;
}
