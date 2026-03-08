/*
 * XREFs of TR_CreateSecureObject @ 0x1C004139C
 * Callers:
 *     TR_Create @ 0x1C006DDF8 (TR_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C001E754 (CommonBuffer_ReleaseBuffer.c)
 *     __security_check_cookie @ 0x1C001E820 (__security_check_cookie.c)
 *     memset @ 0x1C0020700 (memset.c)
 *     CommonBuffer_AcquireShadowBuffer @ 0x1C003229C (CommonBuffer_AcquireShadowBuffer.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0037A20 (WPP_RECORDER_SF_sds.c)
 *     XilEndpoint_GetRemoteHandle @ 0x1C00391BC (XilEndpoint_GetRemoteHandle.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0052470 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall TR_CreateSecureObject(__int64 a1)
{
  __int64 v1; // rax
  int v3; // edx
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // r14
  _QWORD *v7; // rdi
  int v8; // esi
  __int64 v9; // rcx
  int v10; // edx
  int v11; // r8d
  int v12; // r9d
  __int64 RemoteHandle; // rax
  __int64 v14; // rcx
  int v15; // edx
  int v16; // edx
  int v17; // r8d
  int v18; // r9d
  _QWORD *v20; // rcx
  __int128 v21; // [rsp+48h] [rbp-31h] BYREF
  __int64 v22; // [rsp+58h] [rbp-21h]
  _QWORD v23[8]; // [rsp+60h] [rbp-19h] BYREF

  LODWORD(v22) = 0;
  v1 = *(_QWORD *)(a1 + 40);
  v21 = 0LL;
  if ( *(_BYTE *)(v1 + 601) && KeGetCurrentIrql() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v3, v4, v5);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 120LL);
  v7 = (_QWORD *)CommonBuffer_AcquireShadowBuffer(*(_DWORD *)(a1 + 20), a1, 828862034);
  if ( !v7 )
    return (unsigned int)-1073741670;
  memset(v23, 0, sizeof(v23));
  v9 = *(_QWORD *)(a1 + 56);
  LODWORD(v23[4]) = 39;
  RemoteHandle = XilEndpoint_GetRemoteHandle(v9, v10, v11, v12);
  v14 = *(_QWORD *)(a1 + 40);
  v23[5] = RemoteHandle;
  LODWORD(v23[6]) = *(_DWORD *)(a1 + 64);
  HIDWORD(v23[6]) = *(_DWORD *)(a1 + 20);
  LOBYTE(v23[7]) = (*(_QWORD *)(v14 + 336) & 0x4000000000000LL) != 0;
  v8 = SecureChannel_SendRequestSynchronously(*(_QWORD *)(v14 + 112), v23, 64LL, &v21, 24);
  if ( v8 < 0 )
  {
LABEL_16:
    CommonBuffer_ReleaseBuffer(v6, (__int64)v7);
    return (unsigned int)v8;
  }
  if ( (int)v21 < 0 )
  {
    v8 = v21;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
        v15,
        14,
        24,
        (__int64)&WPP_9ff532af533633cb75752ac9b9d63831_Traceguids,
        v21);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v16, v17, v18);
    }
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
    goto LABEL_16;
  }
  *(_QWORD *)(a1 + 288) = *((_QWORD *)&v21 + 1);
  v7[3] = v22;
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v20 = *(_QWORD **)(a1 + 216);
  if ( *v20 != a1 + 208 )
    __fastfail(3u);
  v7[1] = v20;
  *v7 = a1 + 208;
  *v20 = v7;
  *(_QWORD *)(a1 + 216) = v7;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  return (unsigned int)v8;
}
