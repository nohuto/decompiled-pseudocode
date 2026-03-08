/*
 * XREFs of ?CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZPEAPEAU5@@Z @ 0x1C036DC84
 * Callers:
 *     ?CreateVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C036E2F8 (-CreateVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?CreateVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C036E57C (-CreateVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyVmBusChannel@@YAXPEAUVMBCHANNEL__@@@Z @ 0x1C036EC20 (-DestroyVmBusChannel@@YAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?EnsureClientVmBusInterface@@YAJXZ @ 0x1C0370A90 (-EnsureClientVmBusInterface@@YAJXZ.c)
 *     ?VmBusInterfaceDereference@@YAXXZ @ 0x1C037BAA4 (-VmBusInterfaceDereference@@YAXXZ.c)
 */

__int64 __fastcall CreateClientVmBusChannel(
        __int64 a1,
        struct _DEVICE_OBJECT *a2,
        struct _GUID *a3,
        struct _GUID *a4,
        const struct _UNICODE_STRING *a5,
        struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *a6,
        void (*a7)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int),
        void (*a8)(struct VMBCHANNEL__ *, unsigned int),
        struct VMBCHANNEL__ **a9)
{
  int v13; // edi
  __int64 v14; // rcx
  __int64 v15; // r8
  struct VMBCHANNEL__ *v17; // [rsp+50h] [rbp-31h] BYREF
  int v18; // [rsp+58h] [rbp-29h] BYREF
  __int64 v19; // [rsp+60h] [rbp-21h]
  char v20; // [rsp+68h] [rbp-19h]
  struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *v21; // [rsp+70h] [rbp-11h]
  void (*v22)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int); // [rsp+78h] [rbp-9h]

  v18 = -1;
  v21 = a6;
  v22 = a7;
  v19 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v20 = 1;
    v18 = 2135;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 2135);
  }
  else
  {
    v20 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v18, 2135);
  *a9 = 0LL;
  v13 = EnsureClientVmBusInterface();
  if ( v13 >= 0 )
  {
    v17 = 0LL;
    v13 = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *, _QWORD, struct VMBCHANNEL__ **))qword_1C013CE10)(
            a2,
            0LL,
            &v17);
    if ( v13 < 0 )
      goto LABEL_10;
    ((void (__fastcall *)(struct VMBCHANNEL__ *, __int64))qword_1C013CE80)(v17, 0x20000LL);
    ((void (__fastcall *)(struct VMBCHANNEL__ *, __int64, __int64))qword_1C013CEF8)(v17, 256LL, 256LL);
    ((void (__fastcall *)(struct VMBCHANNEL__ *, struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *))qword_1C013CE90)(
      v17,
      v21);
    ((void (__fastcall *)(struct VMBCHANNEL__ *, void (*)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int), _QWORD))qword_1C013CE88)(
      v17,
      v22,
      0LL);
    ((void (__fastcall *)(struct VMBCHANNEL__ *, __int64))qword_1C013CED8)(v17, a1);
    v13 = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *, struct _GUID *, struct _GUID *, _QWORD))qword_1C013CF00)(
            v17,
            a3,
            a4,
            0LL);
    if ( v13 < 0
      || (((void (__fastcall *)(struct VMBCHANNEL__ *, _QWORD))qword_1C013CEC8)(v17, 0LL),
          ((void (__fastcall *)(struct VMBCHANNEL__ *, const struct _UNICODE_STRING *))qword_1C013CE70)(v17, a5),
          v13 = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *))qword_1C013CE40)(v17),
          v13 < 0) )
    {
LABEL_10:
      if ( v17 )
      {
        WdLogSingleEntry1(2LL, v13);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to create host VM bus channel. Status: 0x%I64x",
          v13,
          0LL,
          0LL,
          0LL,
          0LL);
        DestroyVmBusChannel(v17);
      }
      else
      {
        VmBusInterfaceDereference();
      }
    }
    else
    {
      ((void (__fastcall *)(struct VMBCHANNEL__ *))qword_1C013CEF0)(v17);
      *a9 = v17;
    }
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
  if ( v20 )
  {
    LOBYTE(v14) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v18);
  }
  return (unsigned int)v13;
}
