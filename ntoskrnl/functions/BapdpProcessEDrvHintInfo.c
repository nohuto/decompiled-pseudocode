void __fastcall BapdpProcessEDrvHintInfo(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rcx
  void *Pool2; // rbx
  unsigned int v4; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v5[4]; // [rsp+38h] [rbp-18h] BYREF

  v4 = 0;
  v5[0] = -434226978;
  v5[1] = 1092265705;
  v5[2] = 176510397;
  v5[3] = 1684214913;
  v1 = BapdpQueryData(a1, v5, 0LL, 0LL, &v4);
  if ( v1 == -1073741789 )
  {
    Pool2 = (void *)ExAllocatePool2(64LL, v4, 0x64506142u);
    if ( !Pool2 )
      return;
  }
  else
  {
    Pool2 = 0LL;
    if ( v1 < 0 )
      return;
  }
  if ( (int)BapdpQueryData(v2, v5, 0LL, Pool2, &v4) >= 0 && v4 >= 8 )
    BapdpRegisterEDrvHintInfo(Pool2);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
}
