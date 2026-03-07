void __fastcall BapdpRegisterWbclData(__int64 a1)
{
  int v1; // edi
  int v2; // eax
  __int64 v3; // rcx
  ULONG *Pool2; // rbx
  unsigned int v5; // [rsp+30h] [rbp-20h] BYREF
  int v6; // [rsp+38h] [rbp-18h] BYREF
  int v7; // [rsp+3Ch] [rbp-14h]
  int v8; // [rsp+40h] [rbp-10h]
  int v9; // [rsp+44h] [rbp-Ch]

  if ( (_DWORD)a1 )
  {
    if ( (_DWORD)a1 != 1 )
      return;
    v6 = -1200452434;
    v1 = 2;
    v7 = 1170082397;
    v8 = 24237205;
    v9 = 623825306;
  }
  else
  {
    v6 = -1237722659;
    v1 = 0;
    v7 = 1193042546;
    v8 = 878293681;
    v9 = 803227664;
  }
  v5 = 0;
  v2 = BapdpQueryData(a1, &v6, 0LL, 0LL, &v5);
  if ( v2 == -1073741789 )
  {
    Pool2 = (ULONG *)ExAllocatePool2(64LL, v5, 0x64506142u);
    if ( !Pool2 )
      return;
  }
  else
  {
    Pool2 = 0LL;
    if ( v2 < 0 )
      return;
  }
  if ( (int)BapdpQueryData(v3, &v6, 0LL, Pool2, &v5) >= 0 )
    BapdRegisterSiData(Pool2, v5, v1);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
}
