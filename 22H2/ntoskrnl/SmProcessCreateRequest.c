/*
 * XREFs of SmProcessCreateRequest @ 0x1406FD1F0
 * Callers:
 *     SmSetStoreInformation @ 0x1406A1334 (SmSetStoreInformation.c)
 *     SmpDirtyStoreCreate @ 0x1406FB7C8 (SmpDirtyStoreCreate.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140201A30 (CmSiFreeMemory.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140267428 (SmKmStoreRefFromStoreIndex.c)
 *     SSHSupportAllocateNonPaged @ 0x140322FE4 (SSHSupportAllocateNonPaged.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14034E538 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStInitialize@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140351C48 (-SmStInitialize@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x140352B08 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x140353D08 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     SeSinglePrivilegeCheck @ 0x140627A60 (SeSinglePrivilegeCheck.c)
 *     SmKmStoreDelete @ 0x1406A0870 (SmKmStoreDelete.c)
 *     SmKmStoreCreatePrepare @ 0x1406FB8D4 (SmKmStoreCreatePrepare.c)
 *     SmKmStoreAdd @ 0x1406FD558 (SmKmStoreAdd.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessCreateRequest(__int64 a1, unsigned __int64 a2, int a3, char a4)
{
  __int64 v7; // rdi
  int v8; // esi
  __int64 v9; // rcx
  int TimeInit; // ebx
  _DWORD *v11; // r14
  int v12; // ecx
  PVOID NonPaged; // rax
  __int64 v14; // r14
  struct _EX_RUNDOWN_REF *v16; // rax
  signed __int32 v17[8]; // [rsp+0h] [rbp-158h] BYREF
  __int64 v18; // [rsp+20h] [rbp-138h]
  int v19; // [rsp+28h] [rbp-130h]
  int v20; // [rsp+2Ch] [rbp-12Ch]
  PPRIVILEGE_SET v21; // [rsp+30h] [rbp-128h]
  __int64 v22; // [rsp+38h] [rbp-120h]
  PPRIVILEGE_SET Privileges; // [rsp+40h] [rbp-118h] BYREF
  _QWORD v24[2]; // [rsp+48h] [rbp-110h] BYREF
  _KPROCESS *Process; // [rsp+58h] [rbp-100h]
  int v26; // [rsp+60h] [rbp-F8h]
  int v27; // [rsp+64h] [rbp-F4h]
  __int64 v28[8]; // [rsp+70h] [rbp-E8h] BYREF
  _OWORD v29[6]; // [rsp+B0h] [rbp-A8h] BYREF

  v18 = a1;
  v22 = a1;
  Process = 0LL;
  v27 = 0;
  v7 = 0LL;
  v21 = 0LL;
  v8 = -1;
  v19 = -1;
  Privileges = 0LL;
  memset(v29, 0, 0x58uLL);
  if ( a3 != 88 )
  {
    TimeInit = -1073741306;
LABEL_33:
    v14 = v18;
    goto LABEL_24;
  }
  if ( a4 )
  {
    if ( (a2 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = a2;
    if ( a2 >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v9 = *(_BYTE *)v9;
    *(_BYTE *)(v9 + 87) = *(_BYTE *)(v9 + 87);
  }
  v29[0] = *(_OWORD *)a2;
  v29[1] = *(_OWORD *)(a2 + 16);
  v29[2] = *(_OWORD *)(a2 + 32);
  v29[3] = *(_OWORD *)(a2 + 48);
  v29[4] = *(_OWORD *)(a2 + 64);
  *(_QWORD *)&v29[5] = *(_QWORD *)(a2 + 80);
  memset(v28, 0, sizeof(v28));
  TimeInit = SmKmStoreCreatePrepare((unsigned int *)v29, a4, &Privileges, (__int64)v28);
  if ( TimeInit < 0 )
    goto LABEL_33;
  v11 = (_DWORD *)v28[0];
  v12 = *(_DWORD *)v28[0];
  if ( (*(_DWORD *)v28[0] & 0x400FF) != 0x40000 || (v12 & 0x300) != 0 )
    goto LABEL_36;
  if ( !(_BYTE)v12 && (v12 & 0x160000) != 0x40000 && !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, a4) )
  {
    TimeInit = -1073741790;
    goto LABEL_33;
  }
  if ( (*v11 & 0x400FF) == 0x40000 && v11[2] > 0x20000u )
  {
LABEL_36:
    TimeInit = -1073741637;
    goto LABEL_33;
  }
  NonPaged = SSHSupportAllocateNonPaged(0x1A50uLL, 0x74536D73u);
  v7 = (__int64)NonPaged;
  if ( !NonPaged )
  {
    TimeInit = -1073741670;
    goto LABEL_33;
  }
  SMKM_STORE<SM_TRAITS>::SmStInitialize((__int64)NonPaged);
  TimeInit = SmFirstTimeInit(v11[2], 4 - (unsigned int)((*v11 & 0x10000) != 0));
  if ( TimeInit < 0 )
    goto LABEL_33;
  v28[4] = (__int64)&SmGlobals;
  v28[5] = (__int64)qword_140D24158;
  v28[6] = (__int64)Handle;
  *v11 |= 0x8000u;
  TimeInit = SMKM_STORE<SM_TRAITS>::SmStStart(v7, v28);
  if ( TimeInit < 0 )
    goto LABEL_33;
  Process = 0LL;
  v27 = 0;
  v24[0] = (char *)v29 + 8;
  v24[1] = *(_QWORD *)(v7 + 6200);
  v26 = DWORD2(v29[1]);
  if ( (v29[0] & 0x200) != 0 )
    Process = KeGetCurrentThread()->ApcState.Process;
  TimeInit = SmKmStoreAdd(v18, v7, v24, v7 + 6016);
  if ( TimeInit < 0 )
    goto LABEL_33;
  v19 = *(_DWORD *)(v7 + 6016);
  v8 = v19;
  _InterlockedOr(v17, 0);
  byte_140D24168 = 5;
  v7 = 0LL;
  v21 = 0LL;
  v20 = 1;
  TimeInit = 0;
  *(_DWORD *)(a2 + 80) = v8;
  if ( (v29[0] & 0x100) != 0 )
    v8 = -1;
  v14 = v18;
LABEL_24:
  if ( v8 != -1 )
  {
    v16 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(v14, v8 & 0x3FF);
    ExReleaseRundownProtection(v16 + 1);
  }
  if ( v7 )
  {
    SMKM_STORE<SM_TRAITS>::SmStCleanup(v7);
    CmSiFreeMemory((PPRIVILEGE_SET)v7);
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  return (unsigned int)TimeInit;
}
