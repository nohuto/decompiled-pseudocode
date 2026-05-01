/*
 * XREFs of ?HampSlsBlockerEntryCreate@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x180083474
 * Callers:
 *     ?HampSlsUpdateHostBlockType@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_PDC_BLOCK_TYPE@@@Z @ 0x180083B88 (-HampSlsUpdateHostBlockType@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E250 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180025F10 (-RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     memset_0 @ 0x180047B3A (memset_0.c)
 *     ?HampSlsBlockerEntryCleanup@@YAXPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x1800833AC (-HampSlsBlockerEntryCleanup@@YAXPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z.c)
 *     ?HampSlsCreateGuid@@YAJPEAU_GUID@@@Z @ 0x180083994 (-HampSlsCreateGuid@@YAJPEAU_GUID@@@Z.c)
 *     ?HampSlsHostBlockerNameFromPsmKey@@YAXPEAU_RM_PSM_KEY@@PEAW4_HAM_PDC_BLOCK_TYPE@@PEAU_HAM_SLEEP_STUDY_BLOCKER_NAME@@@Z @ 0x180083AF8 (-HampSlsHostBlockerNameFromPsmKey@@YAXPEAU_RM_PSM_KEY@@PEAW4_HAM_PDC_BLOCK_TYPE@@PEAU_HAM_SLEEP_.c)
 */

__int64 __fastcall HampSlsBlockerEntryCreate(
        struct _HAM_SLEEP_STUDY_CONTEXT *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY **a3)
{
  char *Heap; // rax
  char *v7; // rbx
  int v8; // edi
  struct _RM_PSM_KEY *v9; // rcx
  __int64 v10; // rcx
  __int64 v12; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  struct _GUID v14; // [rsp+50h] [rbp-B0h] BYREF
  GUID v15; // [rsp+60h] [rbp-A0h] BYREF
  struct _GUID v16; // [rsp+70h] [rbp-90h] BYREF
  WCHAR SourceString[264]; // [rsp+80h] [rbp-80h] BYREF

  v12 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x68uLL);
  v7 = Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, 0x68uLL);
    RmpAcquireGlobalLock();
    *((_QWORD *)v7 + 3) = RmHamHostReference(a2);
    RmpReleaseGlobalLock();
    v9 = (struct _RM_PSM_KEY *)(*((_QWORD *)v7 + 3) + 24LL);
    v7[32] = 5;
    HampSlsHostBlockerNameFromPsmKey(v9, 0LL, (struct _HAM_SLEEP_STUDY_BLOCKER_NAME *)SourceString);
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( (unsigned int)HampSlsCreateGuid(&v16) )
    {
      v8 = -1073741823;
    }
    else
    {
      v10 = *((_QWORD *)a1 + 1);
      v14 = v16;
      v15 = GUID_SLEEPSTUDY_BLOCKER_PLM_PHASE;
      v8 = SleepstudyHelperCreateBlockerFromGuid(v10, &v15, &v14, &DestinationString, 3, &v12);
      if ( v8 >= 0 )
      {
        v8 = SleepstudyHelperBuildBlocker(v12, v7 + 56);
        if ( v8 >= 0 )
        {
          *(struct _GUID *)(v7 + 40) = v14;
          *a3 = (struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *)v7;
          v7 = 0LL;
          v12 = 0LL;
          v8 = 0;
        }
      }
    }
  }
  else
  {
    v8 = -1073741801;
  }
  if ( v12 )
    SleepstudyHelperDestroyBlockerBuilder();
  if ( v7 )
  {
    HampSlsBlockerEntryCleanup((struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *)v7);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
  }
  return (unsigned int)v8;
}
