void __fastcall CVidSchSubmitData::InitializeSubmitData(CVidSchSubmitData *this)
{
  PVOID v2; // rax
  unsigned int VidSchSibmitDataSize; // eax
  void *v4; // r9
  unsigned __int8 IsDxgmms2; // al
  int v6; // edx
  __int64 v7; // r8
  int v8; // r9d
  int v9; // ecx
  int v10; // edx
  unsigned int v11; // eax

  v2 = ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)(*((_QWORD *)this + 1) + 1424LL));
  *(_QWORD *)this = v2;
  if ( v2 )
  {
    VidSchSibmitDataSize = ADAPTER_RENDER::GetVidSchSibmitDataSize(*((ADAPTER_RENDER **)this + 1));
    memset(v4, 0, VidSchSibmitDataSize);
    IsDxgmms2 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL));
    *(_BYTE *)(v7 + 356) = IsDxgmms2;
    if ( IsDxgmms2 )
    {
      v9 = 8 * v6;
      *(_DWORD *)(v7 + 608) = v6;
      v10 = v6 << 6;
      *(_DWORD *)(v7 + 604) = v8;
      *(_DWORD *)(v7 + 612) = v8 * (v10 + ((v9 + 231) & 0xFFFFFFF8)) + 16;
      v11 = v8 * (v10 + ((v9 + 231) & 0xFFFFFFF8)) + 616;
      *(_DWORD *)(v7 + 552) = v11;
      *(_DWORD *)(v7 + 556) = v9 + v11;
    }
  }
}
