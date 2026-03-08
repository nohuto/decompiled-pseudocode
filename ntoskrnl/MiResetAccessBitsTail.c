/*
 * XREFs of MiResetAccessBitsTail @ 0x1402DDE40
 * Callers:
 *     MiResetAccessBitPte @ 0x140325D60 (MiResetAccessBitPte.c)
 * Callees:
 *     MiFlushTbList @ 0x140323BC0 (MiFlushTbList.c)
 *     MiProcessVmAccessedInfo @ 0x140463A5E (MiProcessVmAccessedInfo.c)
 *     MiQueryEPTAccessedState @ 0x140463B2C (MiQueryEPTAccessedState.c)
 */

__int64 __fastcall MiResetAccessBitsTail(__int64 a1)
{
  __int64 i; // rbx
  __int64 v3; // rax
  _DWORD *v4; // rdx

  for ( i = *(_QWORD *)(a1 + 168); ; MiProcessVmAccessedInfo(a1, *(_QWORD *)(i + 16), MiResetAccessBitsEPTCallback, i) )
  {
    v3 = *(_QWORD *)(i + 8);
    if ( v3 )
    {
      MiFlushTbList(*(_QWORD *)(i + 8));
      v3 = *(_QWORD *)(i + 8);
    }
    v4 = *(_DWORD **)(i + 16);
    if ( !v4 || !*v4 || !(unsigned int)MiQueryEPTAccessedState(a1, v4, v3 != 0) )
      break;
  }
  return 0LL;
}
