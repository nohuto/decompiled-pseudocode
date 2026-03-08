/*
 * XREFs of ?HrFindInterface@CMILCOMWeakRef@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180287450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILCOMWeakRef::HrFindInterface(CMILCOMWeakRef *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    result = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_50ecdd57_9012_4038_a006_0741ee1db908.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_50ecdd57_9012_4038_a006_0741ee1db908.Data1 )
      result = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_50ecdd57_9012_4038_a006_0741ee1db908.Data4;
    if ( result )
      return 2147500034LL;
    else
      *a3 = this;
  }
  return result;
}
