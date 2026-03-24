/*
 * XREFs of ?MarkImmersiveProcess@@YAXPEAUtagPROCESSINFO@@PEAXW4_PROCESS_IMMERSIVE_TYPE@@@Z @ 0x1C0095A10
 * Callers:
 *     xxxInitProcessInfo @ 0x1C00B88C4 (xxxInitProcessInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MarkImmersiveProcess(__int64 a1, __int64 a2, int a3)
{
  int v3; // ebx
  int v6; // eax
  unsigned int v7; // eax
  __int64 result; // rax
  unsigned int v9; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  DestinationString = 0LL;
  v11 = 0LL;
  v6 = *(_DWORD *)(a1 + 820) ^ (*(_DWORD *)(a1 + 820) ^ (16 * a3)) & 0x30;
  *(_DWORD *)(a1 + 820) = v6;
  if ( a3 == 1 )
  {
    if ( (int)RtlQueryPackageClaims(a2, 0LL, 0LL, 0LL, 0LL, 0LL, &v11, 0LL) < 0 )
    {
      v9 = *(_DWORD *)(a1 + 820);
    }
    else
    {
      if ( (unsigned __int8)ExQueryFastCacheDevLicense() && (unsigned int)BYTE4(v11) - 4 <= 1 )
        v3 = 512;
      v9 = v3 | *(_DWORD *)(a1 + 820) & 0xFFFFFDFF;
    }
    v7 = v9 | 0xC;
  }
  else
  {
    v7 = v6 & 0xFFFFFDFF;
  }
  *(_DWORD *)(a1 + 820) = v7;
  RtlInitUnicodeString(&DestinationString, L"WIN://DESIGN_MODE");
  result = (*(_DWORD *)(a1 + 820) ^ ((unsigned __int8)SeSecurityAttributePresent(a2, &DestinationString) << 13)) & 0x2000;
  *(_DWORD *)(a1 + 820) ^= result;
  return result;
}
