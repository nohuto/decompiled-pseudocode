/*
 * XREFs of NtUserBuildPropList @ 0x1C0102310
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritByVelocity@@QEAA@W4CritOptType@@W4HandleToObjILCheck@@@Z @ 0x1C00399AC (--0EnterLeaveCritByVelocity@@QEAA@W4CritOptType@@W4HandleToObjILCheck@@@Z.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _BuildPropList @ 0x1C01023EC (_BuildPropList.c)
 */

__int64 __fastcall NtUserBuildPropList(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rcx
  __int64 v9; // rbx
  struct tagTHREADINFO *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // ebx
  __int64 v16; // [rsp+20h] [rbp-28h] BYREF
  __int128 v17; // [rsp+28h] [rbp-20h] BYREF
  __int64 v18; // [rsp+38h] [rbp-10h]

  v17 = 0LL;
  v18 = 0LL;
  EnterLeaveCritByVelocity::EnterLeaveCritByVelocity((__int64)&v16, 3u, 0);
  v9 = ValidateHwnd(a1);
  if ( v9 )
  {
    v10 = PtiCurrentShared(v8);
    *(_QWORD *)&v17 = *((_QWORD *)v10 + 52);
    *((_QWORD *)v10 + 52) = &v17;
    *((_QWORD *)&v17 + 1) = v9;
    HMLockObject(v9);
    if ( a2 )
      v14 = BuildPropList(v9, a3, a2, a4);
    else
      v14 = -1073741816;
    ThreadUnlock1(v12, v11, v13);
  }
  else
  {
    v14 = -1073741816;
  }
  UserSessionSwitchLeaveCrit(v8);
  return v14;
}
