/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_050fa47c6e91e469e941dbfe29c54c93___::_scalar_deleting_destructor_ @ 0x1800A1D70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1800A1544 (--1SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate@CortanaProactiveTelemetry@@QEA.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_050fa47c6e91e469e941dbfe29c54c93___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  CortanaProactiveTelemetry::SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate::~SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate((CortanaProactiveTelemetry::SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate *)(a1 + 4));
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x150);
  return a1;
}
