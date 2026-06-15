/*
 * XREFs of ?IdentifyCpuSets@@YAJPEAUCpuSet@@PEAUCpuGroupMask@@PEAK@Z @ 0x14003F34C
 * Callers:
 *     ?AddingResource@CpuManager@@EEAAJXZ @ 0x14003ECA0 (-AddingResource@CpuManager@@EEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CFF0 (__security_check_cookie.c)
 *     memset_0 @ 0x14001DF78 (memset_0.c)
 */

NTSTATUS __fastcall IdentifyCpuSets(struct CpuSet *a1, struct CpuGroupMask *a2, unsigned int *a3)
{
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int64 v14; // rax
  NTSTATUS result; // eax
  DWORD v16; // ebx
  HANDLE ProcessHeap; // rax
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v18; // rax
  unsigned __int16 *v19; // rbx
  BOOL LogicalProcessorInformation; // r12d
  int v21; // ecx
  char v22; // r10
  __int64 v23; // r8
  __int128 v24; // xmm0
  __int64 v25; // r15
  __int64 v26; // r9
  int v27; // ecx
  __int64 v28; // rdx
  __int64 v29; // r14
  HANDLE v30; // rax
  __int64 v31; // rcx
  int v33; // edx
  unsigned int v34; // edx
  DWORD ReturnedLength[4]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v36; // [rsp+30h] [rbp-D0h]
  _OWORD v37[10]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v38; // [rsp+E0h] [rbp-20h]
  __int128 SystemInformation; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v40; // [rsp+100h] [rbp+0h]
  __int128 v41; // [rsp+110h] [rbp+10h]
  __int128 v42; // [rsp+120h] [rbp+20h]
  __int128 v43; // [rsp+130h] [rbp+30h]
  __int128 v44; // [rsp+140h] [rbp+40h]
  __int128 v45; // [rsp+150h] [rbp+50h]
  __int128 v46; // [rsp+160h] [rbp+60h]
  __int128 v47; // [rsp+170h] [rbp+70h]
  __int128 v48; // [rsp+180h] [rbp+80h]
  __int64 v49; // [rsp+190h] [rbp+90h]

  memset_0(&SystemInformation, 0, 0xA8uLL);
  v6 = v40;
  *(_OWORD *)a1 = SystemInformation;
  v7 = v41;
  *((_OWORD *)a1 + 1) = v6;
  v8 = v42;
  *((_OWORD *)a1 + 2) = v7;
  v9 = v43;
  *((_OWORD *)a1 + 3) = v8;
  v10 = v44;
  *((_OWORD *)a1 + 4) = v9;
  v11 = v45;
  *((_OWORD *)a1 + 5) = v10;
  v12 = v47;
  *((_OWORD *)a1 + 6) = v11;
  *((_OWORD *)a1 + 7) = v46;
  v13 = v48;
  v14 = v49;
  *((_OWORD *)a1 + 8) = v12;
  *((_OWORD *)a1 + 9) = v13;
  *((_QWORD *)a1 + 20) = v14;
  *(_OWORD *)a2 = 0LL;
  *a3 = -1;
  memset_0(v37, 0, 0xA8uLL);
  SystemInformation = v37[0];
  v40 = v37[1];
  v41 = v37[2];
  v42 = v37[3];
  v43 = v37[4];
  v44 = v37[5];
  v45 = v37[6];
  v46 = v37[7];
  v47 = v37[8];
  v48 = v37[9];
  v49 = v38;
  result = NtQuerySystemInformation(SystemLookasideInformation|0x80, &SystemInformation, 0xA8u, 0LL);
  if ( result < 0 )
    return result;
  ReturnedLength[0] = 0;
  GetLogicalProcessorInformationEx(RelationGroup, 0LL, ReturnedLength);
  v16 = ReturnedLength[0];
  ProcessHeap = GetProcessHeap();
  v18 = (struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)HeapAlloc(ProcessHeap, 8u, v16);
  v19 = (unsigned __int16 *)v18;
  if ( !v18 )
    return -1073741670;
  LogicalProcessorInformation = GetLogicalProcessorInformationEx(RelationGroup, v18, ReturnedLength);
  if ( !LogicalProcessorInformation )
    goto LABEL_22;
  v21 = v19[5];
  v22 = 0;
  v23 = 0LL;
  *(_DWORD *)a1 = v21;
  v24 = 0LL;
  v36 = 0LL;
  if ( !v21 )
    goto LABEL_20;
  v25 = *((_QWORD *)&v36 + 1);
  do
  {
    v26 = *(_QWORD *)&v19[24 * v23 + 36];
    *((_QWORD *)a1 + v23 + 1) = v26;
    if ( v22 )
      goto LABEL_17;
    v27 = 0;
    v28 = 1LL;
    if ( (v26 & 1) == 0 )
      goto LABEL_17;
    v29 = qword_140090358;
    while ( 1 )
    {
      if ( !v25 )
      {
        v25 = v28;
        *((_QWORD *)&v36 + 1) = v28;
        LOWORD(v36) = v23;
      }
      if ( v29 )
        break;
      *((_QWORD *)a2 + 1) = v28;
      if ( (v28 & *((_QWORD *)&SystemInformation + v23 + 1)) == 0 )
        goto LABEL_16;
      v29 = qword_140090358;
LABEL_29:
      ++v27;
      v26 &= ~v28;
      v28 = 1LL << v27;
      if ( ((1LL << v27) & v26) == 0 )
        goto LABEL_17;
    }
    if ( (_DWORD)v23 != g_UserConfiguredAudioReservedCpu || (v29 & v28) == 0 )
      goto LABEL_29;
    *((_QWORD *)a2 + 1) = v28;
LABEL_16:
    v22 = 1;
    *(_WORD *)a2 = v23;
LABEL_17:
    v23 = (unsigned int)(v23 + 1);
  }
  while ( (unsigned int)v23 < *(_DWORD *)a1 );
  if ( !v22 )
  {
    v24 = v36;
LABEL_20:
    *(_OWORD *)a2 = v24;
  }
  *((_QWORD *)a1 + *(unsigned __int16 *)a2 + 1) &= ~*((_QWORD *)a2 + 1);
LABEL_22:
  v30 = GetProcessHeap();
  HeapFree(v30, 0, v19);
  if ( !LogicalProcessorInformation )
    return -1073741823;
  v31 = *((_QWORD *)a2 + 1);
  if ( !v31 )
    return -1073741823;
  if ( !_BitScanForward((unsigned int *)&v33, v31) )
  {
    _BitScanForward(&v34, HIDWORD(v31));
    v33 = v34 + 32;
  }
  *a3 = v33 | (*(unsigned __int16 *)a2 << 16) | 0x100;
  return 0;
}
