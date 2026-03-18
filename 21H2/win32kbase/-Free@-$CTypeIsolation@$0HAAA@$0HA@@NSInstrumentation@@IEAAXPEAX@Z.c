/*
 * XREFs of ?Free@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0024250
 * Callers:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0023C00 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C0023D60 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     xxxDestroyThreadInfo @ 0x1C00C64AC (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ?PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z @ 0x1C0179900 (-PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<28672,112>::Free(__int64 a1, struct _SLIST_ENTRY *a2)
{
  __int64 v4; // rdi
  _QWORD *v5; // rbx
  __int64 *v6; // r15
  unsigned __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rdx
  unsigned __int64 v10; // rbp
  __int64 v11; // rbx
  ULONG v12; // ebp
  __int64 v13; // rcx
  __int64 v14; // rbx

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
        v7 = v6[1];
        v8 = v6[2];
        if ( (unsigned __int64)a2 >= (v8 ^ v7) && (unsigned __int64)a2 < (v8 ^ v7) + 28672 )
        {
          v9 = (((unsigned __int16)a2 & 0xFFF) * (unsigned __int128)0x2492492492492493uLL) >> 64;
          v10 = (v9 + (((unsigned __int64)((unsigned __int16)a2 & 0xFFF) - v9) >> 1)) >> 6;
          if ( ((unsigned __int16)a2 & 0xFFF) == 112 * v10 )
          {
            if ( RtlTestBit(
                   (PRTL_BITMAP)(v8 ^ v6[3]),
                   v10 + 36 * (((unsigned int)a2 - ((unsigned int)v7 ^ (unsigned int)v8)) >> 12)) )
            {
              v11 = *v6;
              KeEnterCriticalRegion();
              ExAcquirePushLockExclusiveEx(v11, 0LL);
              v12 = v10 + 36 * ((unsigned int)((_DWORD)a2 - (*((_DWORD *)v6 + 4) ^ *((_DWORD *)v6 + 2))) >> 12);
              RtlClearBit((PRTL_BITMAP)(v6[2] ^ v6[3]), v12);
              *a2 = 0LL;
              a2[1] = 0LL;
              a2[2] = 0LL;
              a2[3] = 0LL;
              a2[4] = 0LL;
              a2[5] = 0LL;
              a2[6] = 0LL;
              *((_DWORD *)v6 + 8) = v12;
              ExReleasePushLockExclusiveEx(v11, 0LL);
              KeLeaveCriticalRegion();
              ExReleasePushLockSharedEx(v4, 0LL);
              KeLeaveCriticalRegion();
              return;
            }
            v13 = 1LL;
          }
          else
          {
            v13 = 2LL;
          }
          NSInstrumentation::PlatformAbort(v13, a2, 0LL);
        }
        v5 = (_QWORD *)*v5;
        if ( v5 == (_QWORD *)a1 )
          goto LABEL_15;
      }
    }
    memset(a2, 0, 0x70uLL);
    v14 = *(_QWORD *)(a1 + 24);
    ++*(_DWORD *)(v14 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v14) < *(_WORD *)(v14 + 16) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v14, a2);
    }
    else
    {
      ++*(_DWORD *)(v14 + 32);
      (*(void (__fastcall **)(struct _SLIST_ENTRY *))(v14 + 56))(a2);
    }
  }
}
