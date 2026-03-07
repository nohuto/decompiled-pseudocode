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
