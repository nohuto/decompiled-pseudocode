_QWORD *__fastcall sub_1400222E0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 Pool2; // rax
  __int64 *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = a2;
  Pool2 = ExAllocatePool2(64LL, 32LL, 808464436LL);
  v7 = 0LL;
  if ( Pool2 && (v8 = sub_1400A65B8(Pool2, &v14, a3)) != 0 && (v9 = *(_QWORD *)(v8 + 16)) != 0 )
  {
    a1[1] = 0LL;
  }
  else
  {
    v9 = 0LL;
    v8 = 0LL;
  }
  a1[1] = v8;
  *a1 = v9;
  if ( a2 )
    v7 = (__int64 *)(a2 + 8);
  v10 = *v7;
  v11 = sub_1400A6640(v13);
  (*(void (__fastcall **)(__int64 *, __int64))(v10 + 8))(v7, v11);
  return a1;
}
