_QWORD *__fastcall sub_14006D650(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 Pool2; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF
  _QWORD *v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = a2;
  Pool2 = ExAllocatePool2(64LL, 32LL, 808464436LL);
  if ( Pool2 && (v7 = sub_1400AEF28(Pool2, &v13, a3)) != 0 && (v8 = *(_QWORD *)(v7 + 16)) != 0 )
  {
    a1[1] = 0LL;
  }
  else
  {
    v8 = 0LL;
    v7 = 0LL;
  }
  a1[1] = v7;
  *a1 = v8;
  v9 = *a2;
  v10 = sub_1400A6640(v12);
  (*(void (__fastcall **)(_QWORD *, __int64))(v9 + 8))(a2, v10);
  return a1;
}
