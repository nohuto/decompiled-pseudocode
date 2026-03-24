/*
 * XREFs of IoctlQueryTemperatureInfoProcess @ 0x1C001348C
 * Callers:
 *     IoctlToNVMe @ 0x1C0002660 (IoctlToNVMe.c)
 * Callees:
 *     BuildGetLogPageCommand @ 0x1C0002AA4 (BuildGetLogPageCommand.c)
 *     SrbAssignQueueId @ 0x1C0005900 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C0005A44 (GetSrbExtension.c)
 *     NVMeZeroMemory @ 0x1C0005A70 (NVMeZeroMemory.c)
 *     NVMeAllocateDmaBuffer @ 0x1C0005B00 (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C0008040 (memset.c)
 *     KelvinToCelsius @ 0x1C0013E44 (KelvinToCelsius.c)
 */

__int64 __fastcall IoctlQueryTemperatureInfoProcess(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned int v8; // edx

  v2 = *(_QWORD *)(a1 + 1624);
  GetSrbExtension(a2);
  if ( *(_BYTE *)(v5 + 2) == 40 )
  {
    v6 = *(_QWORD *)(v5 + 64);
    v7 = 60LL;
  }
  else
  {
    v6 = *(_QWORD *)(v5 + 24);
    v7 = 16LL;
  }
  v8 = *(_DWORD *)(v5 + v7);
  if ( v8 >= 0x44 )
  {
    NVMeZeroMemory((void *)(v6 + 28), v8 - 28);
    *(_DWORD *)(v6 + 32) = 40;
    *(_DWORD *)(v6 + 28) = 40;
    *(_WORD *)(v6 + 36) = KelvinToCelsius(*(unsigned __int16 *)(v2 + 268));
    *(_WORD *)(v6 + 38) = KelvinToCelsius(*(unsigned __int16 *)(v2 + 266));
    NVMeAllocateDmaBuffer(a1, 0x200u);
    *(_BYTE *)(a2 + 3) = 4;
    return (unsigned int)-1056964605;
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 21;
    return (unsigned int)-1056964602;
  }
}
