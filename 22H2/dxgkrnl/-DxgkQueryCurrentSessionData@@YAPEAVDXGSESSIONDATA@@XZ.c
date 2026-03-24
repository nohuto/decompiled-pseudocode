/*
 * XREFs of ?DxgkQueryCurrentSessionData@@YAPEAVDXGSESSIONDATA@@XZ @ 0x1C013C4DC
 * Callers:
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C013C28C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003700 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00038D4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003960 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

struct DXGSESSIONDATA *__fastcall DxgkQueryCurrentSessionData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 CurrentProcessSessionId; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  DXGFASTMUTEX *v18; // [rsp+20h] [rbp-18h] BYREF
  char v19; // [rsp+28h] [rbp-10h]

  if ( (PEPROCESS)PsGetCurrentProcess(a1, a2, a3, a4) == PsInitialSystemProcess )
    return 0LL;
  v5 = 0LL;
  v8 = *((_QWORD *)DXGGLOBAL::GetGlobal((__int64)PsInitialSystemProcess, v4) + 102);
  if ( v8 )
  {
    v19 = 0;
    CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(v7, v6);
    v18 = (DXGFASTMUTEX *)(v8 + 80);
    if ( v8 == -80 )
    {
      v15 = WdLogNewEntry5_WdAssertion(0LL, v9);
      *(_QWORD *)(v15 + 24) = 762LL;
      WdLogEvent5_WdAssertion(v15);
    }
    CurrentThread = KeGetCurrentThread();
    if ( *((struct _KTHREAD **)v18 + 2) == CurrentThread )
    {
      v16 = WdLogNewEntry5_WdAssertion(CurrentThread, v9);
      *(_QWORD *)(v16 + 24) = 769LL;
      WdLogEvent5_WdAssertion(v16);
    }
    if ( v19 )
    {
      v17 = WdLogNewEntry5_WdCriticalError(CurrentThread, v9);
      *(_QWORD *)(v17 + 40) = &v18;
      *(_QWORD *)(v17 + 24) = 275LL;
      *(_QWORD *)(v17 + 32) = 4LL;
      *(_OWORD *)(v17 + 48) = 0LL;
      WdLogEvent5_WdCriticalError(v17);
    }
    DXGFASTMUTEX::Acquire(v18);
    v19 = 1;
    if ( (unsigned int)CurrentProcessSessionId >= *(_DWORD *)(v8 + 72) )
    {
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v18);
    }
    else
    {
      v13 = *(_QWORD *)(*(_QWORD *)(v8 + 40) + 8 * CurrentProcessSessionId);
      v19 = 0;
      DXGFASTMUTEX::Release((struct _KTHREAD **)v18, v12);
      return (struct DXGSESSIONDATA *)v13;
    }
  }
  return (struct DXGSESSIONDATA *)v5;
}
