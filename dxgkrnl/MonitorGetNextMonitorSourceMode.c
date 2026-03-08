/*
 * XREFs of MonitorGetNextMonitorSourceMode @ 0x1C016EEF0
 * Callers:
 *     BmlFillPreferredMonitorMode @ 0x1C016EB6C (BmlFillPreferredMonitorMode.c)
 *     ?BmlGetTargetModePreferenceOnMonitor@@YA?AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARGETMODE@@EPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C016ED64 (-BmlGetTargetModePreferenceOnMonitor@@YA-AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARG.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonitorGetNextMonitorSourceMode(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  unsigned int v8; // edi
  _QWORD **v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  _QWORD **v12; // r8
  _QWORD *v13; // rax
  bool v14; // zf
  _QWORD *v16; // rdx

  if ( a1 && a3 && a4 )
  {
    v8 = 0;
    *a3 = 0LL;
    *a4 = 0;
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(a1 + 24), 1u);
    v9 = (_QWORD **)(*(_QWORD *)(a1 + 232) + 128LL);
    if ( a2 )
    {
      v10 = *v9;
      if ( *v9 == v9 )
      {
LABEL_19:
        WdLogSingleEntry1(2LL, a2);
        v8 = -1071774928;
        goto LABEL_15;
      }
      v11 = (_QWORD *)(a2 + 96);
      if ( v10 != (_QWORD *)(a2 + 96) )
      {
        while ( v9 != v10 )
        {
          v10 = (_QWORD *)*v10;
          if ( v10 == v11 )
            goto LABEL_9;
        }
        goto LABEL_19;
      }
LABEL_9:
      v12 = (_QWORD **)*v11;
      if ( (_QWORD **)*v11 == v9 )
        goto LABEL_18;
      v13 = v12 - 12;
      v14 = v12 == 0LL;
    }
    else
    {
      v16 = *v9;
      if ( *v9 == v9 )
        goto LABEL_18;
      v13 = v16 - 12;
      v14 = v16 == 0LL;
    }
    if ( v14 )
      v13 = 0LL;
    if ( v13 )
    {
      *a3 = v13;
      *a4 = *((_DWORD *)v13 + 28);
LABEL_15:
      ExReleaseResourceLite((PERESOURCE)(a1 + 24));
      KeLeaveCriticalRegion();
      return v8;
    }
LABEL_18:
    v8 = 1075708748;
    goto LABEL_15;
  }
  return 3221225485LL;
}
