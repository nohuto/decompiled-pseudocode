void __fastcall SMKM_STORE<SM_TRAITS>::SmStDirectReadComplete(__int64 a1, __int128 *a2, unsigned int a3)
{
  unsigned int v3; // [rsp+40h] [rbp+18h] BYREF

  v3 = a3;
  SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFree(*(_QWORD *)(a1 + 6728), a1, a2, &v3);
}
