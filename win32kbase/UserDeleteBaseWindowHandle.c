/*
 * XREFs of UserDeleteBaseWindowHandle @ 0x1C017C760
 * Callers:
 *     NtMITMinuserWindowDestroyed @ 0x1C016B2C0 (NtMITMinuserWindowDestroyed.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1C003A33C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C003A360 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C004E3E0 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C004F968 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     HMValidateHandleNoSecure @ 0x1C007A1CC (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C007EBF0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     HMDestroyUnlockedObject @ 0x1C01538C0 (HMDestroyUnlockedObject.c)
 */

__int64 __fastcall UserDeleteBaseWindowHandle(int a1)
{
  char v2; // bl
  char v3; // dl
  char v4; // r8
  struct tagTHREADINFO *v5; // rbp
  __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct _HANDLEENTRY *v16; // rsi
  struct tagTHREADINFO *v17; // r14
  __int64 v18; // r15
  __int64 CurrentProcessWin32Process; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  bool v23; // dl
  char v24; // r8
  int v25; // ecx
  bool v26; // dl
  char v27; // r8
  char v28; // dl
  char v29; // r8
  char v30; // dl
  char v31; // r8
  char v32; // dl

  v2 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400) == 0
    || (v3 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v3 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v4 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v4 = 0;
  }
  if ( v3 || v4 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v3,
      v4,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      11,
      16,
      (__int64)&WPP_68b0a22091f43afc894dba60a7884b12_Traceguids);
  v5 = gptiCurrent;
  v6 = 0LL;
  if ( (*((_DWORD *)gptiCurrent + 318) & 0x1000000) != 0 )
  {
    v9 = HMValidateHandleNoSecure(a1, 23);
    if ( v9 )
    {
      if ( !gbInDestroyHandleTableObjects
        && !IS_USERCRIT_OWNED_EXCLUSIVE(v8, v7, v10, v11)
        && (!IS_USERCRIT_OWNED_AT_ALL(v13, v12, v14, v15)
         || !tagDomLock::IsLockedExclusive(&gDomainHandleManagerLock)
         && !tagDomLock::IsLockedShared(&gDomainHandleManagerLock)) )
      {
        __int2c();
      }
      v16 = (struct _HANDLEENTRY *)((char *)qword_1C02D0E08
                                  + dword_1C02D0E10 * (unsigned int)(unsigned __int16)*(_DWORD *)v9);
      v17 = (struct tagTHREADINFO *)*((_QWORD *)gpKernelHandleTable
                                    + 3
                                    * ((__int64)(dword_1C02D0E10 * (unsigned int)(unsigned __int16)*(_DWORD *)v9) >> 5)
                                    + 1);
      v18 = *((_QWORD *)v17 + 53);
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(
                                     3
                                   * ((__int64)(dword_1C02D0E10 * (unsigned int)(unsigned __int16)*(_DWORD *)v9) >> 5));
      v22 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
        v22 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      if ( v22 == v18 && v5 == v17 )
      {
        if ( (*((_BYTE *)v16 + 25) & 1) == 0 )
        {
          v6 = *(_QWORD *)(v9 + 56);
          *(_QWORD *)(v9 + 56) = 0LL;
          HMDestroyUnlockedObject(v16, v22, v20, v21);
          goto LABEL_72;
        }
        v23 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || (v24 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
        {
          v24 = 0;
        }
        if ( v23 || v24 )
          WPP_RECORDER_AND_TRACE_SF_q(
            WPP_GLOBAL_Control->AttachedDevice,
            v23,
            v24,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            5,
            11,
            17,
            (__int64)&WPP_68b0a22091f43afc894dba60a7884b12_Traceguids,
            a1);
        v25 = 4317;
      }
      else
      {
        v26 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || (v27 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
        {
          v27 = 0;
        }
        if ( v26 || v27 )
          WPP_RECORDER_AND_TRACE_SF_q(
            WPP_GLOBAL_Control->AttachedDevice,
            v26,
            v27,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            5,
            11,
            18,
            (__int64)&WPP_68b0a22091f43afc894dba60a7884b12_Traceguids,
            a1);
        v25 = 5;
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400) == 0
        || (v28 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        v28 = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (v29 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        v29 = 0;
      }
      if ( v28 || v29 )
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v28,
          v29,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          5,
          11,
          19,
          (__int64)&WPP_68b0a22091f43afc894dba60a7884b12_Traceguids,
          a1);
      v25 = 6;
    }
    UserSetLastError(v25);
    goto LABEL_72;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400) == 0
    || (v30 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v30 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v31 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v31 = 0;
  }
  if ( v30 || v31 )
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v30,
      v31,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      5,
      11,
      20,
      (__int64)&WPP_68b0a22091f43afc894dba60a7884b12_Traceguids,
      (char)gptiCurrent);
  UserSetLastError(4317);
LABEL_72:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400) == 0
    || (v32 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v32 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v2 = 0;
  if ( v32 || v2 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v32,
      v2,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      11,
      21,
      (__int64)&WPP_68b0a22091f43afc894dba60a7884b12_Traceguids);
  return v6;
}
