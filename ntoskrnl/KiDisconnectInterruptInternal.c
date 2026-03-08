/*
 * XREFs of KiDisconnectInterruptInternal @ 0x14028E85C
 * Callers:
 *     KiDisconnectInterruptCommon @ 0x14028E714 (KiDisconnectInterruptCommon.c)
 *     KiProcessPendingDisconnect @ 0x14039E4D0 (KiProcessPendingDisconnect.c)
 * Callees:
 *     HalDisableInterrupt @ 0x14028E8F0 (HalDisableInterrupt.c)
 */

__int64 __fastcall KiDisconnectInterruptInternal(__int64 a1, __int64 a2)
{
  char v2; // r9
  unsigned int v4; // r8d
  __int64 v5; // rdi
  _QWORD *v6; // rcx
  _QWORD *v8; // rax
  __int64 v9; // r8
  _QWORD *v10; // rdx
  __int64 v11; // rdx

  v2 = 0;
  v4 = -1073741585;
  if ( *(_BYTE *)(a1 + 95) )
  {
    v5 = *(unsigned int *)(a1 + 88);
    v6 = KeGetCurrentPrcb()->InterruptObject[v5];
    if ( !*((_BYTE *)v6 + 93) )
    {
      v8 = (_QWORD *)v6[1];
      if ( !v8 || v8 == v6 + 1 )
        v2 = 1;
    }
    if ( (__int64 (__fastcall *)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16))v6[10] != KiChainedDispatch
      || v2 )
    {
      HalDisableInterrupt(a2);
      KeGetCurrentPrcb()->InterruptObject[v5] = 0LL;
      v4 = 0;
    }
    else
    {
      if ( (_QWORD *)a1 == v6 )
      {
        v6 = (_QWORD *)(v6[1] - 8LL);
        v6[10] = KiChainedDispatch;
        KeGetCurrentPrcb()->InterruptObject[v5] = v6;
      }
      v9 = *(_QWORD *)(a1 + 8);
      v10 = *(_QWORD **)(a1 + 16);
      if ( *(_QWORD *)(v9 + 8) != a1 + 8 || *v10 != a1 + 8 )
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      v11 = v6[1] - 8LL;
      if ( v6 == (_QWORD *)v11 && *(_BYTE *)(v11 + 93) )
      {
        *(_QWORD *)(v11 + 80) = KiInterruptDispatch;
        KeGetCurrentPrcb()->InterruptObject[v5] = (void *)v11;
      }
      v4 = 296;
    }
    *(_BYTE *)(a1 + 95) = 0;
  }
  return v4;
}
