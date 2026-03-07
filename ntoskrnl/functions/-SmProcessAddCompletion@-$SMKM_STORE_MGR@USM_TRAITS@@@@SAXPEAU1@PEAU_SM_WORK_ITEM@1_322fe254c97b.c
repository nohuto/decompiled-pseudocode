void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmProcessAddCompletion(__int64 a1, __int64 a2, int a3, _DWORD *a4, int a5)
{
  unsigned int v5; // edi
  __int64 v7; // r8
  int v9; // ebx
  int v10; // edx
  int v11; // edi

  v5 = *(_DWORD *)(a2 + 8);
  v7 = *(_QWORD *)(a2 + 32);
  v9 = *(_DWORD *)(a2 + 24);
  v10 = a5;
  v11 = (v5 >> 3) & 0x7FFFFFF;
  *(_DWORD *)v7 = a5;
  if ( v10 >= 0 && (*a4 & 0x100) != 0 )
    *(_QWORD *)(v7 + 8) |= 1uLL;
  if ( v11 )
  {
    a5 = v9;
    SMKM_STORE_MGR<SM_TRAITS>::SmFeAddComplete(a1, (unsigned int *)&a5, v11, (__int64)a4, v10 >= 0);
    v10 = -1073741823;
  }
  if ( v11 != a3 )
  {
    a5 = v11 + v9;
    SMKM_STORE_MGR<SM_TRAITS>::SmFeAddComplete(a1, (unsigned int *)&a5, a3 - v11, (__int64)a4, v10 >= 0);
  }
}
