/*
 * XREFs of ??0CScalarForce@@QEAA@PEAUIAccelerator@@@Z @ 0x180272670
 * Callers:
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x180230C64 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 *     ??0CMotion@@QEAA@XZ @ 0x18026AF58 (--0CMotion@@QEAA@XZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800F1F6C (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 */

CScalarForce *__fastcall CScalarForce::CScalarForce(CScalarForce *this, struct IAccelerator *a2)
{
  __int64 (__fastcall ****v3)(_QWORD); // rcx

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CScalarForce::`vftable';
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 23) = 0;
  *((_DWORD *)this + 24) = 0;
  v3 = (__int64 (__fastcall ****)(_QWORD))((char *)this + 104);
  *v3 = (__int64 (__fastcall ***)(_QWORD))a2;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(v3);
  return this;
}
