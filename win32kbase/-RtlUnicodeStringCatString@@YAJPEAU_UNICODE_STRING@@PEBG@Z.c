NTSTATUS __fastcall RtlUnicodeStringCatString(struct _UNICODE_STRING *a1, const unsigned __int16 *a2)
{
  NTSTATUS result; // eax
  __int16 v5; // bx
  size_t v6; // [rsp+20h] [rbp-20h]
  size_t v7; // [rsp+20h] [rbp-20h]
  ULONG v8; // [rsp+28h] [rbp-18h]
  wchar_t *ppszDest; // [rsp+30h] [rbp-10h] BYREF
  size_t pcchNewDestLength; // [rsp+38h] [rbp-8h] BYREF
  size_t pcchDest; // [rsp+70h] [rbp+30h] BYREF
  size_t pcchDestLength; // [rsp+78h] [rbp+38h] BYREF

  ppszDest = 0LL;
  pcchDest = 0LL;
  pcchDestLength = 0LL;
  result = RtlUnicodeStringValidateDestWorker(a1, &ppszDest, &pcchDest, &pcchDestLength, v6, v8);
  if ( result >= 0 )
  {
    pcchNewDestLength = 0LL;
    v5 = pcchDestLength;
    result = RtlWideCharArrayCopyStringWorker(
               &ppszDest[pcchDestLength],
               pcchDest - pcchDestLength,
               &pcchNewDestLength,
               a2,
               v7);
    a1->Length = 2 * (pcchNewDestLength + v5);
  }
  return result;
}
