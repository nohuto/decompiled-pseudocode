__int64 __fastcall IommupHvUnmapDeviceIdentityRange(ULONG_PTR BugCheckParameter3)
{
  __int64 result; // rax
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0LL;
  if ( *(_BYTE *)(BugCheckParameter3 + 52) )
    return 3221225485LL;
  LODWORD(v3) = *(_DWORD *)(BugCheckParameter3 + 48);
  BYTE4(v3) = 0;
  result = ((__int64 (__fastcall *)(__int64 *))qword_140C622E0)(&v3);
  if ( (int)result < 0 )
    KeBugCheckEx(0x1D9u, 1uLL, (int)result, BugCheckParameter3, 0LL);
  return result;
}
