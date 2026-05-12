/*
 * XREFs of ATADeviceIdShimStorageDeviceIdCompletionHook @ 0x1C0058420
 * Callers:
 *     <none>
 * Callees:
 *     ATAShimGetMsftId @ 0x1C0058490 (ATAShimGetMsftId.c)
 *     ReplaceDeviceId @ 0x1C0058770 (ReplaceDeviceId.c)
 */

__int64 __fastcall ATADeviceIdShimStorageDeviceIdCompletionHook(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 result; // rax
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  int v9; // [rsp+38h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 64);
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0;
  result = *(unsigned int *)(a2 + 48);
  if ( (int)result >= 0 )
  {
    result = ATAShimGetMsftId(v3, &v7);
    if ( (int)result >= 0 )
      result = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int128 *))ReplaceDeviceId)(v3, a2, a3, &v7);
  }
  *(_DWORD *)(a2 + 48) = result;
  return result;
}
