/*
 * XREFs of ??0USB4_HOSTROUTER_MGR@@QEAA@XZ @ 0x1C01FBCF0
 * Callers:
 *     MonitorInitializeGlobal @ 0x1C01FAE24 (MonitorInitializeGlobal.c)
 * Callees:
 *     <none>
 */

USB4_HOSTROUTER_MGR *__fastcall USB4_HOSTROUTER_MGR::USB4_HOSTROUTER_MGR(USB4_HOSTROUTER_MGR *this)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 12) = 1;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = -1;
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 30) = 1;
  *((_DWORD *)this + 29) = -1;
  KeInitializeEvent((PRKEVENT)((char *)this + 128), NotificationEvent, 1u);
  *((_QWORD *)this + 8) = (char *)this + 56;
  *((_QWORD *)this + 7) = (char *)this + 56;
  return this;
}
