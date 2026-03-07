void __fastcall CFlipPropertySetBase::FindProperty<FlipContentHCompSurf>(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r9d
  unsigned int v3; // r11d
  __int64 v4; // r8
  __int64 v5; // r10
  __int64 v6; // rcx
  __int64 v7; // rax

  *a2 = 0LL;
  v2 = 0;
  v3 = *(_DWORD *)(a1 + 12);
  v4 = *(_QWORD *)(a1 + 24);
  if ( v3 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    while ( 1 )
    {
      v6 = 32LL * v2;
      v7 = *(_QWORD *)(v6 + v5) - *(_QWORD *)&GUID_13c96810_4fe9_4762_9d34_5b7b5a28a5c4.Data1;
      if ( !v7 )
        v7 = *(_QWORD *)(v6 + v5 + 8) - *(_QWORD *)GUID_13c96810_4fe9_4762_9d34_5b7b5a28a5c4.Data4;
      if ( !v7 && *(_DWORD *)(v6 + v5 + 16) == 8 )
        break;
      ++v2;
      v4 += *(unsigned int *)(v6 + v5 + 16);
      if ( v2 >= v3 )
        return;
    }
    *a2 = v4;
  }
}
