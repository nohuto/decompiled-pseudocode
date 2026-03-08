/*
 * XREFs of ?HrFindInterface@CHolographicExclusiveMode@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802A4A80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicExclusiveMode::HrFindInterface(
        CHolographicExclusiveMode *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // r9d
  __int64 v4; // rax

  v3 = 0;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_143f61ed_01bd_4237_b4cb_c9ce1a59f0a0.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_143f61ed_01bd_4237_b4cb_c9ce1a59f0a0.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_143f61ed_01bd_4237_b4cb_c9ce1a59f0a0.Data4;
  if ( v4 )
    return (unsigned int)-2147467262;
  else
    *a3 = (void *)(((unsigned __int64)this + 64) & -(__int64)(this != 0LL));
  return v3;
}
