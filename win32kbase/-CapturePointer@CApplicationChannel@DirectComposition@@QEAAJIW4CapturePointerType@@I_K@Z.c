__int64 __fastcall DirectComposition::CApplicationChannel::CapturePointer(
        __int64 a1,
        int a2,
        int a3,
        unsigned int a4,
        __int64 a5)
{
  int v9; // r11d
  unsigned __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  struct DirectComposition::CResourceMarshaler *v13; // rdi
  __int64 v14; // rbx
  _DWORD v16[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v17; // [rsp+28h] [rbp-10h]

  if ( !CInputManager::OwnsPointerId(*(_DWORD *)(a1 + 2696), a4) )
    return (unsigned int)-1073741790;
  v10 = (unsigned int)(a2 - 1);
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( v10 >= *(_QWORD *)(a1 + 80) )
    return (unsigned int)-1073741811;
  _mm_lfence();
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 88) * v10 + *(_QWORD *)(a1 + 56));
  if ( !v11 )
    return (unsigned int)-1073741811;
  v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 128LL))(v11);
  v13 = (struct DirectComposition::CResourceMarshaler *)v12;
  if ( !v12 )
    return (unsigned int)-1073741811;
  if ( !a3 )
  {
    v14 = v12 + 280;
    v9 = CDynamicArray<unsigned int,2003858261>::Grow(v12 + 280);
    if ( v9 >= 0 )
    {
      *(_DWORD *)(*(_QWORD *)v14 + 4LL * (unsigned int)(*(_DWORD *)(v14 + 8))++) = a4;
      *((_DWORD *)v13 + 4) |= 0x80u;
    }
    goto LABEL_12;
  }
  if ( a3 != 1 )
    return (unsigned int)-1073741811;
  v16[0] = a4;
  v16[1] = 0;
  v17 = a5;
  v9 = CStructDynamicArray<DirectComposition::CInteractionMarshaler::ManipulationCaptureInfo>::Add(v12 + 296, v16);
LABEL_12:
  if ( v9 >= 0 )
    DirectComposition::CApplicationChannel::PutResourceOnUpdatedList((DirectComposition::CApplicationChannel *)a1, v13);
  return (unsigned int)v9;
}
