/*
 * XREFs of VidSchiResetContextQuantumAtISR @ 0x1C0016C80
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0piixqq_EtwWriteTransfer @ 0x1C0037E04 (McTemplateK0piixqq_EtwWriteTransfer.c)
 */

__int64 __fastcall VidSchiResetContextQuantumAtISR(__int64 a1)
{
  __int64 v1; // r8
  unsigned __int8 v2; // bl
  __int64 *v4; // rcx
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v8; // r10
  __int64 *v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r10

  v1 = *(_QWORD *)(a1 + 96);
  v2 = 0;
  if ( *(_BYTE *)(a1 + 640)
    || (*(_DWORD *)(*(_QWORD *)(v1 + 24) + 2536LL) & 4) == 0
    || gulPriorityToYieldPriorityBand[*(unsigned int *)(a1 + 404)] )
  {
    v4 = (__int64 *)(a1 + 440);
    *(_QWORD *)(a1 + 440) = *(_QWORD *)(a1 + 472);
    *(_BYTE *)(a1 + 640) = 0;
LABEL_3:
    v2 = 1;
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 436), 3, 2);
    goto LABEL_4;
  }
  if ( *(_QWORD *)(v1 + 2008) )
    v8 = *(_QWORD *)(v1 + 2016);
  else
    v8 = *(_QWORD *)(a1 + 472);
  v9 = (__int64 *)(a1 + 472);
  if ( *(_BYTE *)(v1 + 2024) && *(__int64 *)(a1 + 440) <= 0 )
  {
    v10 = *(_QWORD *)(v1 + 2000);
    if ( *(_QWORD *)(a1 + 488) == v10 )
    {
      v8 = 0LL;
      v9 = (__int64 *)(a1 + 472);
    }
    else
    {
      *(_QWORD *)(a1 + 488) = v10;
    }
  }
  v4 = (__int64 *)(a1 + 440);
  v11 = *(_QWORD *)(a1 + 440) + v8;
  *(_QWORD *)(a1 + 440) = v11;
  if ( v11 > 0 )
  {
    if ( v11 > *v9 )
      v11 = *v9;
    *v4 = v11;
    goto LABEL_3;
  }
LABEL_4:
  if ( bTracingEnabled )
  {
    v5 = *(_QWORD *)(a1 + 56);
    v6 = *(_QWORD *)(v1 + 2016);
    if ( !v5 || (LODWORD(v1) = *(_DWORD *)(a1 + 112), (v1 & 0x40) != 0) )
      LODWORD(v5) = a1;
    if ( (byte_1C00769C1 & 2) != 0 )
      McTemplateK0piixqq_EtwWriteTransfer(
        *(_QWORD *)(a1 + 448),
        a1,
        v1,
        v5,
        *(_QWORD *)(a1 + 448),
        *v4,
        v6,
        *(_DWORD *)(a1 + 436),
        1);
  }
  return v2;
}
