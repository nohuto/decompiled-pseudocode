char __fastcall DripsBlockerTrackingHelper::ShouldIgnore(__int64 a1, int a2)
{
  int v2; // ecx
  int *i; // rax
  int v5; // [rsp+8h] [rbp+8h] BYREF
  int v6; // [rsp+Ch] [rbp+Ch]

  v2 = 0;
  v5 = 1009;
  v6 = 8014;
  for ( i = &v5; a2 != *i; ++i )
  {
    if ( (unsigned int)++v2 >= 2 )
      return 0;
  }
  return 1;
}
