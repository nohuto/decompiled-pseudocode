/*
 * XREFs of EtwTraceMemoryAcg @ 0x140367DD8
 * Callers:
 *     MiArbitraryCodeBlocked @ 0x1407F1204 (MiArbitraryCodeBlocked.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     EtwProviderEnabled @ 0x140367E30 (EtwProviderEnabled.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

BOOLEAN __fastcall EtwTraceMemoryAcg(int a1)
{
  REGHANDLE v1; // rbx
  BOOLEAN result; // al
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF
  int v4; // [rsp+70h] [rbp+8h] BYREF

  v4 = a1;
  v1 = EtwpMemoryProvRegHandle;
  result = EtwProviderEnabled(EtwpMemoryProvRegHandle, 0, 0x100uLL);
  if ( result )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&v4;
    return EtwWriteEx(v1, &KERNEL_MEM_EVENT_ACG, 0LL, 1u, 0LL, 0LL, 1u, &UserData);
  }
  return result;
}
