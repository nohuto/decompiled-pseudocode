/*
 * XREFs of ??_GCDwmRenderThreadWatchdog@@UEAAPEAXI@Z @ 0x180156560
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800426C0 (--3@YAXPEAX_K@Z.c)
 *     ??1CWatchdogTimer@@UEAA@XZ @ 0x180162290 (--1CWatchdogTimer@@UEAA@XZ.c)
 */

CDwmRenderThreadWatchdog *__fastcall CDwmRenderThreadWatchdog::`scalar deleting destructor'(
        CDwmRenderThreadWatchdog *this,
        char a2)
{
  char *v4; // rcx

  v4 = (char *)*((_QWORD *)this + 4);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v4);
  CWatchdogTimer::~CWatchdogTimer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
