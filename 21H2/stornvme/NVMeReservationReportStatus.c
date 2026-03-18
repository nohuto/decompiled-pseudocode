/*
 * XREFs of NVMeReservationReportStatus @ 0x1C001E814
 * Callers:
 *     NVMeReservationReportStatusCompletion @ 0x1C001E9E0 (NVMeReservationReportStatusCompletion.c)
 *     ScsiPersistentReserveIn @ 0x1C002091C (ScsiPersistentReserveIn.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0005100 (NVMeZeroMemory.c)
 *     GetNamespaceId @ 0x1C00051C8 (GetNamespaceId.c)
 *     SrbAssignQueueId @ 0x1C0005238 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00053D0 (GetSrbExtension.c)
 *     NVMeFreeDmaBuffer @ 0x1C00053FC (NVMeFreeDmaBuffer.c)
 *     SetPrpFromBuffer @ 0x1C000556C (SetPrpFromBuffer.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00055C4 (NVMeAllocateDmaBuffer.c)
 */

__int64 __fastcall NVMeReservationReportStatus(__int64 a1, __int64 a2, unsigned __int8 a3, __int16 a4, unsigned int a5)
{
  unsigned int v5; // ebx
  unsigned __int8 v10; // cl
  unsigned int v11; // ebp
  __int64 SrbExtension; // rdi
  unsigned int v13; // ecx
  __int64 v14; // r8
  int v15; // edx
  int NamespaceId; // [rsp+68h] [rbp+10h]
  unsigned int v18; // [rsp+80h] [rbp+28h]

  v5 = 0;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v10 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v10 = *(_BYTE *)(a2 + 7);
  NamespaceId = GetNamespaceId(a1, v10);
  v11 = a5;
  SrbExtension = GetSrbExtension(a2);
  if ( a5 <= 0x30 )
    v11 = 48;
  if ( *(_QWORD *)(SrbExtension + 4200) )
  {
    if ( *(_DWORD *)(SrbExtension + 4240) >= v11 )
    {
      *(_BYTE *)(SrbExtension + 4253) = *(_BYTE *)(SrbExtension + 4253) & 0xFC | 2;
      SrbAssignQueueId(a1, a2);
      v13 = *(_DWORD *)(SrbExtension + 4140) & 0xFFFFFFFE;
      v14 = *(_QWORD *)(SrbExtension + 4208);
      v15 = *(unsigned __int8 *)(a1 + 4096) >> 3;
      *(_DWORD *)(SrbExtension + 4100) = NamespaceId;
      *(_DWORD *)(SrbExtension + 4140) = v13 | v15 & 1;
      HIWORD(v18) = a4;
      LOWORD(v18) = a3;
      *(_BYTE *)(SrbExtension + 4096) = 14;
      *(_DWORD *)(SrbExtension + 4136) = (v11 >> 2) - 1;
      SetPrpFromBuffer(a1, (_QWORD *)SrbExtension, v14, v11);
      *(_BYTE *)(SrbExtension + 4253) |= 4u;
      *(_QWORD *)(SrbExtension + 4224) = NVMeReservationReportStatusCompletion;
      *(_QWORD *)(SrbExtension + 4232) = v18;
      return v5;
    }
    NVMeFreeDmaBuffer(
      a1,
      *(unsigned int *)(SrbExtension + 4240),
      (__int64 *)(SrbExtension + 4200),
      *(_QWORD *)(SrbExtension + 4208));
    *(_DWORD *)(SrbExtension + 4240) = 0;
  }
  NVMeAllocateDmaBuffer(a1, v11);
  v5 = -1056964605;
  *(_BYTE *)(a2 + 3) = 38;
  return v5;
}
