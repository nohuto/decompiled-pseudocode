/*
 * XREFs of ?xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x1C00333F4
 * Callers:
 *     ?AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C00050C0 (-AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 *     NtUserSetWindowBand @ 0x1C0031DC0 (NtUserSetWindowBand.c)
 * Callees:
 *     _BeginDeferWindowPos @ 0x1C0031F70 (_BeginDeferWindowPos.c)
 *     _lambda_febfd44819ec4f1448c7d434538d8b97_::operator() @ 0x1C003205C (_lambda_febfd44819ec4f1448c7d434538d8b97_--operator().c)
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6___ @ 0x1C0033530 (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6__.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006ED1C (xxxEndDeferWindowPosEx.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxSetWindowBand(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // eax
  __int64 v7; // rcx
  struct tagSMWP *v8; // rbx
  __int64 ThreadWin32Thread; // rax
  unsigned int v10; // ebx
  __int64 v11; // rcx
  int v13; // [rsp+20h] [rbp-60h] BYREF
  struct tagSMWP *v14; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v15[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v16[3]; // [rsp+40h] [rbp-40h] BYREF
  __int64 *v17[5]; // [rsp+58h] [rbp-28h] BYREF
  int v18; // [rsp+A0h] [rbp+20h] BYREF
  int v19; // [rsp+A8h] [rbp+28h] BYREF

  v19 = a4;
  v18 = a3;
  v14 = 0LL;
  v16[2] = 0LL;
  v5 = 19;
  if ( (a4 & 4) != 0 )
    v5 = 394263;
  v13 = v5;
  v17[0] = (__int64 *)&v14;
  v17[1] = (__int64 *)&v13;
  v17[2] = (__int64 *)&v18;
  v17[3] = (__int64 *)&v19;
  v14 = (struct tagSMWP *)BeginDeferWindowPos(0, a2, a3);
  if ( !v14 )
    return 0LL;
  lambda_febfd44819ec4f1448c7d434538d8b97_::operator()(v17, a1, a2);
  if ( !v14 )
    return 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1400LL);
  v15[0] = v17;
  if ( !v7 )
    v7 = a1;
  v15[1] = &v18;
  CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6___(v7, v15);
  v8 = v14;
  if ( !v14 )
    return 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v16[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v16;
  v16[1] = v8;
  HMLockObject(v8);
  v10 = xxxEndDeferWindowPosEx(v14);
  ThreadUnlock1(v11);
  return v10;
}
