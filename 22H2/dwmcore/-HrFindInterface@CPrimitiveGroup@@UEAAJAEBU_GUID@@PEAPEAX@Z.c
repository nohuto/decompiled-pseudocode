/*
 * XREFs of ?HrFindInterface@CPrimitiveGroup@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006F240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPrimitiveGroup::HrFindInterface(
        CPrimitiveGroup *this,
        const struct _GUID *a2,
        CPrimitiveGroup **a3)
{
  CPrimitiveGroup *v3; // r9
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  CPrimitiveGroup *v7; // rax

  v3 = this;
  result = 2147942487LL;
  if ( !a3 )
    return result;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_c155b649_2c5b_416a_b836_bbda56b2ec27.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c155b649_2c5b_416a_b836_bbda56b2ec27.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_c155b649_2c5b_416a_b836_bbda56b2ec27.Data4;
  if ( !v5 )
  {
    v7 = (CPrimitiveGroup *)(((unsigned __int64)this + 72) & -(__int64)(this != 0LL));
LABEL_15:
    *a3 = v7;
    return 0LL;
  }
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_2d681593_1e98_4679_bde5_5b9677677b1f.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_2d681593_1e98_4679_bde5_5b9677677b1f.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_2d681593_1e98_4679_bde5_5b9677677b1f.Data4;
  if ( !v6 )
  {
    if ( this )
      v7 = (CPrimitiveGroup *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 8LL) + 56);
    else
      v7 = 0LL;
    goto LABEL_15;
  }
  result = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    result = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( result )
  {
    result = 2147500034LL;
    v3 = 0LL;
  }
  *a3 = v3;
  return result;
}
