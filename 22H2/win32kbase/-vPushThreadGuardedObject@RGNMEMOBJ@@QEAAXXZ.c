/*
 * XREFs of ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C004C7D0
 * Callers:
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C003C598 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C003CBC0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     GreExtCreateRegion @ 0x1C007C890 (GreExtCreateRegion.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C007CEAC (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C007D290 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C007D860 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x1C007D90C (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C007DB80 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C007DD60 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C0156700 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C0157418 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C015CD90 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RGNMEMOBJ::vPushThreadGuardedObject(RGNMEMOBJ *this)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *ThreadWin32Thread; // rax
  _QWORD *v8; // rdi
  _QWORD *v9; // rbx
  __int64 v10; // rsi
  __int64 *v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rcx
  int v14; // ebx
  __int64 CurrentThreadProcess; // rax

  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v14 = *(_DWORD *)SGDGetUserSessionState(v4, v3, v5, v6),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        v14 == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      if ( *ThreadWin32Thread )
      {
        v8 = *(_QWORD **)this;
        if ( v8 )
        {
          v9 = v8 + 11;
          if ( v8 != (_QWORD *)-88LL )
          {
            KeEnterCriticalRegion();
            v10 = 0LL;
            v11 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
            if ( v11 )
              v10 = *v11;
            v8[13] = v8;
            v8[14] = CleanUpRegion;
            if ( v10 )
            {
              v12 = (_QWORD *)(v10 + 88);
              v13 = *(_QWORD *)(v10 + 88);
              if ( *(_QWORD *)(v13 + 8) != v10 + 88 )
                __fastfail(3u);
              *v9 = v13;
              v8[12] = v12;
              *(_QWORD *)(v13 + 8) = v9;
              *v12 = v9;
            }
            else
            {
              v8[12] = v8 + 11;
              *v9 = v9;
            }
            KeLeaveCriticalRegion();
          }
        }
      }
    }
  }
}
