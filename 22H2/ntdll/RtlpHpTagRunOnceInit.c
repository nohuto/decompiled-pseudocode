/*
 * XREFs of RtlpHpTagRunOnceInit @ 0x180005A80
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpMetadataFree @ 0x180005968 (RtlpHpMetadataFree.c)
 *     RtlpHpMetadataAlloc @ 0x18000798C (RtlpHpMetadataAlloc.c)
 */

_BOOL8 __fastcall RtlpHpTagRunOnceInit(__int64 a1, __int64 a2)
{
  char *v3; // rbx
  __int64 v4; // rax
  int v5; // edi
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  v7 = RtlpHpEnvHandle;
  v3 = (char *)RtlpHpMetadataAlloc(512LL, 512LL, 0LL, &v7);
  if ( v3 )
  {
    v7 = RtlpHpEnvHandle;
    v4 = RtlpHpMetadataAlloc(0x2000LL, 0x2000LL, 1LL, &v7);
    if ( v4 )
    {
      *(_QWORD *)a2 = 0LL;
      *(_QWORD *)(a2 + 24) = v4;
      *(_DWORD *)(a2 + 8) = 0;
      *(_QWORD *)(a2 + 16) = v3;
      *(_DWORD *)(a2 + 12) = 2048;
      if ( (v3 + 512 >= v3 ? 0x40 : 0) != 0 )
        memset64(v3, (a2 + 8) | 1, v3 + 512 >= v3 ? 0x40 : 0);
      v3 = 0LL;
      v5 = 0;
    }
    else
    {
      v5 = -1073741801;
    }
    if ( v3 )
    {
      v7 = RtlpHpEnvHandle;
      RtlpHpMetadataFree((__int64)v3, &v7);
    }
  }
  else
  {
    v5 = -1073741801;
  }
  return v5 >= 0;
}
