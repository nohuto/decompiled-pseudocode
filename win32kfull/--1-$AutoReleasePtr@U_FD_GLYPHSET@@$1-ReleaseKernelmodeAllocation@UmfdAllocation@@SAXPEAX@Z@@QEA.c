void __fastcall AutoReleasePtr<_FD_GLYPHSET,&public: static void UmfdAllocation::ReleaseKernelmodeAllocation(void *)>::~AutoReleasePtr<_FD_GLYPHSET,&public: static void UmfdAllocation::ReleaseKernelmodeAllocation(void *)>(
        char **a1)
{
  char *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    UmfdAllocation::ReleaseKernelmodeAllocation(v2);
    *a1 = 0LL;
  }
}
