void __fastcall DxgkUnreferenceDxgAllocation(struct _EX_RUNDOWN_REF *a1)
{
  ExReleaseRundownProtection(a1 + 11);
}
