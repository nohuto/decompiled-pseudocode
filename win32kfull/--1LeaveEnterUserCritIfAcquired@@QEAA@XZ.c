/*
 * XREFs of ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1C024AEB0
 * Callers:
 *     ?SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z @ 0x1C024C180 (-SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired(
        LeaveEnterUserCritIfAcquired *this,
        __int64 a2,
        __int64 a3)
{
  if ( *(_BYTE *)this )
  {
    EnterCrit(1LL, 0LL);
  }
  else if ( *((_BYTE *)this + 1) )
  {
    EnterSharedCrit(this, a2, a3);
  }
}
