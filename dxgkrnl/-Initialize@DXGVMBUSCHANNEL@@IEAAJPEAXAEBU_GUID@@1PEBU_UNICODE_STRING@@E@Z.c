__int64 __fastcall DXGVMBUSCHANNEL::Initialize(
        DXGVMBUSCHANNEL *this,
        void *a2,
        const struct _GUID *a3,
        const struct _GUID *a4,
        const struct _UNICODE_STRING *a5,
        unsigned __int8 a6)
{
  bool v8; // zf
  struct _KEVENT *v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // r14
  __int64 v15; // rbx
  const wchar_t *v16; // r9
  int v17; // eax
  _QWORD *v18; // rbx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // r14
  const wchar_t *v24; // r9
  int v25; // eax
  _QWORD *v26; // r14
  int v27; // eax
  __int64 v28; // r13
  const wchar_t *v29; // r9
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  __int64 v34; // rcx
  int v35; // eax
  int v37; // eax
  __int128 v38; // [rsp+58h] [rbp-29h] BYREF
  __int128 v39; // [rsp+68h] [rbp-19h] BYREF
  _DWORD v40[2]; // [rsp+78h] [rbp-9h] BYREF
  __int64 v41; // [rsp+80h] [rbp-1h]
  __int64 (__fastcall *v42)(); // [rsp+88h] [rbp+7h]
  __int64 (__fastcall *v43)(); // [rsp+90h] [rbp+Fh]
  __int64 (__fastcall *v44)(); // [rsp+98h] [rbp+17h]
  __int64 (__fastcall *v45)(); // [rsp+A0h] [rbp+1Fh]
  unsigned int v46; // [rsp+100h] [rbp+7Fh]

  v8 = a6 == 0;
  v46 = 2;
  *((_BYTE *)this + 27) = !v8;
  if ( v8 )
  {
    v10 = (struct _KEVENT *)operator new[](0x18uLL, 0x4B677844u, 64LL);
    *((_QWORD *)this + 4) = v10;
    if ( !v10 )
    {
      WdLogSingleEntry3(2LL, -1073741801LL, 199LL, this);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"m_pChannelStartEvent can't be allocated. Returning 0x%I64x",
        -1073741801LL,
        199LL,
        (__int64)this,
        0LL,
        0LL);
      goto LABEL_31;
    }
    KeInitializeEvent(v10, NotificationEvent, 0);
    v11 = EnsureClientVmBusInterface();
    LODWORD(v13) = v11;
    if ( v11 < 0 )
    {
      v14 = 224LL;
      v15 = v11;
      WdLogSingleEntry3(2LL, v11, 224LL, this);
      v16 = L"EnsureClientVmBusInterface failed. Returning 0x%I64x";
LABEL_8:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v16, v15, v14, (__int64)this, 0LL, 0LL);
      goto LABEL_30;
    }
  }
  else
  {
    v17 = EnsureServerVmBusInterface();
    LODWORD(v13) = v17;
    if ( v17 < 0 )
    {
      v14 = 213LL;
      v15 = v17;
      WdLogSingleEntry3(2LL, v17, 213LL, this);
      v16 = L"EnsureServerVmBusInterface failed. Returning 0x%I64x";
      goto LABEL_8;
    }
  }
  v18 = (_QWORD *)((char *)this + 16);
  LOBYTE(v12) = a6;
  v19 = ((__int64 (__fastcall *)(PDEVICE_OBJECT, __int64, char *))qword_1C013CE10)(
          g_pDriverObject->DeviceObject,
          v12,
          (char *)this + 16);
  v13 = v19;
  if ( v19 < 0 )
  {
    WdLogSingleEntry3(2LL, v19, 238LL, this);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VmbChannelAllocate failed. Returning 0x%I64x",
      v13,
      238LL,
      (__int64)this,
      0LL,
      0LL);
    VmBusInterfaceDereference();
    goto LABEL_30;
  }
  LOBYTE(v20) = 1;
  ((void (__fastcall *)(_QWORD, __int64))qword_1C013CEC8)(*v18, v20);
  v21 = *v18;
  if ( a6 )
  {
    v38 = DxgkVailVmBusChannel;
    v39 = DxgkVailVmBusChannelType;
    v22 = ((__int64 (__fastcall *)(__int64, __int128 *, __int128 *))qword_1C013D088)(v21, &v39, &v38);
    v13 = v22;
    if ( v22 < 0 )
    {
      v23 = 262LL;
      WdLogSingleEntry3(2LL, v22, 262LL, this);
      v24 = L"VmbServerChannelInitSetTargetInterfaceId failed. Returning 0x%I64x";
LABEL_17:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v24, v13, v23, (__int64)this, 0LL, 0LL);
      goto LABEL_18;
    }
    if ( a2 )
    {
      v25 = ((__int64 (__fastcall *)(_QWORD, void *))qword_1C013D098)(*v18, a2);
      v13 = v25;
      if ( v25 < 0 )
      {
        v23 = 279LL;
        WdLogSingleEntry3(2LL, v25, 279LL, this);
        v24 = L"VmbServerChannelInitSetVmbusHandle failed. Returning 0x%I64x";
        goto LABEL_17;
      }
    }
    else
    {
      v46 = 3;
    }
    v30 = ((__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C013D070)(*v18, v46);
    LODWORD(v13) = v30;
    if ( v30 < 0 )
    {
      v14 = 296LL;
      v15 = v30;
      WdLogSingleEntry3(2LL, v30, 296LL, this);
      v16 = L"VmbServerChannelInitSetFlags failed. Returning 0x%I64x";
      goto LABEL_8;
    }
  }
  else
  {
    v31 = ((__int64 (__fastcall *)(__int64, __int128 *, __int128 *, _QWORD))qword_1C013CF00)(
            v21,
            &DxgkVailVmBusChannelType,
            &DxgkVailVmBusChannel,
            0LL);
    LODWORD(v13) = v31;
    if ( v31 < 0 )
    {
      v14 = 311LL;
      v15 = v31;
      WdLogSingleEntry3(2LL, v31, 311LL, this);
      v16 = L"VmbClientChannelInitSetTargetPnp failed. Returning 0x%I64x";
      goto LABEL_8;
    }
  }
  if ( a5 )
    ((void (__fastcall *)(_QWORD))qword_1C013CE70)(*v18);
  v32 = ((__int64 (__fastcall *)(_QWORD, __int64))qword_1C013CE80)(*v18, 2048LL);
  v13 = v32;
  if ( v32 < 0 )
  {
    WdLogSingleEntry3(2LL, v32, 329LL, this);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VmbChannelInitSetMaximumPacketSize failed. Returning 0x%I64x",
      v13,
      329LL,
      (__int64)this,
      0LL,
      0LL);
  }
