/*
 * XREFs of ?OwnsPointerId@CInputManager@@SA_NII@Z @ 0x1C026FFE8
 * Callers:
 *     ?CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@I_K@Z @ 0x1C024AB04 (-CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@I_K@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInputManager::OwnsPointerId(int a1, int a2)
{
  CInputManager *v2; // rbx
  bool v3; // di
  unsigned int v6; // r8d
  unsigned int v7; // edx
  _DWORD *v8; // rcx

  v2 = g_pInputManager;
  v3 = 0;
  if ( g_pInputManager )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)v2 + 120, 0LL);
    v6 = 0;
    v7 = *((_DWORD *)g_pInputManager + 28);
    if ( v7 )
    {
      while ( 1 )
      {
        v8 = *(_DWORD **)(*((_QWORD *)g_pInputManager + 13) + 8LL * v6);
        if ( *v8 == a2 )
          break;
        if ( ++v6 >= v7 )
          goto LABEL_7;
      }
      v3 = a1 == v8[1];
    }
LABEL_7:
    ExReleasePushLockSharedEx((char *)v2 + 120, 0LL);
    KeLeaveCriticalRegion();
  }
  return v3;
}
