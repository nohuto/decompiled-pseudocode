__int64 __fastcall DirectComposition::CCaptureControllerMarshaler::SetTransformMatrixHelper(
        DirectComposition::CCaptureControllerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        const void *a3,
        unsigned __int64 a4,
        bool *a5)
{
  __int64 v7; // rcx
  struct DirectComposition::CResourceMarshaler *v10; // rax
  char v11; // r14
  struct DirectComposition::CResourceMarshaler *v12; // rbx
  int v13; // eax
  unsigned int v14; // edi
  int v15; // eax
  bool *v16; // rax
  struct DirectComposition::CResourceMarshaler *v18; // [rsp+60h] [rbp+8h] BYREF

  v7 = *((_QWORD *)this + 10);
  if ( v7 )
  {
    v10 = (struct DirectComposition::CResourceMarshaler *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 144LL))(v7);
    v11 = 0;
    v18 = v10;
    v12 = v10;
    if ( !v10 )
      goto LABEL_5;
    if ( *((_QWORD *)v10 + 3) == 1LL )
      goto LABEL_6;
  }
  v18 = 0LL;
LABEL_5:
  v11 = 1;
  v13 = DirectComposition::CApplicationChannel::CreateInternalPrivateResource(a2, 0x6EuLL, &v18);
  v12 = v18;
  v14 = v13;
  if ( v13 < 0 )
    goto LABEL_9;
LABEL_6:
  v15 = DirectComposition::CApplicationChannel::SetResourceBufferProperty(a2, v12, 16LL, a3, a4);
  v14 = v15;
  if ( v11 )
  {
    if ( v15 >= 0 )
    {
      DirectComposition::CApplicationChannel::ReleaseResource(
        a2,
        *((struct DirectComposition::CResourceMarshaler **)this + 10));
      v16 = a5;
      *((_DWORD *)this + 4) |= 0x100u;
      *((_QWORD *)this + 10) = v12;
      *v16 = 1;
      return v14;
    }
LABEL_9:
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v12);
  }
  return v14;
}
