__int64 __fastcall BiTranslateFilePath(__int64 a1, unsigned int a2, _QWORD *a3)
{
  void *Pool2; // rdi
  int v7; // ebx
  int v8; // eax
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v10[0] = 0LL;
  Pool2 = 0LL;
  v7 = BiAcquirePrivilege(22LL, v10);
  if ( v7 >= 0 )
  {
    v8 = ZwTranslateFilePath(a1, a2);
    v7 = v8;
    if ( v8 == -1073741789 )
    {
      Pool2 = (void *)ExAllocatePool2(258LL, 0LL, 1262764866LL);
      if ( Pool2 )
        v7 = ZwTranslateFilePath(a1, a2);
      else
        v7 = -1073741670;
    }
    else if ( v8 >= 0 )
    {
      v7 = -1073741811;
    }
    BiReleasePrivilege(v10);
    if ( v7 >= 0 )
    {
      *a3 = Pool2;
    }
    else if ( Pool2 )
    {
      ExFreePoolWithTag(Pool2, 0x4B444342u);
    }
  }
  return (unsigned int)v7;
}
