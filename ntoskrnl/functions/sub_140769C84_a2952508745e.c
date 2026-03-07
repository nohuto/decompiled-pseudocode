NTSTATUS __fastcall sub_140769C84(__int64 a1, int a2, int a3, _QWORD *a4, _DWORD *a5)
{
  NTSTATUS result; // eax
  __int64 Parameter; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+38h] [rbp-20h]
  int v9; // [rsp+3Ch] [rbp-1Ch]
  __int64 v10; // [rsp+40h] [rbp-18h]
  int v11; // [rsp+48h] [rbp-10h]
  int v12; // [rsp+4Ch] [rbp-Ch]

  v10 = 0LL;
  v11 = 0;
  Parameter = a1;
  v8 = a2;
  v9 = a3;
  v12 = 0;
  result = KeExpandKernelStackAndCalloutEx(Callout, &Parameter, 0x4C00uLL, 0, 0LL);
  if ( result >= 0 )
  {
    *a4 = v10;
    *a5 = v11;
    return v12;
  }
  return result;
}
