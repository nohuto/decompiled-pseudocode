/*
 * XREFs of KiHwPolicyFindDriverImage @ 0x140B60CB8
 * Callers:
 *     KeHwPolicyLocateResource @ 0x140B60C10 (KeHwPolicyLocateResource.c)
 * Callees:
 *     RtlCompareUnicodeString @ 0x1406EA3B0 (RtlCompareUnicodeString.c)
 */

__int64 __fastcall KiHwPolicyFindDriverImage(__int64 a1)
{
  __int64 *v1; // rdi
  int *i; // rbx
  __int64 v3; // rcx
  UNICODE_STRING String2; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&String2.Length = 1703960LL;
  v1 = (__int64 *)(a1 + 48);
  String2.Buffer = L"hwpolicy.sys";
  for ( i = *(int **)(a1 + 48); ; i = *(int **)i )
  {
    if ( i == (int *)v1 )
      return 0LL;
    v3 = *((_QWORD *)i + 6);
    if ( v3 )
    {
      if ( i[14] >= 0 && !RtlCompareUnicodeString((PCUNICODE_STRING)(v3 + 88), &String2, 1u) )
        break;
    }
  }
  return *(_QWORD *)(*((_QWORD *)i + 6) + 48LL);
}
