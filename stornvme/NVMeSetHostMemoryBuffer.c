/*
 * XREFs of NVMeSetHostMemoryBuffer @ 0x1C00237E0
 * Callers:
 *     NVMeControllerPowerDown @ 0x1C000DF70 (NVMeControllerPowerDown.c)
 *     NVMeFreeHostMemoryBuffer @ 0x1C000EE60 (NVMeFreeHostMemoryBuffer.c)
 *     NVMeInitHostMemoryBuffer @ 0x1C000F3EC (NVMeInitHostMemoryBuffer.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C0001960 (SrbAssignQueueId.c)
 *     ProcessCommand @ 0x1C0001E60 (ProcessCommand.c)
 *     memmove @ 0x1C0004280 (memmove.c)
 *     LocalCommandReuse @ 0x1C000C15C (LocalCommandReuse.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025560 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeSetHostMemoryBuffer(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned int a4,
        void *Src,
        size_t Size)
{
  int v6; // ebx
  int v8; // edi
  __int64 v10; // rax

  v6 = a2;
  v8 = a3;
  LocalCommandReuse(a1, a1 + 944);
  *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) &= ~2u;
  SrbAssignQueueId(a1, a1 + 952);
  *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4096LL) = 9;
  *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4136LL) = 13;
  *(_DWORD *)(*(_QWORD *)(a1 + 1040) + 4140LL) ^= (*(_DWORD *)(*(_QWORD *)(a1 + 1040) + 4140LL) ^ v6) & 1;
  *(_DWORD *)(*(_QWORD *)(a1 + 1040) + 4140LL) ^= (*(_DWORD *)(*(_QWORD *)(a1 + 1040) + 4140LL) ^ (2 * v8)) & 2;
  *(_DWORD *)(*(_QWORD *)(a1 + 1040) + 4144LL) = a4
                                               / (1 << (((*(_DWORD *)(*(_QWORD *)(a1 + 184) + 20LL) >> 7) & 0xF) + 12));
  memmove(*(void **)(a1 + 1936), Src, (unsigned int)Size);
  v10 = HIDWORD(*(_QWORD *)(a1 + 1944));
  *(_DWORD *)(*(_QWORD *)(a1 + 1040) + 4148LL) = *(_DWORD *)(a1 + 1944) & 0xFFFFFFF0;
  *(_DWORD *)(*(_QWORD *)(a1 + 1040) + 4152LL) = v10;
  *(_DWORD *)(*(_QWORD *)(a1 + 1040) + 4156LL) = (unsigned int)Size >> 4;
  ProcessCommand(a1, a1 + 952);
  WaitForCommandCompleteWithCustomTimeout(a1);
  return *(_BYTE *)(a1 + 955) != 1 ? 0xC1000001 : 0;
}
