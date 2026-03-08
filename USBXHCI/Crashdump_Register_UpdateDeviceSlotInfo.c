/*
 * XREFs of Crashdump_Register_UpdateDeviceSlotInfo @ 0x1C004E0E8
 * Callers:
 *     Crashdump_InitializeWithControllerReset @ 0x1C004C868 (Crashdump_InitializeWithControllerReset.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Crashdump_Register_UpdateDeviceSlotInfo(__int64 *a1, signed __int32 a2, __int64 *a3)
{
  __int64 v3; // rax
  int v5; // r9d
  unsigned __int8 v6; // bl
  _DWORD *v8; // rdi
  __int64 result; // rax
  __int64 v10; // rcx
  signed __int32 v11[14]; // [rsp+0h] [rbp-38h] BYREF

  v3 = *a1;
  v5 = *((_DWORD *)a1 + 6);
  v6 = a2;
  v11[8] = a2;
  v8 = *(_DWORD **)(v3 + 32);
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: MaximumDeviceSlots: %u, NumberOfDeviceSlotsEnabled: %u\n", v5, a2);
  v8[14] = v6;
  _InterlockedOr(v11, 0);
  result = a1[1];
  v10 = *a3;
  if ( (result & 1) != 0 )
  {
    v8[12] = v10;
    _InterlockedOr(v11, 0);
    v8[13] = HIDWORD(v10);
  }
  else
  {
    *((_QWORD *)v8 + 6) = v10;
  }
  _InterlockedOr(v11, 0);
  if ( *((_DWORD *)a1 + 7) )
  {
    result = a1[4];
    *(_QWORD *)a3[1] = result;
  }
  return result;
}
