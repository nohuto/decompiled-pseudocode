/*
 * XREFs of ?QueryInterface@CCubicBezierInterpolator@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AC320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCubicBezierInterpolator::QueryInterface(
        CCubicBezierInterpolator *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // r9d
  __int64 v4; // rax
  __int64 v5; // rax

  v3 = 0;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v4 )
    goto LABEL_8;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_7815cbba_ddf7_478c_a46c_7b6c738b7978.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_7815cbba_ddf7_478c_a46c_7b6c738b7978.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_7815cbba_ddf7_478c_a46c_7b6c738b7978.Data4;
  if ( v5 )
  {
    return (unsigned int)-2147467262;
  }
  else
  {
LABEL_8:
    *a3 = this;
    ++*((_DWORD *)this + 19);
  }
  return v3;
}
