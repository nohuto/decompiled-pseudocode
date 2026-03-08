/*
 * XREFs of ?HrFindInterface@CPolygonBuilder@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B0360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPolygonBuilder::HrFindInterface(CPolygonBuilder *this, const struct _GUID *a2, void **a3)
{
  __int64 v3; // rax
  __int64 v4; // rax

  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_2cd9069f_12e2_11dc_9fed_001143a055f9.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_2cd9069f_12e2_11dc_9fed_001143a055f9.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_2cd9069f_12e2_11dc_9fed_001143a055f9.Data4;
  if ( v3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_2cd9069e_12e2_11dc_9fed_001143a055f9.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_2cd9069e_12e2_11dc_9fed_001143a055f9.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_2cd9069e_12e2_11dc_9fed_001143a055f9.Data4;
    if ( v4 )
      return 2147500034LL;
  }
  *a3 = this;
  return 0LL;
}
