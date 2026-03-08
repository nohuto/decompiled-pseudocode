/*
 * XREFs of MmStoreCheckPagefiles @ 0x140836214
 * Callers:
 *     SmFirstTimeInit @ 0x1407DDCE0 (SmFirstTimeInit.c)
 *     MmStoreRegister @ 0x140834CA4 (MmStoreRegister.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmStoreCheckPagefiles(__int64 *a1)
{
  __int64 v1; // rdx
  int v2; // ecx
  unsigned int v3; // r8d
  __int64 i; // rdx
  __int16 v5; // r9

  v1 = *a1;
  v2 = 0;
  v3 = *(_DWORD *)(v1 + 17048);
  if ( !v3 )
    return 1LL;
  for ( i = v1 + 17056; ; i += 8LL )
  {
    v5 = *(_WORD *)(*(_QWORD *)i + 204LL);
    if ( (v5 & 0x400) != 0 || (v5 & 0x800) != 0 )
      break;
    if ( ++v2 >= v3 )
      return 1LL;
  }
  return 0LL;
}
