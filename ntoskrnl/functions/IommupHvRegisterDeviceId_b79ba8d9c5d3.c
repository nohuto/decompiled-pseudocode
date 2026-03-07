__int64 __fastcall IommupHvRegisterDeviceId(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v3; // rbx
  __int64 result; // rax

  v3 = _InterlockedIncrement(&HalpHvLogicalId);
  if ( v3 > 0x1FFFFFFFFFFFFFFFLL )
    return 3221225626LL;
  result = ((__int64 (__fastcall *)(__int64, unsigned __int64))qword_140C62298)(a1, v3);
  if ( (int)result >= 0 )
    *a2 = v3;
  return result;
}
