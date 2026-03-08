/*
 * XREFs of ?RtlStringCchCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x1C0156E48
 * Callers:
 *     _lambda_86d58a30ac6ca0f5146c7ad98b0ef6a6_::operator() @ 0x1C0156CEC (_lambda_86d58a30ac6ca0f5146c7ad98b0ef6a6_--operator().c)
 * Callees:
 *     RtlUnicodeStringValidateSrcWorker @ 0x1C0156ED8 (RtlUnicodeStringValidateSrcWorker.c)
 */

NTSTATUS __fastcall RtlStringCchCopyUnicodeString(char *a1, __int64 a2, const struct _UNICODE_STRING *a3, size_t a4)
{
  NTSTATUS result; // eax
  __int64 v6; // rcx
  size_t v7; // r8
  signed __int64 v8; // rdx
  unsigned __int16 *v9; // rax
  ULONG v10; // [rsp+20h] [rbp-18h]
  size_t v11; // [rsp+48h] [rbp+10h] BYREF
  wchar_t *v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0LL;
  v11 = 0LL;
  result = RtlUnicodeStringValidateSrcWorker(a3, &v12, &v11, a4, v10);
  if ( result < 0 )
  {
    *(_WORD *)a1 = 0;
  }
  else
  {
    v6 = 32LL;
    v7 = v11;
    v8 = (char *)v12 - a1;
    do
    {
      if ( !(v6 + v7 - 32) )
        break;
      *(_WORD *)a1 = *(_WORD *)&a1[v8];
      a1 += 2;
      --v6;
    }
    while ( v6 );
    v9 = (unsigned __int16 *)(a1 - 2);
    if ( v6 )
      v9 = (unsigned __int16 *)a1;
    *v9 = 0;
    return v6 == 0 ? 0x80000005 : 0;
  }
  return result;
}
