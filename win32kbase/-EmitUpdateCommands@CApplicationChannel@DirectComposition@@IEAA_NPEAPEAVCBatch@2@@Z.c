char __fastcall DirectComposition::CApplicationChannel::EmitUpdateCommands(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch **a2)
{
  __int64 i; // rbx

  for ( i = *((_QWORD *)this + 52); ; i = *((_QWORD *)this + 52) )
  {
    if ( !i )
      return 1;
    *((_QWORD *)this + 52) = *(_QWORD *)(i + 8);
    *(_QWORD *)(i + 8) = 0LL;
    if ( (unsigned int)Feature_191799614__private_IsEnabledDeviceUsage() )
      DirectComposition::CResourceMarshaler::AddRef((DirectComposition::CResourceMarshaler *)i);
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, struct DirectComposition::CBatch **))(*(_QWORD *)i + 40LL))(i, a2) )
      break;
    *(_DWORD *)(i + 16) &= ~2u;
    if ( (unsigned int)Feature_191799614__private_IsEnabledDeviceUsage() )
      DirectComposition::CApplicationChannel::ReleaseResource(this, (struct DirectComposition::CResourceMarshaler *)i);
  }
  *(_QWORD *)(i + 8) = *((_QWORD *)this + 52);
  *((_QWORD *)this + 52) = i;
  if ( (unsigned int)Feature_191799614__private_IsEnabledDeviceUsage() )
    DirectComposition::CApplicationChannel::ReleaseResource(this, (struct DirectComposition::CResourceMarshaler *)i);
  return 0;
}
