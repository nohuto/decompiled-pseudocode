/*
 * XREFs of LogSenseInformationalExceptions @ 0x1C001C6EC
 * Callers:
 *     ScsiLogSenseRequest @ 0x1C00206FC (ScsiLogSenseRequest.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0005100 (NVMeZeroMemory.c)
 *     SrbAssignQueueId @ 0x1C0005238 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00053D0 (GetSrbExtension.c)
 *     BuildGetLogPageCommand @ 0x1C0005458 (BuildGetLogPageCommand.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00055C4 (NVMeAllocateDmaBuffer.c)
 *     NVMeSetSenseData @ 0x1C000E3C0 (NVMeSetSenseData.c)
 *     memset @ 0x1C00109C0 (memset.c)
 */

__int64 __fastcall LogSenseInformationalExceptions(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rbx
  __int64 v5; // rax
  unsigned int v6; // edx
  char v7; // al

  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v4 = *(_DWORD **)(a2 + 64);
    v5 = 60LL;
  }
  else
  {
    v4 = *(_DWORD **)(a2 + 24);
    v5 = 16LL;
  }
  if ( v4 && (v6 = *(_DWORD *)(a2 + v5), v6 >= 0xC) )
  {
    NVMeZeroMemory(v4, v6);
    v7 = *((_BYTE *)v4 + 6);
    *((_WORD *)v4 + 2) = 0;
    *v4 = 134217775;
    *(_DWORD *)((char *)v4 + 7) = -16777212;
    *((_BYTE *)v4 + 6) = v7 & 0x40 | 0x23;
    NVMeAllocateDmaBuffer(a1, 0x200u);
    *(_BYTE *)(a2 + 3) = 4;
    return 0LL;
  }
  else
  {
    NVMeSetSenseData(a2, 6, 5, 0x24u);
    return 3238002694LL;
  }
}
