void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFreeResource(__int64 a1, struct _MDL *a2, __int64 a3)
{
  __int64 v3; // rcx

  if ( ((__int64)a2->Next & 7) == 1 )
  {
    v3 = a1 + 1424;
  }
  else
  {
    if ( ((__int64)a2->Next & 7) != 2 )
    {
      ExFreePoolWithTag(a2, 0);
      return;
    }
    v3 = a1 + 1544;
  }
  SmFpFree(v3, 1, a3, a2);
}
