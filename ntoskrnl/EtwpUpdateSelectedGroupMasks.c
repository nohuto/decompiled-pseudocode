/*
 * XREFs of EtwpUpdateSelectedGroupMasks @ 0x14037F908
 * Callers:
 *     EtwpEnableMetaProviderGuid @ 0x140204F18 (EtwpEnableMetaProviderGuid.c)
 *     EtwpUpdateGroupMasks @ 0x14080D8D8 (EtwpUpdateGroupMasks.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x140785F3C (EtwpUpdateGlobalGroupMasks.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     EtwpLogGroupMask @ 0x14080D970 (EtwpLogGroupMask.c)
 *     EtwpKernelTraceRundown @ 0x14080D9F8 (EtwpKernelTraceRundown.c)
 *     EtwpLogAlwaysPresentRundown @ 0x14080E2F8 (EtwpLogAlwaysPresentRundown.c)
 *     EtwpCCSwapStart @ 0x14080E634 (EtwpCCSwapStart.c)
 *     EtwpCCSwapStop @ 0x14080E6EC (EtwpCCSwapStop.c)
 */

__int64 __fastcall EtwpUpdateSelectedGroupMasks(int *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v5; // rbx
  volatile signed __int64 *v7; // r12
  __int64 v8; // r15
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rax
  unsigned __int64 v14; // rdi
  _DWORD *v15; // r8
  char *v16; // rsi
  char *v17; // r13
  char *v18; // r10
  char *v19; // r11
  _DWORD *v20; // r9
  char *v21; // rbx
  __int64 v22; // r12
  int v23; // ecx
  int v24; // edx
  int v25; // eax
  int v26; // eax
  int v27; // ebx
  __int64 v28; // rax
  __int128 v29; // xmm1
  int updated; // r15d
  int v31; // r9d
  int v33; // eax
  unsigned int v34; // edx
  char *v35; // r8
  _DWORD *v36; // rcx
  unsigned int v37; // [rsp+34h] [rbp-55h]
  __int64 v38; // [rsp+38h] [rbp-51h]
  __int128 v39; // [rsp+40h] [rbp-49h] BYREF
  __int128 v40; // [rsp+50h] [rbp-39h]
  _OWORD v41[2]; // [rsp+60h] [rbp-29h] BYREF
  _OWORD v42[2]; // [rsp+80h] [rbp-9h] BYREF

  v37 = *a1;
  v38 = *((_QWORD *)a1 + 137);
  v5 = a3 + 1;
  memset(v41, 0, sizeof(v41));
  memset(v42, 0, sizeof(v42));
  v39 = 0LL;
  v40 = 0LL;
  if ( a3 && ((*v5 & 1) != 0 || (*v5 & 0x10) != 0) )
  {
    *a3 |= 0x200u;
    *a2 |= 0x200u;
  }
  if ( *((_QWORD *)a1 + 137) != EtwpHostSiloState )
  {
    v34 = 0;
    v35 = (char *)((char *)&EtwpSiloAllowedGroupMask - (char *)a3);
    v36 = a3;
    while ( (~*(_DWORD *)((char *)v36 + (_QWORD)v35) & *v36) == 0 )
    {
      ++v34;
      ++v36;
      if ( v34 >= 8 )
      {
        v5 = a3 + 1;
        goto LABEL_5;
      }
    }
    return 3221225569LL;
  }
LABEL_5:
  if ( a3
    && (*v5 & 0x402) != 0
    && a1[204] >= 0
    && !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, KeGetCurrentThread()->PreviousMode) )
  {
    return 3221225569LL;
  }
  v7 = (volatile signed __int64 *)(a1 + 172);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(a1 + 172), 0LL);
  v8 = *((unsigned __int8 *)a1 + 818);
  if ( !a2 || (v9 = a2[1], (v9 & 4) == 0) && (v9 & 0x100) == 0 )
  {
    v10 = *((unsigned __int8 *)a1 + 818);
LABEL_13:
    v13 = *((_QWORD *)a1 + 137);
    v14 = 32 * v10;
    v15 = (_DWORD *)(v14 + v13 + 4284);
    v16 = (char *)&a3[v14 / 0xFFFFFFFFFFFFFFFCuLL] - v13;
    v17 = (char *)&a2[v14 / 0xFFFFFFFFFFFFFFFCuLL] - v13;
    v18 = (char *)&v41[v14 / 0xFFFFFFFFFFFFFFF0uLL] - v13;
    v19 = (char *)&v42[v14 / 0xFFFFFFFFFFFFFFF0uLL] - v13;
    v20 = v15;
    v21 = (char *)&v39 - v14 - v13;
    v22 = 8LL;
    do
    {
      v23 = *(_DWORD *)((char *)v20 + (_QWORD)v16 - 4284);
      v24 = *v20 & ~v23 & *(_DWORD *)&v17[(_QWORD)v20 - 4284];
      *(_DWORD *)((char *)v20 + (_QWORD)v18 - 4284) = v24;
      v25 = v23 & ~*v20;
      *(_DWORD *)((char *)v20 + (_QWORD)v19 - 4284) = v25;
      v26 = *v20++ | v25;
      *(_DWORD *)((char *)v20 + (_QWORD)v21 - 4288) = ~v24 & v26;
      --v22;
    }
    while ( v22 );
    EtwpLogGroupMask(v38, v37, v15, 32LL);
    v7 = (volatile signed __int64 *)(a1 + 172);
    v27 = a1[3] & 0x400;
    if ( EtwpBootPhase && !v27 )
      EtwpKernelTraceRundown((unsigned int)v41, v38, v37, 0, 0LL, 0);
    v28 = *((_QWORD *)a1 + 137);
    v29 = v40;
    *(_OWORD *)(v28 + v14 + 4284) = v39;
    *(_OWORD *)(v28 + v14 + 4300) = v29;
    updated = EtwpUpdateGlobalGroupMasks(v38, v37, (unsigned int)v8);
    if ( updated >= 0 )
    {
      EtwpLogGroupMask(v38, v37, &v39, 5LL);
      if ( EtwpBootPhase )
      {
        if ( !v27 || (a1[204] & 2) != 0 )
        {
          LOBYTE(v31) = 1;
          EtwpKernelTraceRundown((unsigned int)v42, v38, v37, v31, 0LL, 0);
        }
      }
    }
    EtwpLogAlwaysPresentRundown(v38, v37);
    goto LABEL_23;
  }
  v10 = *((unsigned __int8 *)a1 + 818);
  v11 = 32 * v8 + *((_QWORD *)a1 + 137) + 4284LL;
  if ( v11 && (v12 = *(_DWORD *)(v11 + 4), (v12 & 4) != 0) && (v12 & 0x100) != 0 )
  {
    if ( !a3 || (*v5 & 4) == 0 || (*v5 & 0x100) == 0 )
    {
      LOBYTE(v11) = 1;
      EtwpCCSwapStop((unsigned int)a1[50], v11);
      goto LABEL_13;
    }
  }
  else if ( !a3 )
  {
    goto LABEL_13;
  }
  if ( (*v5 & 4) == 0 )
    goto LABEL_13;
  if ( (*v5 & 0x100) == 0 )
    goto LABEL_13;
  if ( v11 )
  {
    v33 = *(_DWORD *)(v11 + 4);
    if ( (v33 & 4) != 0 && (v33 & 0x100) != 0 )
      goto LABEL_13;
  }
  updated = EtwpCCSwapStart((unsigned int)a1[50]);
  if ( updated >= 0 )
  {
    LODWORD(v8) = v10;
    goto LABEL_13;
  }
LABEL_23:
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  return (unsigned int)updated;
}
