__int64 __fastcall PopEtStringIntern(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rax
  _QWORD v7[4]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v8[5]; // [rsp+40h] [rbp-28h] BYREF

  v7[0] = a1;
  v3 = 0;
  v8[1] = v7;
  v8[3] = 0LL;
  v7[2] = 2 * a2 + 2;
  v8[0] = 32LL;
  v8[2] = 1LL;
  v7[1] = 0LL;
  v7[3] = 2LL;
  v5 = RtlInternTableIntern(PopEtGlobals + 56, (__int64)v8);
  if ( v5 )
    *a3 = v5;
  else
    return (unsigned int)-1073741670;
  return v3;
}
