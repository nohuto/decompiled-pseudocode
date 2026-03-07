__int64 __fastcall DirectComposition::CVisualMarshaler::EnsureWriteableInteraction(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        char a3,
        char a4,
        const unsigned __int16 *a5,
        struct DirectComposition::CInteractionMarshaler **a6)
{
  __int64 v8; // rcx
  int v9; // edi
  struct DirectComposition::CResourceMarshaler *v11; // rbx
  int v13; // edx
  struct DirectComposition::CResourceMarshaler *v14; // [rsp+60h] [rbp-28h] BYREF
  char v15; // [rsp+90h] [rbp+8h] BYREF

  v8 = *((_QWORD *)this + 27);
  v9 = 0;
  if ( !v8 || a4 )
  {
    v14 = 0LL;
  }
  else
  {
    v14 = (struct DirectComposition::CResourceMarshaler *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 128LL))(v8);
    v11 = v14;
    if ( v14 )
    {
LABEL_4:
      *a6 = v11;
      return (unsigned int)v9;
    }
  }
  v15 = 0;
  v9 = DirectComposition::CApplicationChannel::CreateInternalPrivateResource(a2, 0x59uLL, &v14);
  if ( v9 >= 0 )
  {
    v11 = v14;
    if ( !a3 || (v9 = DirectComposition::CInteractionMarshaler::SetDefaultConfiguration(v14), v9 >= 0) )
    {
      v9 = (*(__int64 (__fastcall **)(DirectComposition::CVisualMarshaler *, struct DirectComposition::CApplicationChannel *, __int64, struct DirectComposition::CResourceMarshaler *, char *))(*(_QWORD *)this + 248LL))(
             this,
             a2,
             22LL,
             v11,
             &v15);
      DirectComposition::CApplicationChannel::ReleaseResource(a2, v11);
      if ( v9 >= 0 )
      {
        if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000000LL) != 0 )
          McTemplateK0qqqxxqtz_EtwWriteTransfer(
            *((_DWORD *)this + 8),
            v13,
            *((_DWORD *)v11 + 8),
            *((_DWORD *)a2 + 7),
            *((_DWORD *)this + 8),
            *((_DWORD *)v11 + 8),
            *((_DWORD *)this + 8),
            *((_DWORD *)v11 + 8));
        DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(a2, v11);
        DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(a2, this);
        goto LABEL_4;
      }
    }
  }
  return (unsigned int)v9;
}
