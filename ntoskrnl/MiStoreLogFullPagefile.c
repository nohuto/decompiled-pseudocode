/*
 * XREFs of MiStoreLogFullPagefile @ 0x140659D30
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x14046554A (MiStoreWriteModifiedPages.c)
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x1402FC390 (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void MiStoreLogFullPagefile()
{
  ULONG v0; // edx
  __int64 v1; // r8
  __int64 v2; // r10
  int v3; // [rsp+20h] [rbp-58h]
  int v4; // [rsp+28h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-38h] BYREF

  if ( *(_QWORD *)&qword_140C69568 && **(_DWORD **)&qword_140C69568 > 5u )
  {
    if ( tlgKeywordOn(*(__int64 *)&qword_140C69568, 2LL) )
      tlgWriteEx_EtwWriteEx(v2, (unsigned __int8 *)&word_1400398CE, v1, v0 - 1, v3, v4, v0, &v5);
  }
}