LABEL_30:
  if ( !a6 )
  {
LABEL_31:
    v26 = (_QWORD *)((char *)this + 16);
    v33 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64))qword_1C013CEF8)(*((_QWORD *)this + 2), 8LL, 8LL);
    v13 = v33;
    if ( v33 < 0 )
    {
      v28 = 343LL;
      WdLogSingleEntry3(2LL, v33, 343LL, this);
      v29 = L"VmbClientChannelInitSetRingBufferPageCount failed. Returning 0x%I64x";
LABEL_35:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v29, v13, v28, (__int64)this, 0LL, 0LL);
      goto LABEL_36;
    }
LABEL_19:
    ((void (__fastcall *)(_QWORD, DXGVMBUSCHANNEL *))qword_1C013CED8)(*v26, this);
    v27 = ((__int64 (__fastcall *)(_QWORD, void *, _QWORD))qword_1C013CE88)(*v26, &ProcessRingPacket, 0LL);
    v13 = v27;
    if ( v27 >= 0 )
    {
      v34 = *v26;
      v41 = 0LL;
      v42 = ProcessChannelClosed;
      v43 = ProcessChannelSuspended;
      v44 = ProcessChannelStarted;
      v45 = ProcessChannelPostStarted;
      v40[0] = 1;
      v40[1] = 48;
      v35 = ((__int64 (__fastcall *)(__int64, _DWORD *))qword_1C013CE90)(v34, v40);
      v13 = v35;
      if ( v35 >= 0 )
      {
        if ( a6 )
          return (unsigned int)v13;
        v37 = ((__int64 (__fastcall *)(_QWORD))qword_1C013CE40)(*v26);
        v13 = v37;
        if ( v37 >= 0 )
        {
          *((_BYTE *)this + 24) = 1;
          return (unsigned int)v13;
        }
        v28 = 394LL;
        WdLogSingleEntry3(2LL, v37, 394LL, this);
        v29 = L"VmbChannelEnable failed. Returning 0x%I64x";
      }
      else
      {
        v28 = 382LL;
        WdLogSingleEntry3(2LL, v35, 382LL, this);
        v29 = L"VmbChannelInitSetStateChangeCallbacks failed. Returning 0x%I64x";
      }
    }
    else
    {
      v28 = 359LL;
      WdLogSingleEntry3(2LL, v27, 359LL, this);
      v29 = L"VmbChannelInitSetProcessPacketCallbacks failed. Returning 0x%I64x";
    }
    goto LABEL_35;
  }
LABEL_18:
  v26 = (_QWORD *)((char *)this + 16);
  if ( (int)v13 >= 0 )
    goto LABEL_19;
LABEL_36:
  ((void (__fastcall *)(_QWORD))qword_1C013CE18)(*v26);
  *v26 = 0LL;
  VmBusInterfaceDereference();
  return (unsigned int)v13;
}
