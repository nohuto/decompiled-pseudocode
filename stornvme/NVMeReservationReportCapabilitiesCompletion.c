/*
 * XREFs of NVMeReservationReportCapabilitiesCompletion @ 0x1C0017400
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C0001D98 (GetSrbExtension.c)
 *     GetNamespaceId @ 0x1C0007A8C (GetNamespaceId.c)
 *     GetSrbDataBuffer @ 0x1C0007AB8 (GetSrbDataBuffer.c)
 */

char __fastcall NVMeReservationReportCapabilitiesCompletion(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 SrbExtension; // rax
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // r8
  unsigned __int8 v9; // cl
  __int64 v10; // r11
  __int64 SrbDataBuffer; // r10
  char v12; // dl
  __int64 v13; // r9
  char v14; // cl
  char v15; // cl
  __int64 v16; // r11
  __int64 v18; // [rsp+40h] [rbp+18h] BYREF

  SrbExtension = GetSrbExtension(a2);
  v7 = SrbExtension;
  if ( v8 )
  {
    if ( *(_BYTE *)(v5 + 2) == 40 )
      v9 = *(_BYTE *)(*(unsigned int *)(v5 + 52) + v5 + 10);
    else
      v9 = *(_BYTE *)(v5 + 7);
    GetNamespaceId(v6, v9);
    SrbDataBuffer = GetSrbDataBuffer(v10, &v18);
    v12 = *(_BYTE *)(SrbDataBuffer + 2);
    *(_WORD *)SrbDataBuffer = 2048;
    *(_BYTE *)(SrbDataBuffer + 2) = *(_BYTE *)(v13 + 112) & 1 | v12 & 0x62 | 4;
    *(_BYTE *)(SrbDataBuffer + 3) = *(_BYTE *)(SrbDataBuffer + 3) & 0xE | *a3 & 1 | 0x80;
    v14 = *(_BYTE *)(SrbDataBuffer + 4) ^ (*(_BYTE *)(v13 + 112) ^ *(_BYTE *)(SrbDataBuffer + 4)) & 2;
    *(_BYTE *)(SrbDataBuffer + 4) = v14;
    LOBYTE(SrbExtension) = v14 ^ (v14 ^ (2 * *(_BYTE *)(v13 + 112))) & 8;
    *(_BYTE *)(SrbDataBuffer + 4) = SrbExtension;
    v15 = SrbExtension ^ (SrbExtension ^ (4 * *(_BYTE *)(v13 + 112))) & 0x20;
    *(_BYTE *)(SrbDataBuffer + 4) = v15;
    LOBYTE(SrbExtension) = v15 ^ (v15 ^ (4 * *(_BYTE *)(v13 + 112))) & 0x40;
    *(_BYTE *)(SrbDataBuffer + 4) = SrbExtension;
    *(_BYTE *)(SrbDataBuffer + 4) = (4 * *(_BYTE *)(v13 + 112)) ^ (SrbExtension ^ (4 * *(_BYTE *)(v13 + 112))) & 0x7F;
    LOBYTE(SrbExtension) = (*(_BYTE *)(SrbDataBuffer + 5) ^ (*(_BYTE *)(v13 + 112) >> 6)) & 1;
    *(_BYTE *)(SrbDataBuffer + 5) ^= SrbExtension;
    *(_BYTE *)(v16 + 3) = 1;
    *(_BYTE *)(v7 + 4253) |= 8u;
  }
  else
  {
    *(_BYTE *)(v5 + 3) = 4;
    *(_BYTE *)(SrbExtension + 4253) |= 8u;
  }
  return SrbExtension;
}
