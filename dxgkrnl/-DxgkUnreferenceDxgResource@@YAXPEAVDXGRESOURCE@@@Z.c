void __fastcall DxgkUnreferenceDxgResource(struct _EX_RUNDOWN_REF *a1)
{
  ExReleaseRundownProtection(a1 + 9);
}
