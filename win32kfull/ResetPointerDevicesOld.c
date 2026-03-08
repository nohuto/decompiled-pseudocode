/*
 * XREFs of ResetPointerDevicesOld @ 0x1C012E3BC
 * Callers:
 *     xxxSwitchDesktop @ 0x1C00205D4 (xxxSwitchDesktop.c)
 *     ?PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z @ 0x1C0078E18 (-PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z.c)
 *     MasterInputThreadPrepareForRitTakeover @ 0x1C00DB6BC (MasterInputThreadPrepareForRitTakeover.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ResetPointerDevicesOld(__int64 a1)
{
  __int64 v1; // rax
  NTSTATUS result; // eax
  HANDLE Handle; // [rsp+30h] [rbp+8h] BYREF

  Handle = 0LL;
  v1 = SGDGetUserSessionState(a1);
  result = CHidInput::GetKernelHandleToRimObj(*(CHidInput **)(v1 + 16840), &Handle);
  if ( result >= 0 )
  {
    RIMResetPointerDevices(Handle, 2LL);
    return ZwClose(Handle);
  }
  return result;
}
