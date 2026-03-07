__int64 __fastcall VidSchiUpdateNodeRunningTimeAtISR(__int64 *a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 v6; // rcx
  _QWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+38h] [rbp-10h]

  v3 = *a1;
  v4 = *(_QWORD *)(v3 + 8LL * *(unsigned int *)(v3 + 1556) + 1568);
  result = 0LL;
  if ( v4 )
  {
    v7[0] = 0LL;
    v8 = 0LL;
    v9 = 0LL;
    v7[1] = v4;
    result = VidSchiUpdateContextRunningTimeAtISR(v7, a2);
    a1[3] = v9;
    v6 = v8;
    a1[1] = v4;
  }
  else
  {
    a1[1] = 0LL;
    a1[3] = 0LL;
    v6 = *(_QWORD *)(v3 + 2648);
  }
  a1[2] = v6;
  return result;
}
