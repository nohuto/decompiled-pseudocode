__int64 __fastcall SmPageRead(__int64 a1, union _MM_STORE_KEY *a2, unsigned __int64 a3, __int64 a4, _SLIST_ENTRY *a5)
{
  __int64 v6; // r10
  _SLIST_ENTRY *v7; // r11
  int v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0;
  SmKeyConvert(a2, (union _SM_PAGE_KEY *)&v9);
  return SMKM_STORE_MGR<SM_TRAITS>::SmPageRead(*(_QWORD *)(v6 + 24), &v9, a3, v7, a5);
}
