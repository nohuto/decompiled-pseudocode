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
