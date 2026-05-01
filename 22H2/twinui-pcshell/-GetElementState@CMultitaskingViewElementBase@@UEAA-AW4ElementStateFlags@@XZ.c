/*
 * XREFs of ?GetElementState@CMultitaskingViewElementBase@@UEAA?AW4ElementStateFlags@@XZ @ 0x180412660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMultitaskingViewElementBase::GetElementState(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 80);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 176LL))(v1);
  else
    return 0LL;
}
