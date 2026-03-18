/*
 * XREFs of ?xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x1C009DA04
 * Callers:
 *     NtUserSetWindowBand @ 0x1C009D860 (NtUserSetWindowBand.c)
 *     ?AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0238A64 (-AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxEndDeferWindowPosEx @ 0x1C004720C (xxxEndDeferWindowPosEx.c)
 *     _lambda_febfd44819ec4f1448c7d434538d8b97_::operator() @ 0x1C009DB40 (_lambda_febfd44819ec4f1448c7d434538d8b97_--operator().c)
 *     _BeginDeferWindowPos @ 0x1C009DBF8 (_BeginDeferWindowPos.c)
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6___ @ 0x1C009EB84 (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6__.c)
 */

__int64 __fastcall xxxSetWindowBand(struct tagWND *a1, __int64 a2, int a3, int a4)
{
  int v5; // eax
  struct tagWND *v7; // rcx
  struct tagSMWP *v8; // rbx
  __int64 ThreadWin32Thread; // rax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v15; // [rsp+20h] [rbp-60h] BYREF
  struct tagSMWP *v16[3]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v17[3]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v18[5]; // [rsp+58h] [rbp-28h] BYREF
  int v19; // [rsp+A0h] [rbp+20h] BYREF
  int v20; // [rsp+A8h] [rbp+28h] BYREF

  v20 = a4;
  v19 = a3;
  v16[0] = 0LL;
  v17[2] = 0LL;
  v5 = 19;
  if ( (a4 & 4) != 0 )
    v5 = 394263;
  v15 = v5;
  v18[0] = v16;
  v18[1] = &v15;
  v18[2] = &v19;
  v18[3] = &v20;
  v16[0] = (struct tagSMWP *)BeginDeferWindowPos(0LL);
  if ( !v16[0] )
    return 0LL;
  lambda_febfd44819ec4f1448c7d434538d8b97_::operator()(v18, a1, a2);
  if ( !v16[0] )
    return 0LL;
  v7 = *(struct tagWND **)(*((_QWORD *)a1 + 2) + 1400LL);
  v16[1] = (struct tagSMWP *)v18;
  if ( !v7 )
    v7 = a1;
  v16[2] = (struct tagSMWP *)&v19;
  CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6___(v7);
  v8 = v16[0];
  if ( !v16[0] )
    return 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v17[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v17;
  v17[1] = v8;
  HMLockObject(v8);
  v10 = xxxEndDeferWindowPosEx(v16[0], 1);
  ThreadUnlock1(v12, v11, v13);
  return v10;
}
