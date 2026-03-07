__int64 __fastcall DirectComposition::CApplicationChannel::SetVisualInputSink(
        DirectComposition::CApplicationChannel *this,
        int a2,
        void *a3)
{
  unsigned __int64 v5; // rcx
  __int64 v6; // rcx
  DirectComposition::CVisualMarshaler *v7; // rax
  int v8; // r11d
  struct DirectComposition::CResourceMarshaler *v9; // rdi
  struct DirectComposition::CResourceMarshaler *v11; // [rsp+40h] [rbp+8h] BYREF
  char v12; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0LL;
  v12 = 0;
  v5 = (unsigned int)(a2 - 1);
  if ( a2
    && v5 < *((_QWORD *)this + 10)
    && (_mm_lfence(), (v6 = *(_QWORD *)(*((_QWORD *)this + 11) * v5 + *((_QWORD *)this + 7))) != 0) )
  {
    v7 = (DirectComposition::CVisualMarshaler *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 168LL))(v6);
    if ( v7 )
    {
      v8 = DirectComposition::CVisualMarshaler::EnsureWriteableInteraction(v7, this, 1, 0, L"SetInputSink", &v11);
      if ( v8 >= 0 )
      {
        v9 = v11;
        v8 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, _QWORD, void *, char *))(*(_QWORD *)v11 + 224LL))(
               v11,
               0LL,
               a3,
               &v12);
        if ( v8 >= 0 )
        {
          if ( v12 )
            DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(this, v9);
        }
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v8;
}
