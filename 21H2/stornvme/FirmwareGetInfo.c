/*
 * XREFs of FirmwareGetInfo @ 0x1C0002AC0
 * Callers:
 *     IoctlFirmwareProcess @ 0x1C00029FC (IoctlFirmwareProcess.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C0005238 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00053D0 (GetSrbExtension.c)
 *     BuildGetLogPageCommand @ 0x1C0005458 (BuildGetLogPageCommand.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00055C4 (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C00109C0 (memset.c)
 */

__int64 __fastcall FirmwareGetInfo(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rdi
  unsigned int v5; // eax
  _DWORD *v6; // rbx
  __int64 SrbExtension; // rbx
  void *v8; // r9
  int v9; // r8d
  __int64 v10; // rax
  unsigned int v11; // ebp
  __int64 v13; // [rsp+F8h] [rbp+10h] BYREF
  __int64 v14; // [rsp+100h] [rbp+18h] BYREF

  v13 = 0LL;
  v14 = 0LL;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v4 = *(_DWORD **)(a2 + 64);
  else
    v4 = *(_DWORD **)(a2 + 24);
  v5 = v4[12];
  if ( v5 < 0x10 || (v6 = (_DWORD *)((char *)v4 + (unsigned int)v4[11]), v5 < 0x18) && *v6 == 2 && v6[1] >= 0x18u )
  {
    v4[5] = 3;
    v11 = -1056964602;
    *(_BYTE *)(a2 + 3) = 21;
  }
  else
  {
    NVMeAllocateDmaBuffer(a1, 512LL, &v13, &v14);
    if ( v13 )
    {
      SrbExtension = GetSrbExtension(a2);
      memset(v8, 0, 0x200uLL);
      *(_BYTE *)(SrbExtension + 4253) |= 3u;
      SrbAssignQueueId(a1, a2);
      LOBYTE(v9) = 3;
      BuildGetLogPageCommand(a1, SrbExtension, v9, 512, v14, -1, 0LL, 0);
      *(_BYTE *)(SrbExtension + 4253) |= 4u;
      *(_QWORD *)(SrbExtension + 4224) = NVMeGetLogPageFirmwareSlotCompletion;
      *(_QWORD *)(SrbExtension + 4200) = v13;
      v10 = v14;
      *(_DWORD *)(SrbExtension + 4240) = 512;
      v11 = 0;
      *(_QWORD *)(SrbExtension + 4208) = v10;
      return v11;
    }
    *(_BYTE *)(a2 + 3) = 4;
    v11 = -1056964605;
    v4[5] = 1;
  }
  if ( *(_BYTE *)(a1 + 24) )
    StorPortExtendedFunction(87LL, a1, 0LL, 0LL);
  return v11;
}
