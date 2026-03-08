/*
 * XREFs of ?CreateServerVmBusChannel@@YAJPEAX0PEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZIPEAPEAU5@@Z @ 0x1C036DFEC
 * Callers:
 *     ?CreateVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAXPEAVDXGPROCESSVMWP@@@Z @ 0x1C036E870 (-CreateVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAXPEAVDXGPROCESSVMWP@@@Z.c)
 *     ?CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAJPEAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z @ 0x1C036EA18 (-CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAJPEAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureServerVmBusInterface@@YAJXZ @ 0x1C0370D60 (-EnsureServerVmBusInterface@@YAJXZ.c)
 *     ?VmBusInterfaceDereference@@YAXXZ @ 0x1C037BAA4 (-VmBusInterfaceDereference@@YAXXZ.c)
 */

__int64 __fastcall CreateServerVmBusChannel(
        __int64 a1,
        void *a2,
        struct _DEVICE_OBJECT *a3,
        struct _GUID *a4,
        struct _GUID *a5,
        const struct _UNICODE_STRING *a6,
        struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *a7,
        void (*a8)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int),
        void (*a9)(struct VMBCHANNEL__ *, unsigned int),
        unsigned int a10,
        struct VMBCHANNEL__ **a11)
{
  __int64 v15; // rdx
  __int64 v16; // rsi
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r8
  struct VMBCHANNEL__ *v21; // [rsp+58h] [rbp-49h] BYREF
  __int128 v22; // [rsp+68h] [rbp-39h] BYREF
  __int128 v23; // [rsp+78h] [rbp-29h] BYREF
  int v24; // [rsp+88h] [rbp-19h] BYREF
  __int64 v25; // [rsp+90h] [rbp-11h]
  char v26; // [rsp+98h] [rbp-9h]

  v24 = -1;
  v25 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v26 = 1;
    v24 = 2135;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 2135);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v24, 2135);
  *a11 = 0LL;
  LODWORD(v16) = EnsureServerVmBusInterface();
  if ( (int)v16 >= 0 )
  {
    LOBYTE(v15) = 1;
    v21 = 0LL;
    LODWORD(v16) = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *, __int64, struct VMBCHANNEL__ **))qword_1C013CE10)(
                     a3,
                     v15,
                     &v21);
    if ( (int)v16 < 0 )
      goto LABEL_16;
    LODWORD(v16) = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *, __int64))qword_1C013D098)(v21, a1);
    if ( (int)v16 >= 0 )
    {
      LODWORD(v16) = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *, __int64))qword_1C013CE80)(v21, 0x20000LL);
      if ( (int)v16 >= 0 )
      {
        ((void (__fastcall *)(struct VMBCHANNEL__ *, void *))qword_1C013CED8)(v21, a2);
        v23 = (__int128)*a4;
        v22 = (__int128)*a5;
        LODWORD(v16) = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *, __int128 *, __int128 *))qword_1C013D088)(
                         v21,
                         &v23,
                         &v22);
        if ( (int)v16 >= 0 )
        {
          LODWORD(v16) = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *, struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *))qword_1C013CE90)(
                           v21,
                           a7);
          if ( (int)v16 >= 0 )
          {
            LODWORD(v16) = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *, void (*)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int), void (*)(struct VMBCHANNEL__ *, unsigned int)))qword_1C013CE88)(
                             v21,
                             a8,
                             a9);
            if ( (int)v16 >= 0 )
            {
              ((void (__fastcall *)(struct VMBCHANNEL__ *, __int64))qword_1C013D070)(v21, 2LL);
              ((void (__fastcall *)(struct VMBCHANNEL__ *, const struct _UNICODE_STRING *))qword_1C013CE70)(v21, a6);
              if ( a10
                && (v17 = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *, _QWORD, _QWORD))qword_1C013D078)(
                            v21,
                            (unsigned __int16)a10,
                            0LL),
                    v16 = v17,
                    v17 < 0) )
              {
                WdLogSingleEntry1(2LL, v17);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Failed to reserve IO space: 0x%I64x",
                  v16,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              else
              {
                LODWORD(v16) = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *))qword_1C013CE40)(v21);
                if ( (int)v16 >= 0 )
                {
                  ((void (__fastcall *)(struct VMBCHANNEL__ *))qword_1C013CEF0)(v21);
                  *a11 = v21;
                  goto LABEL_17;
                }
              }
            }
          }
        }
      }
    }
    WdLogSingleEntry1(2LL, (int)v16);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to create Host VmBus channel 0x%I64x",
      (int)v16,
      0LL,
      0LL,
      0LL,
      0LL);
    ((void (__fastcall *)(struct VMBCHANNEL__ *))qword_1C013CE18)(v21);
    if ( (int)v16 < 0 )
LABEL_16:
      VmBusInterfaceDereference();
  }
LABEL_17:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
  if ( v26 )
  {
    LOBYTE(v18) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v24);
  }
  return (unsigned int)v16;
}
