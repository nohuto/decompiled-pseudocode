/*
 * XREFs of ?HrFindInterface@CGDISectionBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801042C0
 * Callers:
 *     <none>
 * Callees:
 *     ?HrFindInterface@CSectionBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180104360 (-HrFindInterface@CSectionBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CGDISectionBitmapRealization::HrFindInterface(
        CGDISectionBitmapRealization *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_360f17f1_1aef_46a7_97ac_b5cc426e0309.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_360f17f1_1aef_46a7_97ac_b5cc426e0309.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_360f17f1_1aef_46a7_97ac_b5cc426e0309.Data4;
    if ( v4 )
    {
      return CSectionBitmapRealization::HrFindInterface(this, a2, a3);
    }
    else
    {
      *a3 = (void *)(((unsigned __int64)this + 392) & -(__int64)(this != 0LL));
      return 0LL;
    }
  }
  return result;
}
