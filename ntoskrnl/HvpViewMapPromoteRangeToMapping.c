/*
 * XREFs of HvpViewMapPromoteRangeToMapping @ 0x140779930
 * Callers:
 *     HvpAddBin @ 0x14072F9F0 (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1407A488C (HvpRemapAndEnlistHiveBins.c)
 * Callees:
 *     CmSiReleaseProcessLockedPagesCharge @ 0x14020C564 (CmSiReleaseProcessLockedPagesCharge.c)
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     RtlRbRemoveNode @ 0x14024C010 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x14024D3A0 (RtlRbInsertNodeEx.c)
 *     CmSiGetMemoryAllocationGranularity @ 0x1402B2DDC (CmSiGetMemoryAllocationGranularity.c)
 *     CmSiUnmapViewOfSection @ 0x1402C0A9C (CmSiUnmapViewOfSection.c)
 *     HvcallpNoHypervisorPresent @ 0x1402C0AC0 (HvcallpNoHypervisorPresent.c)
 *     HvpViewMapCreateView @ 0x140730DF8 (HvpViewMapCreateView.c)
 *     HvpViewMapMakeViewRangeValid @ 0x140730EE4 (HvpViewMapMakeViewRangeValid.c)
 *     HvpViewMapMigrateCOWData @ 0x1408807B4 (HvpViewMapMigrateCOWData.c)
 *     HvpViewMapMakeViewRangeInvalid @ 0x140880D20 (HvpViewMapMakeViewRangeInvalid.c)
 */

