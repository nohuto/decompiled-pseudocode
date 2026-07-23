/*
 * XREFs of PopFxFreeUniqueId @ 0x140736A04
 * Callers:
 *     PoFxAbandonDevice @ 0x140738CC4 (PoFxAbandonDevice.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall PopFxFreeUniqueId(__int64 a1)
{
  __int64 v1; // rax
  signed __int32 v3; // eax
  signed __int32 v4; // ett

  v1 = *(_QWORD *)(a1 + 136);
  if ( *(_QWORD *)(a1 + 48) != v1 )
  {
    if ( v1 )
    {
      _m_prefetchw((const void *)(a1 + 296));
      v3 = *(_DWORD *)(a1 + 296);
      do
      {
        v4 = v3;
        v3 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 296), v3, v3);
      }
      while ( v4 != v3 );
      if ( (v3 & 0x2000) == 0 )
        ExFreePoolWithTag(*(PVOID *)(a1 + 136), 0x4D584650u);
    }
  }
  *(_OWORD *)(a1 + 128) = 0LL;
}
