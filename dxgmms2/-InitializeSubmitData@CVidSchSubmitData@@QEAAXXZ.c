void __fastcall CVidSchSubmitData::InitializeSubmitData(CVidSchSubmitData *this)
{
  PVOID v2; // rax
  void *v3; // r9
  char v4; // bl
  __int64 v5; // r8
  int v6; // edx
  unsigned int v7; // eax
  __int64 v8; // r8
  __int64 v9; // rcx
  int v10; // edx
  int v11; // r9d
  int v12; // ecx
  int v13; // edx
  unsigned int v14; // eax

  v2 = ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)(*((_QWORD *)this + 1) + 1424LL));
  *(_QWORD *)this = v2;
  v3 = v2;
  if ( v2 )
  {
    v4 = 1;
    v5 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    if ( *(int *)(v5 + 2552) < 0x2000 )
      v6 = 1;
    else
      v6 = *(_DWORD *)(v5 + 288);
    if ( *(int *)(v5 + 2552) >= 0x2000 || *(_BYTE *)(v5 + 2852) )
      v7 = *(_DWORD *)(v5 + 2760) * ((v6 << 6) + ((8 * v6 + 231) & 0xFFFFFFF8)) + 8 * (v6 + 77);
    else
      v7 = 1304;
    memset(v3, 0, v7);
    v8 = *(_QWORD *)this;
    v9 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    if ( *(int *)(v9 + 2552) < 0x2000 )
      v10 = 1;
    else
      v10 = *(_DWORD *)(v9 + 288);
    v11 = *(_DWORD *)(v9 + 2760);
    if ( *(int *)(v9 + 2552) < 0x2000 && !*(_BYTE *)(v9 + 2852) )
      v4 = 0;
    *(_BYTE *)(v8 + 356) = v4;
    if ( v4 )
    {
      v12 = 8 * v10;
      *(_DWORD *)(v8 + 608) = v10;
      v13 = v10 << 6;
      *(_DWORD *)(v8 + 604) = v11;
      *(_DWORD *)(v8 + 612) = v11 * (v13 + ((v12 + 231) & 0xFFFFFFF8)) + 16;
      v14 = v11 * (v13 + ((v12 + 231) & 0xFFFFFFF8)) + 616;
      *(_DWORD *)(v8 + 552) = v14;
      *(_DWORD *)(v8 + 556) = v12 + v14;
    }
  }
}
