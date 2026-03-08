/*
 * XREFs of UsbhEtwGetDeviceInfo @ 0x1C005B56C
 * Callers:
 *     UsbhEtwLogDeviceDescription @ 0x1C005B5DC (UsbhEtwLogDeviceDescription.c)
 *     UsbhEtwLogDeviceInformation @ 0x1C005B6F8 (UsbhEtwLogDeviceInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UsbhEtwGetDeviceInfo(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = *(_QWORD *)(a1 + 1160);
  *(_WORD *)(a2 + 8) = *(_WORD *)(a1 + 1408);
  *(_WORD *)(a2 + 10) = *(_WORD *)(a1 + 1410);
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 2688);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(a1 + 2692);
  *(_DWORD *)(a2 + 20) = *(_DWORD *)(a1 + 2696);
  *(_DWORD *)(a2 + 24) = *(_DWORD *)(a1 + 2700);
  *(_DWORD *)(a2 + 28) = *(_DWORD *)(a1 + 2704);
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a1 + 2708);
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(a1 + 2712);
  result = *(unsigned int *)(a1 + 1168);
  *(_DWORD *)(a2 + 40) = result;
  return result;
}
