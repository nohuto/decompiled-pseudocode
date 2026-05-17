/*
 * XREFs of RtlCheckRegistryKey @ 0x1800458E0
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x180047C50 (RtlCheckPortableOperatingSystem.c)
 * Callees:
 *     RtlpGetRegistryHandle @ 0x18004591C (RtlpGetRegistryHandle.c)
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 */

__int64 __fastcall RtlCheckRegistryKey(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 result; // rax
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  v2 = a1;
  result = RtlpGetRegistryHandle(a1, a2, 0LL, &Handle);
  if ( (int)result >= 0 )
  {
    if ( (v2 & 0x40000000) == 0 )
      NtClose(Handle);
    return 0LL;
  }
  return result;
}
