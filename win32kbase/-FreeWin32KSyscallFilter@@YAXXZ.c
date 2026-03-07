void FreeWin32KSyscallFilter(void)
{
  PVOID *v0; // rbx
  __int64 v1; // rdi

  v0 = (PVOID *)gaWin32KFilterBitmap;
  v1 = 7LL;
  do
  {
    if ( *v0 )
    {
      ExFreePoolWithTag(*v0, 0);
      *v0 = 0LL;
    }
    ++v0;
    --v1;
  }
  while ( v1 );
  if ( gafServiceFilterAuditCache )
  {
    ExFreePoolWithTag(gafServiceFilterAuditCache, 0);
    gafServiceFilterAuditCache = 0LL;
  }
  if ( gafServiceFilterAuditStackCache )
  {
    ExFreePoolWithTag(gafServiceFilterAuditStackCache, 0);
    gafServiceFilterAuditStackCache = 0LL;
  }
}
