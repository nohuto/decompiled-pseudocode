/*
 * XREFs of NVMeSetHostMemoryBuffer @ 0x1C001B5EC
 * Callers:
 *     NVMeControllerPowerDown @ 0x1C000E1DC (NVMeControllerPowerDown.c)
 *     NVMeFreeHostMemoryBuffer @ 0x1C000EA6C (NVMeFreeHostMemoryBuffer.c)
 *     NVMeInitHostMemoryBuffer @ 0x1C000EC10 (NVMeInitHostMemoryBuffer.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002C00 (ProcessCommand.c)
 *     SrbAssignQueueId @ 0x1C0005900 (SrbAssignQueueId.c)
 *     memmove @ 0x1C0007D80 (memmove.c)
 *     memset @ 0x1C0008040 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001CC1C (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeSetHostMemoryBuffer(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned int a4,
        void *Src,
        size_t Size)
{
  int v6; // edi
  int v8; // ebx
  __int64 v10; // rax
  __int64 v11; // rax

  v6 = a3;
  v8 = a2;
  *(_BYTE *)(a1 + 851) = 0;
  memset(*(void **)(a1 + 936), 0, 0x10A0uLL);
  *(_QWORD *)(*(_QWORD *)(a1 + 936) + 4232LL) = 0LL;
  v10 = *(_QWORD *)(a1 + 936);
  *(_QWORD *)(a1 + 904) = v10;
  *(_DWORD *)(a1 + 840) = 1;
  *(_BYTE *)(v10 + 4253) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 936) + 4253LL) &= ~2u;
  SrbAssignQueueId(a1, a1 + 848);
  *(_BYTE *)(*(_QWORD *)(a1 + 936) + 4096LL) = 9;
  *(_BYTE *)(*(_QWORD *)(a1 + 936) + 4136LL) = 13;
  *(_DWORD *)(*(_QWORD *)(a1 + 936) + 4140LL) ^= (*(_DWORD *)(*(_QWORD *)(a1 + 936) + 4140LL) ^ v8) & 1;
  *(_DWORD *)(*(_QWORD *)(a1 + 936) + 4140LL) ^= (*(_DWORD *)(*(_QWORD *)(a1 + 936) + 4140LL) ^ (2 * v6)) & 2;
  *(_DWORD *)(*(_QWORD *)(a1 + 936) + 4144LL) = a4
                                              / (1 << (((*(_DWORD *)(*(_QWORD *)(a1 + 160) + 20LL) >> 7) & 0xF) + 12));
  memmove(*(void **)(a1 + 1720), Src, (unsigned int)Size);
  v11 = HIDWORD(*(_QWORD *)(a1 + 1728));
  *(_DWORD *)(*(_QWORD *)(a1 + 936) + 4148LL) = *(_DWORD *)(a1 + 1728) & 0xFFFFFFF0;
  *(_DWORD *)(*(_QWORD *)(a1 + 936) + 4152LL) = v11;
  *(_DWORD *)(*(_QWORD *)(a1 + 936) + 4156LL) = (unsigned int)Size >> 4;
  ProcessCommand(a1, a1 + 848);
  WaitForCommandCompleteWithCustomTimeout(a1);
  return *(_BYTE *)(a1 + 851) != 1 ? 0xC1000001 : 0;
}
