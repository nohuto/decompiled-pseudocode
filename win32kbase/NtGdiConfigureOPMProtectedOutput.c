__int64 __fastcall NtGdiConfigureOPMProtectedOutput(void *a1, char *a2, unsigned int a3, char *a4)
{
  size_t v4; // r13
  unsigned int v6; // ebx
  void *v7; // rsi
  struct _DXGKMDT_OPM_CONFIGURE_PARAMETERS *Pool2; // r14
  int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // rax

  v4 = a3;
  v6 = 0;
  v7 = 0LL;
  Pool2 = (struct _DXGKMDT_OPM_CONFIGURE_PARAMETERS *)ExAllocatePool2(258LL, 4096LL, 1297108807LL);
  if ( Pool2 && (!(_DWORD)v4 || (v7 = (void *)ExAllocatePool2(258LL, v4, 1297108807LL)) != 0LL) )
  {
    v9 = SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS_(Pool2, a2);
    if ( v9 >= 0 )
    {
      if ( (_DWORD)v4 )
      {
        if ( (unsigned __int64)&a4[v4] > MmUserProbeAddress || &a4[v4] < a4 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v7, a4, v4);
      }
      v11 = SGDGetSessionState(v10);
      v9 = COPM::ConfigureProtectedOutput(
             *(void ***)(*(_QWORD *)(v11 + 24) + 3824LL),
             a1,
             Pool2,
             v4,
             (unsigned __int8 *)v7);
    }
  }
  else
  {
    v9 = -1073741801;
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0x4D504F47u);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x4D504F47u);
  if ( v9 < 0 )
    return (unsigned int)v9;
  return v6;
}