__int64 __fastcall HvpViewMapPromoteRangeToMapping(__int64 a1, int a2, unsigned int a3, __int64 *a4)
{
  __int64 v4; // r14
  unsigned __int64 v5; // rdi
  __int64 v6; // r12
  __int64 v7; // r13
  bool v8; // zf
  __int64 v9; // rbx
  int v10; // ecx
  unsigned __int64 v11; // rax
  int ViewRangeValid; // esi
  __int64 MemoryAllocationGranularity; // rax
  int v15; // eax
  __int64 v16; // rcx
  PPRIVILEGE_SET v17; // r15
  __int64 v18; // rdx
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // rax
  __int64 i; // rdx
  unsigned __int64 v25; // rdx
  __int64 v26; // r9
  __int64 v27; // rdi
  _QWORD *v28; // rax
  unsigned __int64 v29; // rdx
  bool v30; // r8
  unsigned __int64 v31; // rax
  PPRIVILEGE_SET v32; // rbx
  __int64 v33; // rax
  void *v34; // r8
  __int64 v35; // rax
  __int64 v36; // rcx
  unsigned __int64 v37; // rsi
  unsigned __int64 v38; // rax
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  void *v41; // r8
  __int64 v42; // rax
  __int64 v43; // rdx
  PPRIVILEGE_SET v44; // [rsp+30h] [rbp-20h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+38h] [rbp-18h] BYREF
  PPRIVILEGE_SET *p_Privileges; // [rsp+40h] [rbp-10h]

  v44 = 0LL;
  v4 = a1 + 40;
  v5 = *(_QWORD *)(a1 + 40);
  v6 = (unsigned int)(a2 + 4096);
  v7 = v6 + a3;
  p_Privileges = &Privileges;
  v8 = (*(_BYTE *)(a1 + 48) & 1) == 0;
  Privileges = (PPRIVILEGE_SET)&Privileges;
  v9 = a1;
  if ( !v8 && v5 )
    v5 ^= v4;
  v10 = *(_BYTE *)(a1 + 48) & 1;
  while ( v5 )
  {
    if ( v6 >= *(_QWORD *)(v5 + 40) )
    {
      if ( v6 < *(_QWORD *)(v5 + 48) )
        break;
      v11 = *(_QWORD *)(v5 + 8);
    }
    else
    {
      v11 = *(_QWORD *)v5;
    }
    if ( v10 && v11 )
      v5 ^= v11;
    else
      v5 = v11;
  }
  if ( *(_QWORD *)(v5 + 48) >= v7 )
  {
    *a4 = v6 + *(_QWORD *)(v5 + 56) - *(_QWORD *)(v5 + 24);
    return 0;
  }
  MemoryAllocationGranularity = CmSiGetMemoryAllocationGranularity();
  v15 = HvpViewMapCreateView(v9, (LARGE_INTEGER)(v6 & -MemoryAllocationGranularity), v7, &v44);
  v17 = v44;
  ViewRangeValid = v15;
  if ( v15 >= 0 )
  {
    ViewRangeValid = HvpViewMapMakeViewRangeValid(v9, v44, v6, v7, 0);
    if ( ViewRangeValid >= 0 )
    {
      v18 = v6;
      if ( v6 < (unsigned __int64)v7 )
      {
        do
        {
          v19 = *(_QWORD *)v4;
          if ( (*(_BYTE *)(v4 + 8) & 1) != 0 && v19 )
            v19 ^= v4;
          while ( v19 )
          {
            if ( v18 >= *(_QWORD *)(v19 + 40) )
            {
              if ( v18 < *(_QWORD *)(v19 + 48) )
                break;
              v20 = *(_QWORD *)(v19 + 8);
            }
            else
            {
              v20 = *(_QWORD *)v19;
            }
            if ( (*(_BYTE *)(v4 + 8) & 1) != 0 && v20 )
              v19 ^= v20;
            else
              v19 = v20;
          }
          ViewRangeValid = HvpViewMapMigrateCOWData(a1, v17, v19);
          if ( ViewRangeValid < 0 )
            goto LABEL_76;
          v18 = *(_QWORD *)(v19 + 48);
        }
        while ( v18 < v7 );
      }
      v21 = v7 - 1;
      v22 = *(_QWORD *)v4;
      if ( (*(_BYTE *)(v4 + 8) & 1) != 0 && v22 )
        v22 ^= v4;
      while ( v22 )
      {
        if ( v21 >= *(_QWORD *)(v22 + 40) )
        {
          if ( v21 < *(_QWORD *)(v22 + 48) )
            break;
          v23 = *(_QWORD *)(v22 + 8);
        }
        else
        {
          v23 = *(_QWORD *)v22;
        }
        if ( (*(_BYTE *)(v4 + 8) & 1) != 0 && v23 )
          v22 ^= v23;
        else
          v22 = v23;
      }
      for ( i = *(_QWORD *)(v5 + 48); i < *(_QWORD *)(v22 + 40); i = *(_QWORD *)(v37 + 48) )
      {
        v37 = *(_QWORD *)v4;
        if ( (*(_BYTE *)(v4 + 8) & 1) != 0 && v37 )
          v37 ^= v4;
        while ( v37 )
        {
          if ( i >= *(_QWORD *)(v37 + 40) )
          {
            if ( i < *(_QWORD *)(v37 + 48) )
              break;
            v38 = *(_QWORD *)(v37 + 8);
          }
          else
          {
            v38 = *(_QWORD *)v37;
          }
          if ( (*(_BYTE *)(v4 + 8) & 1) != 0 && v38 )
            v37 ^= v38;
          else
            v37 = v38;
        }
        RtlRbRemoveNode((unsigned __int64 *)v4, v37);
        v39 = p_Privileges;
        if ( *p_Privileges != (PPRIVILEGE_SET)&Privileges )
          goto LABEL_103;
        *(_QWORD *)(v37 + 8) = p_Privileges;
        *(_QWORD *)v37 = &Privileges;
        *v39 = v37;
        p_Privileges = (PPRIVILEGE_SET *)v37;
      }
      v25 = v5;
      if ( *(_QWORD *)(v5 + 40) == v6 )
      {
        RtlRbRemoveNode((unsigned __int64 *)v4, v5);
        v40 = p_Privileges;
        if ( *p_Privileges != (PPRIVILEGE_SET)&Privileges )
          goto LABEL_103;
        *(_QWORD *)(v5 + 8) = p_Privileges;
        *(_QWORD *)v5 = &Privileges;
        *v40 = v5;
        p_Privileges = (PPRIVILEGE_SET *)v5;
        v27 = a1;
      }
      else
      {
        v26 = *(_QWORD *)(v5 + 48);
        v27 = a1;
        HvpViewMapMakeViewRangeInvalid(a1, v25, v6, v26);
      }
      if ( *(_QWORD *)(v22 + 48) == v7 )
      {
        RtlRbRemoveNode((unsigned __int64 *)v4, v22);
        v28 = p_Privileges;
        if ( *p_Privileges != (PPRIVILEGE_SET)&Privileges )
          goto LABEL_103;
        *(_QWORD *)(v22 + 8) = p_Privileges;
        *(_QWORD *)v22 = &Privileges;
        *v28 = v22;
        p_Privileges = (PPRIVILEGE_SET *)v22;
      }
      else
      {
        HvpViewMapMakeViewRangeInvalid(v27, v22, *(_QWORD *)(v22 + 40), v7);
      }
      v29 = *(_QWORD *)v4;
      if ( (*(_BYTE *)(v4 + 8) & 1) != 0 && v29 )
        v29 ^= v4;
      v30 = 0;
      if ( v29 )
      {
        while ( 1 )
        {
          if ( *(_QWORD *)&v17[2].PrivilegeCount >= *(_QWORD *)(v29 + 40) )
          {
            v31 = *(_QWORD *)(v29 + 8);
            if ( (*(_BYTE *)(v4 + 8) & 1) != 0 )
            {
              if ( !v31 )
                goto LABEL_102;
              v31 ^= v29;
            }
            if ( !v31 )
            {
LABEL_102:
              v30 = 1;
              break;
            }
          }
          else
          {
            v31 = *(_QWORD *)v29;
            if ( (*(_BYTE *)(v4 + 8) & 1) != 0 )
            {
              if ( !v31 )
                goto LABEL_101;
              v31 ^= v29;
            }
            if ( !v31 )
            {
LABEL_101:
              v30 = 0;
              break;
            }
          }
          v29 = v31;
        }
      }
      RtlRbInsertNodeEx((unsigned __int64 *)v4, v29, v30, (unsigned __int64)v17);
      v32 = Privileges;
      v33 = *(_QWORD *)&Privileges->PrivilegeCount;
      if ( (PPRIVILEGE_SET *)Privileges->Privilege[0].Luid == &Privileges )
      {
        while ( 1 )
        {
          if ( *(PPRIVILEGE_SET *)(v33 + 8) != v32 )
            goto LABEL_103;
          Privileges = (PPRIVILEGE_SET)v33;
          *(_QWORD *)(v33 + 8) = &Privileges;
          if ( v32 == (PPRIVILEGE_SET)&Privileges )
            break;
          v34 = *(void **)&v32[2].Privilege[0].Attributes;
          if ( v34 )
          {
            CmSiUnmapViewOfSection((__int64)&Privileges, *(HANDLE **)(v27 + 24), v34);
            if ( *(_QWORD *)&v32[3].Control )
            {
              v35 = HvcallpNoHypervisorPresent();
              CmSiReleaseProcessLockedPagesCharge(*(_QWORD **)(v27 + 24), v36 * v35);
            }
          }
          CmSiFreeMemory(v32);
          v32 = Privileges;
          if ( (PPRIVILEGE_SET *)Privileges->Privilege[0].Luid != &Privileges )
            goto LABEL_103;
          v33 = *(_QWORD *)&Privileges->PrivilegeCount;
        }
        ViewRangeValid = 0;
        v16 = v6 + *(_QWORD *)&v17[2].Privilege[0].Attributes - *(_QWORD *)&v17[1].Control;
        v17 = 0LL;
        *a4 = v16;
LABEL_76:
        v9 = a1;
        goto LABEL_77;
      }
LABEL_103:
      __fastfail(3u);
    }
  }
LABEL_77:
  if ( v17 )
  {
    v41 = *(void **)&v17[2].Privilege[0].Attributes;
    if ( v41 )
    {
      CmSiUnmapViewOfSection(v16, *(HANDLE **)(v9 + 24), v41);
      if ( *(_QWORD *)&v17[3].Control )
      {
        v42 = HvcallpNoHypervisorPresent();
        CmSiReleaseProcessLockedPagesCharge(*(_QWORD **)(v9 + 24), v42 * v43);
      }
    }
    CmSiFreeMemory(v17);
  }
  return (unsigned int)ViewRangeValid;
}
