__int64 __fastcall EtwpAllocGuidEntry(__int64 a1, __int128 *a2)
{
  __int64 result; // rax
  _QWORD *v5; // rbx
  __int128 v6; // xmm0
  _QWORD *v7; // rax
  void *Buf1; // [rsp+40h] [rbp+18h] BYREF

  Buf1 = 0LL;
  result = ExAllocatePool2(64LL, 424LL, 1199010885LL);
  v5 = (_QWORD *)result;
  if ( result )
  {
    *(_QWORD *)(result + 32) = 1LL;
    v6 = *a2;
    *(_QWORD *)(result + 416) = 0LL;
    *(_QWORD *)(result + 408) = 0LL;
    *(_OWORD *)(result + 40) = v6;
    v7 = (_QWORD *)(result + 56);
    v5[49] = a1;
    v7[1] = v7;
    *v7 = v7;
    v5[3] = v5 + 2;
    v5[2] = v5 + 2;
    EtwpGetSecurityDescriptorByGuid(a2, &Buf1);
    if ( (int)ObLogSecurityDescriptor(Buf1) < 0 )
    {
      ExFreePoolWithTag(v5, 0);
      v5 = 0LL;
    }
    EtwpFreeSecurityDescriptor(&Buf1);
    if ( v5 )
      _InterlockedIncrement((volatile signed __int32 *)(v5[49] + 4120LL));
    return (__int64)v5;
  }
  return result;
}
