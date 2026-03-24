/*
 * XREFs of ?UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4Enum@InteractionProperty@@UContactRangeConfiguration@12@PEAV?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@PEA_N@Z @ 0x1C0083A94
 * Callers:
 *     ?ProcessUpdateTouchConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C0083714 (-ProcessUpdateTouchConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBU.c)
 *     ?ProcessUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C0083788 (-ProcessUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUD.c)
 *     ?ProcessUpdatePenConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C00837FC (-ProcessUpdatePenConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDw.c)
 * Callees:
 *     ?ApplyConfigOperation@CInteractionConfigurationGroup@DirectComposition@@CAIIIW4Enum@InteractionProperty@@PEA_N@Z @ 0x1C0083C38 (-ApplyConfigOperation@CInteractionConfigurationGroup@DirectComposition@@CAIIIW4Enum@InteractionP.c)
 *     ?InsertAt@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAJAEBUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@I@Z @ 0x1C0083C68 (-InsertAt@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@Direct.c)
 *     ?Reset@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAX_N@Z @ 0x1C0083E8C (-Reset@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectCom.c)
 *     ?RemoveAt@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAXI@Z @ 0x1C0083F1C (-RemoveAt@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@Direct.c)
 */

__int64 __fastcall DirectComposition::CInteractionConfigurationGroup::UpdateContactCountConfigurationArray(
        __int64 a1,
        int a2,
        __int64 *a3,
        __int64 *a4,
        bool *a5)
{
  int v5; // r12d
  bool v9; // r14
  __int64 v10; // rbx
  int v11; // eax
  bool v12; // cl
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // r8
  unsigned int v17; // ecx
  unsigned int v18; // r10d
  __int64 v19; // xmm0_8
  __int64 v20; // rax
  unsigned int *v21; // r11
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // r11
  int v27; // eax
  _DWORD *v28; // r10
  int v29; // r8d
  _DWORD *v30; // rcx
  unsigned int v31; // r10d
  unsigned int v32; // eax
  int v33; // eax
  unsigned int v34; // r10d
  _DWORD *v35; // r8
  unsigned int v36; // eax
  int v37; // ecx
  int v38; // eax
  __int64 v39; // r8
  int v40; // ecx
  int v41; // ecx
  __int64 *v42; // rdx
  __int64 v43; // xmm0_8
  int v44; // ecx
  int v45; // eax
  int v46; // eax
  __int64 v47; // rcx
  int v48; // eax
  int v49; // eax
  __int64 v50; // rcx
  _DWORD *v51; // r9
  __int64 v52; // [rsp+20h] [rbp-20h] BYREF
  int v53; // [rsp+28h] [rbp-18h]
  __int64 v54; // [rsp+30h] [rbp-10h] BYREF
  int v55; // [rsp+38h] [rbp-8h]
  int v56; // [rsp+78h] [rbp+38h]

  v5 = 0;
  *a5 = 0;
  v9 = 1;
  if ( a2 != 3 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v10 >= *((_DWORD *)a4 + 2)
        || (v17 = *(_DWORD *)a3, v18 = *((_DWORD *)a3 + 1), *(_DWORD *)a3 > v18) )
      {
LABEL_4:
        if ( v5 >= 0 )
        {
          v11 = *((_DWORD *)a4 + 2);
          v12 = v11 && *(_DWORD *)(*(_QWORD *)(*a4 + 8LL * (unsigned int)(v11 - 1)) + 4LL) == -1;
          if ( *(_DWORD *)a3 <= *((_DWORD *)a3 + 1) && !v12 && (a2 == 7 || a2 == 1) )
          {
            v13 = *((unsigned int *)a3 + 2);
            v54 = *a3;
            v14 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(0LL, v13);
            v15 = *((unsigned int *)a4 + 2);
            v55 = v14;
            v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
                   a4,
                   &v54,
                   v15);
            if ( v5 >= 0 )
              *a5 = 1;
          }
        }
        return (unsigned int)v5;
      }
      v19 = *a3;
      v53 = *((_DWORD *)a3 + 2);
      v20 = *a4;
      v52 = v19;
      v21 = *(unsigned int **)(v20 + 8 * v10);
      if ( v17 < *v21 )
      {
        v53 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(0LL, *((unsigned int *)a3 + 2));
        v32 = **(_DWORD **)(*a4 + 8 * v10) - 1;
        if ( v31 < v32 )
          v32 = v31;
        HIDWORD(v52) = v32;
        if ( v32 == -1 )
          v33 = -1;
        else
          v33 = v32 + 1;
        *(_DWORD *)a3 = v33;
        v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
               a4,
               &v52,
               (unsigned int)v10);
        if ( v5 >= 0 )
          *a5 = 1;
        goto LABEL_22;
      }
      v22 = v21[1];
      if ( v17 == *v21 )
        break;
      if ( v18 < v22 )
      {
        v53 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(v21[2], *((unsigned int *)a3 + 2));
        v42 = *(__int64 **)(*a4 + 8 * v10);
        v43 = *v42;
        v55 = *((_DWORD *)v42 + 2);
        HIDWORD(v54) = HIDWORD(v43);
        v44 = HIDWORD(v52) + 1;
        v45 = v52;
        LODWORD(v54) = HIDWORD(v52) + 1;
        if ( HIDWORD(v52) == -1 )
          v44 = -1;
        *(_DWORD *)a3 = v44;
        *((_DWORD *)v42 + 1) = v45 - 1;
        v56 = v10 + 1;
        v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
               a4,
               &v52,
               (unsigned int)(v10 + 1));
        if ( v5 >= 0 )
        {
          LODWORD(v10) = v10 + 1;
          *a5 = 1;
          v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
                 a4,
                 &v54,
                 (unsigned int)++v56);
        }
        v46 = v56;
        if ( v5 < 0 )
          v46 = v10;
        LODWORD(v10) = v46;
        goto LABEL_22;
      }
      if ( v17 <= v22 )
      {
        v53 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(v21[2], *((unsigned int *)a3 + 2));
        v47 = *(_QWORD *)(*a4 + 8 * v10);
        v48 = *(_DWORD *)(v47 + 4);
        HIDWORD(v52) = v48;
        v49 = v48 == -1 ? -1 : v48 + 1;
        *(_DWORD *)a3 = v49;
        *(_DWORD *)(v47 + 4) = v52 - 1;
        v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
               a4,
               &v52,
               (unsigned int)(v10 + 1));
        if ( v5 >= 0 )
        {
          LODWORD(v10) = v10 + 1;
LABEL_67:
          *a5 = 1;
        }
      }
