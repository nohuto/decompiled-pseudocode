/*
 * XREFs of SeAssignWorldSecurityDescriptor @ 0x14080CA28
 * Callers:
 *     IopGetSetSecurityObject @ 0x14074EA70 (IopGetSetSecurityObject.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

__int64 __fastcall SeAssignWorldSecurityDescriptor(__int64 a1, unsigned int *a2, _DWORD *a3)
{
  PSID v5; // rbp
  unsigned int v6; // r8d
  unsigned int v7; // eax
  unsigned int v8; // ecx
  size_t v10; // r15
  char *v11; // rsi

  if ( !a3 )
    return 3221225506LL;
  v5 = SeWorldSid;
  v6 = 4 * *((unsigned __int8 *)SeWorldSid + 1) + 8;
  v7 = *a2;
  v8 = 2 * v6 + 20;
  *a2 = v8;
  if ( v7 < v8 )
    return 3221225507LL;
  v10 = v6;
  v11 = (char *)(a1 + 20);
  *(_OWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  *(_BYTE *)a1 = 1;
  if ( (*a3 & 1) != 0 )
  {
    memmove((void *)(a1 + 20), v5, v6);
    *(_DWORD *)(a1 + 4) = 20;
    v11 += v10;
  }
  if ( (*a3 & 2) != 0 )
  {
    memmove(v11, v5, v10);
    *(_DWORD *)(a1 + 8) = (_DWORD)v11 - a1;
  }
  if ( (*a3 & 4) != 0 )
    *(_WORD *)(a1 + 2) |= 4u;
  if ( (*a3 & 8) != 0 )
    *(_WORD *)(a1 + 2) |= 0x10u;
  *(_WORD *)(a1 + 2) |= 0x8000u;
  return 0LL;
}
