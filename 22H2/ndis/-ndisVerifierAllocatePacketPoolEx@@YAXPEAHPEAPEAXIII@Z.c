/*
 * XREFs of ?ndisVerifierAllocatePacketPoolEx@@YAXPEAHPEAPEAXIII@Z @ 0x1C00AC5D0
 * Callers:
 *     <none>
 * Callees:
 *     NdisAllocatePacketPoolEx @ 0x1C0032560 (NdisAllocatePacketPoolEx.c)
 *     ?ndisVerifierInjectResourceFailure@@YAEE@Z @ 0x1C00AC768 (-ndisVerifierInjectResourceFailure@@YAEE@Z.c)
 */

void __fastcall ndisVerifierAllocatePacketPoolEx(
        PNDIS_STATUS Status,
        PNDIS_HANDLE PoolHandle,
        __int64 a3,
        __int64 a4,
        UINT ProtocolReservedLength)
{
  UINT v7; // r8d
  UINT v8; // r9d
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  if ( ndisVerifierInjectResourceFailure((unsigned __int8)Status) )
  {
    *PoolHandle = 0LL;
    *Status = -1073741670;
  }
  else
  {
    NdisAllocatePacketPoolEx(Status, PoolHandle, v7, v8, ProtocolReservedLength);
    if ( !*Status )
      *((_QWORD *)*PoolHandle + 3) = retaddr;
  }
}
