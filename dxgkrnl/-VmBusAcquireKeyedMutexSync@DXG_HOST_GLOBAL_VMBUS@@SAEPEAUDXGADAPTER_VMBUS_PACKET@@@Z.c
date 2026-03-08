/*
 * XREFs of ?VmBusAcquireKeyedMutexSync@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0373350
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0053394 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005AB84 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_ACQUIREKEY.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005C334 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z @ 0x1C0349D0C (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z.c)
 *     DxgkpAcquireKeyedMutexFromHandle @ 0x1C036EEA4 (DxgkpAcquireKeyedMutexFromHandle.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusAcquireKeyedMutexSync(struct DXGPROCESS **a1)
{
  __int64 v2; // rax
  union _LARGE_INTEGER *v3; // rbx
  __int64 v4; // rax
  DXGKEYEDMUTEX *v5; // rdi
  unsigned int v6; // ebp
  unsigned __int64 *v7; // r14
  union _LARGE_INTEGER *v9; // r9
  size_t v10; // [rsp+30h] [rbp-38h]
  union _LARGE_INTEGER v11; // [rsp+78h] [rbp+10h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC>((__int64)a1);
  v3 = (union _LARGE_INTEGER *)v2;
  if ( !v2 )
    return 0;
  v4 = DxgkpAcquireKeyedMutexFromHandle(a1[12], *(_DWORD *)(v2 + 24));
  v5 = (DXGKEYEDMUTEX *)v4;
  if ( !v4 )
    return 0;
  v6 = *(_DWORD *)(v4 + 168) + 24;
  v7 = (unsigned __int64 *)operator new[](v6, 0x4B677844u, 64LL);
  if ( !v7 )
  {
    DXGKEYEDMUTEX::ReleaseReference(v5);
    return 0;
  }
  v11.QuadPart = 0LL;
  v9 = 0LL;
  if ( (v3[7].LowPart & 1) == 0 )
  {
    v9 = &v11;
    v11 = v3[6];
  }
  LODWORD(v10) = *((_DWORD *)v5 + 42);
  *(_DWORD *)v7 = DXGKEYEDMUTEX::AcquireSync(
                    (unsigned int)v3[3].HighPart,
                    v3[4].QuadPart,
                    v3[5].LowPart,
                    v9,
                    (DXGKEYEDMUTEX *)(v7 + 2),
                    v7 + 3,
                    v10,
                    v7 + 1,
                    0);
  VmBusCompletePacket(a1[16], v7, v6);
  DXGKEYEDMUTEX::ReleaseReference(v5);
  operator delete(v7);
  return 1;
}
