__int64 __fastcall NtDCompositionTelemetrySetApplicationId(unsigned int a1, size_t Size, char *Src)
{
  int v6; // ebx
  struct DirectComposition::CApplicationChannel *v7; // rsi
  struct DirectComposition::CApplicationChannel *v9; // [rsp+28h] [rbp-170h] BYREF
  unsigned __int16 v10[152]; // [rsp+30h] [rbp-168h] BYREF

  v6 = 0;
  v9 = 0LL;
  memset(v10, 0, 0x12EuLL);
  if ( !Src || !Size || (Size & 1) != 0 || Size > 0x12C )
    v6 = -1073741811;
  if ( v6 >= 0 )
  {
    if ( &Src[Size] < Src || (unsigned __int64)&Src[Size] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v10, Src, Size);
    v6 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v9);
    v7 = v9;
    if ( v6 >= 0 )
    {
      v6 = DirectComposition::CApplicationChannel::TelemetrySetApplicationId(v9, v10);
      (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v7)(v7);
    }
  }
  return (unsigned int)v6;
}
