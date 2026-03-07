__int64 __fastcall MonitorEnableDisableMonitor(
        struct DXGADAPTER *a1,
        __int64 a2,
        int *a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned __int64 a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  int *v7; // r12
  __int64 v8; // r14
  __int64 v10; // r13
  _QWORD *v11; // rax
  __int64 v12; // r8
  unsigned __int64 v13; // rbx
  unsigned int v14; // eax
  __int64 v15; // rdi
  unsigned __int64 v16; // r15
  char v17; // r15
  int v18; // edi
  bool v19; // zf
  int *v20; // rbx
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v23; // rax
  char v24; // r14
  int *v25; // rbx
  __int64 v26; // r13
  unsigned __int8 v27; // di
  int v28; // eax
  unsigned int *v29; // r15
  unsigned int *v30; // rbx
  bool v31; // of
  unsigned __int64 v32; // rax
  unsigned int *v33; // rax
  int v34; // eax
  unsigned int *v35; // [rsp+40h] [rbp-58h]
  __int64 v36; // [rsp+48h] [rbp-50h]
  unsigned __int8 v37; // [rsp+A0h] [rbp+8h]
  unsigned int v38; // [rsp+A8h] [rbp+10h]
  unsigned int v40; // [rsp+B8h] [rbp+20h] BYREF

  LOBYTE(v40) = a4;
  v38 = a2;
  v7 = a3;
  v8 = (unsigned int)a2;
  v10 = (unsigned int)a2;
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v11[5] = 2LL;
  v11[4] = a1;
  v11[3] = v8;
  if ( a1 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
      WdLogSingleEntry0(1LL);
    if ( !*((_QWORD *)a1 + 365) )
      WdLogSingleEntry0(1LL);
    v35 = *(unsigned int **)(*((_QWORD *)a1 + 365) + 112LL);
    if ( v35 )
    {
      v13 = a6;
      v14 = v8 - 1;
      v37 = 0;
      a5 = 0;
      v15 = (unsigned int)(v8 - 1);
      v36 = v15;
      v16 = (a6 != 0) + 2LL;
      if ( (_DWORD)v8 != 1 )
      {
        v24 = v40;
        v25 = v7;
        v26 = v14;
        v27 = 0;
        do
        {
          LOBYTE(v12) = v24;
          v28 = MONITOR_MGR::_EnableDisableMonitor((__int64)v35, (unsigned int)*v25, v12, 2, v16, (__int64)a7, &a5);
          if ( v28 < 0 )
            WdLogSingleEntry3(2LL, (unsigned int)*v25, a1, v28);
          v27 |= a5;
          ++v25;
          --v26;
        }
        while ( v26 );
        LODWORD(v8) = v38;
        v7 = a3;
        v10 = v38;
        v13 = a6;
        v37 = v27;
        v15 = v36;
      }
      v17 = v40;
      LOBYTE(v12) = v40;
      v18 = MONITOR_MGR::_EnableDisableMonitor((__int64)v35, (unsigned int)v7[v15], v12, 2, v13, (__int64)a7, &a5);
      if ( v18 < 0 )
        return (unsigned int)v18;
      if ( (_DWORD)v8 )
      {
        v19 = v13 == 0;
        v20 = v7;
        if ( v19 )
        {
          do
          {
            Global = DXGGLOBAL::GetGlobal();
            HOSTVMMONITORMAPPING::SendHostMonitorPowerMsg(
              (KSPIN_LOCK *)Global + 38111,
              *(struct _LUID *)((char *)a1 + 404),
              *v20++,
              1u);
            --v10;
          }
          while ( v10 );
        }
        else
        {
          do
          {
            v23 = DXGGLOBAL::GetGlobal();
            HOSTVMMONITORMAPPING::SendHostMonitorPowerMsg(
              (KSPIN_LOCK *)v23 + 38111,
              *(struct _LUID *)((char *)a1 + 404),
              *v20++,
              0);
            --v10;
          }
          while ( v10 );
        }
      }
      if ( !(v37 | a5) || v17 != 1 )
        return (unsigned int)v18;
      v29 = 0LL;
      v30 = 0LL;
      if ( (_DWORD)v8 == 1 && *v7 == -1 )
      {
        v8 = v35[8];
        v32 = 4 * v8;
        v31 = (v35[8] * (unsigned __int128)4u) >> 64 != 0;
        v40 = v35[8];
        if ( v31 )
          v32 = -1LL;
        v33 = (unsigned int *)operator new[](v32, 0x4D677844u, 256LL);
        v30 = v33;
        if ( v33 )
        {
          MONITOR_MGR::_GetUsb4TargetList((MONITOR_MGR *)v35, &v40, v33);
          LODWORD(v8) = v40;
          v29 = v30;
        }
        else
        {
          WdLogSingleEntry1(2LL, v8);
          v18 = -1073741801;
        }
        if ( v18 < 0 )
          goto LABEL_36;
      }
      else
      {
        v29 = (unsigned int *)v7;
      }
      v34 = USB4_POWERON_WORK_QUEUE::QueueWorkItem(
              (USB4_POWERON_WORK_QUEUE *)((char *)MONITOR_MGR::_pUsb4Manager + 72),
              a1,
              v8,
              v29,
              a7);
      v18 = v34;
      if ( v34 < 0 )
        WdLogSingleEntry1(2LL, v34);
LABEL_36:
      if ( v30 )
        operator delete(v30);
      return (unsigned int)v18;
    }
    WdLogSingleEntry1(2LL, a1);
  }
  return 3221225485LL;
}
