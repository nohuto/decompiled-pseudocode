__int64 __fastcall PnpProcessRelation(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        ULONG_PTR BugCheckParameter3)
{
  __int64 v5; // rbx
  unsigned int v7; // esi
  ULONG_PTR v10; // r12
  int v11; // eax
  ULONG_PTR BugCheckParameter4; // r14
  __int64 result; // rax
  int v14; // ecx
  _QWORD *v15; // rcx
  unsigned int v16; // r14d
  ULONG_PTR v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // r12d
  int v21; // ecx
  __int64 v22; // rcx
  _WORD *v23; // rcx
  __int64 v24; // rcx
  unsigned __int16 *v25; // rdi
  _WORD *v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned int v29; // r14d
  ULONG_PTR v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  _WORD *v34; // rcx
  __int64 v35; // rcx
  unsigned __int16 *v36; // rdi
  _WORD *v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 *i; // rsi
  _QWORD *v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  _WORD *v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rsi
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rcx
  _WORD *v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rsi
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // rax
  __int64 v80; // rcx
  __int64 v81; // rcx
  PVOID P[2]; // [rsp+30h] [rbp-38h] BYREF
  int v83; // [rsp+80h] [rbp+18h]

  v83 = a3;
  v5 = 0LL;
  P[0] = 0LL;
  v7 = a3;
  if ( (a2 & 0xFFFFFFFB) != 0 )
  {
    if ( *(_DWORD *)(a1 + 300) == 790 )
      return 0LL;
    goto LABEL_3;
  }
  v21 = *(_DWORD *)(a1 + 300);
  if ( (unsigned int)(v21 - 784) <= 1 || v21 == 790 )
  {
    *(_DWORD *)a4 = 13;
    goto LABEL_154;
  }
  if ( *(int *)(a1 + 656) > 0 || ((v21 - 787) & 0xFFFFFFFD) == 0 )
  {
    *(_DWORD *)a4 = 5;
LABEL_154:
    RtlCopyUnicodeString((PUNICODE_STRING)(a4 + 8), (PCUNICODE_STRING)(a1 + 40));
    return 3221225473LL;
  }
  if ( v21 == 780 || v21 == 781 )
    return 3221225488LL;
LABEL_3:
  v10 = BugCheckParameter3;
  v11 = IopAddRelationToList(BugCheckParameter3, *(_QWORD *)(a1 + 32), a3, 0LL);
  BugCheckParameter4 = v11;
  if ( v11 )
  {
    if ( v11 == -1073741771 )
    {
      LODWORD(BugCheckParameter4) = PnpProcessBusRelations(a1, a2, v7, a4, BugCheckParameter3);
    }
    else if ( v11 != -1073741670 )
    {
      v63 = *(_QWORD *)(a1 + 32);
      if ( v63 )
      {
        IoAddTriageDumpDataBlock(v63, (PVOID)*(unsigned __int16 *)(v63 + 2));
        v64 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL);
        if ( v64 )
        {
          IoAddTriageDumpDataBlock(v64, (PVOID)(unsigned int)*(__int16 *)(v64 + 2));
          v65 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 56LL);
          if ( *v65 )
          {
            IoAddTriageDumpDataBlock((ULONG)v65, (PVOID)2);
            IoAddTriageDumpDataBlock(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 64LL),
              (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 56LL));
          }
        }
        v66 = *(_QWORD *)(a1 + 32);
        if ( v66 )
        {
          v67 = *(_QWORD *)(v66 + 312);
          if ( *(_QWORD *)(v67 + 40) )
          {
            v68 = *(_QWORD *)(v67 + 40);
            IoAddTriageDumpDataBlock(v68, (PVOID)0x388);
            if ( *(_WORD *)(v68 + 40) )
            {
              IoAddTriageDumpDataBlock(v68 + 40, (PVOID)2);
              IoAddTriageDumpDataBlock(*(_QWORD *)(v68 + 48), (PVOID)*(unsigned __int16 *)(v68 + 40));
            }
            v69 = *(_QWORD *)(a1 + 32);
            v70 = v69 + 312;
            if ( v69 )
              v71 = *(_QWORD *)(*(_QWORD *)v70 + 40LL);
            else
              v71 = 0LL;
            if ( *(_WORD *)(v71 + 56) )
            {
              if ( v69 )
                v72 = *(_QWORD *)(*(_QWORD *)v70 + 40LL);
              else
                LODWORD(v72) = 0;
              IoAddTriageDumpDataBlock(v72 + 56, (PVOID)2);
              v73 = *(_QWORD *)(a1 + 32);
              if ( v73 )
              {
                v74 = *(_QWORD *)(*(_QWORD *)(v73 + 312) + 40LL);
                v75 = v74;
              }
              else
              {
                v74 = 0LL;
                v75 = 0LL;
              }
              IoAddTriageDumpDataBlock(*(_QWORD *)(v74 + 64), (PVOID)*(unsigned __int16 *)(v75 + 56));
            }
            v76 = *(_QWORD *)(a1 + 32);
            v77 = v76 + 312;
            if ( v76 )
              v78 = *(_QWORD *)(*(_QWORD *)v77 + 40LL);
            else
              v78 = 0LL;
            if ( *(_QWORD *)(v78 + 16) )
            {
              v79 = v76 ? *(_QWORD *)(*(_QWORD *)v77 + 40LL) : 0LL;
              if ( *(_WORD *)(*(_QWORD *)(v79 + 16) + 56LL) )
              {
                if ( v76 )
                  v80 = *(_QWORD *)(*(_QWORD *)v77 + 40LL);
                else
                  v80 = 0LL;
                IoAddTriageDumpDataBlock(*(_QWORD *)(v80 + 16) + 56, (PVOID)2);
                v81 = *(_QWORD *)(a1 + 32);
                if ( v81 )
                  v5 = *(_QWORD *)(*(_QWORD *)(v81 + 312) + 40LL);
                IoAddTriageDumpDataBlock(
                  *(_QWORD *)(*(_QWORD *)(v5 + 16) + 64LL),
                  (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v5 + 16) + 56LL));
              }
            }
          }
        }
      }
      KeBugCheckEx(0xCAu, 7uLL, *(_QWORD *)(a1 + 32), BugCheckParameter3, BugCheckParameter4);
    }
    return (unsigned int)BugCheckParameter4;
  }
  if ( (*(_DWORD *)(a1 + 396) & 0x80000) != 0 )
  {
    for ( i = (__int64 *)IopPendingEjects; ; i = (__int64 *)*i )
    {
      if ( i == &IopPendingEjects )
        goto LABEL_80;
      v41 = (_QWORD *)i[8];
      if ( v41 )
      {
        if ( (unsigned __int8)PipIsDeviceInDeviceObjectList(*v41, *(_QWORD *)(a1 + 32), 0LL) )
          break;
      }
    }
    if ( a2 == 4 )
    {
      LODWORD(BugCheckParameter4) = IopRemoveRelationFromList(BugCheckParameter3, *(_QWORD *)(a1 + 32));
      IopCancelPendingEject(i);
      IopMergeRelationLists(BugCheckParameter3, i[8], 0LL);
      if ( v83 == 2 )
        IopAddRelationToList(BugCheckParameter3, *(_QWORD *)(a1 + 32), 2LL, 0LL);
LABEL_79:
      if ( i == &IopPendingEjects )
      {
LABEL_80:
        v42 = *(_QWORD *)(a1 + 32);
        if ( v42 )
        {
          IoAddTriageDumpDataBlock(v42, (PVOID)*(unsigned __int16 *)(v42 + 2));
          v43 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL);
          if ( v43 )
          {
            IoAddTriageDumpDataBlock(v43, (PVOID)(unsigned int)*(__int16 *)(v43 + 2));
            v44 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 56LL);
            if ( *v44 )
            {
              IoAddTriageDumpDataBlock((ULONG)v44, (PVOID)2);
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 64LL),
                (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 56LL));
            }
          }
          v45 = *(_QWORD *)(a1 + 32);
          if ( v45 )
          {
            v46 = *(_QWORD *)(v45 + 312);
            if ( *(_QWORD *)(v46 + 40) )
            {
              v47 = *(_QWORD *)(v46 + 40);
              IoAddTriageDumpDataBlock(v47, (PVOID)0x388);
              if ( *(_WORD *)(v47 + 40) )
              {
                IoAddTriageDumpDataBlock(v47 + 40, (PVOID)2);
                IoAddTriageDumpDataBlock(*(_QWORD *)(v47 + 48), (PVOID)*(unsigned __int16 *)(v47 + 40));
              }
              v48 = *(_QWORD *)(a1 + 32);
              v49 = v48 + 312;
              if ( v48 )
                v50 = *(_QWORD *)(*(_QWORD *)v49 + 40LL);
              else
                v50 = 0LL;
              if ( *(_WORD *)(v50 + 56) )
              {
                if ( v48 )
                  v51 = *(_QWORD *)(*(_QWORD *)v49 + 40LL);
                else
                  LODWORD(v51) = 0;
                IoAddTriageDumpDataBlock(v51 + 56, (PVOID)2);
                v52 = *(_QWORD *)(a1 + 32);
                if ( v52 )
                {
                  v53 = *(_QWORD *)(*(_QWORD *)(v52 + 312) + 40LL);
                  v54 = v53;
                }
                else
                {
                  v53 = 0LL;
                  v54 = 0LL;
                }
                IoAddTriageDumpDataBlock(*(_QWORD *)(v53 + 64), (PVOID)*(unsigned __int16 *)(v54 + 56));
              }
              v55 = *(_QWORD *)(a1 + 32);
              v56 = v55 + 312;
              if ( v55 )
                v57 = *(_QWORD *)(*(_QWORD *)v56 + 40LL);
              else
                v57 = 0LL;
              if ( *(_QWORD *)(v57 + 16) )
              {
                v58 = v55 ? *(_QWORD *)(*(_QWORD *)v56 + 40LL) : 0LL;
                if ( *(_WORD *)(*(_QWORD *)(v58 + 16) + 56LL) )
                {
                  if ( v55 )
                    v59 = *(_QWORD *)(*(_QWORD *)v56 + 40LL);
                  else
                    v59 = 0LL;
                  IoAddTriageDumpDataBlock(*(_QWORD *)(v59 + 16) + 56, (PVOID)2);
                  v60 = *(_QWORD *)(a1 + 32);
                  if ( v60 )
                  {
                    v61 = *(_QWORD *)(*(_QWORD *)(v60 + 312) + 40LL);
                    v62 = v61;
                  }
                  else
                  {
                    v61 = 0LL;
                    v62 = 0LL;
                  }
                  IoAddTriageDumpDataBlock(
                    *(_QWORD *)(*(_QWORD *)(v61 + 16) + 64LL),
                    (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v62 + 16) + 56LL));
                }
              }
            }
          }
        }
        KeBugCheckEx(0xCAu, 6uLL, *(_QWORD *)(a1 + 32), 0LL, 0LL);
      }
      return (unsigned int)BugCheckParameter4;
    }
    if ( a2 )
    {
      LODWORD(BugCheckParameter4) = IopRemoveRelationFromList(i[8], *(_QWORD *)(a1 + 32));
      PipClearDevNodeFlags(a1, 0x80000);
      goto LABEL_79;
    }
    return 3221225473LL;
  }
  result = PnpProcessBusRelations(a1, a2, v7, a4, BugCheckParameter3);
  if ( (int)result >= 0 )
  {
    v14 = *(_DWORD *)(a1 + 300);
    if ( (unsigned int)(v14 - 784) <= 1 )
      v14 = *(_DWORD *)(a1 + 304);
    if ( ((unsigned int)(v14 - 777) <= 1 || (unsigned int)(v14 - 780) <= 1)
      && (int)PnpQueryDeviceRelations(*(_QWORD *)(a1 + 32), 3, 0LL, (__int64)P) >= 0 )
    {
      v15 = P[0];
      if ( P[0] )
      {
        v16 = 0;
        if ( *(_DWORD *)P[0] )
        {
          do
          {
            v17 = v15[v16 + 1];
            v18 = *(_QWORD *)(v17 + 312);
            if ( (*(_DWORD *)(v18 + 32) & 2) != 0 || (v19 = *(_QWORD *)(v18 + 40)) == 0 || !*(_QWORD *)(v19 + 16) )
            {
              IoAddTriageDumpDataBlock(v17, (PVOID)*(unsigned __int16 *)(v17 + 2));
              v22 = *(_QWORD *)(v17 + 8);
              if ( v22 )
              {
                IoAddTriageDumpDataBlock(v22, (PVOID)(unsigned int)*(__int16 *)(v22 + 2));
                v23 = (_WORD *)(*(_QWORD *)(v17 + 8) + 56LL);
                if ( *v23 )
                {
                  IoAddTriageDumpDataBlock((ULONG)v23, (PVOID)2);
                  IoAddTriageDumpDataBlock(
                    *(_QWORD *)(*(_QWORD *)(v17 + 8) + 64LL),
                    (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v17 + 8) + 56LL));
                }
              }
              v24 = *(_QWORD *)(*(_QWORD *)(v17 + 312) + 40LL);
              if ( v24 )
              {
                v25 = (unsigned __int16 *)(v24 + 40);
                IoAddTriageDumpDataBlock(v24, (PVOID)0x388);
                if ( *v25 )
                {
                  IoAddTriageDumpDataBlock((ULONG)v25, (PVOID)2);
                  IoAddTriageDumpDataBlock(*((_QWORD *)v25 + 1), (PVOID)*v25);
                }
                v26 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 312) + 40LL) + 56LL);
                if ( *v26 )
                {
                  IoAddTriageDumpDataBlock((ULONG)v26, (PVOID)2);
                  IoAddTriageDumpDataBlock(
                    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 312) + 40LL) + 64LL),
                    (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v17 + 312) + 40LL) + 56LL));
                }
                v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 312) + 40LL) + 16LL);
                if ( v27 && *(_WORD *)(v27 + 56) )
                {
                  IoAddTriageDumpDataBlock(v27 + 56, (PVOID)2);
                  v28 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 312) + 40LL) + 16LL);
                  IoAddTriageDumpDataBlock(*(_QWORD *)(v28 + 64), (PVOID)*(unsigned __int16 *)(v28 + 56));
                }
              }
              KeBugCheckEx(0xCAu, 0xBuLL, v17, 3uLL, 0LL);
            }
            v20 = PnpProcessRelation(v19, a2, 0, a4, v10);
            ObfDereferenceObject((PVOID)v17);
            v15 = P[0];
            if ( v20 < 0 )
              goto LABEL_35;
            v10 = BugCheckParameter3;
          }
          while ( ++v16 < *(_DWORD *)P[0] );
        }
        ExFreePoolWithTag(v15, 0);
      }
    }
    if ( a2 - 5 > 1 )
    {
      if ( a2 )
      {
        if ( (int)PnpQueryDeviceRelations(*(_QWORD *)(a1 + 32), 1, 0LL, (__int64)P) >= 0 )
        {
          v15 = P[0];
          if ( P[0] )
          {
            v29 = 0;
            if ( *(_DWORD *)P[0] )
            {
              while ( 1 )
              {
                v30 = v15[v29 + 1];
                v31 = *(_QWORD *)(v30 + 312);
                if ( (*(_DWORD *)(v31 + 32) & 2) != 0 || (v32 = *(_QWORD *)(v31 + 40)) == 0 || !*(_QWORD *)(v32 + 16) )
                {
                  IoAddTriageDumpDataBlock(v30, (PVOID)*(unsigned __int16 *)(v30 + 2));
                  v33 = *(_QWORD *)(v30 + 8);
                  if ( v33 )
                  {
                    IoAddTriageDumpDataBlock(v33, (PVOID)(unsigned int)*(__int16 *)(v33 + 2));
                    v34 = (_WORD *)(*(_QWORD *)(v30 + 8) + 56LL);
                    if ( *v34 )
                    {
                      IoAddTriageDumpDataBlock((ULONG)v34, (PVOID)2);
                      IoAddTriageDumpDataBlock(
                        *(_QWORD *)(*(_QWORD *)(v30 + 8) + 64LL),
                        (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v30 + 8) + 56LL));
                    }
                  }
                  v35 = *(_QWORD *)(*(_QWORD *)(v30 + 312) + 40LL);
                  if ( v35 )
                  {
                    v36 = (unsigned __int16 *)(v35 + 40);
                    IoAddTriageDumpDataBlock(v35, (PVOID)0x388);
                    if ( *v36 )
                    {
                      IoAddTriageDumpDataBlock((ULONG)v36, (PVOID)2);
                      IoAddTriageDumpDataBlock(*((_QWORD *)v36 + 1), (PVOID)*v36);
                    }
                    v37 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(v30 + 312) + 40LL) + 56LL);
                    if ( *v37 )
                    {
                      IoAddTriageDumpDataBlock((ULONG)v37, (PVOID)2);
                      IoAddTriageDumpDataBlock(
                        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v30 + 312) + 40LL) + 64LL),
                        (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v30 + 312) + 40LL) + 56LL));
                    }
                    v38 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v30 + 312) + 40LL) + 16LL);
                    if ( v38 )
                    {
                      if ( *(_WORD *)(v38 + 56) )
                      {
                        IoAddTriageDumpDataBlock(v38 + 56, (PVOID)2);
                        v39 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v30 + 312) + 40LL) + 16LL);
                        IoAddTriageDumpDataBlock(*(_QWORD *)(v39 + 64), (PVOID)*(unsigned __int16 *)(v39 + 56));
                      }
                    }
                  }
                  KeBugCheckEx(0xCAu, 0xBuLL, v30, 1uLL, 0LL);
                }
                v20 = PnpProcessRelation(v32, a2, 0, a4, v10);
                ObfDereferenceObject((PVOID)v30);
                v15 = P[0];
                if ( v20 < 0 )
                  break;
                v10 = BugCheckParameter3;
                if ( ++v29 >= *(_DWORD *)P[0] )
                  goto LABEL_55;
              }
LABEL_35:
              ExFreePoolWithTag(v15, 0);
              return (unsigned int)v20;
            }
LABEL_55:
            ExFreePoolWithTag(v15, 0);
          }
        }
      }
    }
    result = PnpProcessDependencyRelations(a1, a2, v83 != 0, a4, BugCheckParameter3);
    if ( (int)result >= 0 )
    {
      LODWORD(BugCheckParameter4) = 0;
      return (unsigned int)BugCheckParameter4;
    }
  }
  return result;
}
