/*
 * XREFs of PnpiBiosPortFixedToIoDescriptor @ 0x1C0091B5C
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1C008EFDC (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     PnpiUpdateResourceList @ 0x1C0092328 (PnpiUpdateResourceList.c)
 */

__int64 __fastcall PnpiBiosPortFixedToIoDescriptor(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  if ( (a4 & 1) == 0 && *(_BYTE *)(a1 + 3) )
  {
    result = PnpiUpdateResourceList(a2 + 8LL * a3, &v7);
    if ( (int)result < 0 )
      return result;
    v6 = v7;
    *(_WORD *)(v7 + 1) = 257;
    *(_WORD *)(v6 + 4) = 5;
    *(_DWORD *)(v6 + 8) = *(unsigned __int8 *)(a1 + 3);
    *(_DWORD *)(v6 + 16) = *(_WORD *)(a1 + 1) & 0x3FF;
    *(_DWORD *)(v6 + 24) = *(unsigned __int8 *)(a1 + 3) - 1 + (*(_WORD *)(a1 + 1) & 0x3FF);
    *(_DWORD *)(v6 + 12) = 1;
  }
  return 0LL;
}
