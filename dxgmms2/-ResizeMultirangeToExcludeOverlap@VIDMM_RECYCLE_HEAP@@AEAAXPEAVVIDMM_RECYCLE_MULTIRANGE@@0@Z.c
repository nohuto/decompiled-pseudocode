// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_RECYCLE_HEAP::ResizeMultirangeToExcludeOverlap(
        VIDMM_RECYCLE_HEAP *this,
        struct VIDMM_RECYCLE_MULTIRANGE *a2,
        struct VIDMM_RECYCLE_MULTIRANGE *a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // r15
  unsigned __int64 v7; // rbp
  unsigned __int64 v9; // rsi
  __int64 v10; // r14
  char *v11; // rcx
  unsigned __int64 v12; // r10
  _QWORD *v13; // rcx
  _QWORD *v14; // r11
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  int v17; // r8d
  __int64 v18; // r8
  __int64 v19; // rax
  struct _RTL_BALANCED_NODE *v20; // rbx
  struct _RTL_BALANCED_NODE *v21; // rax
  int v22; // r8d
  struct _RTL_BALANCED_NODE *v23; // rax
  char *v24; // rcx
  struct VIDMM_RECYCLE_RANGE *i; // rdx
  int v26; // ecx
  int v27; // ecx
  __int64 v28; // rbx
  struct VIDMM_RECYCLE_RANGE *NextRange; // rax
  struct VIDMM_RECYCLE_RANGE *v30; // r12
  struct VIDMM_RECYCLE_RANGE *v31; // r15
  VIDMM_RECYCLE_MULTIRANGE *Multirange; // rax
  __int64 v33; // rbx
  struct _RTL_BALANCED_NODE *v34; // rax
  int v35; // ecx
  int v36; // ecx
  __int64 v37; // rdx
  _QWORD v38[2]; // [rsp+30h] [rbp-48h] BYREF
  char v39; // [rsp+40h] [rbp-38h]

  v3 = *((_QWORD *)a2 + 4);
  v5 = *((_QWORD *)a2 + 5);
  v7 = *((_QWORD *)a3 + 4);
  v9 = *((_QWORD *)a3 + 5);
  v10 = *((int *)a2 + 22);
  WdLogSingleEntry2(4LL, a2, v10);
  switch ( (_DWORD)v10 )
  {
    case 0:
      v11 = (char *)this + 48;
      goto LABEL_5;
    case 1:
      v11 = (char *)this + 56;
      goto LABEL_5;
    case 2:
      v11 = (char *)this + 64;
LABEL_5:
      RtlAvlRemoveNode(v11, a2);
      goto LABEL_6;
  }
  g_DxgMmsBugcheckExportIndex = 1;
  WdLogSingleEntry5(0LL, 270LL, 52LL, 16LL, v10, 0LL);
