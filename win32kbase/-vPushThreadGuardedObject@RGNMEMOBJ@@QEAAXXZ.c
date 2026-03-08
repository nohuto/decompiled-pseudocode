/*
 * XREFs of ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0044250
 * Callers:
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C0019558 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     GreExtCreateRegion @ 0x1C0019830 (GreExtCreateRegion.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C0042720 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x1C00427C4 (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C00434E0 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C00436C0 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0056850 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0056EF8 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C00AAC50 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C0183370 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C0184084 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0189A30 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
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
