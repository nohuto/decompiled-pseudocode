__int64 __fastcall NtGdiForceUFIMapping(HDC a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v3; // [rsp+48h] [rbp+10h] BYREF

  result = 0LL;
  if ( a2 )
  {
    v3 = 0LL;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (__int64 *)MmUserProbeAddress;
    v3 = *a2;
    return GreForceUFIMapping(a1, &v3);
  }
  return result;
}
