/*
 * XREFs of ?SetBoundingRect@CoverWindowAcc@@UEAAXAEBUCRect@Geometry@@@Z @ 0x18048B8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CoverWindowAcc::SetBoundingRect(CoverWindowAcc *this, const struct Geometry::CRect *a2)
{
  HRESULT inited; // eax
  wil::details::in1diag3 *v4; // rcx
  __int64 v5; // rdx
  VARIANT pvarg; // [rsp+20h] [rbp-69h] BYREF
  VARIANT pvar; // [rsp+38h] [rbp-51h] BYREF
  VARIANT newValue; // [rsp+50h] [rbp-39h] BYREF
  VARIANT oldValue; // [rsp+70h] [rbp-19h] BYREF
  DOUBLE prgn[4]; // [rsp+90h] [rbp+7h] BYREF
  DOUBLE v11[4]; // [rsp+B0h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  prgn[0] = (double)*((int *)this + 20);
  prgn[1] = (double)*((int *)this + 21);
  prgn[2] = (double)(*((_DWORD *)this + 22) - *((_DWORD *)this + 20));
  prgn[3] = (double)(*((_DWORD *)this + 23) - *((_DWORD *)this + 21));
  pvar.vt = 0;
  *((_OWORD *)this + 5) = *(_OWORD *)a2;
  v11[0] = (double)*((int *)this + 20);
  v11[1] = (double)*((int *)this + 21);
  v11[2] = (double)(*((_DWORD *)this + 22) - *((_DWORD *)this + 20));
  v11[3] = (double)(*((_DWORD *)this + 23) - *((_DWORD *)this + 21));
  pvarg.vt = 0;
  inited = InitVariantFromDoubleArray(prgn, 4u, &pvar);
  v4 = retaddr;
  if ( inited >= 0 )
  {
    inited = InitVariantFromDoubleArray(v11, 4u, &pvarg);
    v4 = retaddr;
    if ( inited >= 0 )
    {
      newValue = pvarg;
      oldValue = pvar;
      UiaRaiseAutomationPropertyChangedEvent((IRawElementProviderSimple *)this - 3, 30001, &oldValue, &newValue);
      goto LABEL_7;
    }
    v5 = 328LL;
  }
  else
  {
    v5 = 327LL;
  }
  wil::details::in1diag3::_Log_Hr(
    v4,
    (void *)v5,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\coverwindowacc.cpp",
    (const char *)(unsigned int)inited);
LABEL_7:
  VariantClear(&pvarg);
  VariantClear(&pvar);
}
