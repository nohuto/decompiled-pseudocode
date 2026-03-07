void __fastcall DxgkReferenceDxgAllocation(struct _EX_RUNDOWN_REF *a1)
{
  if ( !ExAcquireRundownProtection(a1 + 11) )
    WdLogSingleEntry5(0LL, 275LL, 38LL, a1, 0LL, 0LL);
}
