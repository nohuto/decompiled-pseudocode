/*
 * XREFs of XilRegister_WriteUlong64 @ 0x1C0014C68
 * Callers:
 *     XilCoreCommand_Initialize @ 0x1C0014418 (XilCoreCommand_Initialize.c)
 *     XilCoreDeviceSlot_Initialize @ 0x1C001498C (XilCoreDeviceSlot_Initialize.c)
 *     Interrupter_UpdateERDP @ 0x1C0014AA0 (Interrupter_UpdateERDP.c)
 *     Interrupter_InterrupterRegisterIntialize @ 0x1C0014B54 (Interrupter_InterrupterRegisterIntialize.c)
 *     Interrupter_DeInitializeAfterOffload @ 0x1C003DCEC (Interrupter_DeInitializeAfterOffload.c)
 *     Interrupter_InitializeForOffload @ 0x1C003E028 (Interrupter_InitializeForOffload.c)
 *     XilCoreCommand_AbortCommandRing @ 0x1C0052A80 (XilCoreCommand_AbortCommandRing.c)
 *     XilCoreCommand_FreeResources @ 0x1C0052ACC (XilCoreCommand_FreeResources.c)
 *     XilCoreDeviceSlot_FreeResources @ 0x1C0052EE4 (XilCoreDeviceSlot_FreeResources.c)
 *     Interrupter_ReleaseInterrupter @ 0x1C007A04C (Interrupter_ReleaseInterrupter.c)
 * Callees:
 *     Register_WriteSecureMmio @ 0x1C003F1E8 (Register_WriteSecureMmio.c)
 */

__int64 __fastcall XilRegister_WriteUlong64(__int64 a1, _DWORD *a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  __int64 result; // rax
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = a3;
  v3 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(v3 + 601) )
    return Register_WriteSecureMmio(a1, a2, 3LL, &v6);
  result = *(_QWORD *)(v3 + 336);
  if ( (result & 1) != 0 )
  {
    *a2 = a3;
    _InterlockedOr(v5, 0);
    result = HIDWORD(v6);
    a2[1] = HIDWORD(v6);
  }
  else
  {
    *(_QWORD *)a2 = a3;
  }
  _InterlockedOr(v5, 0);
  return result;
}
