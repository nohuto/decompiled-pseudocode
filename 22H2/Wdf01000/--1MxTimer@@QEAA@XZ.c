/*
 * XREFs of ??1MxTimer@@QEAA@XZ @ 0x1C005351C
 * Callers:
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C005355C (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ??1FxTimer@@UEAA@XZ @ 0x1C0054330 (--1FxTimer@@UEAA@XZ.c)
 *     ??1FxPowerPolicyOwnerSettings@@QEAA@XZ @ 0x1C00862EC (--1FxPowerPolicyOwnerSettings@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall MxTimer::~MxTimer(MxTimer *this, __int64 a2)
{
  struct _EX_TIMER *m_KernelExTimer; // rcx

  if ( this->m_Timer.m_IsExtTimer )
  {
    m_KernelExTimer = this->m_Timer.m_KernelExTimer;
    if ( m_KernelExTimer )
    {
      LOBYTE(a2) = 1;
      ExDeleteTimer(m_KernelExTimer, a2, 0LL, 0LL);
      this->m_Timer.m_KernelExTimer = 0LL;
    }
  }
}
