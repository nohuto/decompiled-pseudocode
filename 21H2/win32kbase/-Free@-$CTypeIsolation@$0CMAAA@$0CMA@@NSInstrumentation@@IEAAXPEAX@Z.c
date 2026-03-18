/*
 * XREFs of ?Free@?$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0092034
 * Callers:
 *     ??$_lambda_invoker_cdecl_@PEAXPEAU_LOOKASIDE_LIST_EX@@@_lambda_06b16099bfc1f7b9c33b9410b68cf5d0_@@CAXPEAXPEAU_LOOKASIDE_LIST_EX@@@Z @ 0x1C00AEAB0 (--$_lambda_invoker_cdecl_@PEAXPEAU_LOOKASIDE_LIST_EX@@@_lambda_06b16099bfc1f7b9c33b9410b68cf5d0_.c)
 * Callees:
 *     ?Free@?$CSectionBitmapAllocator@$0CMAAA@$0CMA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C0091F5C (-Free@-$CSectionBitmapAllocator@$0CMAAA@$0CMA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ?PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z @ 0x1C0179900 (-PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<180224,704>::Free(__int64 a1, struct _SLIST_ENTRY *a2)
{
  __int64 v4; // rbx
  _QWORD *v5; // r14
  __int64 *v6; // rbp
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx

  if ( a2 )
  {
    if ( !*(_BYTE *)(a1 + 36) )
    {
      v4 = *(_QWORD *)(a1 + 16);
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v4, 0LL);
      v5 = *(_QWORD **)a1;
      if ( *(_QWORD *)a1 == a1 )
      {
LABEL_15:
        ExReleasePushLockSharedEx(v4, 0LL);
        KeLeaveCriticalRegion();
        NSInstrumentation::PlatformAbort(3LL, a2, 0LL);
        return;
      }
      while ( 1 )
      {
        v6 = (__int64 *)v5[4];
        v7 = v6[1] ^ v6[2];
        if ( (unsigned __int64)a2 >= v7 && (unsigned __int64)a2 < v7 + 180224 )
        {
          if ( ((unsigned __int16)a2 & 0xFFF) == 704 * (((unsigned __int16)a2 & 0xFFFu) / 0x2C0uLL) )
          {
            if ( RtlTestBit(
                   (PRTL_BITMAP)(v6[2] ^ v6[3]),
                   5 * (((unsigned int)a2 - (*((_DWORD *)v6 + 2) ^ (unsigned int)v6[2])) >> 12)
                 + ((unsigned __int16)a2 & 0xFFFu) / 0x2C0) )
            {
              NSInstrumentation::CSectionBitmapAllocator<180224,704>::Free(v6, a2);
              ExReleasePushLockSharedEx(v4, 0LL);
              KeLeaveCriticalRegion();
              return;
            }
            v8 = 1LL;
          }
          else
          {
            v8 = 2LL;
          }
          NSInstrumentation::PlatformAbort(v8, a2, 0LL);
        }
        v5 = (_QWORD *)*v5;
        if ( v5 == (_QWORD *)a1 )
          goto LABEL_15;
      }
    }
    memset(a2, 0, 0x2C0uLL);
    v9 = *(_QWORD *)(a1 + 24);
    ++*(_DWORD *)(v9 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v9) < *(_WORD *)(v9 + 16) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v9, a2);
    }
    else
    {
      ++*(_DWORD *)(v9 + 32);
      (*(void (__fastcall **)(struct _SLIST_ENTRY *))(v9 + 56))(a2);
    }
  }
}
