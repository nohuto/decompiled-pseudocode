/*
 * XREFs of sub_18002DD60 @ 0x18002DD60
 * Callers:
 *     sub_18002CFD0 @ 0x18002CFD0 (sub_18002CFD0.c)
 *     sub_1800C6710 @ 0x1800C6710 (sub_1800C6710.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18002E440 @ 0x18002E440 (sub_18002E440.c)
 *     sub_18002EB3C @ 0x18002EB3C (sub_18002EB3C.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B5EF4 @ 0x1800B5EF4 (sub_1800B5EF4.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800CB5A0 @ 0x1800CB5A0 (sub_1800CB5A0.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18002DD60(__int64 a1, struct _RTL_CRITICAL_SECTION *a2)
{
  unsigned __int64 v4; // r15
  __int64 v5; // r9
  BOOL v6; // esi
  int v7; // eax
  __int64 OwningThread_low; // rdx
  int v9; // edx
  unsigned int v10; // esi
  unsigned int LockSemaphore_high; // r15d
  int v12; // esi
  __int64 v13; // rcx
  HANDLE LockSemaphore; // rcx
  int v16; // eax
  LPCRITICAL_SECTION lpCriticalSection[14]; // [rsp+38h] [rbp-70h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+0h]
  __int64 v19; // [rsp+B0h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+B8h] [rbp+10h]
  __int64 v21; // [rsp+C8h] [rbp+20h] BYREF

  v20 = a2;
  v19 = a1;
  (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)qword_18019E618 + 192LL))(
    qword_18019E618,
    lpCriticalSection);
  lpCriticalSection[1] = (LPCRITICAL_SECTION)(a1 + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
  lpCriticalSection[2] = (LPCRITICAL_SECTION)(a1 + 48);
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800CB5A0(*((_QWORD *)off_18019C348 + 2), 45LL, &unk_18015DEF0, a1, a2);
  }
  v4 = *(_QWORD *)(a1 + 104);
  if ( v4 >= *(_QWORD *)(a1 + 112) && !(unsigned __int8)sub_18002EB3C(a1 + 96, v4 + 1) )
    sub_1800B8610(2147942414LL);
  *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8 * v4) = a2;
  ++*(_QWORD *)(a1 + 104);
  ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))a2->DebugInfo[1].CriticalSection)(a2);
  v21 = 0LL;
  (*(void (__fastcall **)(LONG *, __int64 *))(*(_QWORD *)&a2->LockCount + 24LL))(&a2->LockCount, &v21);
  if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v21 + 96LL))(v21) && LODWORD(a2[8].OwningThread) == 3 )
    *(_DWORD *)(a1 + 480) = 1;
  if ( qword_18019E610
    && !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v21 + 96LL))(v21)
    && *(_DWORD *)(a1 + 480) )
  {
    LODWORD(a2[8].OwningThread) = 3;
  }
  if ( !(*(unsigned int (__fastcall **)(LONG *))(*(_QWORD *)&a2->LockCount + 56LL))(&a2->LockCount)
    && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v21 + 352LL))(v21) )
  {
    LODWORD(a2[8].OwningThread) = 19;
  }
  v5 = (unsigned int)(*(_DWORD *)(a1 + 88) + 1);
  *(_DWORD *)(a1 + 88) = v5;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 46LL, &unk_18015DEF0, v5);
  }
  v6 = (*(unsigned __int8 (__fastcall **)(LONG *))(*(_QWORD *)&a2->LockCount + 64LL))(&a2->LockCount) != 0;
  v7 = (*(__int64 (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)a2[2].DebugInfo + 120LL))(a2[2].DebugInfo);
  OwningThread_low = LODWORD(a2[8].OwningThread);
  if ( v6 )
    v9 = dword_180160610[OwningThread_low];
  else
    v9 = dword_1801605B0[OwningThread_low];
  if ( v7 )
    v7 = 16;
  v10 = (LOBYTE(a2[5].LockSemaphore) == 0) + 2 * (v9 + v7);
  LockSemaphore_high = HIDWORD(a2[5].LockSemaphore);
  if ( v10 == LockSemaphore_high )
    goto LABEL_21;
  HIDWORD(a2[5].LockSemaphore) = v10;
  LockSemaphore = a2[1].LockSemaphore;
  v19 = 0LL;
  (*(void (__fastcall **)(HANDLE, __int64 *))(*(_QWORD *)LockSemaphore + 80LL))(LockSemaphore, &v19);
  v16 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v19 + 200LL))(
          v19,
          1LL,
          v10,
          LockSemaphore_high);
  v12 = v16;
  if ( v16 >= 0 )
  {
    sub_18000F708(&v19);
LABEL_21:
    v12 = 0;
    goto LABEL_22;
  }
  sub_18004BD84(retaddr, 746LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", (unsigned int)v16);
  sub_18000F708(&v19);
LABEL_22:
  a2[2].LockCount = *(_DWORD *)(a1 + 280);
  v13 = *(_QWORD *)&a2[5].LockCount;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 32LL))(v13);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( a1 != -48 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
  if ( lpCriticalSection[0] )
    LeaveCriticalSection(lpCriticalSection[0]);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  lpCriticalSection[4] = (LPCRITICAL_SECTION)off_180154BD0;
  lpCriticalSection[5] = (LPCRITICAL_SECTION)a1;
  lpCriticalSection[6] = a2;
  sub_18002E440((LPCRITICAL_SECTION)(a1 + 496));
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  if ( !SetEvent(a2[8].DebugInfo) )
  {
    sub_1800B5EF4(retaddr, 2332LL, "onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h");
    __debugbreak();
  }
  if ( v12 < 0 )
    sub_18005E8F8("CAudioSession::AddStream", 2875LL, (unsigned int)v12);
  return (unsigned int)v12;
}
