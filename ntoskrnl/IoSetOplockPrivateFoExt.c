__int64 __fastcall IoSetOplockPrivateFoExt(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 FileObjectExtension; // r8
  char v5; // r10
  __int64 result; // rax
  _OWORD *v7; // rax
  void *v8; // r8
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v9 = 0LL;
  if ( !*(_QWORD *)(a1 + 208) )
  {
    result = IopAllocateFileObjectExtension(a1, &v9);
    v2 = result;
    if ( (int)result < 0 )
      return result;
    goto LABEL_7;
  }
  FileObjectExtension = IopGetFileObjectExtension(a1, 6, &v9);
  if ( !FileObjectExtension )
  {
LABEL_7:
    v7 = ExAllocateFromNPagedLookasideList(&IopOplockFoExtLookasideList);
    FileObjectExtension = (__int64)v7;
    if ( !v7 )
      return 3221225626LL;
    v5 = 1;
    *v7 = 0LL;
    v7[1] = 0LL;
    v7[2] = 0LL;
  }
  *(_QWORD *)(FileObjectExtension + 40) = *(_QWORD *)(a2 + 40);
  if ( v5 )
  {
    v2 = IopSetTypeSpecificFoExtension(v9, 6LL, FileObjectExtension);
    if ( v2 < 0 )
      ExFreeToNPagedLookasideList(&IopOplockFoExtLookasideList, v8);
  }
  return (unsigned int)v2;
}
