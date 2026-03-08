/*
 * XREFs of RtlStringCbCatW @ 0x1C0087454
 * Callers:
 *     USBDInternal_BuildServicePath @ 0x1C00876A8 (USBDInternal_BuildServicePath.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1C00874C8 (RtlStringCopyWorkerW.c)
 */

unsigned int __fastcall RtlStringCbCatW(wchar_t *pszDest, unsigned __int64 cbDest, const wchar_t *a3)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 *v5; // r8
  wchar_t *v6; // rax
  unsigned int result; // eax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // [rsp+20h] [rbp-18h]

  v3 = cbDest >> 1;
  if ( v3 - 1 > 0x7FFFFFFE )
    return -1073741811;
  v5 = (unsigned __int64 *)v3;
  v6 = pszDest;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    v5 = (unsigned __int64 *)((char *)v5 - 1);
  }
  while ( v5 );
  result = v5 == 0LL ? 0xC000000D : 0;
  if ( v5 )
    v8 = v3 - (_QWORD)v5;
  else
    v8 = 0LL;
  if ( v5 )
    return RtlStringCopyWorkerW(&pszDest[v8], v3 - v8, v5, pszDest, v9);
  return result;
}
