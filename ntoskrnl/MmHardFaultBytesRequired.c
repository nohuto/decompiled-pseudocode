/*
 * XREFs of MmHardFaultBytesRequired @ 0x1406A7A10
 * Callers:
 *     CcFetchDataForRead @ 0x140221EE0 (CcFetchDataForRead.c)
 * Callees:
 *     MiGetSystemCacheReverseMap @ 0x140222030 (MiGetSystemCacheReverseMap.c)
 */

__int64 __fastcall MmHardFaultBytesRequired(__int64 a1)
{
  unsigned __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned __int64 v4; // r11
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rax
  unsigned __int64 i; // rcx
  __int64 v8; // rdx
  _DWORD *v9; // rax
  _DWORD *v10; // r8

  v1 = *(_QWORD *)(MiGetSystemCacheReverseMap(a1 & 0xFFFFFFFFFFFC0000uLL) + 24);
  v4 = v1 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v1 & 1) == 0 )
    v4 = v1;
  v5 = ((unsigned __int64)(v3 & 0xFFF) + v2 + 4095) >> 12;
  v6 = v3 / 4096 - (*(unsigned int *)(v4 + 36) | ((unsigned __int64)(*(_WORD *)(v4 + 32) & 0xFFC0) << 26));
  for ( i = *(unsigned int *)(v4 + 44); v6 >= i; i = *(unsigned int *)(v4 + 44) )
  {
    v4 = *(_QWORD *)(v4 + 16);
    v6 -= i;
  }
  v8 = *(_QWORD *)(v4 + 8);
  v9 = (_DWORD *)(v8 + 8 * v6);
  v10 = (_DWORD *)(v8 + 8LL * *(unsigned int *)(v4 + 44));
  if ( !v5 )
    return 0LL;
  while ( 1 )
  {
    if ( v9 >= v10 )
    {
      v4 = *(_QWORD *)(v4 + 16);
      v9 = *(_DWORD **)(v4 + 8);
      v10 = &v9[2 * *(unsigned int *)(v4 + 44)];
    }
    if ( (*v9 & 0x401) == 0x400LL )
      break;
    v9 += 2;
    if ( !--v5 )
      return 0LL;
  }
  return 1LL;
}
