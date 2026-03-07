__int64 __fastcall xxxSetWindowBand(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // eax
  struct tagWND *v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v13; // [rsp+20h] [rbp-60h] BYREF
  struct tagSMWP *v14[3]; // [rsp+28h] [rbp-58h] BYREF
  __int128 v15; // [rsp+40h] [rbp-40h] BYREF
  __int64 v16; // [rsp+50h] [rbp-30h]
  __int64 *v17[5]; // [rsp+58h] [rbp-28h] BYREF
  int v18; // [rsp+A0h] [rbp+20h] BYREF
  int v19; // [rsp+A8h] [rbp+28h] BYREF

  v19 = a4;
  v18 = a3;
  v14[0] = 0LL;
  v16 = 0LL;
  v5 = 19;
  if ( (a4 & 4) != 0 )
    v5 = 394263;
  v13 = v5;
  v17[0] = (__int64 *)v14;
  v17[1] = (__int64 *)&v13;
  v17[2] = (__int64 *)&v18;
  v17[3] = (__int64 *)&v19;
  v15 = 0LL;
  v14[0] = (struct tagSMWP *)BeginDeferWindowPos(0, a2, a3);
  if ( !v14[0] )
    return 0LL;
  lambda_febfd44819ec4f1448c7d434538d8b97_::operator()(v17, a1, a2);
  if ( !v14[0] )
    return 0LL;
  v7 = *(struct tagWND **)(*(_QWORD *)(a1 + 16) + 1440LL);
  v14[1] = (struct tagSMWP *)v17;
  if ( !v7 )
    v7 = (struct tagWND *)a1;
  v14[2] = (struct tagSMWP *)&v18;
  CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6___(v7);
  if ( !v14[0] )
    return 0LL;
  ThreadLockAlways(v14[0], &v15);
  v8 = xxxEndDeferWindowPosEx(v14[0], 1);
  ThreadUnlock1(v10, v9, v11);
  return v8;
}
