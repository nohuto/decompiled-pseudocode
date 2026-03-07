__int64 __fastcall NtGdiGetOPMInformation(unsigned __int64 a1, char *a2, void *a3)
{
  __int64 v6; // rbp
  PLOOKASIDE_LIST_EX *v7; // rbx
  struct _DXGKMDT_OPM_GET_INFO_PARAMETERS *v8; // rax
  PLOOKASIDE_LIST_EX *v9; // rcx
  struct _DXGKMDT_OPM_GET_INFO_PARAMETERS *v10; // rsi
  int Information; // ebx
  void *Src[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v14[5]; // [rsp+30h] [rbp-28h] BYREF

  v6 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  v7 = *(PLOOKASIDE_LIST_EX **)(v6 + 3824);
  v8 = (struct _DXGKMDT_OPM_GET_INFO_PARAMETERS *)ExAllocateFromLookasideListEx(*v7);
  v9 = (PLOOKASIDE_LIST_EX *)(*(_QWORD *)(v6 + 3824) + 8LL);
  v14[0] = v8;
  v10 = v8;
  v14[1] = v7;
  COPMSimpleBufferPool<_DXGKMDT_OPM_REQUESTED_INFORMATION>::AcquireBufferSafe(v9, Src);
  if ( v10 && Src[0] )
  {
    Information = SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_GET_INFO_PARAMETERS_(v10, a2);
    if ( Information >= 0 )
    {
      Information = COPM::GetInformation(
                      *(void ***)(v6 + 3824),
                      a1,
                      v10,
                      (struct _DXGKMDT_OPM_REQUESTED_INFORMATION *const)Src[0]);
      if ( Information >= 0 )
        Information = SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_REQUESTED_INFORMATION_(a3, Src[0]);
    }
  }
  else
  {
    Information = -1073741670;
  }
  if ( Information >= 0 )
    Information = 0;
  COPMSimpleBufferPool<_DXGKMDT_OPM_GET_INFO_PARAMETERS>::CAutoUnlockBuffer::~CAutoUnlockBuffer((__int64)Src);
  COPMSimpleBufferPool<_DXGKMDT_OPM_GET_INFO_PARAMETERS>::CAutoUnlockBuffer::~CAutoUnlockBuffer((__int64)v14);
  return (unsigned int)Information;
}
