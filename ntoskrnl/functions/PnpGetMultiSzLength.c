__int64 __fastcall PnpGetMultiSzLength(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // r9
  NTSTATUS v6; // r8d
  __int64 *v7; // r11
  size_t v8; // rdx
  size_t v9; // rcx
  size_t pcchLength; // [rsp+30h] [rbp+8h] BYREF

  pcchLength = 0LL;
  *a3 = 0LL;
  v4 = 0LL;
  do
  {
    v6 = RtlStringCchLengthW((STRSAFE_PCNZWCH)(a1 + 2 * v4), a2 - v4, &pcchLength);
    if ( v6 < 0 )
      break;
    v8 = pcchLength;
    v9 = *v7 + pcchLength;
    if ( v9 < *v7 )
    {
      *v7 = -1LL;
      return (unsigned int)-1073741675;
    }
    v4 = -1LL;
    if ( v9 + 1 >= v9 )
      v4 = v9 + 1;
    v6 = v9 + 1 < v9 ? 0xC0000095 : 0;
    *v7 = v4;
  }
  while ( v9 + 1 >= v9 && v8 );
  return (unsigned int)v6;
}
