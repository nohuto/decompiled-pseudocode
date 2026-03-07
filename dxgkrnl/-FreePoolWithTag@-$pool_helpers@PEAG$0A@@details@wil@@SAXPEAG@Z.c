void __fastcall wil::details::pool_helpers<unsigned short *,0>::FreePoolWithTag(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
