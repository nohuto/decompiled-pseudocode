/*
 * XREFs of SmProcessStatsRequest @ 0x14092A198
 * Callers:
 *     SmQueryStoreInformation @ 0x140621A68 (SmQueryStoreInformation.c)
 * Callees:
 *     MmSizeOfMdl @ 0x140219160 (MmSizeOfMdl.c)
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     SSHSupportAllocateNonPaged @ 0x1402483BC (SSHSupportAllocateNonPaged.c)
 *     ?SmStoreRequest@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x1402A07C4 (-SmStoreRequest@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_I.c)
 *     MmProbeAndLockPages @ 0x1402AE010 (MmProbeAndLockPages.c)
 *     MmUnlockPages @ 0x1402E92C0 (MmUnlockPages.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessStatsRequest(__int64 a1, _OWORD *a2, int a3, _DWORD *a4, KPROCESSOR_MODE PreviousMode)
{
  struct _MDL *NonPaged; // r14
  __int64 v8; // rsi
  int v9; // r12d
  int v10; // ebx
  unsigned __int8 v11; // r15^1
  unsigned int v12; // eax
  _OWORD *v13; // rax
  int v14; // eax
  PVOID Base[2]; // [rsp+40h] [rbp-68h]
  __int128 v17; // [rsp+50h] [rbp-58h] BYREF
  struct _KEVENT Object[3]; // [rsp+60h] [rbp-48h] BYREF

  v17 = 0LL;
  NonPaged = 0LL;
  v8 = 0LL;
  v9 = 0;
  KeInitializeEvent(Object, NotificationEvent, 0);
  if ( a3 == 16 )
  {
    if ( PreviousMode && ((unsigned __int8)a2 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    *(_OWORD *)Base = *a2;
    v11 = BYTE1(*a2);
    if ( LOBYTE(Base[0]) == 2 && v11 < 4u )
    {
      if ( v11 <= 1u || SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
      {
        if ( (!HIDWORD(Base[0])
           || (v12 = MmSizeOfMdl(Base[1], HIDWORD(Base[0])),
               (NonPaged = (struct _MDL *)SSHSupportAllocateNonPaged(v12, 0x444D6D73u)) != 0LL))
          && (v13 = SSHSupportAllocateNonPaged(0x28uLL, 0x69576D73u), (v8 = (__int64)v13) != 0) )
        {
          *v13 = 0LL;
          v13[1] = 0LL;
          *((_QWORD *)v13 + 4) = 0LL;
          v14 = 0;
          if ( HIDWORD(Base[0]) )
          {
            NonPaged->Next = 0LL;
            NonPaged->Size = 8 * (((((__int64)Base[1] & 0xFFF) + (unsigned __int64)HIDWORD(Base[0]) + 4095) >> 12) + 6);
            NonPaged->MdlFlags = 0;
            NonPaged->StartVa = (PVOID)((unsigned __int64)Base[1] & 0xFFFFFFFFFFFFF000uLL);
            NonPaged->ByteOffset = (__int64)Base[1] & 0xFFF;
            NonPaged->ByteCount = HIDWORD(Base[0]);
            v9 = 1;
            MmProbeAndLockPages(NonPaged, PreviousMode, IoWriteAccess);
            v14 = *(_DWORD *)v8;
          }
          *(_DWORD *)v8 = v14 & 0xFFFFFFF8 | 3;
          *(_DWORD *)(v8 + 8) = v11;
          *(_DWORD *)(v8 + 12) = HIDWORD(Base[0]);
          *(_QWORD *)(v8 + 16) = NonPaged;
          v10 = SMKM_STORE_MGR<SM_TRAITS>::SmStoreRequest(
                  (__int64)&SmGlobals,
                  HIWORD(LODWORD(Base[0])),
                  v8,
                  (__int64)Object,
                  (__int64)&v17);
          if ( v10 >= 0 )
          {
            v8 = 0LL;
            KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
            v10 = v17;
            *a4 = DWORD2(v17);
          }
        }
        else
        {
          v10 = -1073741670;
        }
      }
      else
      {
        v10 = -1073741790;
      }
    }
    else
    {
      v10 = -1073741811;
    }
  }
  else
  {
    v10 = -1073741306;
  }
  if ( v8 )
    CmSiFreeMemory((PPRIVILEGE_SET)v8);
  if ( v9 )
    MmUnlockPages(NonPaged);
  if ( NonPaged )
    CmSiFreeMemory((PPRIVILEGE_SET)NonPaged);
  return (unsigned int)v10;
}
