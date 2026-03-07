__int64 __fastcall NVMeReservationReportCapabilities(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  unsigned int v3; // esi
  unsigned __int8 v5; // cl
  int NamespaceId; // ebx
  __int64 v7; // r9
  __int64 SrbExtension; // rdi
  __int64 v9; // r9
  __int64 v10; // r10

  v3 = 0;
  if ( a3 >= 8u )
  {
    if ( *(_BYTE *)(a2 + 2) == 40 )
      v5 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
    else
      v5 = *(_BYTE *)(a2 + 7);
    NamespaceId = GetNamespaceId(a1, v5);
    SrbExtension = GetSrbExtension(v7);
    *(_BYTE *)(SrbExtension + 4253) = *(_BYTE *)(SrbExtension + 4253) & 0xFC | 1;
    SrbAssignQueueId(v10, v9);
    *(_BYTE *)(SrbExtension + 4096) = 10;
    *(_QWORD *)(SrbExtension + 4224) = NVMeReservationReportCapabilitiesCompletion;
    *(_DWORD *)(SrbExtension + 4100) = NamespaceId;
    *(_BYTE *)(SrbExtension + 4136) = -125;
  }
  else
  {
    v3 = -1056964604;
    *(_BYTE *)(a2 + 3) = 6;
  }
  return v3;
}
