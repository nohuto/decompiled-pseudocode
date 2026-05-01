/*
 * XREFs of ?EnableAutoRotationPreferences@CRotationManagerSync@@UEAAJXZ @ 0x1801D4360
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ @ 0x1801BDA04 (-IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ.c)
 */

__int64 __fastcall CRotationManagerSync::EnableAutoRotationPreferences(CRotationManagerSync *this)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( CIAMGlobals::IsCalledOnIAMThread(this) )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( ++*((_DWORD *)this + 11) == 1 )
      (*(void (__fastcall **)(char *))(*((_QWORD *)this - 1) + 32LL))((char *)this - 8);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
  else
  {
    return (unsigned int)-2147024891;
  }
  return v2;
}
