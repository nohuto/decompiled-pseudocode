/*
 * XREFs of ?HrFindInterface@CPrimitiveGroup@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180016D70
 * Callers:
 *     <none>
 * Callees:
 *     ?HrFindInterface@CContent@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180035170 (-HrFindInterface@CContent@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CPrimitiveGroup::HrFindInterface(CPrimitiveGroup *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_c155b649_2c5b_416a_b836_bbda56b2ec27.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c155b649_2c5b_416a_b836_bbda56b2ec27.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_c155b649_2c5b_416a_b836_bbda56b2ec27.Data4;
    if ( v4 )
    {
      return CContent::HrFindInterface(this, a2, a3);
    }
    else
    {
      *a3 = (void *)(((unsigned __int64)this + 80) & -(__int64)(this != 0LL));
      return 0LL;
    }
  }
  return result;
}
