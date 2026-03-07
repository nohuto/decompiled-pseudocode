void __fastcall DirectComposition::CApplicationChannel::ConfirmFrame(
        DirectComposition::CApplicationChannel *this,
        __int64 a2)
{
  *((_DWORD *)this + 98) = *((_DWORD *)this + 97);
  if ( a2 )
    *((_QWORD *)this + 47) = a2;
  *((_DWORD *)this + 662) = 0;
}
