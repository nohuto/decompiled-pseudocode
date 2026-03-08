/*
 * XREFs of KeQueryLogicalProcessorRelationship @ 0x1402AA2C0
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KiOrAffinityEx @ 0x14022B190 (KiOrAffinityEx.c)
 *     KeAndGroupAffinityEx @ 0x140233690 (KeAndGroupAffinityEx.c)
 *     KiCopyAffinityEx @ 0x1402337D0 (KiCopyAffinityEx.c)
 *     KeGetProcessorIndexFromNumber @ 0x140236BF0 (KeGetProcessorIndexFromNumber.c)
 *     KiAndAffinityEx @ 0x140237720 (KiAndAffinityEx.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1402A7240 (KeQueryMaximumProcessorCountEx.c)
 *     KeQueryActiveProcessorCountEx @ 0x1402A97C0 (KeQueryActiveProcessorCountEx.c)
 *     KiTryPopulateLogicalProcessorInformation @ 0x1402A9990 (KiTryPopulateLogicalProcessorInformation.c)
 *     KeQueryNodeActiveAffinityEx @ 0x1402AAE68 (KeQueryNodeActiveAffinityEx.c)
 *     KiQuerySubNodeActiveAffinity @ 0x1402AE38C (KiQuerySubNodeActiveAffinity.c)
 *     KeGetNodePrimarySubNode @ 0x1402AE8B4 (KeGetNodePrimarySubNode.c)
 *     KeFirstGroupAffinityEx @ 0x1402AEC40 (KeFirstGroupAffinityEx.c)
 *     KiGetProcessorEfficiencyClass @ 0x14036A2D4 (KiGetProcessorEfficiencyClass.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall KeQueryLogicalProcessorRelationship(
        PPROCESSOR_NUMBER ProcessorNumber,
        LOGICAL_PROCESSOR_RELATIONSHIP RelationshipType,
        PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Information,
        PULONG Length)
{
  LOGICAL_PROCESSOR_RELATIONSHIP v4; // ebx
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX v5; // rsi
  struct _PROCESSOR_NUMBER *v7; // r11
  __int16 v8; // r13
  NTSTATUS v9; // r12d
  unsigned int v10; // r14d
  char *v11; // rdi
  int v12; // edx
  __int64 v13; // r9
  __int64 v14; // r15
  unsigned int v15; // eax
  __int64 v16; // r12
  __int64 Pool2; // rax
  size_t v18; // r14
  _DWORD *v19; // rdi
  char *v20; // rax
  char **v21; // rcx
  __int64 v22; // rdx
  PPROCESSOR_NUMBER v23; // r15
  ULONG ProcessorIndexFromNumber; // ecx
  ULONG v25; // eax
  unsigned __int16 *v26; // rdi
  __int64 v27; // rdx
  unsigned __int64 v28; // r8
  __int64 v29; // r13
  int v30; // eax
  __int64 v31; // r15
  __int64 v32; // r12
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rcx
  bool v38; // al
  int v39; // eax
  int v40; // eax
  unsigned int v41; // eax
  __int64 v42; // rbx
  __int64 v43; // r13
  unsigned __int16 *v44; // r8
  __int64 v45; // r15
  struct _PROCESSOR_NUMBER *v46; // r12
  size_t v47; // r8
  unsigned __int16 *v48; // r15
  int v49; // eax
  unsigned __int16 v50; // r9
  unsigned __int16 Group; // r10
  unsigned __int16 v52; // r9
  unsigned __int16 v53; // dx
  unsigned int v54; // r8d
  unsigned __int64 v55; // rcx
  unsigned __int16 v56; // r11
  unsigned __int16 v57; // ax
  unsigned __int16 v58; // dx
  unsigned __int64 v59; // r9
  __int64 v60; // rcx
  __int64 v61; // rax
  ULONG v62; // ebx
  ULONG v63; // r10d
  __int64 v64; // rdi
  __int64 v65; // rcx
  __int64 NodePrimarySubNode; // rax
  unsigned __int16 v67; // r11
  unsigned int v68; // r8d
  __int64 v69; // r13
  unsigned int v70; // r15d
  PPROCESSOR_NUMBER v71; // rbx
  USHORT v72; // r8
  unsigned __int16 v73; // dx
  unsigned int v74; // edx
  unsigned __int64 v75; // rcx
  unsigned __int16 v76; // r8
  unsigned __int16 v77; // ax
  unsigned __int16 v78; // r11
  __int64 v79; // r10
  __int64 v80; // rcx
  __int64 v81; // rax
  int v82; // edx
  unsigned int v83; // eax
  unsigned int v84; // r15d
  __int64 v85; // rbx
  __int64 v86; // rdi
  int v88; // [rsp+58h] [rbp-B0h]
  unsigned int v89; // [rsp+5Ch] [rbp-ACh] BYREF
  ULONG v90; // [rsp+60h] [rbp-A8h]
  ULONG v91; // [rsp+64h] [rbp-A4h]
  __int64 v92; // [rsp+68h] [rbp-A0h]
  _QWORD Size[3]; // [rsp+70h] [rbp-98h] BYREF
  ULONG v94; // [rsp+88h] [rbp-80h]
  char *v95; // [rsp+90h] [rbp-78h]
  unsigned __int16 *v96; // [rsp+98h] [rbp-70h]
  unsigned __int16 *v97; // [rsp+A0h] [rbp-68h]
  unsigned __int16 *v98; // [rsp+A8h] [rbp-60h]
  _QWORD v99[18]; // [rsp+B8h] [rbp-50h] BYREF
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX v102; // [rsp+168h] [rbp+60h] BYREF
  PULONG v103; // [rsp+170h] [rbp+68h]

  v103 = Length;
  v102 = Information;
  v4 = RelationshipType;
  v5 = Information;
  memset(v99, 0, 0x50uLL);
  v7 = 0LL;
  v8 = KiMaximumGroups;
  v9 = 0;
  v90 = *Length;
  v10 = 0;
  v88 = 0;
  Size[0] = 8LL * (unsigned __int16)KiMaximumGroups;
  v11 = 0LL;
  v91 = 0;
  v12 = 236;
  v95 = 0LL;
  v13 = 1LL;
  v14 = Size[0] + 8LL;
  v15 = 0;
  if ( ((v4 == RelationAll
      || (unsigned int)v4 <= (RelationGroup|RelationProcessorPackage)
      && _bittest(&v12, v4)
      && (v15 = 1, v4 == RelationCache))
     && (v15 = 6, v4 == RelationAll)
     || v4 == RelationProcessorCore)
    && (++v15, v4 == RelationAll)
    || v4 == RelationProcessorPackage )
  {
    ++v15;
  }
  if ( v4 == (RelationGroup|RelationNumaNode) )
  {
    ++v15;
  }
  else if ( v4 == RelationAll || v4 == (RelationGroup|RelationProcessorPackage) )
  {
    ++v15;
  }
  if ( v15 )
  {
    v16 = v15;
    Pool2 = ExAllocatePool2(64LL, v14 * v15, 1347178827LL);
    v95 = (char *)Pool2;
    if ( !Pool2 )
      return -1073741670;
    v18 = Size[0];
    v19 = (_DWORD *)(Pool2 + 4);
    do
    {
      *((_WORD *)v19 - 2) = 1;
      *((_WORD *)v19 - 1) = v8;
      *v19 = 0;
      memset(v19 + 1, 0, v18);
      v19 = (_DWORD *)((char *)v19 + v14);
      --v16;
    }
    while ( v16 );
    v10 = v91;
    v7 = 0LL;
    v5 = v102;
    v9 = v91;
    v4 = RelationshipType;
    v12 = 236;
    v11 = v95;
    v13 = 1LL;
  }
  v20 = v11;
  if ( v4 == RelationAll || (unsigned int)v4 <= (RelationGroup|RelationProcessorPackage) && _bittest(&v12, v4) )
  {
    v99[0] = v11;
    v20 = &v11[v14];
    if ( v4 == RelationAll || v4 == RelationCache )
    {
      v21 = (char **)&v99[1];
      v22 = 5LL;
      do
      {
        *v21 = v20;
        v20 += v14;
        ++v21;
        --v22;
      }
      while ( v22 );
      if ( v4 == RelationAll )
        goto LABEL_178;
    }
  }
  if ( v4 == RelationProcessorCore )
  {
LABEL_178:
    v99[6] = v20;
    v20 += v14;
    if ( v4 == RelationAll )
      goto LABEL_32;
  }
  if ( v4 == RelationProcessorPackage )
  {
LABEL_32:
    v99[7] = v20;
    v20 += v14;
  }
  if ( v4 == (RelationGroup|RelationNumaNode) )
  {
    v99[8] = v20;
  }
  else if ( v4 == RelationAll || v4 == (RelationGroup|RelationProcessorPackage) )
  {
    v99[9] = v20;
  }
  v23 = ProcessorNumber;
  if ( ProcessorNumber )
  {
    ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcessorNumber);
    v91 = ProcessorIndexFromNumber;
    if ( ProcessorIndexFromNumber >= (unsigned int)KeNumberProcessors_0 )
    {
      v9 = -1073741811;
      goto LABEL_173;
    }
    v25 = ProcessorIndexFromNumber;
    v7 = 0LL;
  }
  else
  {
    ProcessorIndexFromNumber = 0;
    v91 = 0;
    v25 = KeNumberProcessors_0 - 1;
  }
  v26 = (unsigned __int16 *)v99[0];
  LODWORD(v92) = v25;
  v27 = ProcessorIndexFromNumber;
  v94 = ProcessorIndexFromNumber;
  v28 = 0x140000000uLL;
  *(_OWORD *)&Size[1] = 0LL;
  if ( ProcessorIndexFromNumber <= v25 )
  {
    v13 = v99[6];
    v98 = (unsigned __int16 *)v99[9];
    v97 = (unsigned __int16 *)v99[8];
    v96 = (unsigned __int16 *)v99[7];
    Size[0] = v99[6];
    while ( 1 )
    {
      v29 = KiProcessorBlock[ProcessorIndexFromNumber];
      if ( v4 == RelationProcessorPackage || v4 == RelationAll )
      {
        KiCopyAffinityEx((__int64)v26, v26[1], (unsigned __int16 *)(v29 + 34576));
        LODWORD(v102) = 0;
        v89 = 0;
        v30 = KiTryPopulateLogicalProcessorInformation(
                v26,
                v96,
                v23 != 0LL,
                3,
                (__int64)v5,
                v90,
                v10,
                (unsigned int *)&v102,
                &v89);
        v10 += (unsigned int)v102;
        v7 = 0LL;
        if ( v30 >= 0 )
        {
          if ( v89 )
            v5 = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)v5 + v89);
        }
        else
        {
          v9 = v30;
          v88 = v30;
        }
        v13 = Size[0];
      }
      if ( v4 == RelationProcessorCore || v4 == RelationAll )
        break;
LABEL_64:
      if ( v4 != (RelationGroup|RelationNumaNode) )
      {
        if ( v4 == (RelationGroup|RelationProcessorPackage) || v4 == RelationAll )
        {
          KiCopyAffinityEx((__int64)v26, v26[1], (unsigned __int16 *)(v29 + 38416));
          LODWORD(v102) = 0;
          v89 = 0;
          v40 = KiTryPopulateLogicalProcessorInformation(
                  v26,
                  v98,
                  v23 != 0LL,
                  7,
                  (__int64)v5,
                  v90,
                  v10,
                  (unsigned int *)&v102,
                  &v89);
          v10 += (unsigned int)v102;
          v7 = 0LL;
          if ( v40 >= 0 )
          {
            if ( v89 )
              v5 = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)v5 + v89);
          }
          else
          {
            v9 = v40;
            v88 = v40;
          }
        }
        if ( v4 != RelationCache )
        {
          v88 = v9;
          if ( v4 != RelationAll )
            goto LABEL_119;
        }
        v41 = (unsigned int)v7;
        LODWORD(v102) = (_DWORD)v7;
        if ( *(_DWORD *)(v29 + 34452) <= (unsigned int)v7 )
          goto LABEL_119;
        v42 = v29;
        while ( 2 )
        {
          v43 = v41;
          v44 = (unsigned __int16 *)(264LL * v41 + v42 + 40632);
          if ( KiSplitLargeCaches == (_DWORD)v7 )
          {
            KiCopyAffinityEx((__int64)v26, v26[1], v44);
          }
          else
          {
            v45 = *(unsigned __int8 *)(v42 + 208);
            LOWORD(Size[2]) = v45;
            if ( (unsigned __int16)v45 >= *v44 )
              v46 = v7;
            else
              v46 = *(struct _PROCESSOR_NUMBER **)&v44[4 * v45 + 4];
            v47 = 8LL * *v26;
            Size[1] = v46;
            memset(v26 + 4, 0, v47);
            *v26 = 1;
            if ( (_WORD)v45 )
            {
              if ( v26[1] > (unsigned __int16)v45 )
              {
                *v26 = v45 + 1;
                goto LABEL_87;
              }
            }
            else
            {
LABEL_87:
              *(_QWORD *)&v26[4 * v45 + 4] |= (unsigned __int64)v46;
            }
            v9 = v88;
          }
          v48 = (unsigned __int16 *)v99[v43 + 1];
          v49 = KiAndAffinityEx(v26, v48, 0LL, 0);
          v7 = 0LL;
          if ( !ProcessorNumber && v49 )
          {
            v23 = 0LL;
          }
          else
          {
            v50 = 0;
            if ( v48 )
              v50 = v48[1];
            KiOrAffinityEx((char *)v26, v48, v48, v50);
            v23 = ProcessorNumber;
            v7 = 0LL;
            if ( ProcessorNumber )
            {
              Group = ProcessorNumber->Group;
            }
            else
            {
              KeFirstGroupAffinityEx(&Size[1], v26);
              Group = Size[2];
              v7 = 0LL;
            }
            v52 = 0;
            v53 = 0;
            if ( *v26 )
            {
              do
              {
                if ( *(_QWORD *)&v26[4 * v53 + 4] )
                  ++v52;
                ++v53;
              }
              while ( v53 < *v26 );
              v9 = v88;
            }
            v54 = (16 * v52 + 47) & 0xFFFFFFF8;
            v10 += v54;
            if ( v10 > v90 )
            {
              v9 = -1073741820;
              v88 = -1073741820;
            }
            else
            {
              v5->Relationship = RelationCache;
              v5->Size = v54;
              LOWORD(Size[2]) = Group;
              v5->Processor.Flags = *(_BYTE *)(v42 + 12 * v43 + 34392);
              v5->Processor.EfficiencyClass = *(_BYTE *)(v42 + 12 * v43 + 34393);
              v5->Cache.LineSize = *(_WORD *)(v42 + 12 * v43 + 34394);
              v5->Cache.CacheSize = *(_DWORD *)(v42 + 12 * v43 + 34396);
              v5->Cache.Type = *(_DWORD *)(v42 + 12 * v43 + 34400);
              *(_WORD *)&v5->Group.GroupInfo[0].Reserved[4] = v52;
              *(_OWORD *)&v5->Group.Reserved[8] = 0LL;
              *(_WORD *)&v5->Group.GroupInfo[0].Reserved[2] = 0;
              if ( Group >= *v26 )
                v55 = 0LL;
              else
                v55 = *(_QWORD *)&v26[4 * Group + 4];
              *(_OWORD *)&v5->Group.GroupInfo[0].Reserved[6] = 0LL;
              v5->Cache.GroupMask.Group = Group;
              v5->Cache.GroupMask.Mask = v55;
              v56 = 1;
              v57 = *v26;
              v58 = 0;
              Size[1] = v55;
              if ( v57 )
              {
                do
                {
                  if ( v58 != Group )
                  {
                    LOWORD(Size[2]) = v58;
                    if ( v58 >= v57 )
                    {
                      Size[1] = 0LL;
                    }
                    else
                    {
                      v59 = *(_QWORD *)&v26[4 * v58 + 4];
                      Size[1] = v59;
                      if ( v59 )
                      {
                        v60 = 2LL * v56;
                        v61 = 2 * (v56++ + 3LL);
                        *(_QWORD *)&v5->Group.GroupInfo[0].Reserved[8 * v60 + 14] = 0LL;
                        *((_WORD *)&v5->Relationship + 4 * v61) = v58;
                        *(&v5->Cache.GroupMask.Mask + v60) = v59;
                      }
                    }
                  }
                  v57 = *v26;
                  ++v58;
                }
                while ( v58 < *v26 );
                v23 = ProcessorNumber;
              }
              v5 = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)v5 + v54);
              v7 = 0LL;
            }
          }
          v41 = (_DWORD)v102 + 1;
          LODWORD(v102) = v41;
          if ( v41 >= *(_DWORD *)(v42 + 34452) )
          {
            v4 = RelationshipType;
            goto LABEL_119;
          }
          continue;
        }
      }
      KiCopyAffinityEx((__int64)v26, v26[1], (unsigned __int16 *)(v29 + 38080));
      LODWORD(v102) = 0;
      v89 = 0;
      v39 = KiTryPopulateLogicalProcessorInformation(
              v26,
              v97,
              v23 != 0LL,
              5,
              (__int64)v5,
              v90,
              v10,
              (unsigned int *)&v102,
              &v89);
      v10 += (unsigned int)v102;
      v7 = 0LL;
      if ( v39 >= 0 )
      {
        if ( v89 )
          v5 = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)v5 + v89);
      }
      else
      {
        v9 = v39;
        v88 = v39;
      }
LABEL_119:
      v13 = Size[0];
      ProcessorIndexFromNumber = v91 + 1;
      v91 = ProcessorIndexFromNumber;
      if ( ProcessorIndexFromNumber > (unsigned int)v92 )
      {
        v27 = v94;
        v28 = 0x140000000uLL;
        goto LABEL_121;
      }
    }
    v31 = *(unsigned __int8 *)(v29 + 208);
    v32 = *(_QWORD *)(v29 + 34912);
    LOWORD(Size[2]) = *(unsigned __int8 *)(v29 + 208);
    Size[1] = v32;
    v33 = KeAndGroupAffinityEx((_WORD *)v13, (__int64)&Size[1], 0LL);
    v7 = 0LL;
    if ( !ProcessorNumber && v33 )
      goto LABEL_62;
    v37 = Size[0];
    if ( *(_WORD *)Size[0] <= (unsigned __int16)v31 )
    {
      if ( *(_WORD *)(Size[0] + 2LL) <= (unsigned __int16)v31 )
      {
LABEL_60:
        v38 = *(_QWORD *)(v29 + 200) != v32;
        v10 += 48;
        if ( v10 > v90 )
        {
          v9 = -1073741820;
          v88 = -1073741820;
          goto LABEL_63;
        }
        v5->Relationship = RelationProcessorCore;
        v5->Size = 48;
        v5->Processor.Flags = v38;
        v5->Processor.EfficiencyClass = KiGetProcessorEfficiencyClass(v29, v34, v35, v36);
        v5->Processor.GroupCount = 1;
        *(_OWORD *)((char *)&v5->NumaNode.NodeNumber + 2) = 0LL;
        *(_DWORD *)&v5->Group.Reserved[14] = 0;
        *(_OWORD *)&v5->Group.GroupInfo[0].MaximumProcessorCount = 0LL;
        v5->Processor.GroupMask[0].Group = *(unsigned __int8 *)(v29 + 208);
        v5->Processor.GroupMask[0].Mask = *(_QWORD *)(v29 + 34912);
        v5 = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)v5 + 48);
LABEL_62:
        v9 = v88;
LABEL_63:
        v23 = ProcessorNumber;
        goto LABEL_64;
      }
      *(_WORD *)Size[0] = v31 + 1;
    }
    *(_QWORD *)(v37 + 8 * v31 + 8) |= v32;
    goto LABEL_60;
  }
LABEL_121:
  if ( v4 == RelationNumaNode )
  {
    v62 = (unsigned __int16)KeNumberNodes;
    v63 = (unsigned int)v7;
    v64 = (unsigned int)v27;
    do
    {
      v65 = *(_QWORD *)(v28 + 8LL * v63 + 13932224);
      if ( v23 )
        NodePrimarySubNode = *(_QWORD *)(v65 + 8LL * v23->Group + 24);
      else
        NodePrimarySubNode = KeGetNodePrimarySubNode(v65, v27, v28, v13);
      if ( NodePrimarySubNode )
      {
        KiQuerySubNodeActiveAffinity(NodePrimarySubNode, &Size[1], 0LL, v13);
        v67 = Size[2];
        v27 = 0LL;
        v13 = Size[1];
        if ( !v23
          || (v68 = KiProcessorIndexToNumberMappingTable[v64],
              LOBYTE(v27) = v68 >> 6 == LOWORD(Size[2]),
              ((unsigned int)v27 & (unsigned int)(Size[1] >> (v68 & 0x3F))) != 0) )
        {
          v10 += 48;
          if ( v10 > v90 )
          {
            v9 = -1073741820;
          }
          else
          {
            v5->Size = 48;
            v5->NumaNode.NodeNumber = v63;
            v5->Relationship = RelationNumaNode;
            *(_DWORD *)&v5->Group.Reserved[16] = 0x10000;
            *(_OWORD *)v5->Group.Reserved = 0LL;
            *(_OWORD *)&v5->Group.GroupInfo[0].MaximumProcessorCount = 0LL;
            v5->Processor.GroupMask[0].Group = v67;
            v5->Processor.GroupMask[0].Mask = v13;
            v5 = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)v5 + 48);
          }
        }
        v28 = 0x140000000uLL;
      }
      ++v63;
    }
    while ( v63 < v62 );
LABEL_168:
    if ( !v9 && !v10 )
      v9 = -1073741823;
    goto LABEL_172;
  }
  v69 = (unsigned int)v27;
  if ( v4 == (RelationGroup|RelationCache) || v4 == RelationAll )
  {
    v70 = (unsigned int)v7;
    if ( (unsigned __int16)v7 < (unsigned __int16)KeNumberNodes )
    {
      v71 = ProcessorNumber;
      do
      {
        if ( !v71 || *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[v69] + 192) + 138LL) == v70 )
        {
          KeQueryNodeActiveAffinityEx((unsigned __int16)v70, v26, 0LL, v13);
          v7 = 0LL;
          v72 = 0;
          v73 = 0;
          v13 = *(unsigned __int8 *)(KeNodeBlock[v70] + 12);
          if ( *v26 )
          {
            do
            {
              if ( *(_QWORD *)&v26[4 * v73 + 4] )
                ++v72;
              ++v73;
            }
            while ( v73 < *v26 );
            v71 = ProcessorNumber;
            if ( v72 )
            {
              v74 = (16 * v72 + 39) & 0xFFFFFFF8;
              v10 += v74;
              if ( v10 > v90 )
              {
                v9 = -1073741820;
                v88 = -1073741820;
              }
              else
              {
                v5->Size = v74;
                v5->Relationship = RelationNumaNode;
                v5->NumaNode.NodeNumber = v70;
                v5->Processor.GroupCount = v72;
                *(_OWORD *)v5->Group.Reserved = 0LL;
                *(_WORD *)&v5->Group.Reserved[16] = 0;
                if ( (unsigned __int16)v13 >= *v26 )
                  v75 = 0LL;
                else
                  v75 = *(_QWORD *)&v26[4 * v13 + 4];
                *(_OWORD *)&v5->Group.GroupInfo[0].MaximumProcessorCount = 0LL;
                v5->Processor.GroupMask[0].Mask = v75;
                v5->Processor.GroupMask[0].Group = v13;
                v76 = 0;
                v77 = *v26;
                v78 = 1;
                if ( *v26 )
                {
                  do
                  {
                    if ( v76 != (_WORD)v13 && v76 < v77 )
                    {
                      v79 = *(_QWORD *)&v26[4 * v76 + 4];
                      if ( v79 )
                      {
                        v80 = v78++;
                        v81 = 2 * (v80 + 2);
                        *((_QWORD *)&v5->Processor.Flags + v81) = 0LL;
                        v5->Processor.GroupMask[v80].Group = v76;
                        *((_QWORD *)&v5->Relationship + v81) = v79;
                      }
                    }
                    v77 = *v26;
                    ++v76;
                  }
                  while ( v76 < *v26 );
                  v9 = v88;
                }
                v5 = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)v5 + v74);
                v7 = 0LL;
              }
            }
          }
        }
        ++v70;
      }
      while ( v70 < (unsigned __int16)KeNumberNodes );
      v4 = RelationshipType;
    }
  }
  if ( v4 != RelationGroup && (v4 != RelationAll || ProcessorNumber != v7) )
    goto LABEL_168;
  v82 = (unsigned __int16)KiActiveGroups;
  v83 = (48 * (unsigned __int16)KiActiveGroups + 39) & 0xFFFFFFF8;
  v10 += v83;
  v91 = v10;
  if ( v10 <= v90 )
  {
    v5->Size = v83;
    v84 = (unsigned int)v7;
    v5->Group.MaximumGroupCount = KiMaximumGroups;
    v5->Relationship = RelationGroup;
    v5->Cache.LineSize = v82;
    *(_OWORD *)v5->Group.Reserved = 0LL;
    *(_DWORD *)&v5->Group.Reserved[16] = 0;
    if ( v82 )
    {
      do
      {
        v85 = v84;
        v86 = v84;
        v5->Cache.Reserved[48 * v84 + 12] = KeQueryMaximumProcessorCountEx(v84);
        v5->Cache.Reserved[48 * v84 + 13] = KeQueryActiveProcessorCountEx(v84);
        ++v84;
        v5->Group.GroupInfo[v86].ActiveProcessorMask = qword_140D1EFE8[v85];
        *(_OWORD *)v5->Group.GroupInfo[v86].Reserved = 0LL;
        *(_OWORD *)&v5->Group.GroupInfo[v86].Reserved[16] = 0LL;
        *(_DWORD *)&v5->Group.GroupInfo[v86].Reserved[32] = 0;
        *(_WORD *)&v5->Group.GroupInfo[v86].Reserved[36] = 0;
      }
      while ( v84 < (unsigned __int16)KiActiveGroups );
      v10 = v91;
      v9 = v88;
    }
    goto LABEL_168;
  }
  v9 = -1073741820;
LABEL_172:
  v11 = v95;
  *v103 = v10;
LABEL_173:
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return v9;
}
