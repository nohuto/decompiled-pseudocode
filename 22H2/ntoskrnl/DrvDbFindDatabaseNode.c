/*
 * XREFs of DrvDbFindDatabaseNode @ 0x140877BE4
 * Callers:
 *     DrvDbSuspendDatabase @ 0x140813A9C (DrvDbSuspendDatabase.c)
 *     DrvDbRegisterDatabase @ 0x140814ED8 (DrvDbRegisterDatabase.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x1408664C0 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x14086671C (DrvDbOpenDriverDatabaseRegKey.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140866854 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbDispatchDriverDatabase @ 0x140876610 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbGetObjectDatabaseNode @ 0x1408774E0 (DrvDbGetObjectDatabaseNode.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x140A6B75C (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbUnregisterDatabase @ 0x140A6D964 (DrvDbUnregisterDatabase.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14022B6E0 (RtlInitUnicodeStringEx.c)
 *     RtlEqualUnicodeString @ 0x1406DA3A0 (RtlEqualUnicodeString.c)
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
