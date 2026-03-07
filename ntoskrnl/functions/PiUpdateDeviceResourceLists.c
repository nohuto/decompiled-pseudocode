__int64 __fastcall PiUpdateDeviceResourceLists(_QWORD *a1)
{
  _QWORD *v2; // rcx
  void *v3; // rsi
  void *v4; // rdi
  __int64 result; // rax
  void (__fastcall **v6)(_QWORD); // r14
  int v7; // ebx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // [rsp+50h] [rbp+8h] BYREF
  PVOID P; // [rsp+58h] [rbp+10h] BYREF
  void *Src; // [rsp+60h] [rbp+18h] BYREF

  Src = 0LL;
  v10 = 0LL;
  v2 = (_QWORD *)a1[4];
  v3 = 0LL;
  P = 0LL;
  v4 = 0LL;
  result = IopQueryBusResourceUpdateInterface(v2, (USHORT **)&P);
  if ( (int)result < 0 )
    return result;
  v6 = (void (__fastcall **)(_QWORD))P;
  v7 = (*((__int64 (__fastcall **)(_QWORD, void **, void **))P + 4))(*((_QWORD *)P + 1), &Src, &v10);
  if ( v7 >= 0 )
  {
    if ( !Src || !v10 )
    {
LABEL_13:
      v7 = 0;
      goto LABEL_14;
    }
    v3 = PnpCopyResourceList(Src);
    if ( v3 )
    {
      v4 = PnpCopyResourceList(v10);
      if ( v4 )
      {
        ExAcquireFastMutex(&PiResourceListLock);
        v8 = (void *)a1[52];
        if ( v8 )
          ExFreePoolWithTag(v8, 0);
        v9 = (void *)a1[53];
        if ( v9 )
          ExFreePoolWithTag(v9, 0);
        a1[52] = v3;
        a1[53] = v4;
        ExReleaseFastMutex(&PiResourceListLock);
        goto LABEL_13;
      }
    }
    v7 = -1073741670;
  }
LABEL_14:
  v6[3](v6[1]);
  ExFreePoolWithTag(v6, 0);
  if ( v7 < 0 )
  {
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
  }
  return (unsigned int)v7;
}
