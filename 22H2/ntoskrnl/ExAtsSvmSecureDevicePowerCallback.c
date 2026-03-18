/*
 * XREFs of ExAtsSvmSecureDevicePowerCallback @ 0x140412220
 * Callers:
 *     <none>
 * Callees:
 *     ExpAtsConfigureSecureDevice @ 0x140412174 (ExpAtsConfigureSecureDevice.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 */

__int64 __fastcall ExAtsSvmSecureDevicePowerCallback(__int64 a1, int a2, ULONG_PTR a3)
{
  bool v5; // si
  __int64 result; // rax

  v5 = a2 == 1;
  result = ExpAtsConfigureSecureDevice(a3, a2 == 1);
  if ( a2 != 1 && (int)result < 0 )
    KeBugCheckEx(0x159u, 0x3202uLL, (int)result, a3, v5);
  return result;
}
