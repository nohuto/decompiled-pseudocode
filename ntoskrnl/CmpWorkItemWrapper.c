/*
 * XREFs of CmpWorkItemWrapper @ 0x1403AA940
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

void __fastcall CmpWorkItemWrapper(__int64 a1)
{
  signed __int32 v2; // eax

  do
  {
    while ( 1 )
    {
      v2 = *(_DWORD *)(a1 + 40);
      if ( (v2 & 2) == 0 )
        break;
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 40), 1u);
      (*(void (__fastcall **)(__int64, _QWORD))(a1 + 48))(a1, *(_QWORD *)(a1 + 56));
    }
  }
  while ( v2 != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 40), v2 & 0xFFFFFFFE, v2) );
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 32));
}
