/*
 * XREFs of ?EndInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z @ 0x1C00D5148
 * Callers:
 *     ?StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z @ 0x1C01D7540 (-StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z.c)
 * Callees:
 *     ?InvalidateInertiaInfo@CInertiaManager@@QEAA_N_K0@Z @ 0x1C000E904 (-InvalidateInertiaInfo@CInertiaManager@@QEAA_N_K0@Z.c)
 *     Feature_EndInertiaOnKeyPress__private_IsEnabledDeviceUsage @ 0x1C00D53EC (Feature_EndInertiaOnKeyPress__private_IsEnabledDeviceUsage.c)
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1C01E1C04 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 *     ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x1C01E1FE0 (-QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z.c)
 */

char __fastcall CInertiaManager::EndInertiaAtPoint(__int64 a1, struct tagPOINT a2, struct tagPOINT a3)
{
  CInertiaManager *v6; // rcx
  __int64 *v7; // r14
  CInertiaManager *v9; // rcx

  if ( (unsigned int)Feature_EndInertiaOnKeyPress__private_IsEnabledDeviceUsage() )
  {
    v7 = (__int64 *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))CInertiaManager::QueryInertia)(a1, a2, 3LL);
    if ( v7 && CInertiaManager::PostInertiaMessage(v6, 0x23Cu, (const struct INERTIA_INFO_INTERNAL *)(a1 + 8), a2, a3) )
      return CInertiaManager::InvalidateInertiaInfo((CInertiaManager *)a1, *v7, v7[1]);
  }
  else if ( ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))CInertiaManager::QueryInertia)(a1, a2, 3LL) )
  {
    return CInertiaManager::PostInertiaMessage(v9, 0x23Cu, (const struct INERTIA_INFO_INTERNAL *)(a1 + 8), a2, a3);
  }
  return 0;
}
