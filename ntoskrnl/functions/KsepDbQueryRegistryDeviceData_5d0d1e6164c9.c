__int64 __fastcall KsepDbQueryRegistryDeviceData(__int64 a1, const WCHAR *a2, _DWORD *a3, _DWORD *a4)
{
  int Value; // ebx
  HANDLE Handle; // [rsp+38h] [rbp-28h] BYREF
  __int64 v10; // [rsp+40h] [rbp-20h] BYREF
  __int64 v11; // [rsp+48h] [rbp-18h] BYREF
  _WORD *v12; // [rsp+50h] [rbp-10h]

  v11 = 0LL;
  v12 = 0LL;
  Handle = 0LL;
  Value = KsepStringTransform(&v11, a1);
  if ( Value >= 0 )
  {
    if ( (int)KsepRegistryOpenKey(
                L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Compatibility\\Device",
                v12,
                &Handle) < 0
      || (v10 = (unsigned int)*a4,
          Value = KsepRegistryQueryValue(Handle, a2, v10, (__int64)&v10),
          *a4 = v10,
          Value == -1073741772) )
    {
      Value = -1073741275;
    }
    else if ( Value >= 0 )
    {
      Value = 0;
      *a3 |= 0x10000000u;
    }
    if ( Handle )
    {
      ZwClose(Handle);
      _InterlockedIncrement(dword_140C4039C);
    }
  }
  KsepStringFree((__int64)&v11);
  return (unsigned int)Value;
}
