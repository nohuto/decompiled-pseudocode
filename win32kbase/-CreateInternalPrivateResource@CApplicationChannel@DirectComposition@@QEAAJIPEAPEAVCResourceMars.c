__int64 __fastcall DirectComposition::CApplicationChannel::CreateInternalPrivateResource(
        DirectComposition::CApplicationChannel *this,
        unsigned __int64 a2,
        struct DirectComposition::CResourceMarshaler **a3)
{
  int v4; // esi
  int PrivateMarshaler; // ebx
  __int64 v8; // rax
  struct DirectComposition::CResourceMarshaler *v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0LL;
  v4 = a2;
  PrivateMarshaler = DirectComposition::CApplicationChannel::CreatePrivateMarshaler(this, a2, (__int64)&v9);
  if ( PrivateMarshaler >= 0 )
  {
    PrivateMarshaler = DirectComposition::CApplicationChannel::InitializeAndRegisterInternalResource(this, v9);
    if ( PrivateMarshaler >= 0 )
    {
      if ( v4 == 2 )
      {
        v8 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v9 + 80LL))(v9);
        DirectComposition::CApplicationChannel::AddAnimationTimeListEntry(
          this,
          *(struct DirectComposition::CAnimationTimeList **)(v8 + 80));
      }
      *a3 = v9;
    }
  }
  return (unsigned int)PrivateMarshaler;
}
