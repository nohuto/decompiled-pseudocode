/*
 * XREFs of ?HrFindInterface@CHolographicExclusiveView@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802A5090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicExclusiveView::HrFindInterface(
        CHolographicExclusiveView *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 result; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    result = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_92c14223_53b5_489b_b195_4227022eda18.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_92c14223_53b5_489b_b195_4227022eda18.Data1 )
      result = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_92c14223_53b5_489b_b195_4227022eda18.Data4;
    if ( result )
      return 2147500034LL;
    else
      *a3 = this;
  }
  return result;
}
