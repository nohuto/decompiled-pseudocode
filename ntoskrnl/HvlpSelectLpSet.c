/*
 * XREFs of HvlpSelectLpSet @ 0x14053F128
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x1403714E0 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     HalEnumerateProcessors @ 0x140371430 (HalEnumerateProcessors.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HvlpComputeLpComparisonMetrics @ 0x14053E614 (HvlpComputeLpComparisonMetrics.c)
 *     HvlpLpComparison @ 0x14053EDD0 (HvlpLpComparison.c)
 *     HvlpQueryApicIdAndNumaNode @ 0x14053EF38 (HvlpQueryApicIdAndNumaNode.c)
 *     HviGetImplementationLimits @ 0x140613064 (HviGetImplementationLimits.c)
 */

__int64 __fastcall HvlpSelectLpSet(unsigned int a1, __int64 a2)
{
  unsigned int v4; // r15d
  unsigned int v5; // r13d
  int v6; // edx
  unsigned int v7; // esi
  _WORD *v8; // rbx
  int ApicIdAndNumaNode; // eax
  unsigned int v10; // r12d
  int (__fastcall *v11)(__int64, int *, unsigned int *); // rax
  __int64 v12; // rcx
  int v13; // eax
  int v14; // esi
  __int64 v15; // rbx
  int v16; // r12d
  int v17; // r11d
  unsigned int v18; // r10d
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rcx
  unsigned int v23; // edx
  unsigned int v24; // eax
  _BYTE *v25; // rcx
  unsigned int v26; // ebx
  _BYTE *v27; // rsi
  _BYTE *v28; // rcx
  unsigned int v29; // r9d
  unsigned int v30; // eax
  __int64 v31; // r8
  __int64 v32; // rcx
  _BYTE *v33; // rbx
  unsigned int v34; // ecx
  int v35; // r8d
  _DWORD *v36; // rdx
  __int64 i; // rcx
  unsigned __int16 v39[2]; // [rsp+20h] [rbp-40h] BYREF
  __int16 v40; // [rsp+24h] [rbp-3Ch] BYREF
  int v41; // [rsp+28h] [rbp-38h]
  int v42; // [rsp+2Ch] [rbp-34h]
  int v43; // [rsp+30h] [rbp-30h]
  unsigned int v44; // [rsp+34h] [rbp-2Ch]
  unsigned int v45; // [rsp+38h] [rbp-28h] BYREF
  int v46; // [rsp+3Ch] [rbp-24h] BYREF
  __int128 v47; // [rsp+40h] [rbp-20h] BYREF

  v39[0] = 0;
  v45 = 0;
  v40 = 0;
  v46 = 0;
  v44 = 0;
  v47 = 0LL;
  if ( (HvlpRootFlags & 1) == 0 )
  {
    KeHypervisorNumprocSpecified = 0;
    KeRootProcSpecified = 0;
    KeRootProcNumaNodesSpecified = 0;
    KeRootProcPerNodeSpecified = 0;
    *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 5) = 0;
    KeRootProcNumaNodeLpsSpecified = 0;
  }
  if ( (HvlpRootFlags & 0x800) != 0 )
  {
    KeRootProcSpecified = 0;
    KeRootProcNumaNodesSpecified = 0;
    KeRootProcPerNodeSpecified = 0;
    *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 5) = 1;
    KeRootProcNumaNodeLpsSpecified = 0;
  }
  HviGetImplementationLimits(&v47);
  v4 = 64;
  v5 = ~(KeGetCurrentPrcb()->LogicalProcessorsPerCore * KeGetCurrentPrcb()->CoresPerPhysicalProcessor - 1);
  if ( (unsigned int)v47 < 0x40 )
    v4 = v47;
  if ( KeRootProcSpecified && KeRootProcSpecified < v4 && !KeRootProcNumaNodesSpecified )
    v4 = KeRootProcSpecified;
  v41 = HalEnumerateProcessors(KeRegisteredProcessors);
  v6 = v41;
  v7 = 0;
  if ( a1 )
  {
    v8 = (_WORD *)(a2 + 10);
    do
    {
      *((_BYTE *)v8 - 10) = 1;
      ApicIdAndNumaNode = HvlpQueryApicIdAndNumaNode(v7, v8 - 3, v39);
      v44 = ApicIdAndNumaNode;
      v10 = ApicIdAndNumaNode;
      if ( ApicIdAndNumaNode == -1073741275 )
      {
        v44 = 0;
        *((_BYTE *)v8 - 10) = 0;
      }
      else
      {
        if ( ApicIdAndNumaNode < 0 )
          return v10;
        v11 = (int (__fastcall *)(__int64, int *, unsigned int *))HvlpQueryProximityId;
        v12 = v39[0];
        *(v8 - 1) = v39[0];
        if ( v11 )
        {
          if ( v11(v12, &v46, &v45) < 0
            || !HvlpQueryProximityNode
            || (v13 = HvlpQueryProximityNode(v45, &v40), LOWORD(v12) = v40, v13 < 0) )
          {
            LOWORD(v12) = v39[0];
          }
        }
        *v8 = v12;
        v8[1] = v12;
      }
      ++v7;
      v8 += 20;
    }
    while ( v7 < a1 );
    v6 = v41;
  }
  v14 = 1;
  v15 = a2 + 1;
  *(_BYTE *)(a2 + 1) = 1;
  v16 = 1;
  v42 = 1;
  v17 = 1;
