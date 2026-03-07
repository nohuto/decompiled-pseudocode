__int64 **__fastcall std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::erase(
        __int64 *a1,
        __int64 **a2,
        __int64 *a3)
{
  __int64 v3; // r9
  __int64 v5; // r10
  _QWORD v7[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v8[4]; // [rsp+38h] [rbp-20h] BYREF

  v3 = *a3;
  v5 = a3[2];
  v7[1] = 0LL;
  v8[1] = 0LL;
  v7[0] = v3;
  v8[0] = v3;
  v7[2] = v5 + 1;
  v8[2] = v5;
  std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::erase(a1, a2, (__int64)v8, (__int64)v7);
  return a2;
}