LABEL_22:
      v28 = *(_DWORD **)(*a4 + 8LL * (unsigned int)v10);
      v29 = v28[2];
      if ( v29 )
      {
        if ( (_DWORD)v10 )
        {
          v50 = (unsigned int)(v10 - 1);
          v51 = *(_DWORD **)(*a4 + 8 * v50);
          if ( v29 == v51[2] )
          {
            *v28 = *v51;
            CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::RemoveAt(
              a4,
              (unsigned int)v50);
            LODWORD(v10) = v10 - 1;
            *a5 = 1;
          }
        }
      }
      else
      {
        CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::RemoveAt(
          a4,
          (unsigned int)v10);
        *a5 = 1;
        LODWORD(v10) = v10 - 1;
      }
      v10 = (unsigned int)(v10 + 1);
      if ( v5 < 0 )
        goto LABEL_4;
    }
    v23 = *((unsigned int *)a3 + 2);
    v24 = v21[2];
    if ( v18 >= v22 )
    {
      if ( v18 == v22 )
      {
        v25 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(v24, v23);
        *(_DWORD *)(v26 + 8) = v25;
        if ( HIDWORD(v52) == -1 )
          v27 = -1;
        else
          v27 = HIDWORD(v52) + 1;
        *(_DWORD *)a3 = v27;
      }
      else
      {
        v38 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(v24, v23);
        v39 = *(_QWORD *)(*a4 + 8 * v10);
        v40 = *(_DWORD *)(v39 + 4);
        HIDWORD(v52) = v40;
        if ( v40 == -1 )
          v41 = -1;
        else
          v41 = v40 + 1;
        *(_QWORD *)v39 = v52;
        *(_DWORD *)(v39 + 8) = v38;
        *(_DWORD *)a3 = v41;
      }
      goto LABEL_22;
    }
    v53 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(v24, v23);
    v35 = *(_DWORD **)(*a4 + 8 * v10);
    v36 = v35[1];
    if ( v34 < v36 )
      v36 = v34;
    HIDWORD(v52) = v36;
    v37 = -1;
    if ( v36 != -1 )
      v37 = v36 + 1;
    *(_DWORD *)a3 = v37;
    *v35 = v36 + 1;
    v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
           a4,
           &v52,
           (unsigned int)v10);
    if ( v5 < 0 )
      goto LABEL_22;
    LODWORD(v10) = v10 + 1;
    goto LABEL_67;
  }
  if ( *((_DWORD *)a4 + 2) == 1 )
  {
    v30 = *(_DWORD **)*a4;
    if ( v30[2] == *((_DWORD *)a3 + 2) && *v30 == *(_DWORD *)a3 )
      v9 = v30[1] != *((_DWORD *)a3 + 1);
  }
  *a5 = v9;
  if ( v9 )
  {
    CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::Reset(a4, 0LL);
    return (unsigned int)CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
                           a4,
                           a3,
                           0LL);
  }
  return (unsigned int)v5;
}
