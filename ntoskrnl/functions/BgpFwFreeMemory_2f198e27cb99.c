void __fastcall BgpFwFreeMemory(__int64 a1)
{
  ULONG v2; // edx
  __int64 v3; // rax
  __int64 v4; // r10
  _QWORD *v5; // r9
  __int64 v6; // rax
  struct _MDL *v7; // rcx
  struct _MDL *v8; // rbx
  ULONG v9; // ebx

  v2 = *(_DWORD *)(a1 - 24);
  if ( v2 == 1262700354 )
  {
    v9 = a1 - 24 - qword_140C709D0 - 8;
    RtlClearBits(&stru_140C709E0, v9, *(_DWORD *)(a1 - 16));
    if ( v9 < HintIndex )
      HintIndex = v9;
  }
  else
  {
    if ( v2 == 1262634818 )
    {
      v3 = a1 - 40;
      v4 = *(_QWORD *)(a1 - 40);
      if ( *(_QWORD *)(v4 + 8) != a1 - 40 || (v5 = *(_QWORD **)(v3 + 8), *v5 != v3) )
        __fastfail(3u);
      *v5 = v4;
      v6 = 48LL;
      *(_QWORD *)(v4 + 8) = v5;
    }
    else
    {
      v6 = 32LL;
    }
    v7 = (struct _MDL *)(a1 - v6);
    if ( *(_QWORD *)(a1 - 16) >= 0x1000uLL )
    {
      v8 = *(struct _MDL **)(a1 - 8);
      MmUnmapLockedPages(v7, v8);
      MiFreePagesFromMdl((ULONG_PTR)v8, 0);
      v2 = 0;
      v7 = v8;
    }
    ExFreePoolWithTag(v7, v2);
  }
}
