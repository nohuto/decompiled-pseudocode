/*
 * XREFs of IoctlStorageStreamsGetOpenStreams @ 0x1C00137A4
 * Callers:
 *     IoctlToNVMe @ 0x1C0002660 (IoctlToNVMe.c)
 * Callees:
 *     GetNamespaceId @ 0x1C00058D4 (GetNamespaceId.c)
 *     __security_check_cookie @ 0x1C00066D0 (__security_check_cookie.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C0018998 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C0018C68 (NVMeDirectiveStreamsReturnParameters.c)
 */

__int64 __fastcall IoctlStorageStreamsGetOpenStreams(__int64 a1, __int64 a2)
{
  char v2; // al
  int v3; // edi
  _DWORD *v6; // rsi
  __int64 v7; // r14
  unsigned int v8; // ecx
  unsigned __int8 v9; // cl

  v2 = *(_BYTE *)(a2 + 2);
  v3 = 0;
  if ( v2 == 40 )
  {
    v6 = *(_DWORD **)(a2 + 64);
    v7 = 60LL;
  }
  else
  {
    v6 = *(_DWORD **)(a2 + 24);
    v7 = 16LL;
  }
  if ( *(_DWORD *)(a2 + v7) >= 0x24u )
  {
    if ( v2 == 40 )
      v9 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
    else
      v9 = *(_BYTE *)(a2 + 7);
    if ( v9 != 255 )
    {
      if ( (*(_BYTE *)(a1 + 3792) & 3) == 3 && *(unsigned __int8 *)(a1 + 3793) == v9 )
      {
        GetNamespaceId(a1, v9);
        v8 = NVMeDirectiveStreamsReturnParameters(a1);
        if ( v8 )
        {
          *(_BYTE *)(a2 + 3) = 4;
          goto LABEL_23;
        }
        if ( *(unsigned int *)(a2 + v7) < 0x28uLL )
        {
          v6[8] = 12;
          v3 = 8;
          v6[7] = 1;
          v8 = -1056964604;
          *(_BYTE *)(a2 + 3) = 18;
          goto LABEL_23;
        }
        if ( v6[7] == 1 )
        {
          v8 = 0;
          v6[9] = 0;
          v3 = 12;
          *(_BYTE *)(a2 + 3) = 1;
          goto LABEL_23;
        }
        v8 = -1056964602;
      }
      else
      {
        v8 = -1056964601;
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
  v8 = -1056964602;
LABEL_23:
  v6[6] = v3;
  return v8;
}
