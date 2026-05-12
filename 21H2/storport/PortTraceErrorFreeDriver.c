/*
 * XREFs of PortTraceErrorFreeDriver @ 0x1C007E4D4
 * Callers:
 *     RaidHandleTraceNotifyType @ 0x1C0043898 (RaidHandleTraceNotifyType.c)
 * Callees:
 *     <none>
 */

void __fastcall PortTraceErrorFreeDriver(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rdi

  _InterlockedDecrement((volatile signed __int32 *)(a1 + 84));
  v2 = *(void **)(a1 + 56);
  if ( v2 )
  {
    v3 = 0LL;
    if ( *(_DWORD *)(a1 + 80) )
    {
      do
      {
        ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(a1 + 56) + 8 * v3), 0);
        v3 = (unsigned int)(v3 + 1);
      }
      while ( (unsigned int)v3 < *(_DWORD *)(a1 + 80) );
      v2 = *(void **)(a1 + 56);
    }
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  *(_DWORD *)(a1 + 80) = 0;
}
