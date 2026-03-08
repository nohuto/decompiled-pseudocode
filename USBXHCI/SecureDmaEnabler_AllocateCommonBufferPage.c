/*
 * XREFs of SecureDmaEnabler_AllocateCommonBufferPage @ 0x1C007A6EC
 * Callers:
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x1C0007A24 (XilCoreCommonBuffer_AllocateBuffers.c)
 *     CommonBuffer_AcquireSecureBuffer @ 0x1C00321B8 (CommonBuffer_AcquireSecureBuffer.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     SecureDmaEnabler_MapMemory @ 0x1C007AB74 (SecureDmaEnabler_MapMemory.c)
 */

__int64 __fastcall SecureDmaEnabler_AllocateCommonBufferPage(__int64 *a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  int v7; // edx
  int v8; // ebx
  __int64 v10; // rdi
  __int64 v11; // r8
  __int16 v12; // cx
  __int64 v13; // r8
  _QWORD v14[3]; // [rsp+40h] [rbp-40h] BYREF
  int v15; // [rsp+58h] [rbp-28h]
  int v16; // [rsp+5Ch] [rbp-24h]
  __int64 v17; // [rsp+60h] [rbp-20h]
  __int64 v18; // [rsp+68h] [rbp-18h]
  void *v19; // [rsp+70h] [rbp-10h]
  __int64 v20; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v21; // [rsp+C8h] [rbp+48h] BYREF

  v14[0] = 56LL;
  v21 = 0LL;
  v20 = 0LL;
  v14[2] = 0LL;
  v15 = 1;
  v16 = 1;
  v19 = off_1C0063450;
  v18 = a2 + 120;
  v17 = *a1;
  v14[1] = SecureDmaEnabler_WdfEvtCommonBufferPageCleanupCallback;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD, __int64, __int64, __int64 *, __int64 *))(WdfFunctions_01023 + 1536))(
         WdfDriverGlobals,
         v14,
         HIDWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink),
         1229146200LL,
         4096LL,
         &v20,
         &v21);
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72),
        v7,
        18,
        20,
        (__int64)&WPP_bc1ad2459c543d2ca8270d8dd36787fb_Traceguids,
        v8);
    }
    goto LABEL_4;
  }
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
          WdfDriverGlobals,
          v20,
          off_1C0063450);
  *(_QWORD *)(v10 + 16) = v20;
  *(_QWORD *)(v10 + 24) = a1;
  v11 = v21;
  v12 = v21;
  *(_QWORD *)(v10 + 32) = 0LL;
  *(_WORD *)(v10 + 42) = 0;
  *(_DWORD *)(v10 + 72) = 4096;
  *(_WORD *)(v10 + 40) = 8 * (((unsigned __int16)((v12 & 0xFFF) + 0x1FFF) >> 12) + 6);
  *(_QWORD *)(v10 + 64) = v11 & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)(v10 + 76) = v11 & 0xFFF;
  MmBuildMdlForNonPagedPool((PMDL)(v10 + 32));
  v8 = SecureDmaEnabler_MapMemory(a1, v10 + 32, v13, v10 + 88);
  if ( v8 < 0 )
  {
LABEL_4:
    if ( v20 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 1664))(WdfDriverGlobals);
    return (unsigned int)v8;
  }
  *(_QWORD *)v10 = v21;
  *(_QWORD *)(v10 + 8) = *(_QWORD *)(v10 + 88);
  *a3 = v10;
  if ( a4 )
    *a4 = v10 + 120;
  return (unsigned int)v8;
}
