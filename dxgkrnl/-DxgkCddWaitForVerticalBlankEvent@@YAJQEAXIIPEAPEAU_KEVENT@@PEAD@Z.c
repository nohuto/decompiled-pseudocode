__int64 __fastcall DxgkCddWaitForVerticalBlankEvent(
        struct DXGADAPTER *this,
        unsigned int a2,
        __int64 a3,
        struct _KEVENT **a4,
        char *a5)
{
  __int64 v6; // r13
  __int64 v7; // r15
  int PairingAdapters; // eax
  __int64 v9; // r8
  volatile signed __int64 *v10; // rdi
  struct DXGADAPTER *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  DXGADAPTER *v14; // rdi
  ADAPTER_DISPLAY **v15; // r14
  ADAPTER_DISPLAY *v16; // rsi
  __int64 v17; // rax
  char *v18; // r12
  unsigned int v19; // edx
  bool v20; // zf
  __int64 v21; // rcx
  ADAPTER_DISPLAY *v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // r8
  unsigned int v26; // r14d
  DXGADAPTER *v27; // rcx
  __int64 v28; // rdi
  int v29; // esi
  DXGADAPTER *v30; // r12
  DXGGLOBAL **v31; // rcx
  DXGGLOBAL **v32; // rcx
  __int64 v33; // r8
  __int64 v35; // rbx
  __int64 v36; // r8
  int (__fastcall *v37)(_QWORD, __int64, __int64, _QWORD); // rax
  int v38; // r8d
  const wchar_t *v39; // r9
  int v40; // eax
  KPROCESSOR_MODE WaitMode[8]; // [rsp+28h] [rbp-E0h]
  KPROCESSOR_MODE WaitModea[8]; // [rsp+28h] [rbp-E0h]
  BOOLEAN Alertable[8]; // [rsp+30h] [rbp-D8h]
  BOOLEAN Alertablea[8]; // [rsp+30h] [rbp-D8h]
  char v45; // [rsp+58h] [rbp-B0h]
  char v46; // [rsp+59h] [rbp-AFh]
  DXGADAPTER *v47; // [rsp+60h] [rbp-A8h] BYREF
  char *v48; // [rsp+68h] [rbp-A0h]
  _QWORD v49[2]; // [rsp+70h] [rbp-98h] BYREF
  char v50; // [rsp+80h] [rbp-88h]
  void *Src; // [rsp+88h] [rbp-80h]
  __int64 v52; // [rsp+90h] [rbp-78h]
  union _LARGE_INTEGER Timeout; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int64 v54; // [rsp+A0h] [rbp-68h] BYREF
  char v55; // [rsp+A8h] [rbp-60h] BYREF
  char v56; // [rsp+A9h] [rbp-5Fh]
  _BYTE v57[8]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v58; // [rsp+B8h] [rbp-50h]
  struct DXGADAPTER *v59; // [rsp+C0h] [rbp-48h]
  char v60; // [rsp+C8h] [rbp-40h]
  __int64 v61; // [rsp+D0h] [rbp-38h]
  _BYTE v62[8]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v63; // [rsp+F8h] [rbp-10h]
  struct DXGADAPTER *v64; // [rsp+100h] [rbp-8h]
  char v65; // [rsp+108h] [rbp+0h]
  char *v66; // [rsp+110h] [rbp+8h]
  PVOID Object[64]; // [rsp+138h] [rbp+30h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+338h] [rbp+230h] BYREF

  Src = a4;
  v6 = (unsigned int)a3;
  v7 = a2;
  LODWORD(v49[0]) = -1;
  v49[1] = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v50 = 1;
    LODWORD(v49[0]) = 3015;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 3015);
  }
  else
  {
    v50 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)v49, 3015);
  v47 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(this, v7, 0LL, 0LL, &v47, &v54, 0);
  if ( PairingAdapters < 0 )
  {
    v35 = PairingAdapters;
    WdLogSingleEntry3(2LL, this, v7, PairingAdapters);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get bound render adapter from Adapter 0x%I64x VidPn source ID 0x%I64x in DxgkCddWaitForVertical"
                "BlankEvent (ntStatus = 0x%I64x).",
      (__int64)this,
      v7,
      v35,
      0LL,
      0LL);
    v26 = -1073740759;
    goto LABEL_71;
  }
  v10 = (volatile signed __int64 *)v47;
  if ( !v47 )
  {
    WdLogSingleEntry1(1LL, 2541LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 2541LL, 0LL, 0LL, 0LL, 0LL);
  }
  v56 = 0;
  v59 = (struct DXGADAPTER *)v10;
  v60 = 0;
  v61 = 0LL;
  if ( v10 )
  {
    _InterlockedIncrement64(v10 + 3);
    v10 = (volatile signed __int64 *)v47;
    v58 = -1LL;
  }
  v64 = (struct DXGADAPTER *)v10;
  v65 = 0;
  v66 = 0LL;
  if ( v10 )
  {
    _InterlockedIncrement64(v10 + 3);
    v10 = (volatile signed __int64 *)v47;
    v63 = -1LL;
  }
  if ( _InterlockedExchangeAdd64(v10 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v47 + 2), v47);
  if ( v65 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v62, 0LL, 0LL);
  v11 = v64;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v64 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v64 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v12, (const EVENT_DESCRIPTOR *)"g", v13, 72);
      KeWaitForSingleObject((char *)v64 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v64, 0LL);
    v11 = v64;
  }
  v66 = 0LL;
  v65 = 1;
  if ( *((_DWORD *)v11 + 50) != 1 )
    goto LABEL_82;
  if ( v59 == v64 || (COREACCESS::AcquireShared((COREACCESS *)v57, a5), *((_DWORD *)v59 + 50) == 1) )
  {
    v14 = v47;
    v56 = 1;
    v15 = (ADAPTER_DISPLAY **)((char *)v47 + 2920);
    if ( !*((_QWORD *)v47 + 365) )
    {
      WdLogSingleEntry1(1LL, 2555LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
        2555LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v45 = 0;
    v46 = 0;
    if ( !*v15 )
    {
      WdLogSingleEntry1(1LL, 10367LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDisplayAdapter()", 10367LL, 0LL, 0LL, 0LL, 0LL);
    }
    v16 = *v15;
    if ( !*v15 )
      goto LABEL_87;
    if ( (unsigned int)v7 >= *((_DWORD *)v16 + 24) )
    {
      WdLogSingleEntry1(1LL, 6227LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"VidPnSourceId < m_NumVidPnSources",
        6227LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v17 = *((_QWORD *)v16 + 16);
    v52 = 4000 * v7;
    if ( !*(_BYTE *)(v17 + 4000 * v7 + 760) )
      goto LABEL_87;
    v18 = (char *)v14 + 2928;
    v19 = v7;
    v20 = *((_QWORD *)v14 + 366) == 0LL;
    v48 = (char *)v14 + 2928;
    if ( v20 )
    {
      ADAPTER_DISPLAY::ControlVSyncAdapter(*v15, v7);
      goto LABEL_33;
    }
    if ( (*((_DWORD *)v14 + 698) & 0x10) != 0 )
    {
      if ( (unsigned int)v7 >= 0x10 )
      {
LABEL_32:
        v45 = 1;
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v18 + 736LL) + 8LL)
                                                               + 544LL))(
               *(_QWORD *)(*(_QWORD *)v18 + 744LL),
               (unsigned int)v7) )
        {
          goto LABEL_33;
        }
        v36 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v18 + 736LL) + 8LL);
        v37 = *(int (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(v36 + 552);
        LOBYTE(v36) = 1;
        if ( v37(*(_QWORD *)(*(_QWORD *)v18 + 744LL), 1LL, v36, (unsigned int)v7) < 0 )
        {
          DXGADAPTER::DecrementVSyncWaiter(v14, v7, v38);
          WdLogSingleEntry1(2LL, 2600LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"DxgkCddWaitForVerticalBlankEvent failed to enable VSync",
            2600LL,
            0LL,
            0LL,
            0LL,
            0LL);
LABEL_87:
          v26 = -1073740759;
          goto LABEL_59;
        }
        v46 = 1;
LABEL_33:
        if ( v59 != v64 )
          COREACCESS::Release((COREACCESS *)v57);
        if ( !v65 )
          WdLogSingleEntry5(0LL, 275LL, 4LL, v62, 0LL, 0LL);
        v65 = 0;
        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v64 + 23) )
          DXGADAPTER::ReleaseCoreResource(v64, v66);
        v66 = 0LL;
        v56 = 0;
        Timeout.QuadPart = -800000LL;
        v22 = *v15;
        v23 = *((_QWORD *)*v15 + 2);
        if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v23 + 184)
          || ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v23 + 168)) )
        {
          WdLogSingleEntry1(1LL, 7357LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"!IsCoreResourceSharedOwner()",
            7357LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        memset(Object, 0, sizeof(Object));
        if ( (_DWORD)v6 )
        {
          if ( Src )
          {
            if ( (unsigned int)v6 < 0x3F )
            {
              v24 = v6;
              memmove(Object, Src, 8 * v6);
LABEL_45:
              Object[v24] = (PVOID)(*((_QWORD *)v22 + 16) + v52 + 904);
              if ( (unsigned int)(v6 + 1) > 0x40 )
              {
                WdLogSingleEntry1(1LL, 7387LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"Count <= _countof(Objects)",
                  7387LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              v26 = KeWaitForMultipleObjects(v6 + 1, Object, WaitAny, Executive, 0, 0, &Timeout, &WaitBlockArray);
              goto LABEL_48;
            }
            v26 = -1073741811;
            WdLogSingleEntry1(2LL, -1073741811LL);
            v39 = L"Invalid number of wait objects in ADAPTER_DISPLAY::WaitForEventsOrVerticalBlankEvent, returning 0x%I64x";
          }
          else
          {
            v26 = -1073741811;
            WdLogSingleEntry1(2LL, -1073741811LL);
            v39 = L"Invalid object array in ADAPTER_DISPLAY::WaitForEventsOrVerticalBlankEvent, returning 0x%I64x";
          }
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v39, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
LABEL_48:
          if ( v45 )
          {
            if ( !*(_QWORD *)v18 )
            {
              WdLogSingleEntry1(1LL, 2636LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"pDisplayAdapter->IsRenderAdapter()",
                2636LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            v27 = v47;
            v28 = 0LL;
            if ( (*((_DWORD *)v47 + 698) & 0x10) != 0 )
              v28 = (unsigned int)v7;
            if ( (unsigned int)v28 < 0x10 )
            {
              v29 = _InterlockedDecrement((volatile signed __int32 *)v47 + v28 + 738);
              v30 = v47;
              if ( v29 < 0 )
                WdLogSingleEntry5(0LL, 275LL, 37LL, v47, *((unsigned int *)v47 + v28 + 738), 0LL);
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
              {
                *(_DWORD *)Alertablea = v29;
                *(_DWORD *)WaitModea = v28;
                McTemplateK0pqq_EtwWriteTransfer(
                  (__int64)v27,
                  &VSyncWaiterChange,
                  v25,
                  v30,
                  *(_QWORD *)WaitModea,
                  *(_QWORD *)Alertablea);
              }
            }
          }
          if ( v46 )
          {
            if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)&v55, 0LL) < 0 )
            {
              WdLogSingleEntry1(3LL, 2663LL);
            }
            else
            {
              v40 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v48 + 736LL)
                                                                                           + 8LL)
                                                                               + 552LL))(
                      *(_QWORD *)(*(_QWORD *)v48 + 744LL),
                      1LL,
                      0LL,
                      (unsigned int)v7);
              if ( v40 < 0 )
                WdLogSingleEntry1(3LL, v40);
            }
          }
          goto LABEL_59;
        }
        v24 = v6;
        goto LABEL_45;
      }
    }
    else
    {
      v19 = 0;
    }
    v21 = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)v14 + v19 + 738);
    v14 = v47;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      *(_DWORD *)Alertable = v21;
      *(_DWORD *)WaitMode = v19;
      McTemplateK0pqq_EtwWriteTransfer(v21, &VSyncWaiterChange, v9, v47, *(_QWORD *)WaitMode, *(_QWORD *)Alertable);
    }
    goto LABEL_32;
  }
  COREACCESS::Release((COREACCESS *)v57);
LABEL_82:
  COREACCESS::Release((COREACCESS *)v62);
  v26 = -1073741130;
LABEL_59:
  if ( v56 )
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v55);
  if ( v64 )
  {
    if ( v65 )
      COREACCESS::Release((COREACCESS *)v62);
    v31 = (DXGGLOBAL **)v64;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v64 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(v31[2], (struct DXGADAPTER *)v31);
  }
  if ( v59 )
  {
    if ( v60 )
      COREACCESS::Release((COREACCESS *)v57);
    v32 = (DXGGLOBAL **)v59;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v59 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(v32[2], (struct DXGADAPTER *)v32);
  }
LABEL_71:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v49);
  if ( v50 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v33, v49[0]);
  return v26;
}
