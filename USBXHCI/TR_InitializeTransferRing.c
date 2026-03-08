/*
 * XREFs of TR_InitializeTransferRing @ 0x1C0007DFC
 * Callers:
 *     TR_Enable_Internal @ 0x1C0007D64 (TR_Enable_Internal.c)
 *     Endpoint_InitializeTransferRing @ 0x1C0013AB4 (Endpoint_InitializeTransferRing.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1C0039950 (Endpoint_ControlEndpointResetCompletion.c)
 * Callees:
 *     memset @ 0x1C0020700 (memset.c)
 *     TR_InitializeTransferSegment @ 0x1C0041A2C (TR_InitializeTransferSegment.c)
 */

__int64 __fastcall TR_InitializeTransferRing(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 result; // rax

  v1 = (_QWORD *)(a1 + 176);
  if ( *(_BYTE *)(a1 + 280) )
    TR_InitializeTransferSegment(a1, *v1);
  memset(*(void **)(*v1 + 16LL), 0, *(unsigned int *)(*v1 + 44LL));
  v3 = *v1;
  v4 = *(_QWORD *)(*v1 + 16LL);
  *(_DWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 184) = v4;
  result = (unsigned int)((*(_DWORD *)(v3 + 44) >> 4) - 1);
  *(_DWORD *)(a1 + 200) = 1;
  *(_DWORD *)(a1 + 196) = result;
  return result;
}
