/*
 * XREFs of ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1C004C6C0
 * Callers:
 *     ?DxgkProcessNotify@@YAXPEAU_EPROCESS@@PEAXPEAU_PS_CREATE_NOTIFY_INFO@@@Z @ 0x1C0012D20 (-DxgkProcessNotify@@YAXPEAU_EPROCESS@@PEAXPEAU_PS_CREATE_NOTIFY_INFO@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged(CTempW32ThreadNonPaged *this)
{
  struct DXGGLOBAL *Global; // rax

  if ( *((_BYTE *)this + 200) )
  {
    PsSetThreadWin32Thread(KeGetCurrentThread(), 0LL, this);
  }
  else if ( *(_QWORD *)this )
  {
    Global = DXGGLOBAL::GetGlobal();
    (*(void (__fastcall **)(_QWORD))(*((_QWORD *)Global + 38069) + 16LL))(*(_QWORD *)this);
  }
}
