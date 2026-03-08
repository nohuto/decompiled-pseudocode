/*
 * XREFs of ?HrFindInterface@CHolographicComposition@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802A4140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicComposition::HrFindInterface(
        CHolographicComposition *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v3; // rax
  unsigned int v4; // edx

  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_f6510650_98a1_40e3_b87a_8dc216605fda.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_f6510650_98a1_40e3_b87a_8dc216605fda.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_f6510650_98a1_40e3_b87a_8dc216605fda.Data4;
  v4 = 0;
  if ( v3 )
    return (unsigned int)-2147467262;
  else
    *a3 = (void *)(((unsigned __int64)this + 72) & -(__int64)(this != 0LL));
  return v4;
}
