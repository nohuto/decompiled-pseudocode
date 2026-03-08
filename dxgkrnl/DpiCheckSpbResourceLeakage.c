/*
 * XREFs of DpiCheckSpbResourceLeakage @ 0x1C0065810
 * Callers:
 *     DpiFdoHandleRemoveDevice @ 0x1C0396F80 (DpiFdoHandleRemoveDevice.c)
 * Callees:
 *     DpiDeleteSpbResourceRecord @ 0x1C03A36CC (DpiDeleteSpbResourceRecord.c)
 */

__int64 __fastcall DpiCheckSpbResourceLeakage(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 result; // rax

  v1 = a1 + 2704;
  v2 = *(_QWORD *)(a1 + 2704);
  if ( v2 != a1 + 2704 )
    result = WdLogSingleEntry2(2LL, v2, -1073741823LL);
  while ( *(_QWORD *)v1 != v1 )
  {
    *(_DWORD *)(*(_QWORD *)v1 + 48LL) = 0;
    result = DpiDeleteSpbResourceRecord();
  }
  return result;
}
