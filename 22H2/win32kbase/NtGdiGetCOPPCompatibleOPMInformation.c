/*
 * XREFs of NtGdiGetCOPPCompatibleOPMInformation @ 0x1C0140600
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoUnlockBuffer@?$COPMSimpleBufferPool@U_DXGKMDT_OPM_GET_INFO_PARAMETERS@@@@QEAA@XZ @ 0x1C00BF7FC (--1CAutoUnlockBuffer@-$COPMSimpleBufferPool@U_DXGKMDT_OPM_GET_INFO_PARAMETERS@@@@QEAA@XZ.c)
 *     SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_REQUESTED_INFORMATION_ @ 0x1C00BF85C (SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_REQUESTED_INFORMATION_.c)
 *     ?AcquireBufferSafe@?$COPMSimpleBufferPool@U_DXGKMDT_OPM_REQUESTED_INFORMATION@@@@QEAA?AVCAutoUnlockBuffer@1@XZ @ 0x1C00BFB4C (-AcquireBufferSafe@-$COPMSimpleBufferPool@U_DXGKMDT_OPM_REQUESTED_INFORMATION@@@@QEAA-AVCAutoUnl.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS_ @ 0x1C013FC24 (SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS_.c)
 *     ??1CAutoUnlockBuffer@?$COPMSimpleBufferPool@U_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS@@@@QEAA@XZ @ 0x1C013FC88 (--1CAutoUnlockBuffer@-$COPMSimpleBufferPool@U_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS@@@.c)
 *     ?GetCOPPCompatibleInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1C01400E8 (-GetCOPPCompatibleInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETER.c)
 */

__int64 __fastcall NtGdiGetCOPPCompatibleOPMInformation(unsigned __int64 a1, char *a2, void *a3)
{
  char *v4; // rsi
  __int64 v7; // rbx
  struct _DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS *v8; // rdi
  struct _DXGKMDT_OPM_REQUESTED_INFORMATION *v9; // rsi
  COPM *v10; // rcx
  int COPPCompatibleInformation; // ebx
  void *Src[2]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v14[2]; // [rsp+40h] [rbp-28h] BYREF

  v4 = (char *)qword_1C0250C58 + 16;
  v7 = *((_QWORD *)qword_1C0250C58 + 2);
  ++*(_DWORD *)(v7 + 20);
  v8 = (struct _DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS *)ExpInterlockedPopEntrySList((PSLIST_HEADER)v7);
  if ( !v8 )
  {
    ++*(_DWORD *)(v7 + 24);
    v8 = (struct _DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v7 + 48))(
                                                                      *(unsigned int *)(v7 + 36),
                                                                      *(unsigned int *)(v7 + 44),
                                                                      *(unsigned int *)(v7 + 40),
                                                                      v7);
  }
  v14[0] = v8;
  v14[1] = v4;
  COPMSimpleBufferPool<_DXGKMDT_OPM_REQUESTED_INFORMATION>::AcquireBufferSafe(
    (struct _SLIST_ENTRY *)((char *)qword_1C0250C58 + 8),
    (PSLIST_ENTRY *)Src);
  if ( v8 && (v9 = (struct _DXGKMDT_OPM_REQUESTED_INFORMATION *)Src[0]) != 0LL )
  {
    COPPCompatibleInformation = SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS_(
                                  v8,
                                  a2);
    if ( COPPCompatibleInformation >= 0 )
    {
      COPPCompatibleInformation = COPM::GetCOPPCompatibleInformation(v10, a1, v8, v9);
      if ( COPPCompatibleInformation >= 0 )
        COPPCompatibleInformation = SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_REQUESTED_INFORMATION_(a3, v9);
    }
  }
  else
  {
    COPPCompatibleInformation = -1073741670;
  }
  if ( COPPCompatibleInformation >= 0 )
    COPPCompatibleInformation = 0;
  COPMSimpleBufferPool<_DXGKMDT_OPM_GET_INFO_PARAMETERS>::CAutoUnlockBuffer::~CAutoUnlockBuffer((__int64)Src);
  COPMSimpleBufferPool<_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS>::CAutoUnlockBuffer::~CAutoUnlockBuffer((__int64)v14);
  return (unsigned int)COPPCompatibleInformation;
}
