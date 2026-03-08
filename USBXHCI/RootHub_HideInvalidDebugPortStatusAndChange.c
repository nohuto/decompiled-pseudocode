/*
 * XREFs of RootHub_HideInvalidDebugPortStatusAndChange @ 0x1C0018258
 * Callers:
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C0014E60 (RootHub_HandlePortStatusChangeEvent.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0016C90 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C0017660 (RootHub_UcxEvtGetPortStatus.c)
 * Callees:
 *     XilRegister_ReadUlong @ 0x1C00180A0 (XilRegister_ReadUlong.c)
 */

bool __fastcall RootHub_HideInvalidDebugPortStatusAndChange(__int64 a1, int a2)
{
  __int64 v2; // rcx

  if ( (*(_DWORD *)(120LL * (unsigned int)(a2 - 1) + *(_QWORD *)(a1 + 48) + 64) & 2) != 0 )
    return 1;
  if ( (_BYTE)KdDebuggerEnabled )
  {
    if ( *(_BYTE *)(a1 + 56) )
    {
      v2 = *(_QWORD *)(a1 + 8);
      if ( _bittest64((const signed __int64 *)(v2 + 336), 0x33u) )
        return (unsigned int)XilRegister_ReadUlong(
                               *(_QWORD *)(v2 + 88),
                               (unsigned int *)(*(_QWORD *)(*(_QWORD *)(v2 + 88) + 72LL) + 36LL)) >> 24 == a2;
    }
  }
  return 0;
}
