__int64 __fastcall IopGetSetSpecificExtension(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        char a4,
        _QWORD *a5,
        _QWORD *a6)
{
  __int64 v7; // r14
  __int64 result; // rax
  __int64 FileObjectExtension; // rax
  __int64 v12; // rdi
  void *v13; // r8
  __int64 Pool2; // r8
  _QWORD v15[3]; // [rsp+20h] [rbp-18h] BYREF

  v15[0] = 0LL;
  v7 = a3;
  if ( !a4 || (result = IopAllocateFileObjectExtension(a1, 0LL), (int)result >= 0) )
  {
    FileObjectExtension = IopGetFileObjectExtension(a1, a2, v15);
    v12 = v15[0];
    v13 = (void *)FileObjectExtension;
    if ( !FileObjectExtension && a4 )
    {
      Pool2 = ExAllocatePool2(64LL, v7, 1162243913LL);
      if ( !Pool2 )
        return 3221225626LL;
      if ( (int)IopSetTypeSpecificFoExtension(v12, a2, Pool2) < 0 )
      {
        ExFreePoolWithTag(v13, 0);
        v13 = (void *)IopGetFileObjectExtension(a1, a2, 0LL);
      }
    }
    if ( a5 )
      *a5 = v13;
    if ( a6 )
      *a6 = v12;
    return 0LL;
  }
  return result;
}
