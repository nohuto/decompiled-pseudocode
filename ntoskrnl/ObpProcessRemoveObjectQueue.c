/*
 * XREFs of ObpProcessRemoveObjectQueue @ 0x1407DEA90
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueueDpc @ 0x140230290 (KeInsertQueueDpc.c)
 *     MmDetachSession @ 0x1402EA460 (MmDetachSession.c)
 *     MmAttachSession @ 0x1402EA500 (MmAttachSession.c)
 *     KeInitializeDpc @ 0x140305660 (KeInitializeDpc.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14034A074 (KiQueryUnbiasedInterruptTime.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x14035A830 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     MmGetNextSession @ 0x14035C2F0 (MmGetNextSession.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x14040CCE0 (ExfUnblockPushLock.c)
 *     ObpRemoveObjectRoutine @ 0x1407C38A0 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1407DEDE0 (ObpHandleRevocationBlockRemoveObject.c)
 *     MmQuitNextSession @ 0x14087FF10 (MmQuitNextSession.c)
 *     ObpDeregisterObject @ 0x140979950 (ObpDeregisterObject.c)
 */

void ObpProcessRemoveObjectQueue()
{
  struct _KPROCESS *NextSession; // rax
  __int64 v1; // rbx
  int v2; // r8d
  __int128 **v3; // r11
  int v4; // r10d
  unsigned int v5; // esi
  __int64 v6; // rdi
  unsigned int v7; // ebp
  int v8; // r9d
  int *v9; // r14
  int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdi
  unsigned __int64 v15; // rax
  unsigned int v16; // ecx
  unsigned __int64 v17; // rax
  signed __int32 v18[10]; // [rsp+0h] [rbp-98h] BYREF
  __int128 *v19; // [rsp+28h] [rbp-70h]
  __int128 *v20; // [rsp+30h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-60h] BYREF

  if ( !qword_140C0E190 )
  {
    v15 = __rdtsc();
    v16 = 41929663 * ((((unsigned __int64)HIDWORD(v15) << 32) | (unsigned int)v15) >> 4);
    qword_140C0E190 = v16;
    if ( !v16 )
      qword_140C0E190 = 1LL;
    v17 = __rdtsc();
    qword_140C0E198 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v17) << 32) | (unsigned int)v17) >> 4)) ^ 0xC38LL;
    qword_140C0E1A0 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
  }
  if ( KiQueryUnbiasedInterruptTime() >= (unsigned __int64)qword_140C0E1A0 )
  {
    v19 = &xmmword_140D1F2E0;
    v20 = &xmmword_140D1F160;
    NextSession = (struct _KPROCESS *)MmGetNextSession(0LL);
    v1 = (__int64)NextSession;
    if ( NextSession )
    {
      if ( (int)MmAttachSession(NextSession, &ApcState) >= 0 )
      {
        if ( !qword_140C0E1A8 )
          qword_140C0E1A8 = (unsigned int)KiTableInformation;
        if ( (_DWORD)xmmword_140D1F170 && (_BYTE)KdDebuggerNotPresent )
        {
          v2 = 0;
          v3 = &v20;
          v4 = 2;
          do
          {
            v5 = 0;
            v6 = *(_QWORD *)*v3;
            v7 = *((_DWORD *)*v3 + 4);
            v8 = v2 + v6 + (unsigned int)*v3;
            if ( v7 )
            {
              v9 = *(int **)*v3;
              do
              {
                v10 = *v9;
                ++v5;
                v11 = *v9++;
                v8 = v5 * ((v10 + *(_DWORD *)((v11 >> 4) + v6)) ^ v8);
              }
              while ( v5 < v7 );
            }
            --v3;
            v2 += 2 * v8;
            --v4;
          }
          while ( v4 );
          if ( v2 != qword_140C0E1A8 && !qword_140C0E160 )
          {
            v18[8] = -2071986176;
            qword_140C0E160 = (unsigned int)__ROL4__(-2071986176, 233);
            xmmword_140C0E168 = 0LL;
            qword_140C0E178 = 266LL;
            qword_140C0E180 = v6;
          }
        }
        MmDetachSession(v1, ($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
      }
      MmQuitNextSession(v1);
    }
    if ( qword_140C0E160 )
    {
      if ( (void (__fastcall __noreturn *)(struct _KDPC *, PVOID, PVOID, PVOID))`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList.DeferredRoutine != KiScanQueues )
        KeInitializeDpc(
          &`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList,
          (PKDEFERRED_ROUTINE)KiScanQueues,
          &`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList);
      qword_140C0E188 = 3903744LL;
      KeInsertQueueDpc(&`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList, 0LL, 0LL);
    }
    qword_140C0E1A0 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
  }
  do
  {
    v12 = _InterlockedExchange64(&ObpRemoveObjectList, 1LL);
    do
    {
      v13 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v12);
      if ( v13 )
        ObpHandleRevocationBlockRemoveObject(v13);
      if ( ObpTraceFlags )
        ObpDeregisterObject(v12);
      v14 = *(_QWORD *)(v12 + 8);
      ObpRemoveObjectRoutine(v12, 1);
      v12 = v14;
    }
    while ( v14 && v14 != 1 );
  }
  while ( ObpRemoveObjectList != 1 || _InterlockedCompareExchange64(&ObpRemoveObjectList, 0LL, 1LL) != 1 );
  _InterlockedOr(v18, 0);
  if ( ObpRemoveObjectWait )
    ExfUnblockPushLock(&ObpRemoveObjectWait, 0LL);
}
