__int64 __fastcall HvpViewMapCreateViewsForRegion(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  PPRIVILEGE_SET v4; // rbx
  __int64 MemoryAllocationGranularity; // rax
  PPRIVILEGE_SET v9; // r9
  PPRIVILEGE_SET *v10; // rcx
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // r10
  __int64 v16; // rax
  __int64 j; // r8
  __int64 k; // rdx
  __int64 v19; // rdi
  __int64 v20; // rdi
  int v21; // ebx
  int ViewRangeValid; // esi
  int v23; // r9d
  PPRIVILEGE_SET *v24; // rax
  PPRIVILEGE_SET v25; // rax
  unsigned __int64 *v26; // rdi
  unsigned __int64 v27; // rdx
  bool v28; // r8
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  PPRIVILEGE_SET v31; // rbx
  void *v33; // r8
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  void *v37; // r8
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 i; // [rsp+30h] [rbp-20h]
  PPRIVILEGE_SET v41; // [rsp+38h] [rbp-18h] BYREF
  PPRIVILEGE_SET *v42; // [rsp+40h] [rbp-10h]
  PPRIVILEGE_SET Privileges; // [rsp+98h] [rbp+48h] BYREF
  PPRIVILEGE_SET *v44; // [rsp+A0h] [rbp+50h]
  char v45; // [rsp+A8h] [rbp+58h]

  v45 = a4;
  v4 = 0LL;
  Privileges = 0LL;
  v42 = &v41;
  v41 = (PPRIVILEGE_SET)&v41;
  MemoryAllocationGranularity = CmSiGetMemoryAllocationGranularity();
  v44 = (PPRIVILEGE_SET *)MemoryAllocationGranularity;
  v10 = (PPRIVILEGE_SET *)MemoryAllocationGranularity;
  v11 = 0x200000LL;
  if ( v12 < v13 )
  {
    v14 = -MemoryAllocationGranularity;
    for ( i = v14; ; v14 = i )
    {
      v15 = a2 & v14;
      v16 = a3 - v15;
      if ( v11 <= a3 - v15 )
      {
        v20 = v11 + v15;
        v21 = v11 + v15;
      }
      else
      {
        for ( j = (__int64)v10; j < v16; j *= 2LL )
          ;
        for ( k = 2 * j; v15 + k - a3 <= a3 / 8; k *= 2LL )
          j = k;
        v19 = v11;
        if ( j < v11 )
          v19 = j;
        v20 = v15 + v19;
        if ( (*(_DWORD *)(a1 + 32) & 1) != 0 && v20 >= *(_QWORD *)(a1 + 16) )
          v20 = *(_QWORD *)(a1 + 16);
        v21 = a3;
      }
      ViewRangeValid = HvpViewMapCreateView(a1, v15, v20, &Privileges);
      if ( ViewRangeValid < 0 )
      {
        v10 = v44;
        v4 = Privileges;
        if ( v11 <= (__int64)v44 )
          goto LABEL_41;
        v11 /= 2LL;
      }
      else
      {
        v23 = v21;
        v4 = Privileges;
        ViewRangeValid = HvpViewMapMakeViewRangeValid(a1, (_DWORD)Privileges, a2, v23, v45);
        if ( ViewRangeValid < 0 )
          goto LABEL_41;
        v24 = v42;
        if ( *v42 != (PPRIVILEGE_SET)&v41 )
          goto LABEL_58;
        v4->Privilege[0].Luid = (LUID)v42;
        *(_QWORD *)&v4->PrivilegeCount = &v41;
        a2 = v20;
        v10 = v44;
        *v24 = v4;
        v42 = (PPRIVILEGE_SET *)v4;
        v4 = 0LL;
        Privileges = 0LL;
      }
      if ( a2 >= a3 )
        break;
    }
    v9 = v41;
  }
  v25 = *(PPRIVILEGE_SET *)&v9->PrivilegeCount;
  if ( (PPRIVILEGE_SET *)v9->Privilege[0].Luid != &v41 || (PPRIVILEGE_SET)v25->Privilege[0].Luid != v9 )
LABEL_58:
    __fastfail(3u);
  v41 = *(PPRIVILEGE_SET *)&v9->PrivilegeCount;
  v10 = &v41;
  v25->Privilege[0].Luid = (LUID)&v41;
  if ( v9 != (PPRIVILEGE_SET)&v41 )
  {
    v26 = (unsigned __int64 *)(a1 + 40);
    v4 = 0LL;
    do
    {
      v27 = *v26;
      if ( (*(_BYTE *)(a1 + 48) & 1) != 0 && v27 )
        v27 ^= (unsigned __int64)v26;
      v28 = 0;
      if ( v27 )
      {
        while ( 1 )
        {
          if ( *(_QWORD *)&v9[2].PrivilegeCount >= *(_QWORD *)(v27 + 40) )
          {
            v29 = *(_QWORD *)(v27 + 8);
            if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
            {
              if ( !v29 )
                goto LABEL_36;
              v29 ^= v27;
            }
            if ( !v29 )
            {
LABEL_36:
              v28 = 1;
              break;
            }
          }
          else
          {
            v29 = *(_QWORD *)v27;
            if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
            {
              if ( !v29 )
                goto LABEL_44;
              v29 ^= v27;
            }
            if ( !v29 )
            {
LABEL_44:
              v28 = 0;
              break;
            }
          }
          v27 = v29;
        }
      }
      RtlRbInsertNodeEx((unsigned __int64 *)(a1 + 40), v27, v28, (unsigned __int64)v9);
      v9 = v41;
      if ( (PPRIVILEGE_SET *)v41->Privilege[0].Luid != &v41 )
        goto LABEL_58;
      v30 = *(_QWORD *)&v41->PrivilegeCount;
      if ( *(PPRIVILEGE_SET *)(*(_QWORD *)&v41->PrivilegeCount + 8LL) != v41 )
        goto LABEL_58;
      v41 = *(PPRIVILEGE_SET *)&v41->PrivilegeCount;
      v10 = &v41;
      *(_QWORD *)(v30 + 8) = &v41;
    }
    while ( v9 != (PPRIVILEGE_SET)&v41 );
  }
  ViewRangeValid = 0;
LABEL_41:
  if ( v4 )
  {
    v33 = *(void **)&v4[2].Privilege[0].Attributes;
    if ( v33 )
    {
      CmSiUnmapViewOfSection((__int64)v10, *(HANDLE **)(a1 + 24), v33);
      if ( *(_QWORD *)&v4[3].Control )
      {
        v34 = HvcallpNoHypervisorPresent();
        CmSiReleaseProcessLockedPagesCharge(*(_QWORD **)(a1 + 24), v35 * v34);
      }
    }
    CmSiFreeMemory(v4);
  }
  v31 = v41;
  if ( v41 != (PPRIVILEGE_SET)&v41 )
  {
    v36 = *(_QWORD *)&v41->PrivilegeCount;
    if ( (PPRIVILEGE_SET *)v41->Privilege[0].Luid == &v41 )
    {
      while ( *(PPRIVILEGE_SET *)(v36 + 8) == v31 )
      {
        v41 = (PPRIVILEGE_SET)v36;
        *(_QWORD *)(v36 + 8) = &v41;
        if ( v31 == (PPRIVILEGE_SET)&v41 )
          return (unsigned int)ViewRangeValid;
        v37 = *(void **)&v31[2].Privilege[0].Attributes;
        if ( v37 )
        {
          CmSiUnmapViewOfSection((__int64)&v41, *(HANDLE **)(a1 + 24), v37);
          if ( *(_QWORD *)&v31[3].Control )
          {
            v38 = HvcallpNoHypervisorPresent();
            CmSiReleaseProcessLockedPagesCharge(*(_QWORD **)(a1 + 24), v39 * v38);
          }
        }
        CmSiFreeMemory(v31);
        v31 = v41;
        if ( (PPRIVILEGE_SET *)v41->Privilege[0].Luid != &v41 )
          break;
        v36 = *(_QWORD *)&v41->PrivilegeCount;
      }
    }
    goto LABEL_58;
  }
  return (unsigned int)ViewRangeValid;
}
