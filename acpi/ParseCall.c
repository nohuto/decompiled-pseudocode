/*
 * XREFs of ParseCall @ 0x1C005A6A0
 * Callers:
 *     <none>
 * Callees:
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     PerformNativeMethodCall @ 0x1C004A154 (PerformNativeMethodCall.c)
 *     DupObjData @ 0x1C004AF04 (DupObjData.c)
 *     FreeDataBuffs @ 0x1C004B50C (FreeDataBuffs.c)
 *     FreeObjOwner @ 0x1C004B650 (FreeObjOwner.c)
 *     FreeOwnedObjects @ 0x1C004B81C (FreeOwnedObjects.c)
 *     MoveObjData @ 0x1C004C164 (MoveObjData.c)
 *     NewObjOwner @ 0x1C004C324 (NewObjOwner.c)
 *     ConPrintf @ 0x1C004D7B8 (ConPrintf.c)
 *     LogError @ 0x1C004E224 (LogError.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 *     HeapFree @ 0x1C004EE4C (HeapFree.c)
 *     DereferenceObjectEx @ 0x1C004F6A8 (DereferenceObjectEx.c)
 *     PushFrame @ 0x1C0053C34 (PushFrame.c)
 *     PushScope @ 0x1C0053D40 (PushScope.c)
 *     ReleaseASLMutex @ 0x1C0054DD0 (ReleaseASLMutex.c)
 *     ParseArg @ 0x1C005A46C (ParseArg.c)
 */

__int64 __fastcall ParseCall(__int64 a1, __int64 a2, unsigned int a3)
{
  int *v3; // r14
  unsigned int v4; // esi
  int v7; // eax
  __int64 v8; // rcx
  unsigned __int64 v9; // r15
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // r8
  struct _EX_RUNDOWN_REF *v18; // rcx
  int v19; // eax
  bool v20; // zf
  int v21; // eax
  unsigned int v22; // eax
  int v23; // ecx
  __int64 v24; // r8
  __int64 v25; // rcx
  struct _EX_RUNDOWN_REF *v26; // r9
  __int64 v27; // rax
  __int64 v28; // rcx
  _BYTE *v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int128 v35; // [rsp+40h] [rbp-30h] BYREF
  __int128 v36; // [rsp+50h] [rbp-20h]
  __int64 v37; // [rsp+60h] [rbp-10h]
  struct _EX_RUNDOWN_REF *v38; // [rsp+98h] [rbp+28h] BYREF

  v3 = (int *)(a2 + 16);
  v4 = a3;
  if ( a3 )
    v7 = 5;
  else
    v7 = *v3 & 0xF;
  v38 = 0LL;
  v8 = *(_QWORD *)(a2 + 48);
  if ( v8 )
    v9 = *(_QWORD *)(v8 + 96);
  else
    v9 = 0LL;
  if ( !v7 )
  {
    ++*v3;
    if ( (gDebugger & 0xD0) != 0 )
      ConPrintf("(");
LABEL_17:
    while ( 1 )
    {
      v15 = *(_DWORD *)(a2 + 56);
      if ( v15 < *(_DWORD *)(a2 + 60) )
        break;
      if ( v4 || a2 != *(_QWORD *)(a1 + 416) )
        return v4;
      if ( *(_DWORD *)(a2 + 56) >= *(_DWORD *)(a2 + 60) )
      {
LABEL_28:
        if ( (gDebugger & 0xD0) != 0 )
          ConPrintf(")");
        ++*v3;
        goto LABEL_31;
      }
    }
    while ( 1 )
    {
      if ( (gDebugger & 0xD0) != 0 && v15 )
        ConPrintf(",");
      v16 = *(unsigned int *)(a2 + 56);
      v17 = *(_QWORD *)(a2 + 64) + 40 * v16;
      *(_DWORD *)(a2 + 56) = v16 + 1;
      v4 = ParseArg(a1, 67, v17, 0LL);
      if ( v4 || a2 != *(_QWORD *)(a1 + 416) )
        return v4;
      v15 = *(_DWORD *)(a2 + 56);
      if ( v15 >= *(_DWORD *)(a2 + 60) )
        goto LABEL_28;
    }
  }
  v10 = v7 - 1;
  if ( !v10 )
    goto LABEL_17;
  v11 = v10 - 1;
  if ( !v11 )
  {
LABEL_31:
    ++*v3;
    if ( !v9 )
    {
      v4 = -1072431101;
      LogError(-1072431101);
      AcpiDiagTraceAmlError(a1, -1072431101);
      PrintDebugMessage(123, 0LL, 0LL, 0LL, 0LL);
      return v4;
    }
    if ( (*(_BYTE *)(v9 + 193) & 8) != 0 )
    {
      v38 = 0LL;
      v4 = PushFrame(a1, 1179730753, 0x40u, (__int64)ParseAcquire, (__int64 *)&v38);
      if ( !v4 )
      {
        v18 = v38;
        v38[4].Count = v9;
        LOWORD(v18[5].Count) = -1;
        v18[6].Count = *(unsigned __int64 *)(a2 + 392);
      }
      return v4;
    }
    goto LABEL_35;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
LABEL_35:
    v19 = *v3 + 1;
    v20 = *(_DWORD *)a2 == 1280065859;
    *v3 = v19;
    if ( v20 && (v19 & 0x80000) != 0 )
    {
      *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 96);
      *(_QWORD *)(a1 + 96) = a2;
      *v3 |= 0x40000u;
      v4 = PerformNativeMethodCall(0, a1, a2);
      if ( v4 == 32772 )
        return v4;
    }
    else
    {
      if ( (v19 & 0x10000) != 0 )
        *v3 = v19 | 0x20000;
      v4 = NewObjOwner(*(_QWORD *)(a1 + 320), &v38);
      if ( !v4 )
      {
        v26 = v38;
        *(_QWORD *)(a2 + 40) = *(_QWORD *)(a1 + 88);
        v27 = *(_QWORD *)(a1 + 96);
        *(_QWORD *)(a1 + 88) = v26;
        *(_QWORD *)(a2 + 32) = v27;
        *(_QWORD *)(a1 + 96) = a2;
        v28 = *(_QWORD *)(a2 + 48);
        *v3 |= 0x40000u;
        return (unsigned int)PushScope(
                               (_QWORD *)a1,
                               v9 + 194,
                               *(_QWORD *)(v28 + 96) + *(unsigned int *)(v28 + 88),
                               *(_QWORD *)(a1 + 120),
                               v28,
                               (__int64)v26,
                               *(_QWORD *)(a1 + 320),
                               *(_QWORD *)(a2 + 392));
      }
    }
    goto LABEL_38;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
LABEL_38:
    v21 = *v3 + 1;
    v20 = *(_DWORD *)a2 == 1280065859;
    *v3 = v21;
    if ( v20 && (v21 & 0x80000) != 0 )
      v4 = PerformNativeMethodCall(1, a1, a2);
    goto LABEL_41;
  }
  v14 = v13 - 1;
  if ( v14 )
  {
    if ( v14 != 1 )
      return v4;
    goto LABEL_66;
  }
