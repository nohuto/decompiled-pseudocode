/*
 * XREFs of ?DynamicNodeHapticsOutputPeriod@ValidateProperty@Holographic@Internal@Windows@@YAJPEBX_K@Z @ 0x18015BEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::Internal::Holographic::ValidateProperty::DynamicNodeHapticsOutputPeriod(
        Windows::Internal::Holographic::ValidateProperty *this,
        const void *a2)
{
  __int64 v2; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 != (const void *)4 )
  {
    v2 = 111LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v2,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\ValidateProperty.h",
      (const char *)0x8007000DLL);
    return 2147942413LL;
  }
  if ( *(_DWORD *)this > 0xF4240u )
  {
    v2 = 113LL;
    goto LABEL_3;
  }
  return 0LL;
}
