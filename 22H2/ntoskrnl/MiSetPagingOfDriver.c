/*
 * XREFs of MiSetPagingOfDriver @ 0x140336B2C
 * Callers:
 *     MmPageEntireDriver @ 0x1406FE4F0 (MmPageEntireDriver.c)
 *     MiEnablePagingOfDriver @ 0x1407A5740 (MiEnablePagingOfDriver.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020EAB0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x14027D77C (MiGetAnyMultiplexedVm.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x1402B6400 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BBBB0 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiTrimSystemImagePages @ 0x1403174C0 (MiTrimSystemImagePages.c)
 *     MiWriteWsle @ 0x14031A590 (MiWriteWsle.c)
 *     MiDriverPageMustStayResident @ 0x140336EFC (MiDriverPageMustStayResident.c)
 *     MiGetWsleContents @ 0x140339D50 (MiGetWsleContents.c)
 *     MiUnlockLoaderEntry @ 0x140358A50 (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x140358C88 (MiLockLoaderEntry.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 */

PVOID __fastcall MiSetPagingOfDriver(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // rdi
  __int64 *v6; // r15
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  _DWORD *v12; // r9
  unsigned __int8 v13; // al
  __int64 v14; // rdx
  __int64 v15; // rbx
  _KPROCESS *Process; // rcx
  char WsleContents; // al
  __int64 v18; // r9
  PVOID result; // rax
  __int16 v20; // cx
  __int64 v21; // rcx
  BOOL v22; // ebx
  unsigned __int64 v23; // r12
  __int64 v24; // r8
  __int64 v25; // r11
  int v26; // r8d
  int v27; // r8d
  int v28; // r8d
  int HasShadow; // eax
  unsigned __int8 v30; // [rsp+20h] [rbp-E0h]
  char *AnyMultiplexedVm; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v32; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v33; // [rsp+38h] [rbp-C8h]
  __int64 v34; // [rsp+40h] [rbp-C0h]
  _QWORD v35[24]; // [rsp+50h] [rbp-B0h] BYREF

  v33 = a3;
  v4 = a1;
  v34 = a1;
  memset(v35, 0, 0xB8uLL);
  v5 = 0LL;
  LODWORD(v35[1]) = 20;
  v6 = 0LL;
  v7 = (__int64)(a2 << 25) >> 16;
  v35[3] = 0LL;
  v8 = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v9 = (__int64)AnyMultiplexedVm;
  MiLockLoaderEntry(v4 + 160, 2LL);
  v13 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v10, v11, v12);
  v30 = v13;
  if ( a2 <= v33 )
  {
    do
    {
      if ( !v8 || (a2 & 0xFFF) == 0 )
      {
        if ( v6 )
        {
          MiFlushTbList((__int64)v35, (_KPROCESS *)v14);
          v5 += MiTrimSystemImagePages(v6, a2 - 8, v28);
          v6 = 0LL;
        }
        if ( v8 )
          MiUnlockPageTableInternal(v9, v8);
        v8 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiLockPageTableInternal(v9, v8, 0LL);
      }
      if ( !(unsigned __int8)MiDriverPageMustStayResident(v4, a2) )
      {
        v15 = MI_READ_PTE_LOCK_FREE(a2);
        v32 = v15;
        if ( (v15 & 1) != 0 )
        {
          if ( MiPteInShadowRange((unsigned __int64)&v32) && (MiFlags & 0xC00000) != 0 )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            if ( Process->AddressPolicy != 1 && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
              Process = KeGetCurrentThread()->ApcState.Process;
          }
          WsleContents = MiGetWsleContents(Process, v7);
          if ( (WsleContents & 0xF) == 9 )
          {
            v20 = *(_WORD *)(v18 + 32);
            if ( v20 == 1 || (v14 = 2LL, v20 == 2) && (*(_BYTE *)(v18 + 34) & 8) != 0 )
            {
              v21 = a2;
              if ( v6 )
                v21 = (__int64)v6;
              v6 = (__int64 *)v21;
              MiWriteWsle(v21, v7, WsleContents & 0xF0 | 0xA);
              v22 = 0;
              v23 = v32 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
              v32 = v23;
              if ( MiPteInShadowRange(a2) )
              {
                HasShadow = MiPteHasShadow();
                v25 = 1LL;
                v22 = HasShadow != 0;
              }
              else
              {
                v25 = 1LL;
              }
              *(_QWORD *)a2 = v23;
              if ( v22 )
                MiWritePteShadow(a2, v23, v24);
              MiInsertTbFlushEntry((__int64)v35, v7, v25, 0);
              v4 = v34;
            }
          }
        }
        else if ( (v15 & 0x400) != 0 && v6 )
        {
          MiFlushTbList((__int64)v35, (_KPROCESS *)v14);
          v5 += MiTrimSystemImagePages(v6, a2 - 8, v26);
          v6 = 0LL;
        }
        v9 = (__int64)AnyMultiplexedVm;
      }
      a2 += 8LL;
      v7 += 4096LL;
    }
    while ( a2 <= v33 );
    if ( v6 )
    {
      MiFlushTbList((__int64)v35, (_KPROCESS *)v14);
      v5 += MiTrimSystemImagePages(v6, v33, v27);
    }
    if ( v8 )
      MiUnlockPageTableInternal(v9, v8);
    v13 = v30;
  }
  MiUnlockWorkingSetShared(v9, v13);
  result = (PVOID)MiUnlockLoaderEntry(v4 + 160, 2LL);
  if ( v5 )
  {
    result = *(PVOID *)(v4 + 48);
    if ( result == PsHalImageBase || result == PsNtosImageBase )
      _InterlockedExchangeAdd((_DWORD *)&xmmword_140C4CD48 + 2, v5);
    else
      _InterlockedExchangeAdd((_DWORD *)&xmmword_140C4CD48 + 3, v5);
  }
  return result;
}