LABEL_41:
  v22 = 0;
  v23 = *v3 + 1;
  *v3 = v23;
  if ( v4 != 32770 )
    v22 = v4;
  v4 = v22;
  if ( *(_DWORD *)a2 != 1280065859 || (v23 & 0x80000) == 0 )
  {
    v29 = *(_BYTE **)(a2 + 392);
    if ( (*v29 & 1) != 0 )
    {
      v30 = *(_QWORD *)(a1 + 320);
      v35 = 0LL;
      v37 = 0LL;
      v36 = 0LL;
      v4 = DupObjData(v30, (__int64)&v35, (__int64)v29);
      if ( (v4 & 0x80000000) != 0 )
        return v4;
      FreeDataBuffs(*(_QWORD *)(a2 + 392), 1u);
      MoveObjData(*(_QWORD *)(a2 + 392), (__int64)&v35);
    }
    FreeDataBuffs(a2 + 72, 8u);
    if ( (*v3 & 0x40000) != 0 )
    {
      FreeOwnedObjects(*(_QWORD **)(a1 + 88));
      FreeObjOwner(0LL, *(struct _EX_RUNDOWN_REF **)(a1 + 88));
    }
    else if ( *(_QWORD *)(a2 + 48) )
    {
      goto LABEL_60;
    }
    *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 40);
    goto LABEL_59;
  }
  if ( (v23 & 0x40000) == 0 )
  {
LABEL_60:
    v31 = *(_QWORD *)(a2 + 48);
    if ( v31 )
    {
      DereferenceObjectEx(v31);
      *(_QWORD *)(a2 + 48) = 0LL;
    }
    v32 = *(_QWORD *)(a2 + 64);
    if ( v32 )
    {
      FreeDataBuffs(v32, *(_DWORD *)(a2 + 60));
      HeapFree(*(_QWORD *)(a2 + 64));
    }
    if ( (*v3 & 0x20000) != 0 )
      ReleaseASLMutex(a1, v9, 0);
LABEL_66:
    v33 = *(_QWORD *)(a1 + 416);
    *(_QWORD *)(a1 + 416) = *(_QWORD *)(v33 + 8);
    HeapFree(v33);
    return v4;
  }
  v24 = *(_QWORD *)(a2 + 392);
  v25 = *(_QWORD *)(a1 + 320);
  v35 = 0LL;
  v37 = 0LL;
  v36 = 0LL;
  v4 = DupObjData(v25, (__int64)&v35, v24);
  if ( (v4 & 0x80000000) == 0 )
  {
    PerformNativeMethodCall(2, a1, a2);
    MoveObjData(*(_QWORD *)(a2 + 392), (__int64)&v35);
    *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 40);
LABEL_59:
    *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 32);
    goto LABEL_60;
  }
  return v4;
}
