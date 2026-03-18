/*
 * XREFs of ?Free@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0092F00
 * Callers:
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C0090F9C (--$FreeIsolatedType@V-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 * Callees:
 *     ?Free@?$CSectionBitmapAllocator@$0BEAAA@$0BEA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C0093034 (-Free@-$CSectionBitmapAllocator@$0BEAAA@$0BEA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ?PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z @ 0x1C0179900 (-PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<81920,320>::Free(__int64 a1, struct _SLIST_ENTRY *a2)
{
  __int64 v4; // rbx
  _QWORD *v5; // r14
  _QWORD *v6; // rbp
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
LABEL_14:
        ExReleasePushLockSharedEx(v4, 0LL);
        KeLeaveCriticalRegion();
        NSInstrumentation::PlatformAbort(3LL, a2, 0LL);
        return;
      }
      while ( 1 )
      {
        v6 = (_QWORD *)v5[4];
        v7 = v6[1] ^ v6[2];
        if ( (unsigned __int64)a2 >= v7 && (unsigned __int64)a2 < v7 + 81920 )
        {
          if ( ((unsigned __int16)a2 & 0xFFF) == 320 * (((unsigned __int16)a2 & 0xFFFu) / 0x140uLL) )
          {
            if ( RtlTestBit(
                   (PRTL_BITMAP)(v6[2] ^ v6[3]),
                   ((unsigned __int16)a2 & 0xFFFu) / 0x140
                 + 12 * (((unsigned int)a2 - (*((_DWORD *)v6 + 2) ^ (unsigned int)v6[2])) >> 12)) )
            {
              NSInstrumentation::CSectionBitmapAllocator<81920,320>::Free(v6, a2);
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
          goto LABEL_14;
      }
    }
    memset(a2, 0, 0x140uLL);
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
