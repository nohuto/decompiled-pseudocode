__int64 __fastcall InitCreateSharedSection(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // si
  bool v4; // dl
  bool v5; // dl
  __int64 result; // rax
  int v7; // edx
  NTSTATUS v8; // edi
  int v9; // r8d
  int v10; // r9d
  char *v11; // rdi
  __int64 v12; // [rsp+20h] [rbp-58h]
  int v13; // [rsp+20h] [rbp-58h]
  int v14; // [rsp+28h] [rbp-50h]
  int v15; // [rsp+30h] [rbp-48h]
  int v16; // [rsp+38h] [rbp-40h]
  int v17; // [rsp+40h] [rbp-38h]
  int v18; // [rsp+80h] [rbp+8h] BYREF
  int v19; // [rsp+84h] [rbp+Ch]
  ULONG_PTR ViewSize; // [rsp+88h] [rbp+10h] BYREF

  v3 = 1;
  v4 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v4,
      a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      11,
      (__int64)&WPP_d82075a5283f313a7450cbd9ac983c1d_Traceguids);
  }
  v5 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_DD(
      WPP_GLOBAL_Control->AttachedDevice,
      v5,
      a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      12,
      (__int64)&WPP_d82075a5283f313a7450cbd9ac983c1d_Traceguids,
      0,
      0);
  v19 = 0;
  v18 = 2129920;
  result = Win32CreateSection(&ghSectionShared, 983071LL, a3, (__int64)&v18, v12, 0x4000000);
  if ( (int)result >= 0 )
  {
    ViewSize = 0LL;
    gpvSharedBase = 0LL;
    v8 = MmMapViewInSessionSpace(ghSectionShared, &gpvSharedBase, &ViewSize);
    if ( v8 >= 0 )
    {
      v11 = (char *)gpvSharedBase + 0x200000;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v3 = 0;
      }
      if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = v3;
        LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_qqD(
          WPP_GLOBAL_Control->AttachedDevice,
          v7,
          v9,
          v10,
          v13,
          v14,
          v15,
          v16,
          v17,
          (char)gpvSharedBase,
          ViewSize);
      }
      gpvSharedAlloc = UserCreateHeap(
                         (__int64)ghSectionShared,
                         0x200000LL,
                         v11,
                         0x8000LL,
                         (NTSTATUS (__stdcall *)(PVOID, PVOID *, PSIZE_T))UserCommitSharedMemory);
      if ( gpvSharedAlloc )
        return 0;
      UserSetLastError(8);
      v8 = -1073741801;
      lambda_4f3bdbd8a6fa7b11fd9fa329091dc79e_::_lambda_invoker_cdecl_();
    }
    lambda_301e07556f67996ceb949113357e8481_::_lambda_invoker_cdecl_();
    return (unsigned int)v8;
  }
  return result;
}
