bool __fastcall KiTpHandleTrap(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v6; // r11
  struct _KPRCB *CurrentPrcb; // r14
  unsigned __int64 v9; // rdx
  _KPROCESS *Process; // r8
  __int64 *i; // rdi
  bool v12; // cl
  _KPROCESS *v13; // rax
  int v14; // eax
  __int64 v15; // rax
  int v16; // r15d
  __int64 v17; // rax
  bool v18; // [rsp+20h] [rbp-38h]

  v6 = a1;
  if ( (KiDynamicTraceEnabled & 2) == 0 && (!a3 || (KiDynamicTraceEnabled & 1) == 0) )
    return 0;
  v18 = 0;
  CurrentPrcb = 0LL;
  v9 = *(_QWORD *)(a2 + 248);
  Process = KeGetCurrentThread()->Process;
  _InterlockedAdd(&KiTpActiveTrapsCount, 1u);
  for ( i = (__int64 *)*((_QWORD *)KiTpHashTable + ((v9 >> 4) & 0x3FFF)); ; i = (__int64 *)*i )
  {
    if ( !i )
    {
      v18 = *(_BYTE *)v9 != 0xCC;
      goto LABEL_38;
    }
    if ( v9 == i[1] && (!*((_BYTE *)i + 50) || Process == (_KPROCESS *)i[2]) )
      break;
  }
  if ( (KiDynamicTraceMask & 4) == 0 )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v12 = (CurrentPrcb->PrcbFlags.PrcbFlags & 0x800) != 0;
      if ( CurrentPrcb->CombinedNmiMceActive )
        v12 = 1;
      if ( v12 )
      {
        CurrentPrcb = 0LL;
        goto LABEL_12;
      }
      CurrentPrcb->PrcbFlags.PrcbFlags |= 0x800u;
    }
    if ( (_BYTE)a4 )
    {
      v13 = (_KPROCESS *)i[2];
      if ( !v13 || *((_BYTE *)i + 50) || v13 == Process )
      {
        if ( *((_BYTE *)i + 24) )
        {
          v15 = 4LL;
          if ( *((_BYTE *)i + 50) )
            v15 = 6LL;
          if ( ((unsigned __int8 (__fastcall *)(__int64, __int64, _KPROCESS *))KiDynamicTraceCallouts[v15])(
                 a2,
                 i[4],
                 Process) )
          {
            goto LABEL_13;
          }
          v6 = a1;
        }
        LOBYTE(a4) = a3;
        v16 = KiTpCompletion((char *)i + 52, v6, a2, a4);
        if ( v16 >= 0 && *((_BYTE *)i + 25) )
        {
          v17 = 5LL;
          if ( *((_BYTE *)i + 50) )
            v17 = 7LL;
          ((void (__fastcall *)(__int64, __int64))KiDynamicTraceCallouts[v17])(a2, i[5]);
        }
LABEL_37:
        v18 = v16 >= 0;
        goto LABEL_38;
      }
      LOBYTE(a4) = a3;
      v14 = KiTpCompletion((char *)i + 52, v6, a2, a4);
    }
    else
    {
      v14 = KiTpWriteBreakpoint(i, 0LL, Process);
    }
    v16 = v14;
    goto LABEL_37;
  }
LABEL_12:
  LOBYTE(a4) = a3;
  if ( (int)KiTpCompletion((char *)i + 52, v6, a2, a4) >= 0 )
LABEL_13:
    v18 = 1;
LABEL_38:
  if ( CurrentPrcb )
    CurrentPrcb->PrcbFlags.PrcbFlags &= ~0x800u;
  _InterlockedDecrement(&KiTpActiveTrapsCount);
  return v18;
}
