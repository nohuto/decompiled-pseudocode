/*
 * XREFs of ?CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z @ 0x1C01B30D0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C003EFB0 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?Entry@Iter@CInputConfig@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C006D528 (-Entry@Iter@CInputConfig@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?_NotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1C006D5EC (-_NotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 *     ?_EnsureInputSpace@CInputConfig@@AEAAXXZ @ 0x1C0071584 (-_EnsureInputSpace@CInputConfig@@AEAAXXZ.c)
 *     ?_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0071654 (-_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 */

void __fastcall CInputConfig::CleanupInputSpaces(CInputConfig *this, const struct tagPROCESSINFO *a2)
{
  CInputConfig *v2; // rdi
  CInputConfig *v4; // rax
  _QWORD *i; // rbx
  _QWORD **v6; // rax
  struct _LIST_ENTRY *v7; // rax
  CInputConfig *v8; // rcx
  CInputConfig *v9; // rcx
  _QWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF
  CInputConfig *v11; // [rsp+30h] [rbp-18h]
  _QWORD *v12; // [rsp+38h] [rbp-10h]

  v2 = gpInputConfig;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(CInputConfig::slock, 1u);
  v10[0] = &CInputConfig::slock;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
  v4 = *(CInputConfig **)v2;
  v10[1] = v2;
  v11 = v4;
  for ( i = *(_QWORD **)v4; ; i = (_QWORD *)*i )
  {
    v12 = i;
    if ( v4 == v2 )
      break;
    v6 = (_QWORD **)((char *)v4 + 16);
    if ( !v6 )
      break;
    if ( v6[2] == (_QWORD *)a2 )
    {
      v7 = CInputConfig::Iter::Entry((CInputConfig::Iter *)v10);
      CInputConfig::_FreeInputSpace(v8, v7);
    }
    v4 = (CInputConfig *)i;
    v11 = (CInputConfig *)i;
  }
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
  CInputConfig::_EnsureInputSpace(v2);
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
  CInputConfig::_NotifyExternalComponents(v9);
}
