/*
 * XREFs of SmProcessCreateRequest @ 0x1407DD648
 * Callers:
 *     SmSetStoreInformation @ 0x1407990D4 (SmSetStoreInformation.c)
 *     SmpDirtyStoreCreate @ 0x1407DD540 (SmpDirtyStoreCreate.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     SSHSupportAllocateNonPaged @ 0x1402A4AEC (SSHSupportAllocateNonPaged.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402E69A8 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140356594 (SmKmStoreRefFromStoreIndex.c)
 *     ?SmStInitialize@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140358FB0 (-SmStInitialize@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x140359180 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     SmKmStoreDelete @ 0x1407DD27C (SmKmStoreDelete.c)
 *     SmKmStoreCreatePrepare @ 0x1407DD9A8 (SmKmStoreCreatePrepare.c)
 *     SmKmStoreAdd @ 0x1407DDA38 (SmKmStoreAdd.c)
 *     SmFirstTimeInit @ 0x1407DDCE0 (SmFirstTimeInit.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessCreateRequest(__int64 a1, unsigned __int64 a2, int a3, KPROCESSOR_MODE a4)
{
  __int64 v8; // rdi
  int v9; // esi
  __int64 v10; // rcx
  __int64 v11; // rdx
  int TimeInit; // ebx
  int *v13; // r14
  int v14; // ecx
  void *NonPaged; // rax
  struct _EX_RUNDOWN_REF *v17; // rax
  signed __int32 v18[8]; // [rsp+0h] [rbp-148h] BYREF
  __int128 v19; // [rsp+20h] [rbp-128h]
  __int64 v20; // [rsp+30h] [rbp-118h]
  PPRIVILEGE_SET Privileges; // [rsp+38h] [rbp-110h] BYREF
  _QWORD v22[2]; // [rsp+40h] [rbp-108h] BYREF
  _KPROCESS *Process; // [rsp+50h] [rbp-F8h]
  int v24; // [rsp+58h] [rbp-F0h]
  int v25; // [rsp+5Ch] [rbp-ECh]
  int *v26[8]; // [rsp+60h] [rbp-E8h] BYREF
  _OWORD v27[6]; // [rsp+A0h] [rbp-A8h] BYREF

  v20 = a1;
  Process = 0LL;
  v25 = 0;
  v8 = 0LL;
  v19 = 0xFFFFFFFFuLL;
  v9 = -1;
  Privileges = 0LL;
  memset(v27, 0, 0x58uLL);
  if ( a3 != 88 )
  {
    TimeInit = -1073741306;
    goto LABEL_23;
  }
  if ( a4 )
  {
    if ( (a2 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = 0x7FFFFFFF0000LL;
    if ( a2 < 0x7FFFFFFF0000LL )
      v10 = a2;
    *(_BYTE *)v10 = *(_BYTE *)v10;
    *(_BYTE *)(v10 + 87) = *(_BYTE *)(v10 + 87);
  }
  v27[0] = *(_OWORD *)a2;
  v27[1] = *(_OWORD *)(a2 + 16);
  v27[2] = *(_OWORD *)(a2 + 32);
  v27[3] = *(_OWORD *)(a2 + 48);
  v27[4] = *(_OWORD *)(a2 + 64);
  *(_QWORD *)&v27[5] = *(_QWORD *)(a2 + 80);
  memset(v26, 0, sizeof(v26));
  LOBYTE(v11) = a4;
  TimeInit = SmKmStoreCreatePrepare(v27, v11, &Privileges, v26, v19, *((_QWORD *)&v19 + 1), v20);
  if ( TimeInit >= 0 )
  {
    v13 = v26[0];
    v14 = *v26[0];
    if ( (*v26[0] & 0x400FF) != 0x40000 || (v14 & 0x300) != 0 )
      goto LABEL_35;
    if ( !(_BYTE)v14 && (v14 & 0x160000) != 0x40000 && !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, a4) )
    {
      TimeInit = -1073741790;
      goto LABEL_23;
    }
    if ( (*v13 & 0x400FF) == 0x40000 && (unsigned int)v13[2] > 0x20000 )
    {
LABEL_35:
      TimeInit = -1073741637;
    }
    else
    {
      NonPaged = (void *)SSHSupportAllocateNonPaged(6752LL, 0x74536D73u);
      v8 = (__int64)NonPaged;
      if ( NonPaged )
      {
        SMKM_STORE<SM_TRAITS>::SmStInitialize(NonPaged);
        TimeInit = SmFirstTimeInit(a1, (unsigned int)v13[2], 4 - (unsigned int)((*v13 & 0x10000) != 0));
        if ( TimeInit >= 0 )
        {
          v26[4] = (int *)a1;
          v26[5] = *(int **)(a1 + 2008);
          v26[6] = *(int **)(a1 + 2000);
          *v13 |= 0x8000u;
          TimeInit = SMKM_STORE<SM_TRAITS>::SmStStart(v8, v26);
          if ( TimeInit >= 0 )
          {
            Process = 0LL;
            v25 = 0;
            v22[0] = (char *)v27 + 8;
            v22[1] = *(_QWORD *)(v8 + 6200);
            v24 = DWORD2(v27[1]);
            if ( (v27[0] & 0x200) != 0 )
              Process = KeGetCurrentThread()->ApcState.Process;
            TimeInit = SmKmStoreAdd(a1, v8, v22, v8 + 6016);
            if ( TimeInit >= 0 )
            {
              LODWORD(v19) = *(_DWORD *)(v8 + 6016);
              v9 = v19;
              _InterlockedOr(v18, 0);
              *(_BYTE *)(a1 + 2040) = 5;
              v8 = 0LL;
              *((_QWORD *)&v19 + 1) = 0LL;
              DWORD1(v19) = 1;
              TimeInit = 0;
              *(_DWORD *)(a2 + 80) = v9;
              if ( (v27[0] & 0x100) != 0 )
                v9 = -1;
            }
          }
        }
      }
      else
      {
        TimeInit = -1073741670;
      }
    }
  }
LABEL_23:
  if ( v9 != -1 )
  {
    v17 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a1, v9 & 0x3FF);
    ExReleaseRundownProtection_0(v17 + 1);
  }
  if ( v8 )
  {
    SMKM_STORE<SM_TRAITS>::SmStCleanup(v8);
    CmSiFreeMemory((PPRIVILEGE_SET)v8);
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  return (unsigned int)TimeInit;
}
