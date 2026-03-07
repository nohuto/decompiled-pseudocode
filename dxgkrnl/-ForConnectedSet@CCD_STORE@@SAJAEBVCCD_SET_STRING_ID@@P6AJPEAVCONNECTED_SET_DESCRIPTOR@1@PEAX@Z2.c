__int64 __fastcall CCD_STORE::ForConnectedSet(
        const struct CCD_SET_STRING_ID *a1,
        int (*a2)(struct CCD_STORE::CONNECTED_SET_DESCRIPTOR *, void *),
        __int64 a3)
{
  struct _STRING *ConnectedSetStr; // rax
  __int64 v6; // rcx

  ConnectedSetStr = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr(a1);
  return CCD_STORE::_ForSetSubkey<CCD_STORE::CONNECTED_SET_DESCRIPTOR>(
           v6,
           ConnectedSetStr,
           (int (__fastcall *)(_BYTE *, __int64))a2,
           a3);
}
