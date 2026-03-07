NTSTATUS __fastcall PnpValidateMultiSz(size_t a1, __int64 a2)
{
  unsigned __int64 v2; // r11
  size_t v4; // rbx
  NTSTATUS result; // eax
  size_t v6; // r11
  unsigned __int64 v7; // rax
  size_t pcchLength; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  pcchLength = 0LL;
  v4 = a1;
  for ( result = -1073741811; a1; result = 0 )
  {
    result = RtlStringCchLengthW((STRSAFE_PCNZWCH)(v4 + 2 * v2), a2 - v2, &pcchLength);
    if ( result < 0 )
      break;
    a1 = pcchLength;
    v7 = pcchLength + v6;
    if ( pcchLength + v6 >= v6 )
    {
      v2 = v7 + 1;
      if ( v7 + 1 >= v7 )
        continue;
    }
    return -1073741675;
  }
  return result;
}
