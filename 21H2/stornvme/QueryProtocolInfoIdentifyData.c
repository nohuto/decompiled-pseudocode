/*
 * XREFs of QueryProtocolInfoIdentifyData @ 0x1C001667C
 * Callers:
 *     IoctlQueryProtocolInfoProcess @ 0x1C0001EF0 (IoctlQueryProtocolInfoProcess.c)
 * Callees:
 *     GetNamespaceId @ 0x1C00058D4 (GetNamespaceId.c)
 *     SrbAssignQueueId @ 0x1C0005900 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C0005A44 (GetSrbExtension.c)
 *     NVMeAllocateDmaBuffer @ 0x1C0005B00 (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C0008040 (memset.c)
 */

__int64 __fastcall QueryProtocolInfoIdentifyData(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdi

  GetSrbExtension(a2);
  if ( *(_BYTE *)(v4 + 2) == 40 )
    v5 = *(_QWORD *)(v4 + 64);
  else
    v5 = *(_QWORD *)(v4 + 24);
  if ( *(_DWORD *)(v5 + 56) >= 0x1000u )
  {
    NVMeAllocateDmaBuffer(a1, 0x1000u);
    *(_BYTE *)(a2 + 3) = 4;
    return 3238002691LL;
  }
  else
  {
    *(_BYTE *)(v4 + 3) = 21;
    return 3238002694LL;
  }
}
