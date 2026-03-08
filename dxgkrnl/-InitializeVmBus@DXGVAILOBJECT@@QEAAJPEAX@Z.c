/*
 * XREFs of ?InitializeVmBus@DXGVAILOBJECT@@QEAAJPEAX@Z @ 0x1C035D4FC
 * Callers:
 *     ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z @ 0x1C03407BC (-InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?SetVmBusChannel@DXGVAILOBJECT@@QEAAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C0059FD4 (-SetVmBusChannel@DXGVAILOBJECT@@QEAAXPEAVDXGVMBUSCHANNEL@@@Z.c)
 *     ?CreateVmBusChannel@@YAJPEAXPEAPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C035C930 (-CreateVmBusChannel@@YAJPEAXPEAPEAVDXGVMBUSCHANNEL@@@Z.c)
 */

__int64 __fastcall DXGVAILOBJECT::InitializeVmBus(DXGVAILOBJECT *this, void *a2, const struct _GUID *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  bool v8; // zf
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF
  struct _GUID v11; // [rsp+50h] [rbp+18h] BYREF

  *(_QWORD *)&v11.Data1 = 0LL;
  v4 = CreateVmBusChannel(a2, &v11, a3);
  v5 = v4;
  if ( v4 >= 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (DXGVAILOBJECT *)((char *)this + 40), 1);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
    DXGVAILOBJECT::SetVmBusChannel(this, *(struct DXGVMBUSCHANNEL **)&v11.Data1);
    CurrentProcess = PsGetCurrentProcess(v6);
    v8 = v10[8] == 0;
    *((_QWORD *)this + 13) = CurrentProcess;
    if ( !v8 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10);
  }
  else
  {
    WdLogSingleEntry1(3LL, v4);
  }
  return v5;
}
