void __fastcall MiFreeNextAffinityWalker(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
