void __fastcall CLEANUP_CRIT_RESOURCE(PERESOURCE *a1)
{
  ExDeleteResourceLite(*a1);
  ExFreePoolWithTag(*a1, 0);
  *a1 = 0LL;
}
