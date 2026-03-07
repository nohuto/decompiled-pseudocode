void wil_details_PopulateInitialConfiguredFeatureStates()
{
  _UNKNOWN **i; // rbx
  int v1; // eax
  __int64 *v2; // rcx
  _QWORD *v3; // rcx
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h] BYREF
  int v6; // [rsp+30h] [rbp-18h]

  for ( i = &wil_details_featureDescriptors_a; ; ++i )
  {
    if ( i >= (_UNKNOWN **)&wil_details_featureDescriptors_z )
      return;
    if ( *i )
      break;
  }
LABEL_6:
  if ( !i )
    return;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0;
  if ( *((_BYTE *)i + 29) || *((_BYTE *)i + 30) )
    goto LABEL_15;
  v1 = ((__int64 (__fastcall *)(_QWORD, bool, __int64 *, __int64 *))RtlQueryFeatureConfiguration)(
         *((unsigned int *)i + 6),
         (unsigned __int8)(*((_BYTE *)i + 28) - 2) > 1u,
         &v4,
         &v5);
  if ( v1 != -2147483614 )
  {
    if ( v1 != -1073741275 )
    {
      if ( !v1 )
      {
        v4 = (8 * (BYTE4(v5) & 0xB0 | (4 * (BYTE4(v5) & 0x40u)))) | 0x206LL;
        goto LABEL_16;
      }
      if ( v1 == 279 )
      {
        v4 = (8 * (BYTE4(v5) & 0x80u)) | 0x206LL;
        goto LABEL_16;
      }
    }
LABEL_15:
    v4 = 518LL;
LABEL_16:
    v2 = (__int64 *)*i;
    i += 7;
    *v2 = v4;
    while ( i < (_UNKNOWN **)&wil_details_featureDescriptors_z )
    {
      if ( *i )
        goto LABEL_6;
      ++i;
    }
    return;
  }
  v4 = 518LL;
LABEL_21:
  v3 = *i;
  i += 7;
  *v3 = 518LL;
  while ( i < (_UNKNOWN **)&wil_details_featureDescriptors_z )
  {
    if ( *i )
    {
      if ( i )
        goto LABEL_21;
      return;
    }
    ++i;
  }
}
