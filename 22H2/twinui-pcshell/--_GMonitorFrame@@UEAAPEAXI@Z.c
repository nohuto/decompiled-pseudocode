/*
 * XREFs of ??_GMonitorFrame@@UEAAPEAXI@Z @ 0x18036E710
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MonitorFrame@@UEAA@XZ @ 0x18036C76C (--1MonitorFrame@@UEAA@XZ.c)
 */

MonitorFrame *__fastcall MonitorFrame::`scalar deleting destructor'(MonitorFrame *this, char a2)
{
  MonitorFrame::~MonitorFrame(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xC0);
  return this;
}
