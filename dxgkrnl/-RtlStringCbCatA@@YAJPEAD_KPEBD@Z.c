int __fastcall RtlStringCbCatA(char *a1, size_t a2, const char *a3)
{
  int result; // eax
  __int64 v5; // r10
  __int64 v6; // r11
  size_t v7; // [rsp+20h] [rbp-18h]
  size_t pcchLength; // [rsp+48h] [rbp+10h] BYREF

  pcchLength = 0LL;
  if ( a2 - 1 > 0x7FFFFFFE )
    return -1073741811;
  result = RtlStringLengthWorkerA(a1, a2, &pcchLength);
  if ( result >= 0 )
    return RtlStringCopyWorkerA((NTSTRSAFE_PSTR)(pcchLength + v6), v5 - pcchLength, 0LL, a3, v7);
  return result;
}
