__int64 __fastcall CmSipQueryProcessWorkingSetLimits(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v6; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+38h] [rbp-20h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h] BYREF
  __int64 v9; // [rsp+48h] [rbp-10h] BYREF
  int v10; // [rsp+60h] [rbp+8h] BYREF
  int v11; // [rsp+64h] [rbp+Ch]
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  v11 = HIDWORD(a1);
  v12 = 0LL;
  v6 = 0LL;
  v10 = 0;
  result = MmQueryWorkingSetInformation(&v9, &v8, &v7, &v12, &v6, &v10);
  if ( (int)result >= 0 )
  {
    *a2 = v12;
    *a3 = v6;
    return 0LL;
  }
  return result;
}
