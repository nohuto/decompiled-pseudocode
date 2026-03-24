/*
 * XREFs of ?VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@IEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0@@_K1_NPEAU_VIDMM_VERIFY_SUPPORTED_SEGMENT@@@Z @ 0x1C00849E0
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEAVDXGADAPTERALLOCATION@@PEAX6KE6EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005D110 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_UPDATEALLOCPROPERTY@@PEA_K@Z @ 0x1C00B35A4 (-UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA.c)
 * Callees:
 *     ?VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C008C2C0 (-VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z.c)
 */

unsigned __int8 __fastcall VIDMM_GLOBAL::VerifySupportedSegmentSetAndAdjustFlags(
        VIDMM_GLOBAL *this,
        __int64 a2,
        __int64 a3,
        struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0 *a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        bool a7,
        struct _VIDMM_VERIFY_SUPPORTED_SEGMENT *a8)
{
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // r13
  __int64 v12; // rax
  unsigned __int8 result; // al
  unsigned int v14; // r9d
  unsigned int v15; // r10d
  int v16; // r15d
  int v17; // r11d
  int v18; // edi
  char v19; // bp
  unsigned __int8 v20; // r12
  struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0 *v21; // r11
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // r9
  __int64 v30; // r10
  __int64 v31; // rdx
  __int64 v32; // r8
  unsigned int v33; // r9d
  struct _VIDMM_VERIFY_SUPPORTED_SEGMENT *v34; // r9
  __int64 Value; // rdx
  __int64 v36; // [rsp+70h] [rbp+8h]
  unsigned int v37; // [rsp+78h] [rbp+10h]

  v37 = a2;
  v9 = *((_QWORD *)this + 5027);
  v10 = a3;
  v36 = 1584LL * (unsigned int)a2;
  v11 = v9 + v36;
  if ( (~*(_DWORD *)(v9 + v36 + 16) & (unsigned int)a3) != 0 )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9, a2, a3);
    *(_QWORD *)(v12 + 24) = 12143LL;
    WdLogEvent5_WdAssertion(v12);
    return 0;
  }
  v14 = *(_DWORD *)(v11 + 20);
  v15 = v14;
  v16 = 0;
  v17 = 0;
  v18 = 1;
  if ( (~*(_DWORD *)(v9 + 16) & (unsigned int)a3) != 0 )
  {
    v19 = 0;
  }
  else
  {
    if ( !(_DWORD)a3 )
      goto LABEL_13;
    LODWORD(a2) = 1;
    do
    {
      if ( (a3 & 1) != 0 )
      {
        v9 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v15);
        if ( (*(_DWORD *)(v9 + 80) & 0x1001) == 0 )
          v17 |= a2;
      }
      a2 = (unsigned int)__ROL4__(a2, 1);
      ++v15;
      a3 = (unsigned int)a3 >> 1;
    }
    while ( (_DWORD)a3 );
    if ( v17 )
      v19 = 0;
    else
