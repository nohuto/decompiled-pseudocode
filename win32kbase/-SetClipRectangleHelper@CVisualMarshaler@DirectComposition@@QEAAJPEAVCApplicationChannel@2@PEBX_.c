__int64 __fastcall DirectComposition::CVisualMarshaler::SetClipRectangleHelper(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        const void *a3,
        unsigned __int64 a4,
        bool *a5)
{
  __int64 v7; // rcx
  char v10; // bp
  int v11; // eax
  struct DirectComposition::CResourceMarshaler *v12; // rbx
  unsigned int v13; // edi
  int v14; // eax
  struct DirectComposition::CResourceMarshaler *v16; // rax
  struct DirectComposition::CResourceMarshaler *v17; // [rsp+60h] [rbp+8h] BYREF

  v7 = *((_QWORD *)this + 20);
  if ( !v7 )
  {
LABEL_2:
    v17 = 0LL;
    goto LABEL_3;
  }
  v16 = (struct DirectComposition::CResourceMarshaler *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 152LL))(v7);
  v10 = 0;
  v17 = v16;
  v12 = v16;
  if ( v16 )
  {
    if ( *((_QWORD *)v16 + 3) == 1LL )
      goto LABEL_4;
    goto LABEL_2;
  }
LABEL_3:
  v10 = 1;
  v11 = DirectComposition::CApplicationChannel::CreateInternalPrivateResource(a2, 0x8Au, &v17);
  v12 = v17;
  v13 = v11;
  if ( v11 < 0 )
  {
LABEL_7:
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v12);
    return v13;
  }
LABEL_4:
  v14 = DirectComposition::CApplicationChannel::SetResourceBufferProperty(a2, v12, 0x10u, a3, a4);
  v13 = v14;
  if ( v10 )
  {
    if ( v14 >= 0 )
      (*(void (__fastcall **)(DirectComposition::CVisualMarshaler *, struct DirectComposition::CApplicationChannel *, __int64, struct DirectComposition::CResourceMarshaler *, bool *))(*(_QWORD *)this + 248LL))(
        this,
        a2,
        6LL,
        v12,
        a5);
    goto LABEL_7;
  }
  return v13;
}
