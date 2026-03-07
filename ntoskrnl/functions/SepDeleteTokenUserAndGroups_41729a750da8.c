void __fastcall SepDeleteTokenUserAndGroups(__int64 a1)
{
  unsigned int v2; // eax
  void *v3; // rcx

  if ( *(_QWORD *)(a1 + 1120) )
  {
    v2 = *(_DWORD *)(a1 + 208);
    if ( v2 != -1 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 152) + 16LL * v2) = 0LL;
      *(_DWORD *)(a1 + 208) = -1;
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 1120), 0);
    *(_QWORD *)(a1 + 1120) = 0LL;
  }
  v3 = *(void **)(a1 + 1128);
  if ( v3 )
  {
    SepDereferenceSidValuesBlock(v3);
    *(_QWORD *)(a1 + 1128) = 0LL;
  }
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_DWORD *)(a1 + 124) = 0;
}
