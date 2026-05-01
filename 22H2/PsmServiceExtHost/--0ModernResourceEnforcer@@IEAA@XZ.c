/*
 * XREFs of ??0ModernResourceEnforcer@@IEAA@XZ @ 0x18003E8E4
 * Callers:
 *     ?CreateModernResourceEnforcer@@YAJPEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@PEAPEAVModernResourceEnforcer@@@Z @ 0x18003E7B4 (-CreateModernResourceEnforcer@@YAJPEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@PEAPEAVModernResourceEn.c)
 * Callees:
 *     <none>
 */

ModernResourceEnforcer *__fastcall ModernResourceEnforcer::ModernResourceEnforcer(ModernResourceEnforcer *this)
{
  *(_QWORD *)this = &ModernResourceEnforcer::`vftable';
  *((_QWORD *)this + 33) = 0LL;
  *((_DWORD *)this + 54) = 1;
  *((_QWORD *)this + 36) = 0LL;
  *((_DWORD *)this + 74) = 0;
  *((_QWORD *)this + 35) = (char *)this + 272;
  *((_QWORD *)this + 34) = (char *)this + 272;
  RtlInitializeCriticalSection((PRTL_CRITICAL_SECTION)((char *)this + 224));
  return this;
}
