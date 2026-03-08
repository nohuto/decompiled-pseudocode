/*
 * XREFs of ?HrFindInterface@CHolographicInteropTexture@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802A7AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicInteropTexture::HrFindInterface(
        CHolographicInteropTexture *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v3; // rax
  unsigned int v4; // edx

  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_6ea01fc5_ef58_46aa_b361_da5050ef3873.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_6ea01fc5_ef58_46aa_b361_da5050ef3873.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_6ea01fc5_ef58_46aa_b361_da5050ef3873.Data4;
  v4 = 0;
  if ( v3 )
    return (unsigned int)-2147467262;
  else
    *a3 = (void *)(((unsigned __int64)this + 80) & -(__int64)(this != 0LL));
  return v4;
}
