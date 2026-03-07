// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NumHandles(void *a1)
{
  __int64 result; // rax
  _OWORD ObjectInformation[3]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v3; // [rsp+60h] [rbp-18h]

  v3 = 0LL;
  memset(ObjectInformation, 0, sizeof(ObjectInformation));
  if ( !WPP_MAIN_CB.Dpc.DpcData
    || ZwQueryObject(WPP_MAIN_CB.Dpc.DpcData, ObjectBasicInformation, ObjectInformation, 0x38u, 0LL) )
  {
    return 0LL;
  }
  result = DWORD2(ObjectInformation[0]);
  if ( DWORD2(ObjectInformation[0]) > 1 )
  {
    gdwHydraHint |= 0x400000u;
    return DWORD2(ObjectInformation[0]);
  }
  return result;
}
