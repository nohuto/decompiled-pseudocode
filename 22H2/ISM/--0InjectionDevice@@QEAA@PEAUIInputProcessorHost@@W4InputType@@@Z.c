/*
 * XREFs of ??0InjectionDevice@@QEAA@PEAUIInputProcessorHost@@W4InputType@@@Z @ 0x1800239D0
 * Callers:
 *     ??0MouseProcessor@@IEAA@PEAUInputProcessorCreateParams@@@Z @ 0x180023864 (--0MouseProcessor@@IEAA@PEAUInputProcessorCreateParams@@@Z.c)
 *     ??0ControllerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x18011F644 (--0ControllerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InjectionDevice::InjectionDevice(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  memset_0((void *)(a1 + 8), 0, 0x60CuLL);
  *(_DWORD *)(a1 + 16) = 1548;
  *(_DWORD *)(a1 + 8) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
  result = a1;
  *(_DWORD *)(a1 + 12) = a3;
  *(_BYTE *)(a1 + 1556) = 0;
  return result;
}
