/*
 * XREFs of ?xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x1C0042728
 * Callers:
 *     NtUserSetWindowBand @ 0x1C0042840 (NtUserSetWindowBand.c)
 *     ?AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C021FFA0 (-AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 * Callees:
 *     _BeginDeferWindowPos @ 0x1C0028318 (_BeginDeferWindowPos.c)
 *     _lambda_febfd44819ec4f1448c7d434538d8b97_::operator() @ 0x1C0042604 (_lambda_febfd44819ec4f1448c7d434538d8b97_--operator().c)
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6___ @ 0x1C0042668 (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6__.c)
 *     xxxEndDeferWindowPosEx @ 0x1C0122FB0 (xxxEndDeferWindowPosEx.c)
 */

__int64 __fastcall xxxSetWindowBand(__int64 a1, _QWORD *a2, __int64 a3, int a4)
{
  int v5; // eax
  struct tagWND *v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v13; // [rsp+20h] [rbp-60h] BYREF
  struct tagSMWP *v14; // [rsp+28h] [rbp-58h] BYREF
  __int64 v15[2]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v16; // [rsp+40h] [rbp-40h] BYREF
  __int64 v17; // [rsp+50h] [rbp-30h]
  _QWORD v18[5]; // [rsp+58h] [rbp-28h] BYREF
  int v19; // [rsp+A0h] [rbp+20h] BYREF
  int v20; // [rsp+A8h] [rbp+28h] BYREF

  v20 = a4;
  v19 = a3;
  v14 = 0LL;
  v17 = 0LL;
  v5 = 19;
  if ( (a4 & 4) != 0 )
    v5 = 394263;
  v13 = v5;
  v18[0] = &v14;
  v18[1] = &v13;
  v18[2] = &v19;
  v18[3] = &v20;
  v16 = 0LL;
  v14 = (struct tagSMWP *)BeginDeferWindowPos(0, (__int64)a2, a3);
  if ( !v14 )
    return 0LL;
  lambda_febfd44819ec4f1448c7d434538d8b97_::operator()((__int64)v18, a1, a2);
  if ( !v14 )
    return 0LL;
  v7 = *(struct tagWND **)(*(_QWORD *)(a1 + 16) + 1440LL);
  v15[0] = (__int64)v18;
  if ( !v7 )
    v7 = (struct tagWND *)a1;
  v15[1] = (__int64)&v19;
  CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6___(v7, v15);
  if ( !v14 )
    return 0LL;
  ThreadLockAlways(v14, &v16);
  v8 = xxxEndDeferWindowPosEx(v14);
  ThreadUnlock1(v10, v9, v11);
  return v8;
}
