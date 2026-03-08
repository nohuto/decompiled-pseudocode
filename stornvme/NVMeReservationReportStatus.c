/*
 * XREFs of NVMeReservationReportStatus @ 0x1C0017528
 * Callers:
 *     NVMeReservationReportStatusCompletion @ 0x1C00176E0 (NVMeReservationReportStatusCompletion.c)
 *     ScsiPersistentReserveIn @ 0x1C001A12C (ScsiPersistentReserveIn.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C0001960 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C0001D98 (GetSrbExtension.c)
 *     GetNamespaceId @ 0x1C0007A8C (GetNamespaceId.c)
 *     NVMeZeroMemory @ 0x1C0009218 (NVMeZeroMemory.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000C1C0 (NVMeAllocateDmaBuffer.c)
 *     NVMeFreeDmaBuffer @ 0x1C000EE04 (NVMeFreeDmaBuffer.c)
 *     SetPrpFromBuffer @ 0x1C001B45C (SetPrpFromBuffer.c)
 */

__int64 __fastcall NVMeReservationReportStatus(__int64 a1, __int64 a2, unsigned __int8 a3, __int16 a4, unsigned int a5)
{
  unsigned int v5; // esi
  unsigned int v6; // ebx
  unsigned __int8 v10; // cl
  __int64 SrbExtension; // rbp
  __int64 *v12; // r14
  unsigned int v13; // eax
  __int64 v14; // r8
  unsigned int v15; // edx
  int NamespaceId; // [rsp+78h] [rbp+10h]
  unsigned int v19; // [rsp+90h] [rbp+28h]

  v5 = a5;
  v6 = 0;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v10 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v10 = *(_BYTE *)(a2 + 7);
  NamespaceId = GetNamespaceId(a1, v10);
  SrbExtension = GetSrbExtension(a2);
  if ( a5 <= 0x30 )
    v5 = 48;
  v12 = (__int64 *)(SrbExtension + 4208);
  if ( *(_QWORD *)(SrbExtension + 4200) )
  {
    v13 = *(_DWORD *)(SrbExtension + 4240);
    if ( v13 >= v5 )
    {
      *(_BYTE *)(SrbExtension + 4253) = *(_BYTE *)(SrbExtension + 4253) & 0xFC | 2;
      SrbAssignQueueId(a1, a2);
      v14 = *v12;
      LOWORD(v19) = a3;
      v15 = *(_DWORD *)(SrbExtension + 4140) & 0xFFFFFFFE | (*(unsigned __int8 *)(a1 + 4296) >> 3) & 1;
      *(_DWORD *)(SrbExtension + 4100) = NamespaceId;
      *(_DWORD *)(SrbExtension + 4140) = v15;
      *(_DWORD *)(SrbExtension + 4136) = (v5 >> 2) - 1;
      HIWORD(v19) = a4;
      *(_BYTE *)(SrbExtension + 4096) = 14;
      SetPrpFromBuffer(a1, SrbExtension, v14, v5);
      *(_BYTE *)(SrbExtension + 4253) |= 4u;
      *(_QWORD *)(SrbExtension + 4224) = NVMeReservationReportStatusCompletion;
      *(_QWORD *)(SrbExtension + 4232) = v19;
      return v6;
    }
    NVMeFreeDmaBuffer(a1, v13, (__int64 *)(SrbExtension + 4200), *v12);
    *(_DWORD *)(SrbExtension + 4240) = 0;
  }
  NVMeAllocateDmaBuffer(a1, v5);
  v6 = -1056964605;
  *(_BYTE *)(a2 + 3) = 38;
  return v6;
}
