/*
 * XREFs of InitCreateSharedSection @ 0x1C02DCE04
 * Callers:
 *     Win32UserInitialize @ 0x1C02DBF90 (Win32UserInitialize.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     UserCreateHeap @ 0x1C007C650 (UserCreateHeap.c)
 *     Win32CreateSection @ 0x1C007E7E8 (Win32CreateSection.c)
 *     WPP_RECORDER_AND_TRACE_SF_DD @ 0x1C007FC8C (WPP_RECORDER_AND_TRACE_SF_DD.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqD @ 0x1C00C3174 (WPP_RECORDER_AND_TRACE_SF_qqD.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InitCreateSharedSection(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // si
  bool v4; // dl
  char v5; // dl
  __int64 result; // rax
  NTSTATUS v7; // edi
  __int64 v8; // r9
  char *v9; // rdi
  __int64 v10; // [rsp+20h] [rbp-58h]
  int v11; // [rsp+20h] [rbp-58h]
  int v12; // [rsp+28h] [rbp-50h]
  int v13; // [rsp+30h] [rbp-48h]
  int v14; // [rsp+38h] [rbp-40h]
  int v15; // [rsp+40h] [rbp-38h]
  int v16; // [rsp+80h] [rbp+8h] BYREF
  int v17; // [rsp+84h] [rbp+Ch]
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
      (__int64)&WPP_169ed334ae81372bb981068a10849f93_Traceguids);
  }
  v5 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_DD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v5,
      a3,
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      4u,
      0xEu,
      0xCu,
      (__int64)&WPP_169ed334ae81372bb981068a10849f93_Traceguids,
      0x200000,
      0x8000);
  v17 = 0;
  v16 = 2129920;
  result = Win32CreateSection(&ghSectionShared, 983071LL, a3, (__int64)&v16, v10, 0x4000000);
  if ( (int)result >= 0 )
  {
    ViewSize = 0LL;
    gpvSharedBase = 0LL;
    v7 = MmMapViewInSessionSpace(ghSectionShared, &gpvSharedBase, &ViewSize);
    if ( v7 >= 0 )
    {
      v9 = (char *)gpvSharedBase + 0x200000;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v3 = 0;
      }
      if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_qqD(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v3,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          v8,
          v11,
          v12,
          v13,
          v14,
          v15);
      gpvSharedAlloc = UserCreateHeap(
                         (__int64)ghSectionShared,
                         0x200000LL,
                         v9,
                         0x8000u,
                         (NTSTATUS (__stdcall *)(PVOID, PVOID *, PSIZE_T))UserCommitSharedMemory);
      if ( gpvSharedAlloc )
        return 0;
      UserSetLastError(8);
      v7 = -1073741801;
      lambda_4f3bdbd8a6fa7b11fd9fa329091dc79e_::_lambda_invoker_cdecl_();
    }
    lambda_301e07556f67996ceb949113357e8481_::_lambda_invoker_cdecl_();
    return (unsigned int)v7;
  }
  return result;
}
