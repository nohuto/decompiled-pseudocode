/*
 * XREFs of ?HrFindInterface@CBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180104640
 * Callers:
 *     ?HrFindInterface@CDxHandleBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180077370 (-HrFindInterface@CDxHandleBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CSectionBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180104360 (-HrFindInterface@CSectionBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CDxHandleYUVBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802B0CA0 (-HrFindInterface@CDxHandleYUVBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapRealization::HrFindInterface(CBitmapRealization *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  char *v8; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
    if ( v5 )
    {
      v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_db178a3c_d733_4570_9513_5392d717955f.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_db178a3c_d733_4570_9513_5392d717955f.Data1 )
        v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_db178a3c_d733_4570_9513_5392d717955f.Data4;
      if ( v6 )
        return 2147500034LL;
      if ( this )
      {
        v7 = *(int *)(*((_QWORD *)this + 2) + 16LL);
        goto LABEL_12;
      }
    }
    else if ( this )
    {
      v7 = *(int *)(*((_QWORD *)this + 2) + 12LL);
LABEL_12:
      v8 = (char *)this + v7 + 16;
LABEL_13:
      *a3 = v8;
      return 0LL;
    }
    v8 = 0LL;
    goto LABEL_13;
  }
  return result;
}
