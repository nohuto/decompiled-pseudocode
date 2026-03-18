/*
 * XREFs of ?ExecutingInSensorHostingProcess@CBaseInput@@IEBA_NXZ @ 0x1C00497F8
 * Callers:
 *     ?HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ @ 0x1C00496B0 (-HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ.c)
 *     ?HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ @ 0x1C0049760 (-HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBaseInput::ExecutingInSensorHostingProcess(CBaseInput *this, __int64 a2, __int64 a3, __int64 a4)
{
  if ( *((_QWORD *)this + 2) )
    return *(_QWORD *)(*((_QWORD *)this + 2) + 32LL) == PsGetCurrentProcess(this, a2, a3, a4);
  else
    return *((_DWORD *)this + 328) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC);
}
