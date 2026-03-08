/*
 * XREFs of ??1CGlobalInputManager@@UEAA@XZ @ 0x18027FCCC
 * Callers:
 *     ??_ECGlobalInputManager@@UEAAPEAXI@Z @ 0x18027FD20 (--_ECGlobalInputManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_GCKst@@QEAAPEAXI@Z @ 0x18027FD6C (--_GCKst@@QEAAPEAXI@Z.c)
 *     ?Stop@CKstBase@@QEAAXXZ @ 0x1802824E0 (-Stop@CKstBase@@QEAAXXZ.c)
 */

void __fastcall CGlobalInputManager::~CGlobalInputManager(CGlobalInputManager *this)
{
  CKstBase *v2; // rcx
  unsigned int v3; // edx
  CKst *v4; // rcx

  *(_QWORD *)this = &CGlobalInputManager::`vftable';
  v2 = (CKstBase *)*((_QWORD *)this + 41);
  if ( v2 )
  {
    CKstBase::Stop(v2);
    v4 = (CKst *)*((_QWORD *)this + 41);
    if ( v4 )
      CKst::`scalar deleting destructor'(v4, v3);
  }
  CInputManager::~CInputManager(this);
}
