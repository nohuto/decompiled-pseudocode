/*
 * XREFs of ??0CMotion@@QEAA@XZ @ 0x18026AF58
 * Callers:
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x18022ECB0 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 *     ??0CInteractionTrackerPositionAnimation@@QEAA@PEAVCComposition@@@Z @ 0x1802631D8 (--0CInteractionTrackerPositionAnimation@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CScalarForce@@QEAA@PEAUIAccelerator@@@Z @ 0x180272670 (--0CScalarForce@@QEAA@PEAUIAccelerator@@@Z.c)
 */

CMotion *__fastcall CMotion::CMotion(CMotion *this)
{
  void (__fastcall ***v2)(_QWORD); // rax
  void (__fastcall ***v3)(_QWORD); // rdi
  __int64 v4; // rcx
  CScalarForce *v5; // rax
  CScalarForce *v6; // rdi
  __int64 v7; // rcx

  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *(_QWORD *)this = &CMotion::`vftable';
  v2 = (void (__fastcall ***)(_QWORD))operator new(0x28uLL);
  v3 = v2;
  if ( v2 )
  {
    *((_DWORD *)v2 + 2) = 0;
    *v2 = (void (__fastcall **)(_QWORD))&CSpringAccelerator::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  if ( *((void (__fastcall ****)(_QWORD))this + 11) != v3 )
  {
    if ( v3 )
      (**v3)(v3);
    v4 = *((_QWORD *)this + 11);
    *((_QWORD *)this + 11) = v3;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  v5 = (CScalarForce *)operator new(0x70uLL);
  if ( v5 )
    v6 = CScalarForce::CScalarForce(v5, *((struct IAccelerator **)this + 11));
  else
    v6 = 0LL;
  if ( *((CScalarForce **)this + 10) != v6 )
  {
    if ( v6 )
      (**(void (__fastcall ***)(CScalarForce *))v6)(v6);
    v7 = *((_QWORD *)this + 10);
    *((_QWORD *)this + 10) = v6;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  }
  return this;
}
