/*
 * XREFs of ??1CRefThread@@MEAA@XZ @ 0x1802831E4
 * Callers:
 *     ??_GCDuiRefThread@@MEAAPEAXI@Z @ 0x180283260 (--_GCDuiRefThread@@MEAAPEAXI@Z.c)
 *     ??_ECRefThread@@MEAAPEAXI@Z @ 0x180283380 (--_ECRefThread@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRefThread::~CRefThread(CRefThread *this)
{
  CRefThread *v2; // rcx
  CRefThread *v3; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CRefThread::`vftable';
  **((_DWORD **)this + 1) = 1000;
  GetProcessReference(&v3);
  v2 = v3;
  if ( v3 == this )
  {
    SetProcessReference(0LL);
    v2 = v3;
  }
  if ( v2 )
    (*(void (__fastcall **)(CRefThread *))(*(_QWORD *)v2 + 16LL))(v2);
  **((_DWORD **)this + 1) = 0;
}
