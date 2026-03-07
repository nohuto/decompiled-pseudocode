__int64 __fastcall DirectComposition::CApplicationChannel::SetResourceBufferProperty(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CResourceMarshaler *a2,
        __int64 a3,
        const void *a4,
        unsigned __int64 a5)
{
  __int64 v5; // rax
  int v8; // r11d
  char v10; // [rsp+58h] [rbp+10h] BYREF

  v5 = *(_QWORD *)a2;
  v10 = 0;
  v8 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, __int64, const void *, unsigned __int64, char *))(v5 + 240))(
         a2,
         this,
         a3,
         a4,
         a5,
         &v10);
  if ( v8 >= 0 && v10 )
    DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(this, a2);
  return (unsigned int)v8;
}
