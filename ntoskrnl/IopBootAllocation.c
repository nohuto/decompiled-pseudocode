/*
 * XREFs of IopBootAllocation @ 0x140804CB0
 * Callers:
 *     IopAllocateBootResourcesInternal @ 0x1408046F8 (IopAllocateBootResourcesInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     IopAddRemoveReqDescs @ 0x1408061D8 (IopAddRemoveReqDescs.c)
 */

__int64 __fastcall IopBootAllocation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r14d
  _QWORD *v5; // rdi
  _QWORD *v6; // rsi
  _QWORD *v7; // rbx
  int v8; // eax
  _QWORD *v9; // rcx
  _QWORD *v10; // rcx
  _QWORD v12[2]; // [rsp+20h] [rbp-30h] BYREF
  _OWORD v13[2]; // [rsp+30h] [rbp-20h] BYREF

  v12[1] = v12;
  v13[0] = 0LL;
  v4 = 0;
  v12[0] = v12;
  LOBYTE(a4) = 1;
  *(_QWORD *)(a1 + 16) = a1 + 40;
  v13[1] = 0LL;
  IopAddRemoveReqDescs(*(_QWORD *)(a1 + 40) + 24LL, *(unsigned int *)(*(_QWORD *)(a1 + 40) + 20LL), v12, a4);
  v5 = (_QWORD *)v12[0];
  while ( v5 != v12 )
  {
    v6 = v5;
    v5 = (_QWORD *)*v5;
    if ( *((_BYTE *)v6 + 17) )
    {
      v7 = v6 - 6;
      *(_QWORD *)&v13[0] = v6 - 6;
      v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, _OWORD *))(*(v6 - 8) + 32LL))(
             *(_QWORD *)(*(v6 - 8) + 8LL),
             9LL,
             v13);
      v9 = v6 - 2;
      v6[1] = v6;
      v9[1] = v9;
      *v9 = v9;
      v10 = v6 - 4;
      if ( v8 < 0 )
        v4 = v8;
      v10[1] = v10;
      *((_WORD *)v6 + 8) = 0;
      *v10 = v10;
      *v6 = v6;
      v7[1] = v7;
      *v7 = v7;
    }
  }
  return v4;
}
