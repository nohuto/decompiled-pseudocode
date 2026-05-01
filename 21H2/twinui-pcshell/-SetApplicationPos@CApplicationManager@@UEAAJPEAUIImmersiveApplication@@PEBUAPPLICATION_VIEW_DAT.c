/*
 * XREFs of ?SetApplicationPos@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@W4SET_IMM_APP_POS@@PEAPEAX@Z @ 0x1801C0C60
 * Callers:
 *     <none>
 * Callees:
 *     ?_SetApplicationPos@CApplicationManager@@AEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@W4SET_IMM_APP_POS@@PEAPEAXW4APPLICATION_VIEW_CLOAK_TYPE@@@Z @ 0x180048E44 (-_SetApplicationPos@CApplicationManager@@AEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW_DA.c)
 */

__int64 __fastcall CApplicationManager::SetApplicationPos(__int64 a1, void *a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v9; // ebx

  if ( a4 )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v9 = CApplicationManager::_SetApplicationPos((CApplicationManager *)(a1 - 152), a2, a3, a4, a5);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v9;
}
