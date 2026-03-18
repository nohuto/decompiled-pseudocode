/*
 * XREFs of IoctlStorageStreamsGetOpenStreams @ 0x1C001C02C
 * Callers:
 *     IoctlToNVMe @ 0x1C0002DE0 (IoctlToNVMe.c)
 * Callees:
 *     GetNamespaceId @ 0x1C00051C8 (GetNamespaceId.c)
 *     __security_check_cookie @ 0x1C000E880 (__security_check_cookie.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C0022678 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C0022948 (NVMeDirectiveStreamsReturnParameters.c)
 */

__int64 __fastcall IoctlStorageStreamsGetOpenStreams(__int64 a1, __int64 a2)
{
  char v2; // al
  int v3; // edi
  _DWORD *v6; // rsi
  _DWORD *v7; // rbp
  __int64 result; // rax
  unsigned __int8 v9; // cl

  v2 = *(_BYTE *)(a2 + 2);
  v3 = 0;
  if ( v2 == 40 )
  {
    v6 = *(_DWORD **)(a2 + 64);
    v7 = (_DWORD *)(a2 + 60);
  }
  else
  {
    v6 = *(_DWORD **)(a2 + 24);
    v7 = (_DWORD *)(a2 + 16);
  }
  if ( *v7 >= 0x24u )
  {
    if ( v2 == 40 )
      v9 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
    else
      v9 = *(_BYTE *)(a2 + 7);
    if ( v9 != 255 )
    {
      if ( (*(_BYTE *)(a1 + 3808) & 3) == 3 && *(unsigned __int8 *)(a1 + 3809) == v9 )
      {
        GetNamespaceId(a1, v9);
        result = NVMeDirectiveStreamsReturnParameters(a1);
        if ( (_DWORD)result )
        {
          *(_BYTE *)(a2 + 3) = 4;
          goto LABEL_23;
        }
        if ( (unsigned int)*v7 < 0x28uLL )
        {
          v6[8] = 12;
          v3 = 8;
          v6[7] = 1;
          result = 3238002692LL;
          *(_BYTE *)(a2 + 3) = 18;
          goto LABEL_23;
        }
        if ( v6[7] == 1 )
        {
          result = 0LL;
          v6[9] = 0;
          v3 = 12;
          *(_BYTE *)(a2 + 3) = 1;
          goto LABEL_23;
        }
        result = 3238002694LL;
      }
      else
      {
        result = 3238002695LL;
      }
      *(_BYTE *)(a2 + 3) = 6;
      goto LABEL_23;
    }
    *(_BYTE *)(a2 + 3) = 32;
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 21;
  }
  result = 3238002694LL;
LABEL_23:
  v6[6] = v3;
  return result;
}
