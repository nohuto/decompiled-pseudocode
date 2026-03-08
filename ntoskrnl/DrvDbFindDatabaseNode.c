/*
 * XREFs of DrvDbFindDatabaseNode @ 0x1408661B4
 * Callers:
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x1407FF728 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x1407FF984 (DrvDbOpenDriverDatabaseRegKey.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x1407FFABC (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbSuspendDatabase @ 0x14081C16C (DrvDbSuspendDatabase.c)
 *     DrvDbRegisterDatabase @ 0x14081D5A8 (DrvDbRegisterDatabase.c)
 *     DrvDbDispatchDriverDatabase @ 0x140864BE0 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbGetObjectDatabaseNode @ 0x140865AB0 (DrvDbGetObjectDatabaseNode.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x140A68A5C (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbUnregisterDatabase @ 0x140A6AC64 (DrvDbUnregisterDatabase.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     RtlEqualUnicodeString @ 0x1406EA560 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall DrvDbFindDatabaseNode(__int64 a1, const WCHAR *a2, const UNICODE_STRING **a3)
{
  NTSTATUS inited; // edi
  const UNICODE_STRING **v6; // rsi
  const UNICODE_STRING *i; // rbx
  UNICODE_STRING String2; // [rsp+20h] [rbp-18h] BYREF

  *a3 = 0LL;
  String2 = 0LL;
  inited = RtlInitUnicodeStringEx(&String2, a2);
  if ( inited >= 0 )
  {
    v6 = (const UNICODE_STRING **)(a1 + 16);
    inited = -1073741772;
    for ( i = *v6; i != (const UNICODE_STRING *)v6; i = *(const UNICODE_STRING **)&i->Length )
    {
      if ( RtlEqualUnicodeString(i + 1, &String2, 1u) )
      {
        inited = 0;
        *a3 = i;
        return (unsigned int)inited;
      }
    }
  }
  return (unsigned int)inited;
}
