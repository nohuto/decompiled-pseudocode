/*
 * XREFs of SepFilterCheck @ 0x140359A20
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14026AA50 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x140358A30 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140372BC4 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x1406515A0 (SeShouldCheckForAccessRightsFromParent.c)
 *     SeAdjustAccessStateForAccessConstraints @ 0x140653E00 (SeAdjustAccessStateForAccessConstraints.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1406922C0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SepAdjustAccessStateForConstraints @ 0x14076F180 (SepAdjustAccessStateForConstraints.c)
 * Callees:
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140230DD8 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepFreeResourceInfo @ 0x14026C028 (SepFreeResourceInfo.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1402F24D0 (AuthzBasepEvaluateAceCondition.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 */

__int64 __fastcall SepFilterCheck(__int64 a1, PVOID *a2, __int64 a3, char a4, int *a5)
{
  int *v5; // r13
  __int64 v6; // r11
  int v7; // r12d
  char v8; // r15
  __int64 v9; // r10
  unsigned int v10; // edi
  int v11; // ebp
  __int16 v12; // ax
  __int64 v13; // r14
  PVOID *p_P; // rsi
  __int64 v15; // rbx
  unsigned int v16; // ecx
  __int64 v18; // rax
  unsigned __int16 v19; // cx
  int v20; // ebp
  int v21; // eax
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // eax
  int v28; // ecx
  _QWORD *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  char v34; // al
  int v35; // [rsp+60h] [rbp-68h]
  int v36; // [rsp+64h] [rbp-64h]
  unsigned int v37; // [rsp+68h] [rbp-60h]
  PVOID P; // [rsp+70h] [rbp-58h] BYREF
  int v39; // [rsp+D0h] [rbp+8h] BYREF
  int v40; // [rsp+D8h] [rbp+10h]
  __int64 v41; // [rsp+E0h] [rbp+18h]
  char v42; // [rsp+E8h] [rbp+20h]

  v42 = a4;
  v41 = a3;
  v5 = a5;
  v6 = 0LL;
  v7 = -1;
  P = 0LL;
  v39 = 0;
  v8 = 0;
  v9 = a3;
  v10 = 0;
  *a5 = -1;
  v11 = 0;
  v12 = *(_WORD *)(a1 + 2);
  if ( (v12 & 0x10) != 0 )
  {
    if ( v12 < 0 )
    {
      v18 = *(unsigned int *)(a1 + 12);
      if ( (_DWORD)v18 )
        v13 = a1 + v18;
      else
        v13 = 0LL;
    }
    else
    {
      v13 = *(_QWORD *)(a1 + 24);
    }
  }
  else
  {
    v13 = 0LL;
  }
  LOBYTE(v40) = 0;
  p_P = &P;
  if ( a2 )
    p_P = a2;
  while ( 1 )
  {
    if ( !v13 || (v15 = v13 + 8, v16 = 0, !*(_WORD *)(v13 + 4)) )
    {
LABEL_11:
      v15 = 0LL;
      goto LABEL_12;
    }
    while ( v16 < v10 || *(_BYTE *)v15 != 21 )
    {
      ++v16;
      v15 += *(unsigned __int16 *)(v15 + 2);
      if ( v16 >= *(unsigned __int16 *)(v13 + 4) )
        goto LABEL_11;
    }
    v10 = v16;
    v37 = v16;
    if ( (*(_BYTE *)(v15 + 1) & 8) != 0 )
      goto LABEL_12;
    v19 = 4 * (*(unsigned __int8 *)(v15 + 9) + 2);
    v20 = v19;
    v21 = *(unsigned __int16 *)(v15 + 2) - v19;
    LOWORD(a5) = v19;
    v35 = v19;
    if ( v21 - 8 <= 0 )
      break;
    v36 = *(_DWORD *)(v15 + 4);
    if ( (v36 & 0xFF000000) != 0 )
      break;
    if ( a4 && !v8 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v9 + 48), 1u);
      v9 = v41;
      v6 = 0LL;
      v19 = (unsigned __int16)a5;
      v8 = 1;
      v10 = v37;
    }
    if ( !*p_P )
    {
      v11 = AuthzBasepInitializeResourceClaimsFromSacl(v13, p_P);
      if ( v11 < 0 )
        goto LABEL_13;
      v9 = v41;
      v6 = 0LL;
      v19 = (unsigned __int16)a5;
      v20 = v35;
    }
    v23 = *(_QWORD **)(v9 + 1096);
    v39 = -1;
    if ( v23 )
    {
      v24 = v23[75];
      v25 = v23[73];
      v26 = v23[74];
      v6 = v23[72];
    }
    else
    {
      v24 = 0LL;
      v25 = 0LL;
      v26 = 0LL;
    }
    v27 = *(unsigned __int16 *)(v15 + 2) - v20;
    a5 = (int *)(v19 + v15 + 8);
    v11 = AuthzBasepEvaluateAceCondition(
            v9,
            *(_QWORD *)(v9 + 776),
            (__int64)*p_P,
            v6,
            v26,
            v25,
            v24,
            a5,
            v27 - 8,
            1u,
            0,
            &v39);
    if ( v11 < 0 )
      goto LABEL_13;
    if ( v39 != 1 )
    {
      v28 = (unsigned __int8)v40;
      if ( (*(_BYTE *)(v15 + 1) & 0x40) != 0 )
        v28 = 1;
      v40 = v28;
      v7 &= v36 | 0x1000000;
    }
    v9 = v41;
    if ( (*(_DWORD *)(v41 + 200) & 0x10) != 0 )
    {
      v29 = *(_QWORD **)(v41 + 1096);
      v39 = -1;
      if ( v29 )
      {
        v30 = v29[75];
        v31 = v29[73];
        v32 = v29[74];
        v33 = v29[72];
      }
      else
      {
        v30 = 0LL;
        v31 = 0LL;
        v32 = 0LL;
        v33 = 0LL;
      }
      v11 = AuthzBasepEvaluateAceCondition(
              v41,
              *(_QWORD *)(v41 + 776),
              (__int64)*p_P,
              v33,
              v32,
              v31,
              v30,
              a5,
              (unsigned int)*(unsigned __int16 *)(v15 + 2) - v35 - 8,
              1u,
              1u,
              &v39);
      if ( v11 < 0 )
        goto LABEL_13;
      a4 = v42;
      v9 = v41;
      if ( v39 != 1 )
      {
        v34 = v40;
        if ( (*(_BYTE *)(v15 + 1) & 0x40) != 0 )
          v34 = 1;
        LOBYTE(v40) = v34;
        v7 &= v36 | 0x1000000;
      }
    }
    else
    {
      a4 = v42;
    }
    v6 = 0LL;
LABEL_12:
    ++v10;
    if ( !v15 )
      goto LABEL_13;
  }
  v11 = -1073741705;
LABEL_13:
  if ( v7 != -1 )
  {
    *((_BYTE *)v5 + 4) = v40;
    *v5 = v7;
  }
  if ( v8 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v41 + 48));
    KeLeaveCriticalRegion();
  }
  if ( P )
    SepFreeResourceInfo(P);
  return (unsigned int)v11;
}
