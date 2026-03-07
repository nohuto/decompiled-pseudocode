NTSTATUS __stdcall RtlStringCchCatA(NTSTRSAFE_PSTR pszDest, size_t cchDest, NTSTRSAFE_PCSTR pszSrc)
{
  size_t v3; // r9
  NTSTATUS result; // eax
  size_t *v6; // r8
  __int64 v7; // r10
  __int64 v8; // r11
  size_t pcchDestLength; // [rsp+58h] [rbp+20h] BYREF

  pcchDestLength = 0LL;
  result = RtlStringValidateDestAndLengthA(pszDest, cchDest, &pcchDestLength, v3);
  if ( result >= 0 )
    return RtlStringCopyWorkerA((NTSTRSAFE_PSTR)(pcchDestLength + v8), v7 - pcchDestLength, v6, pszSrc, 0x7FFFFFFEuLL);
  return result;
}
