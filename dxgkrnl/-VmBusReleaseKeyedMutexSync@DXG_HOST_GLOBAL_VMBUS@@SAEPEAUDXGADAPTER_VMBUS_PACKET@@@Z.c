unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusReleaseKeyedMutexSync(struct DXGPROCESS **a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rax
  DXGKEYEDMUTEX *v5; // rbx
  __int64 v6; // rdx
  size_t Size; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+58h] [rbp+10h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC>((__int64)a1);
  v3 = v2;
  if ( !v2 )
    return 0;
  v4 = DxgkpAcquireKeyedMutexFromHandle(a1[12], *(_DWORD *)(v2 + 24));
  v5 = (DXGKEYEDMUTEX *)v4;
  if ( !v4 )
    return 0;
  v6 = *((unsigned int *)a1 + 36);
  if ( v6 - 48 < (unsigned __int64)*(unsigned int *)(v4 + 168) )
  {
    WdLogSingleEntry1(3LL, v6);
    DXGKEYEDMUTEX::ReleaseReference(v5);
    return 0;
  }
  LODWORD(Size) = *(_DWORD *)(v4 + 168);
  v9 = DXGKEYEDMUTEX::ReleaseSync(
         (void **)v4,
         *(_DWORD *)(v3 + 28),
         *(_QWORD *)(v3 + 32),
         *(_QWORD *)(v3 + 40),
         (char *)(v3 + 48),
         Size,
         0);
  DXGKEYEDMUTEX::ReleaseReference(v5);
  VmBusCompletePacket(a1[16], &v9, 4u);
  return 1;
}
