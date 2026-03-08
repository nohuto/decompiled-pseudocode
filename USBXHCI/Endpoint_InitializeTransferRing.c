/*
 * XREFs of Endpoint_InitializeTransferRing @ 0x1C0013AB4
 * Callers:
 *     Endpoint_OnCancelSetDequeuePointer @ 0x1C0010A74 (Endpoint_OnCancelSetDequeuePointer.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1C001B610 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x1C003AD30 (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C003B190 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 * Callees:
 *     TR_InitializeTransferRing @ 0x1C0007DFC (TR_InitializeTransferRing.c)
 */

__int64 __fastcall Endpoint_InitializeTransferRing(__int64 *a1, unsigned int a2)
{
  __int64 v3; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx

  if ( *((_BYTE *)a1 + 37) )
  {
    v5 = *a1;
    if ( _bittest64((const signed __int64 *)(v5 + 336), 0x2Cu) )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(a1[17] + 32) + 16LL) + 16LL * a2;
      v7 = *(_QWORD *)(v5 + 336);
      if ( (v7 & 0x1800000000LL) != 0 )
      {
        if ( (v7 & 0x1000000000LL) != 0 )
        {
          if ( (v7 & 0x800000000LL) == 0 )
            *(_DWORD *)(v6 + 12) &= 0xFF000000;
        }
        else
        {
          *(_DWORD *)(v6 + 8) = (unsigned __int8)*(_DWORD *)(v6 + 8);
        }
      }
      else
      {
        *(_DWORD *)(v6 + 8) &= 0xFF000000;
      }
    }
    v3 = *(_QWORD *)(104LL * (a2 - 1) + a1[17] + 48);
  }
  else
  {
    v3 = a1[11];
  }
  return TR_InitializeTransferRing(v3);
}
