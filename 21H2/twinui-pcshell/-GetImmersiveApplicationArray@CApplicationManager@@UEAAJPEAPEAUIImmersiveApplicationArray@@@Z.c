/*
 * XREFs of ?GetImmersiveApplicationArray@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@Z @ 0x1801BB820
 * Callers:
 *     <none>
 * Callees:
 *     ?GetImmersiveApplicationArraySafe@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@Z @ 0x1801BB8A0 (-GetImmersiveApplicationArraySafe@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::GetImmersiveApplicationArray(
        CApplicationManager *this,
        struct IImmersiveApplicationArray **a2)
{
  RTL_SRWLOCK *v4; // rbx
  unsigned int ImmersiveApplicationArraySafe; // edi

  v4 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  ImmersiveApplicationArraySafe = CApplicationManager::GetImmersiveApplicationArraySafe(
                                    (CApplicationManager *)((char *)this + 80),
                                    a2);
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return ImmersiveApplicationArraySafe;
}
