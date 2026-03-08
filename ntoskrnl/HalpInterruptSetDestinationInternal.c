/*
 * XREFs of HalpInterruptSetDestinationInternal @ 0x1405023EC
 * Callers:
 *     HalpInterruptSetDestination @ 0x14028E950 (HalpInterruptSetDestination.c)
 * Callees:
 *     HalpInterruptDestinationToTarget @ 0x14028EC7C (HalpInterruptDestinationToTarget.c)
 *     HalpInterruptFindLines @ 0x14028EE80 (HalpInterruptFindLines.c)
 *     HalpInterruptLookupController @ 0x14028EEE0 (HalpInterruptLookupController.c)
 *     HalpInterruptFindBestRouting @ 0x1403791C4 (HalpInterruptFindBestRouting.c)
 *     HalpInterruptSetLineStateInternal @ 0x1403796D0 (HalpInterruptSetLineStateInternal.c)
 *     HalpInterruptApplyOverrides @ 0x140379748 (HalpInterruptApplyOverrides.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     HalpInterruptSetProblemEx @ 0x140518598 (HalpInterruptSetProblemEx.c)
 */

__int64 __fastcall HalpInterruptSetDestinationInternal(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  ULONG_PTR *v6; // rax
  __int64 v7; // rbx
  _QWORD *Lines; // rdi
  _BYTE *v9; // rcx
  __int64 v10; // r13
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  _DWORD *v13; // r15
  int v14; // r8d
  __int64 v15; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  int v18; // edx
  int v19; // ecx
  signed __int32 v21[8]; // [rsp+0h] [rbp-70h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-50h]
  __int128 v23; // [rsp+30h] [rbp-40h]
  __int128 v24; // [rsp+40h] [rbp-30h]
  __int128 v25; // [rsp+50h] [rbp-20h]
  __int64 v26; // [rsp+60h] [rbp-10h]
  __int64 v27; // [rsp+C8h] [rbp+58h] BYREF

  v27 = *a1;
  HalpInterruptApplyOverrides(&v27, 0LL, 0LL);
  LODWORD(v5) = v27;
  while ( 1 )
  {
    v6 = HalpInterruptLookupController(v5);
    v7 = (__int64)v6;
    if ( !v6 )
      break;
    if ( (v6[31] & 2) != 0 )
      KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, (ULONG_PTR)v6, 0x7931847uLL);
    Lines = HalpInterruptFindLines((unsigned int *)&v27);
    if ( !Lines )
    {
      LODWORD(BugCheckParameter4) = 1071;
      v18 = 18;
      v19 = v7;
      goto LABEL_15;
    }
    v9 = (_BYTE *)Lines[6];
    if ( *v9 )
    {
      HalpInterruptSetProblemEx(v7, 19, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 1084);
      return (unsigned int)-1073741811;
    }
    v10 = Lines[5];
    v11 = *(_OWORD *)(v10 + 16);
    v23 = *(_OWORD *)v10;
    v12 = *(_OWORD *)(v10 + 32);
    v24 = v11;
    *(_QWORD *)&v11 = *(_QWORD *)(v10 + 48);
    v25 = v12;
    v26 = v11;
    HalpInterruptDestinationToTarget((__int64)v9, a2, v10 + 24);
    v13 = (_DWORD *)(v10 + 16);
    HalpInterruptFindBestRouting((int *)&v27, *(_QWORD *)a3);
    _InterlockedOr(v21, 0);
    v14 = HalpInterruptSetLineStateInternal(v7, (__int64)&v27, v10);
    if ( v14 < 0 )
    {
      HalpInterruptSetProblemEx(v7, 7, v14, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 1123);
      v15 = Lines[5];
      v16 = v24;
      *(_OWORD *)v15 = v23;
      v17 = v25;
      *(_OWORD *)(v15 + 16) = v16;
      *(_QWORD *)&v16 = v26;
      *(_OWORD *)(v15 + 32) = v17;
      *(_QWORD *)(v15 + 48) = v16;
      return (unsigned int)v14;
    }
    if ( *(_DWORD *)(v10 + 20) == *(_DWORD *)(a3 + 4) && *v13 == *(_DWORD *)a3 )
      return (unsigned int)v14;
    v5 = *(_QWORD *)v13;
    v27 = *(_QWORD *)v13;
  }
  LODWORD(BugCheckParameter4) = 1047;
  v18 = 17;
  v19 = 0;
LABEL_15:
  HalpInterruptSetProblemEx(
    v19,
    v18,
    0,
    (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c",
    BugCheckParameter4);
  return (unsigned int)-1073741275;
}
