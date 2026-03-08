/*
 * XREFs of ?_DsiTransmission@MonitorMipiDsiState@DxgMonitor@@AEAAJKPEAXK0PEA_K@Z @ 0x1C03CAF54
 * Callers:
 *     ?OnIoctl@MonitorMipiDsiState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C03CACF4 (-OnIoctl@MonitorMipiDsiState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z.c)
 * Callees:
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x1C0004750 (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1C00048E4 (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     Feature_MipiDsi2__private_ReportDeviceUsage @ 0x1C0026CBC (Feature_MipiDsi2__private_ReportDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?_ValidateMipiDsiPackets@MonitorMipiDsiState@DxgMonitor@@AEAAJPEAU_DXGK_DSI_TRANSMISSION@@@Z @ 0x1C03CB360 (-_ValidateMipiDsiPackets@MonitorMipiDsiState@DxgMonitor@@AEAAJPEAU_DXGK_DSI_TRANSMISSION@@@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorMipiDsiState::_DsiTransmission(
        DxgMonitor::MonitorMipiDsiState *this,
        unsigned int a2,
        _BYTE *a3,
        unsigned int a4,
        _BYTE *a5,
        unsigned __int64 *a6)
{
  unsigned __int64 v6; // rbp
  __int64 v8; // rdi
  unsigned __int64 *v10; // r14
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // r8
  int v15; // ecx
  DxgMonitor::MonitorMipiDsiState *v16; // rdx
  unsigned int v17; // r8d
  DxgMonitor::MonitorMipiDsiState *v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  DxgMonitor::MonitorMipiDsiState *v21; // rdi

  v6 = a4;
  v8 = a2;
  if ( !a3 )
    WdLogSingleEntry0(1LL);
  if ( !a5 )
    WdLogSingleEntry0(1LL);
  v10 = a6;
  if ( !a6 )
    WdLogSingleEntry0(1LL);
  *v10 = 0LL;
  Feature_MipiDsi2__private_ReportDeviceUsage();
  if ( !(unsigned __int8)ExIsManufacturingModeEnabled()
    || (v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this),
        (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12) < 0xC002)
    || !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 56LL))(*(_QWORD *)this) )
  {
    WdLogSingleEntry0(3LL);
    return 3221225659LL;
  }
  v13 = 32LL;
  if ( (unsigned int)v8 < 0x20 )
  {
    v14 = v8;
LABEL_14:
    WdLogSingleEntry2(2LL, v13, v14);
    return 3221225507LL;
  }
  if ( (_DWORD)v8 != (_DWORD)v6 )
  {
    v14 = v6;
    v13 = v8;
    goto LABEL_14;
  }
  if ( a3 != a5 )
  {
    WdLogSingleEntry2(2LL, a3, a5);
    return 3221225705LL;
  }
  v15 = (unsigned __int8)a3[4];
  *v10 = v6;
  a3[5] = -1;
  if ( (unsigned __int8)(v15 - 1) > 0x7Fu )
  {
    *((_WORD *)a3 + 7) = 256;
    return 0LL;
  }
  v16 = (DxgMonitor::MonitorMipiDsiState *)*((unsigned __int16 *)a3 + 5);
  v17 = 14 * v15 + (_DWORD)v16 + 18;
  if ( (unsigned int)v8 < v17
    || (v18 = (DxgMonitor::MonitorMipiDsiState *)*(unsigned int *)a3, (unsigned int)v8 < (unsigned int)v18)
    || (unsigned int)v18 < v17 )
  {
    *((_WORD *)a3 + 7) = 256;
    WdLogSingleEntry3(3LL, v8, *(unsigned int *)a3, v17);
    return 0LL;
  }
  v19 = 65527LL;
  if ( (unsigned __int16)v16 <= 0xFFF7u )
  {
    v19 = 69632LL;
    if ( (unsigned int)v18 <= 0x11000 )
    {
      if ( (int)DxgMonitor::MonitorMipiDsiState::_ValidateMipiDsiPackets(v18, (struct _DXGK_DSI_TRANSMISSION *)a3) < 0 )
      {
        WdLogSingleEntry1(3LL, (unsigned __int8)a3[5]);
        return 0LL;
      }
      MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&a5, (DxgMonitor::MonitorMipiDsiState *)((char *)this + 32));
      v20 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 24LL))(*(_QWORD *)this);
      v21 = (DxgMonitor::MonitorMipiDsiState *)(*(int (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v20 + 104LL))(
                                                 v20,
                                                 a3);
      MUTEX_LOCK::~MUTEX_LOCK((DXGFASTMUTEX **)&a5);
      if ( (int)v21 >= 0 )
        return 0LL;
      v19 = *((unsigned __int16 *)a3 + 6);
      v16 = v21;
    }
    else
    {
      *((_WORD *)a3 + 7) = 256;
      v16 = v18;
    }
  }
  else
  {
    *((_WORD *)a3 + 7) = 256;
  }
  WdLogSingleEntry2(3LL, v16, v19);
  return 0LL;
}
