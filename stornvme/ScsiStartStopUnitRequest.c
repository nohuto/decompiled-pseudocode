/*
 * XREFs of ScsiStartStopUnitRequest @ 0x1C001AC80
 * Callers:
 *     ScsiToNVMe @ 0x1C00010C0 (ScsiToNVMe.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C0001960 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C0001D98 (GetSrbExtension.c)
 *     NVMeSetSenseData @ 0x1C0024238 (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiStartStopUnitRequest(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 SrbExtension; // rdi
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // r11
  int v9; // eax
  unsigned __int8 v10; // bl
  __int64 v11; // rax
  int v12; // eax

  SrbExtension = GetSrbExtension(a2);
  if ( (*(_BYTE *)(v4 + 1) & 1) != 0 )
  {
    LOBYTE(v5) = 36;
    LOBYTE(v4) = 5;
    LOBYTE(v2) = 6;
    NVMeSetSenseData(v7, v2, v4, v5);
    return 3238002694LL;
  }
  if ( (*(_BYTE *)(v4 + 4) & 1) != 0 )
  {
    v9 = *(_DWORD *)(v6 + 32);
    if ( (v9 & 0x200) == 0 )
    {
      v10 = 0;
      *(_DWORD *)(v6 + 32) = v9 | 0x200;
      *(_DWORD *)(v6 + 236) = 0;
LABEL_9:
      *(_BYTE *)(SrbExtension + 4253) = *(_BYTE *)(SrbExtension + 4253) & 0xFC | 1;
      SrbAssignQueueId(v6, v2);
      v12 = (*(_DWORD *)(SrbExtension + 4140) ^ v10) & 0x1F;
      *(_BYTE *)(SrbExtension + 4096) = 9;
      *(_DWORD *)(SrbExtension + 4140) ^= v12;
      *(_BYTE *)(SrbExtension + 4136) = 2;
      return 0LL;
    }
  }
  else if ( ++*(_DWORD *)(v6 + 236) >= *(_DWORD *)(v6 + 220) )
  {
    v11 = *(_QWORD *)(v6 + 1840);
    *(_DWORD *)(v6 + 32) &= ~0x200u;
    v10 = *(_BYTE *)(v11 + 263);
    goto LABEL_9;
  }
  *(_BYTE *)(v2 + 3) = 1;
  return 0LL;
}