LABEL_6:
  *((_DWORD *)a2 + 22) = 3;
  if ( v7 > v3 )
  {
    if ( v9 >= v5 )
    {
      VIDMM_RECYCLE_MULTIRANGE::ShrinkTo(a2, *((_QWORD *)a2 + 4), v7);
      VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, v10, (__int64)a2);
      return;
    }
    v28 = *((_QWORD *)a2 + 5);
    NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(*((VIDMM_RECYCLE_RANGE **)a3 + 9));
    v30 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 9);
    v31 = NextRange;
    VIDMM_RECYCLE_MULTIRANGE::ShrinkTo(a2, *((_QWORD *)a2 + 4), v7);
    VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, v10, (__int64)a2);
    Multirange = (VIDMM_RECYCLE_MULTIRANGE *)VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                                               *((_QWORD *)this + 1),
                                               *((_DWORD *)a2 + 54),
                                               *((_QWORD *)a2 + 10),
                                               v9,
                                               v28);
    v33 = (__int64)Multirange;
    if ( Multirange )
    {
      *((_QWORD *)Multirange + 8) = v31;
      *((_QWORD *)Multirange + 9) = v30;
      VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner(Multirange);
      VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, v10, v33);
      return;
    }
    while ( 1 )
    {
      v35 = *((_DWORD *)v31 + 16);
      if ( v35 )
      {
        v36 = v35 - 4;
        if ( v36 )
        {
          if ( v36 != 1 )
            goto LABEL_80;
          v37 = 1LL;
        }
        else
        {
          v37 = 0LL;
        }
      }
      else
      {
        v37 = 2LL;
      }
      VIDMM_RECYCLE_HEAP::AddRangeToTree(this, v37, v31);
LABEL_80:
      if ( v31 == v30 )
        return;
      v31 = VIDMM_RECYCLE_RANGE::GetNextRange(v31);
    }
  }
  if ( v9 >= v5 )
  {
    for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 8); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
    {
      v26 = *((_DWORD *)a2 + 54);
      if ( v26 )
      {
        v27 = v26 - 1;
        if ( v27 )
        {
          if ( v27 == 1 )
            *((_QWORD *)i + 19) = 0LL;
        }
        else
        {
          *((_QWORD *)i + 18) = 0LL;
        }
      }
      else
      {
        *((_QWORD *)i + 17) = 0LL;
      }
      if ( i == *((struct VIDMM_RECYCLE_RANGE **)a2 + 9) )
        break;
    }
    VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*((VIDMM_RECYCLE_HEAP_MGR **)this + 1), a2);
    return;
  }
  v12 = *((_QWORD *)a2 + 5);
  v13 = (_QWORD *)*((_QWORD *)a2 + 8);
  v14 = (_QWORD *)*((_QWORD *)a2 + 9);
  while ( 1 )
  {
    v15 = v13[4];
    if ( v15 >= v12 || v13[5] <= v9 )
    {
      v17 = *((_DWORD *)a2 + 54);
      if ( v17 )
      {
        v22 = v17 - 1;
        if ( v22 )
        {
          if ( v22 == 1 )
            v13[19] = 0LL;
        }
        else
        {
          v13[18] = 0LL;
        }
      }
      else
      {
        v13[17] = 0LL;
      }
    }
    if ( v15 == v9 )
      *((_QWORD *)a2 + 8) = v13;
    if ( v13[5] == v12 )
      *((_QWORD *)a2 + 9) = v13;
    if ( v13 == v14 )
      break;
    v16 = v13[15];
    if ( v16 == v13[9] + 72LL )
      v13 = 0LL;
    else
      v13 = (_QWORD *)(v16 - 120);
  }
  *((_QWORD *)a2 + 4) = v9;
  *((_QWORD *)a2 + 5) = v12;
  *((_QWORD *)a2 + 6) = v9;
  WdLogSingleEntry2(4LL, a2, v10);
  v19 = *((_QWORD *)a2 + 7);
  v38[0] = *((_QWORD *)a2 + 5) - *((_QWORD *)a2 + 4);
  v38[1] = v19;
  v39 = 0;
  if ( !(_DWORD)v10 )
  {
    v20 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 6);
    LOBYTE(v18) = 0;
    if ( v20 )
    {
      while ( 1 )
      {
        if ( (int)VidMmCompareForInsertAlignedRange(v38, v20) < 0 )
        {
          v34 = v20->Children[0];
          if ( !v20->Children[0] )
          {
            LOBYTE(v18) = 0;
            break;
          }
        }
        else
        {
          v34 = v20->Children[1];
          if ( !v34 )
          {
            LOBYTE(v18) = 1;
            break;
          }
        }
        v20 = v34;
      }
    }
    v24 = (char *)this + 48;
    goto LABEL_40;
  }
  if ( (_DWORD)v10 == 1 )
  {
    v20 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 7);
    LOBYTE(v18) = 0;
    if ( v20 )
    {
      while ( 1 )
      {
        if ( (int)VidMmCompareForInsertAlignedRange(v38, v20) < 0 )
        {
          v23 = v20->Children[0];
          if ( !v20->Children[0] )
          {
            LOBYTE(v18) = 0;
            break;
          }
        }
        else
        {
          v23 = v20->Children[1];
          if ( !v23 )
          {
            LOBYTE(v18) = 1;
            break;
          }
        }
        v20 = v23;
      }
    }
    v24 = (char *)this + 56;
    goto LABEL_40;
  }
  if ( (_DWORD)v10 != 2 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 52LL, 15LL, v10, 0LL);
    goto LABEL_41;
  }
  v20 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 8);
  LOBYTE(v18) = 0;
  if ( !v20 )
    goto LABEL_39;
  while ( (int)VidMmCompareForInsertAlignedRange(v38, v20) < 0 )
  {
    v21 = v20->Children[0];
    if ( !v20->Children[0] )
    {
      LOBYTE(v18) = 0;
      goto LABEL_39;
    }
LABEL_26:
    v20 = v21;
  }
  v21 = v20->Children[1];
  if ( v21 )
    goto LABEL_26;
  LOBYTE(v18) = 1;
LABEL_39:
  v24 = (char *)this + 64;
LABEL_40:
  RtlAvlInsertNodeEx(v24, v20, v18, a2);
LABEL_41:
  *((_DWORD *)a2 + 22) = v10;
}
