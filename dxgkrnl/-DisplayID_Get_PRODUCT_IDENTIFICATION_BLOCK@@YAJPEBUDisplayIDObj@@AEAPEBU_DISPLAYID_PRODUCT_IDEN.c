__int64 __fastcall DisplayID_Get_PRODUCT_IDENTIFICATION_BLOCK(
        const struct DisplayIDObj *a1,
        const struct _DISPLAYID_PRODUCT_IDENTIFICATION_BLOCK **a2)
{
  __int64 v4; // rcx
  unsigned int v5; // r8d
  __int64 v6; // rcx
  const struct _DISPLAYID_PRODUCT_IDENTIFICATION_BLOCK *v7; // rdx

  if ( !a1 || !*((_DWORD *)a1 + 5) )
    return 3221225485LL;
  if ( !*((_BYTE *)a1 + 16) )
    return 3223126019LL;
  v4 = *(_QWORD *)a1;
  v5 = *(unsigned __int8 *)(v4 + 1);
  v6 = v4 + 4;
  v7 = (const struct _DISPLAYID_PRODUCT_IDENTIFICATION_BLOCK *)(v6 & -(__int64)((_BYTE)v5 != 0));
  if ( (unsigned __int8)v5 < 3u
    || v5 < (unsigned int)*(unsigned __int8 *)((v6 & -(__int64)((_BYTE)v5 != 0)) + 2) + 3
    || *(_BYTE *)v7 != 32 )
  {
    return 3221225659LL;
  }
  *a2 = v7;
  return 0LL;
}
