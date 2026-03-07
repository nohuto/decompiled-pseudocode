__int64 KiCountNodeZeroSetBitsGroupAffinity()
{
  unsigned int v0; // r10d
  __int64 v2; // [rsp+20h] [rbp-18h] BYREF
  int v3; // [rsp+28h] [rbp-10h]
  int v4; // [rsp+2Ch] [rbp-Ch]
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  v4 = 0;
  v2 = KeNodeBlock[0];
  v3 = *(_DWORD *)(KeNodeBlock[0] + 16);
  while ( !(unsigned int)KeEnumerateNextSchedulerSubNodeInNode((__int64)&v2, &v5) )
    ;
  return v0;
}
