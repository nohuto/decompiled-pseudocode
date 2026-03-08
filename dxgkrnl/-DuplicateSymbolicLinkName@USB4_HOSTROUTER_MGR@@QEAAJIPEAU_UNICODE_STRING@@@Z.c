/*
 * XREFs of ?DuplicateSymbolicLinkName@USB4_HOSTROUTER_MGR@@QEAAJIPEAU_UNICODE_STRING@@@Z @ 0x1C03C5E24
 * Callers:
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FB6A0 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_CO.c)
 * Callees:
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x1C0004750 (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1C00048E4 (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 */

__int64 __fastcall USB4_HOSTROUTER_MGR::DuplicateSymbolicLinkName(
        USB4_HOSTROUTER_MGR *this,
        int a2,
        struct _UNICODE_STRING *a3)
{
  char *v3; // rbx
  __int64 **v6; // rbx
  __int64 *i; // rdx
  int v8; // eax
  unsigned int v9; // ebx
  DXGFASTMUTEX *v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = this;
  v3 = (char *)MONITOR_MGR::_pUsb4Manager;
  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v11, (struct DXGFASTMUTEX *)((char *)MONITOR_MGR::_pUsb4Manager + 8));
  v6 = (__int64 **)(v3 + 56);
  for ( i = *v6; ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)v6 )
      goto LABEL_5;
    if ( *((_DWORD *)i + 8) == a2 )
      break;
  }
  v9 = 0;
  if ( !i )
  {
LABEL_5:
    WdLogSingleEntry0(2LL);
    v8 = -1073741275;
LABEL_6:
    v9 = v8;
    goto LABEL_7;
  }
  if ( !RtlCreateUnicodeString(a3, (PCWSTR)i[3]) )
  {
    WdLogSingleEntry0(2LL);
    v8 = -1073741801;
    goto LABEL_6;
  }
LABEL_7:
  MUTEX_LOCK::~MUTEX_LOCK(&v11);
  return v9;
}