LABEL_13:
      v19 = 1;
  }
  if ( v10 )
  {
    a2 = v10;
    while ( 1 )
    {
      if ( (a2 & 1) != 0 )
      {
        v9 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v14);
        if ( (*(_DWORD *)(v9 + 80) & 0x1001) != 0 )
          break;
      }
      ++v14;
      a2 = (unsigned int)a2 >> 1;
      if ( !(_DWORD)a2 )
        goto LABEL_19;
    }
    v20 = 1;
  }
  else
  {
LABEL_19:
    v20 = 0;
  }
  v21 = a4;
  if ( (a4->Value & 0x40000) != 0 && !v19 )
  {
    v22 = WdLogNewEntry5_WdAssertion(v9, a2, a3);
    *(_QWORD *)(v22 + 24) = 12157LL;
    WdLogEvent5_WdAssertion(v22);
    return 0;
  }
  if ( (a4->Value & 0x20000) != 0 )
  {
    if ( VIDMM_GLOBAL::VerifySegmentSet(this, v37, v10, 0x10000u, 0LL) )
    {
      if ( v20 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v9, v23, v24);
        *(_QWORD *)(v26 + 24) = 12204LL;
        goto LABEL_80;
      }
      v27 = *(unsigned int *)(v11 + 20);
      v28 = v10;
      if ( v10 )
      {
        do
        {
          if ( (v28 & 1) != 0 )
          {
            v9 = (unsigned int)v27;
            v29 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * (unsigned int)v27);
            if ( a5 > *(_QWORD *)(v29 + 392) )
            {
              v26 = WdLogNewEntry5_WdAssertion((unsigned int)v27, v28, v27);
              *(_QWORD *)(v26 + 24) = 12217LL;
              goto LABEL_80;
            }
            if ( (*(_DWORD *)(v29 + 80) & 0x20) != 0 )
            {
              v26 = WdLogNewEntry5_WdAssertion((unsigned int)v27, v28, v27);
              *(_QWORD *)(v26 + 24) = 12222LL;
              goto LABEL_80;
            }
          }
          v27 = (unsigned int)(v27 + 1);
          v28 = (unsigned int)v28 >> 1;
        }
        while ( (_DWORD)v28 );
      }
      v21 = a4;
    }
    else
    {
      v25 = *((_QWORD *)this + 3);
      v9 = *(unsigned int *)(*(_QWORD *)(v25 + 2584) + 360LL * v37 + 16);
      if ( (v9 & 0x10) == 0 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v9, v25, v24);
        *(_QWORD *)(v26 + 24) = 12196LL;
        goto LABEL_80;
      }
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v9);
        v25 = *((_QWORD *)this + 3);
      }
      v21 = a4;
      if ( *(_DWORD *)(v25 + 324) != 1297040209 )
        a4->Value &= ~0x20000u;
    }
  }
  v30 = *((_QWORD *)this + 5027);
  v31 = v10;
  v32 = *(unsigned int *)(v30 + v36 + 20);
  v33 = *(_DWORD *)(v30 + v36 + 20);
  if ( (~*(_DWORD *)(v30 + v36 + 16) & v10) != 0 || !v10 )
  {
LABEL_45:
    v34 = a8;
    *(_DWORD *)a8 &= ~4u;
  }
  else
  {
    while ( 1 )
    {
      if ( (v31 & 1) != 0 )
      {
        v9 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v33);
        if ( (*(_DWORD *)(v9 + 80) & 0x20) != 0 )
          break;
      }
      ++v33;
      v31 = (unsigned int)v31 >> 1;
      if ( !(_DWORD)v31 )
        goto LABEL_45;
    }
    if ( !a6 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v9, v31, v32);
      *(_QWORD *)(v26 + 24) = 12244LL;
LABEL_80:
      WdLogEvent5_WdAssertion(v26);
      return 0;
    }
    if ( a6 < a5 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v9, v31, v32);
      *(_QWORD *)(v26 + 24) = 12250LL;
      goto LABEL_80;
    }
    v34 = a8;
    *(_DWORD *)a8 |= 4u;
  }
  Value = v21->Value;
  if ( (Value & 4) != 0 && (Value & 0x800000) == 0 )
  {
    if ( *((_BYTE *)this + 7081) )
    {
      if ( (~*(_DWORD *)(v30 + 16) & v10) != 0 )
        goto LABEL_56;
      if ( v10 )
      {
        do
        {
          if ( (v10 & 1) != 0 )
          {
            v9 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * (unsigned int)v32);
            if ( (*(_DWORD *)(v9 + 80) & 0x10) == 0 )
              v16 |= v18;
          }
          v18 = __ROL4__(v18, 1);
          v32 = (unsigned int)(v32 + 1);
          v10 >>= 1;
        }
        while ( v10 );
        if ( v16 )
        {
LABEL_56:
          v26 = WdLogNewEntry5_WdAssertion(v9, Value, v32);
          *(_QWORD *)(v26 + 24) = 12280LL;
          goto LABEL_80;
        }
      }
    }
    else
    {
      v9 = *(unsigned int *)(*((_QWORD *)this + 3) + 348LL);
      if ( (v9 & 8) == 0 && !v19 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v9, Value, v32);
        *(_QWORD *)(v26 + 24) = 12287LL;
        goto LABEL_80;
      }
    }
  }
  if ( (Value & 0x20000001) == 0x20000001 && !v19 )
  {
    v26 = WdLogNewEntry5_WdAssertion(v9, Value, v32);
    *(_QWORD *)(v26 + 24) = 12298LL;
    goto LABEL_80;
  }
  if ( (Value & 0x100000) != 0 && !v19 )
  {
    v26 = WdLogNewEntry5_WdAssertion(v9, Value, v32);
    *(_QWORD *)(v26 + 24) = 12305LL;
    goto LABEL_80;
  }
  if ( (Value & 0x4000) != 0 && !v19 )
  {
    v26 = WdLogNewEntry5_WdAssertion(v9, Value, v32);
    *(_QWORD *)(v26 + 24) = 12312LL;
    goto LABEL_80;
  }
  if ( a7 && (Value & 1) != 0 && !v19 )
  {
    v26 = WdLogNewEntry5_WdAssertion(v9, Value, v32);
    *(_QWORD *)(v26 + 24) = 12324LL;
    goto LABEL_80;
  }
  result = 1;
  *(_DWORD *)v34 = (2 * v20) | v19 & 0xFD | *(_DWORD *)v34 & 0xFFFFFFFC;
  return result;
}
