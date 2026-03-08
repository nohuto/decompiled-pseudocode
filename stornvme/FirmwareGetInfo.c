/*
 * XREFs of FirmwareGetInfo @ 0x1C0011CF4
 * Callers:
 *     IoctlFirmwareProcess @ 0x1C00137A8 (IoctlFirmwareProcess.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C0001960 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C0001D98 (GetSrbExtension.c)
 *     memset @ 0x1C0004580 (memset.c)
 *     GetSrbDataBuffer @ 0x1C0007AB8 (GetSrbDataBuffer.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000C1C0 (NVMeAllocateDmaBuffer.c)
 *     BuildGetLogPageCommand @ 0x1C0010E14 (BuildGetLogPageCommand.c)
 */

__int64 __fastcall FirmwareGetInfo(__int64 a1, __int64 a2)
{
  _DWORD *SrbDataBuffer; // rdi
  unsigned int v5; // eax
  unsigned int v6; // esi
  _DWORD *v7; // rbx
  __int64 v9; // [rsp+D0h] [rbp-28h] BYREF

  SrbDataBuffer = (_DWORD *)GetSrbDataBuffer(a2, &v9);
  v5 = SrbDataBuffer[12];
  if ( v5 < 0x10
    || (v7 = (_DWORD *)((char *)SrbDataBuffer + (unsigned int)SrbDataBuffer[11]), *v7 == 2)
    && v7[1] >= 0x18u
    && v5 < 0x18 )
  {
    SrbDataBuffer[5] = 3;
    v6 = -1056964602;
    *(_BYTE *)(a2 + 3) = 21;
  }
  else
  {
    NVMeAllocateDmaBuffer(a1, 0x200u);
    *(_BYTE *)(a2 + 3) = 4;
    v6 = -1056964605;
    SrbDataBuffer[5] = 1;
  }
  if ( *(_BYTE *)(a1 + 24) )
    StorPortExtendedFunction(87LL, a1, 0LL, 0LL);
  return v6;
}
