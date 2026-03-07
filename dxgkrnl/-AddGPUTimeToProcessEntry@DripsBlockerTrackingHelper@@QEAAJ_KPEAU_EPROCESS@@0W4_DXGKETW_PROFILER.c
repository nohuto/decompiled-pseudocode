__int64 __fastcall DripsBlockerTrackingHelper::AddGPUTimeToProcessEntry(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  __int64 result; // rax
  _BYTE v8[4]; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v9; // [rsp+44h] [rbp-14h] BYREF
  _DWORD v10[4]; // [rsp+48h] [rbp-10h] BYREF

  v9 = 0;
  v10[0] = 0;
  v8[0] = 0;
  result = DripsBlockerTrackingHelper::DoGetProcessEntry(a1, a2, 0LL, a3, a5, &v9, v10, v8);
  if ( (int)result >= 0 && !v8[0] )
    *(_QWORD *)(4720LL * v9 + a1 + 48) += a4;
  return result;
}
