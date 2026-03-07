struct _KTHREAD *__fastcall PopEventCalloutDispatch(int a1, __int64 a2)
{
  struct _KTHREAD *result; // rax
  __int64 v3; // r8
  int *v4; // r9
  int v5; // [rsp+20h] [rbp-28h] BYREF
  _DWORD v6[2]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  result = 0LL;
  v6[0] = a1;
  v6[1] = 0;
  v7 = a2;
  if ( PsWin32CalloutsEstablished )
  {
    v3 = 1LL;
    if ( a1 == 1 )
    {
      v5 = 0;
      v4 = &v5;
    }
    else
    {
      v4 = 0LL;
      if ( a1 == 10 )
        v3 = 0LL;
      else
        v3 = 2LL;
    }
    ((void (__fastcall *)(__int64, _DWORD *, __int64, int *, int))PopInvokeWin32Callout)(3LL, v6, v3, v4, v5);
    result = KeGetCurrentThread();
    if ( result->WaitBlock[3].SpareLong )
      __fastfail(0x20u);
  }
  return result;
}
