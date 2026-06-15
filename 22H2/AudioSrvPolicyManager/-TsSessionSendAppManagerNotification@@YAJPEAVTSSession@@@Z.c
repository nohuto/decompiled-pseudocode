/*
 * XREFs of ?TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z @ 0x180028E74
 * Callers:
 *     ?GenerateActiveAppNotification@CApplicationManager@@QEAAJPEAU_ActiveMediaAppsNotificationContext@@@Z @ 0x18001F000 (-GenerateActiveAppNotification@CApplicationManager@@QEAAJPEAU_ActiveMediaAppsNotificationContext.c)
 *     ?TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x180028F50 (-TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ?TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x180029028 (-TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 * Callees:
 *     ?GenerateMediaManagerNotification@@YAJPEAV?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@PEAPEAUMEDIAMANAGER_NOTIFICATION_BLOCK@@@Z @ 0x18002690C (-GenerateMediaManagerNotification@@YAJPEAV-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCAp.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TsSessionSendAppManagerNotification(struct TSSession *a1)
{
  int v2; // esi
  void *v3; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  HANDLE ProcessHeap; // rax
  void *v9; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+48h] [rbp+10h]

  v2 = 0;
  v3 = 0LL;
  v9 = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v10 = v4;
  if ( *((_QWORD *)a1 + 9) )
  {
    v2 = GenerateMediaManagerNotification((_QWORD *)a1 + 13, &v9);
    if ( v2 >= 0 && (v5 = (_QWORD *)*((_QWORD *)a1 + 7)) != 0LL )
    {
      v3 = v9;
      do
      {
        v6 = v5[2];
        v5 = (_QWORD *)*v5;
        if ( !*(_DWORD *)(v6 + 448) )
          GenerateMediaEvent(v3, *(unsigned int *)(v6 + 192));
      }
      while ( v5 );
    }
    else
    {
      v3 = v9;
    }
  }
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, v3);
  if ( v4 )
    LeaveCriticalSection(v4);
  return (unsigned int)v2;
}
