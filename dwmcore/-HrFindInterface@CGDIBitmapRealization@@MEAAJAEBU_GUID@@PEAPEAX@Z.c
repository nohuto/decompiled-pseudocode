/*
 * XREFs of ?HrFindInterface@CGDIBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180104310
 * Callers:
 *     <none>
 * Callees:
 *     ?HrFindInterface@CDxHandleBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180077370 (-HrFindInterface@CDxHandleBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CGDIBitmapRealization::HrFindInterface(
        CGDIBitmapRealization *this,
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
      return CDxHandleBitmapRealization::HrFindInterface(this, a2, a3);
    }
    else
    {
      *a3 = (void *)(((unsigned __int64)this + 400) & -(__int64)(this != 0LL));
      return 0LL;
    }
  }
  return result;
}