LABEL_25:
  v43 = v17;
  while ( 1 )
  {
    v18 = 0;
    if ( a1 )
    {
      v19 = a2;
      do
      {
        if ( *(_BYTE *)v19 )
        {
          if ( *(_BYTE *)(v19 + 1) )
            goto LABEL_54;
          v20 = *(unsigned __int16 *)(v19 + 8);
          if ( (unsigned __int16)v20 >= (unsigned __int16)KeNumberNodes
            || (*(_BYTE *)(KeNodeBlock[v20] + 10) & 2) == 0
            || v16 == 1024
            || v16 == v6
            || KeMaximumProcessors && v16 == KeMaximumProcessors )
          {
            goto LABEL_54;
          }
          if ( KeBootprocSpecified && v16 == KeBootprocSpecified
            || KeNumprocSpecified && v18 >= KeNumprocSpecified
            || KeHypervisorNumprocSpecified && v16 == KeHypervisorNumprocSpecified )
          {
            goto LABEL_54;
          }
          if ( v17 == v4 )
          {
            v21 = 0LL;
            do
            {
              if ( *(_WORD *)(a2 + 40 * v21 + 8) == (_WORD)v20 && *(_BYTE *)(a2 + 40 * v21 + 1) )
                break;
              v21 = (unsigned int)(v21 + 1);
            }
            while ( (unsigned int)v21 < a1 );
            if ( (_DWORD)v21 == a1 )
              goto LABEL_54;
          }
          if ( v14 == KeRegisteredProcessors )
          {
            v22 = v15;
            v23 = 0;
            do
            {
              if ( (v5 & *(_DWORD *)(v19 + 4)) == (v5 & *(_DWORD *)(v22 + 3)) && *(_BYTE *)v22 )
                break;
              ++v23;
              v22 += 40LL;
            }
            while ( v23 < a1 );
            if ( v23 == a1 )
LABEL_54:
              *(_BYTE *)v19 = 0;
          }
        }
        v6 = v41;
        ++v18;
        v19 += 40LL;
      }
      while ( v18 < a1 );
      v24 = 0;
      v25 = (_BYTE *)a2;
      do
      {
        if ( *v25 )
          break;
        ++v24;
        v25 += 40;
      }
      while ( v24 < a1 );
    }
    else
    {
      v24 = 0;
    }
    if ( v24 == a1 )
      return v44;
    v26 = 0;
    if ( a1 )
    {
      v27 = (_BYTE *)a2;
      do
      {
        if ( *v27 )
          HvlpComputeLpComparisonMetrics(a1, a2, v26);
        ++v26;
        v27 += 40;
      }
      while ( v26 < a1 );
      v28 = (_BYTE *)a2;
      v29 = -1;
      v30 = 0;
      while ( !*v28 )
      {
        ++v30;
        v28 += 40;
        if ( v30 >= a1 )
        {
          v31 = 0LL;
          goto LABEL_71;
        }
      }
      v31 = v30 + 1;
      v29 = v30;
      if ( (unsigned int)v31 >= a1 )
        goto LABEL_76;
LABEL_71:
      v32 = 5 * v31;
      v33 = (_BYTE *)(a2 + 40 * v31);
      do
      {
        if ( *v33 && (unsigned int)HvlpLpComparison(v32, a2, v31, v29) == -1 )
          v29 = v31;
        LODWORD(v31) = v31 + 1;
        v33 += 40;
      }
      while ( (unsigned int)v31 < a1 );
LABEL_76:
      v14 = v42;
      v17 = v43;
    }
    else
    {
      v29 = -1;
    }
    ++v16;
    v34 = 0;
    v35 = v5 & *(_DWORD *)(a2 + 40LL * v29 + 4);
    *(_BYTE *)(a2 + 40LL * v29 + 1) = 1;
    if ( a1 )
    {
      v36 = (_DWORD *)(a2 + 4);
      do
      {
        if ( v34 != v29 && *((_BYTE *)v36 - 3) && (v5 & *v36) == v35 )
          break;
        ++v34;
        v36 += 10;
      }
      while ( v34 < a1 );
    }
    if ( v34 == a1 )
      v42 = ++v14;
    for ( i = 0LL; (unsigned int)i < a1; i = (unsigned int)(i + 1) )
    {
      if ( (_DWORD)i != v29
        && *(_BYTE *)(a2 + 40 * i + 1)
        && *(_WORD *)(a2 + 40 * i + 8) == *(_WORD *)(a2 + 40LL * v29 + 8) )
      {
        break;
      }
    }
    v6 = v41;
    v15 = a2 + 1;
    if ( (_DWORD)i == a1 )
    {
      ++v17;
      v15 = a2 + 1;
      goto LABEL_25;
    }
  }
}
