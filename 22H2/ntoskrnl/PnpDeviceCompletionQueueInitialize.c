/*
 * XREFs of PnpDeviceCompletionQueueInitialize @ 0x140A50DD0
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A52280 (IopInitializePlugPlayServices.c)
 * Callees:
 *     <none>
 */

__int64 PnpDeviceCompletionQueueInitialize()
{
  __int64 result; // rax

  byte_140C44B88 = 5;
  qword_140C44B68 = (__int64)&PnpDeviceCompletionQueue;
  PnpDeviceCompletionQueue = (__int64)&PnpDeviceCompletionQueue;
  qword_140C44B98 = (__int64)&qword_140C44B90;
  qword_140C44B90 = (__int64)&qword_140C44B90;
  qword_140C44B80 = (__int64)&qword_140C44B78;
  qword_140C44B78 = (__int64)&qword_140C44B78;
  result = 0LL;
  qword_140C44BA8 = 0LL;
  dword_140C44B70 = 0;
  byte_140C44B8A = 8;
  dword_140C44B8C = 0;
  dword_140C44BA0 = 0x7FFFFFFF;
  return result;
}
