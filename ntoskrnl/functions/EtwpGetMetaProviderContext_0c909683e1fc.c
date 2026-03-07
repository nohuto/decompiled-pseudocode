__int64 (**__fastcall EtwpGetMetaProviderContext(_QWORD *a1))[2]
{
  int v1; // edx
  __int64 (***i)[2]; // r9
  __int64 *v3; // r11
  __int64 v4; // r8

  v1 = 0;
  for ( i = &EtwMetaProviderContext; ; ++i )
  {
    v3 = (__int64 *)(*i)[2];
    v4 = *a1 - *v3;
    if ( *a1 == *v3 )
      v4 = a1[1] - v3[1];
    if ( !v4 )
      break;
    if ( (unsigned int)++v1 >= 0x11 )
      return 0LL;
  }
  return *i;
}
