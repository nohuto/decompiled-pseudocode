/*
 * XREFs of WPP_RECORDER_SF_I @ 0x1C002F040
 * Callers:
 *     ndisIfCreateInterfaceFromPersistentStore @ 0x1C002ED34 (ndisIfCreateInterfaceFromPersistentStore.c)
 *     ndisIfUpdateInterfaceFromPersistentStore @ 0x1C002EED0 (ndisIfUpdateInterfaceFromPersistentStore.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00ABD54 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_I(__int64 a1, _DWORD a2, _DWORD a3, unsigned __int16 a4, __int64 a5, ...)
{
  int v8; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x200000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
    ndisWppFastTraceMessage(&WPP_6ddb316d784933c58b4801ad2d08aa04_Traceguids, a4, va, 8LL, 0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(a1, 4LL, 22LL, &WPP_6ddb316d784933c58b4801ad2d08aa04_Traceguids, v8, va);
}
