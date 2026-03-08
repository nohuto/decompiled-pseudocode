/*
 * XREFs of ?UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4Enum@InteractionProperty@@UContactRangeConfiguration@12@PEAV?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@PEA_N@Z @ 0x1C00A2458
 * Callers:
 *     ?ProcessUpdatePenConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C00A22FC (-ProcessUpdatePenConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDw.c)
 *     ?ProcessUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C00A2370 (-ProcessUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUD.c)
 *     ?ProcessUpdateTouchConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C00A23E4 (-ProcessUpdateTouchConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBU.c)
 * Callees:
 *     ?ApplyConfigOperation@CInteractionConfigurationGroup@DirectComposition@@CAIIIW4Enum@InteractionProperty@@PEA_N@Z @ 0x1C00A2600 (-ApplyConfigOperation@CInteractionConfigurationGroup@DirectComposition@@CAIIIW4Enum@InteractionP.c)
 *     ?InsertAt@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAJAEBUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@I@Z @ 0x1C00A2AAC (-InsertAt@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@Direct.c)
 *     ?Reset@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAX_N@Z @ 0x1C00A2D30 (-Reset@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectCom.c)
 *     ?RemoveAt@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAXI@Z @ 0x1C00A2DAC (-RemoveAt@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@Direct.c)
 */

__int64 __fastcall DirectComposition::CInteractionConfigurationGroup::UpdateContactCountConfigurationArray(
        __int64 a1,
        int a2,
        __int64 *a3,
        __int64 *a4,
        _BYTE *a5)
{
  int v5; // r14d
  __int64 v9; // rbx
  int v10; // eax
  bool v11; // cl
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // r8
  unsigned int v16; // ecx
  unsigned int v17; // r10d
  __int64 v18; // xmm0_8
  __int64 v19; // rax
  unsigned int *v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rdx
  int v24; // eax
  _DWORD *v25; // r9
  int v26; // edx
  _DWORD *v27; // rcx
  unsigned int v28; // r10d
  unsigned int v29; // eax
  int v30; // eax
  unsigned int v31; // r10d
  _DWORD *v32; // rdx
  unsigned int v33; // eax
  int v34; // ecx
  int v35; // eax
  __int64 v36; // rdx
  int v37; // ecx
  int v38; // ecx
  __int64 *v39; // rdx
  __int64 v40; // xmm0_8
  int v41; // ecx
  int v42; // eax
  __int64 v43; // r8
  int v44; // eax
  __int64 v45; // rcx
  int v46; // eax
  int v47; // eax
  __int64 v48; // r13
  _DWORD *v49; // r8
  __int64 v50; // [rsp+20h] [rbp-20h] BYREF
  int v51; // [rsp+28h] [rbp-18h]
  __int64 v52; // [rsp+30h] [rbp-10h] BYREF
  int v53; // [rsp+38h] [rbp-8h]

  v5 = 0;
  *a5 = 0;
  if ( a2 != 3 )
  {
    v9 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v9 >= *((_DWORD *)a4 + 2) )
      {
LABEL_4:
        v10 = *((_DWORD *)a4 + 2);
        v11 = v10 && *(_DWORD *)(*(_QWORD *)(*a4 + 8LL * (unsigned int)(v10 - 1)) + 4LL) == -1;
        if ( *(_DWORD *)a3 <= *((_DWORD *)a3 + 1) && !v11 && (a2 == 8 || a2 == 1) )
        {
          v12 = *((unsigned int *)a3 + 2);
          v52 = *a3;
          v13 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(0LL, v12);
          v14 = *((unsigned int *)a4 + 2);
          v53 = v13;
          v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
                 a4,
                 &v52,
                 v14);
          if ( v5 >= 0 )
            *a5 = 1;
        }
        return (unsigned int)v5;
      }
      v16 = *(_DWORD *)a3;
      v17 = *((_DWORD *)a3 + 1);
      if ( *(_DWORD *)a3 > v17 )
        goto LABEL_24;
      v18 = *a3;
      v51 = *((_DWORD *)a3 + 2);
      v19 = *a4;
      v50 = v18;
      v20 = *(unsigned int **)(v19 + 8 * v9);
      if ( v16 < *v20 )
      {
        v51 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(0LL, *((unsigned int *)a3 + 2));
        v29 = **(_DWORD **)(*a4 + 8 * v9) - 1;
        if ( v28 < v29 )
          v29 = v28;
        HIDWORD(v50) = v29;
        if ( v29 == -1 )
          v30 = -1;
        else
          v30 = v29 + 1;
        *(_DWORD *)a3 = v30;
        v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
               a4,
               &v50,
               (unsigned int)v9);
        if ( v5 >= 0 )
          *a5 = 1;
      }
      else
      {
        v21 = v20[1];
        if ( v16 == *v20 )
        {
          v22 = v20[2];
          v23 = *((unsigned int *)a3 + 2);
          if ( v17 < v21 )
          {
            v51 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(v22, v23);
            v32 = *(_DWORD **)(*a4 + 8 * v9);
            v33 = v32[1];
            if ( v31 < v33 )
              v33 = v31;
            HIDWORD(v50) = v33;
            v34 = -1;
            if ( v33 != -1 )
              v34 = v33 + 1;
            *(_DWORD *)a3 = v34;
            *v32 = v33 + 1;
            v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
                   a4,
                   &v50,
                   (unsigned int)v9);
            if ( v5 >= 0 )
            {
              *a5 = 1;
              LODWORD(v9) = v9 + 1;
            }
          }
          else if ( v17 == v21 )
          {
            *(_DWORD *)(*(_QWORD *)(*a4 + 8 * v9) + 8LL) = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(
                                                             v22,
                                                             v23);
            if ( HIDWORD(v50) == -1 )
              v24 = -1;
            else
              v24 = HIDWORD(v50) + 1;
            *(_DWORD *)a3 = v24;
          }
          else
          {
            v35 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(v22, v23);
            v36 = *(_QWORD *)(*a4 + 8 * v9);
            v37 = *(_DWORD *)(v36 + 4);
            HIDWORD(v50) = v37;
            if ( v37 == -1 )
              v38 = -1;
            else
              v38 = v37 + 1;
            *(_QWORD *)v36 = v50;
            *(_DWORD *)(v36 + 8) = v35;
            *(_DWORD *)a3 = v38;
          }
        }
        else if ( v17 >= v21 )
        {
          if ( v16 <= v21 )
          {
            v51 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(
                    v20[2],
                    *((unsigned int *)a3 + 2));
            v45 = *(_QWORD *)(*a4 + 8 * v9);
            v46 = *(_DWORD *)(v45 + 4);
            HIDWORD(v50) = v46;
            v47 = v46 == -1 ? -1 : v46 + 1;
            *(_DWORD *)a3 = v47;
            *(_DWORD *)(v45 + 4) = v50 - 1;
            v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
                   a4,
                   &v50,
                   (unsigned int)(v9 + 1));
            if ( v5 >= 0 )
            {
              *a5 = 1;
              LODWORD(v9) = v9 + 1;
            }
          }
        }
        else
        {
          v51 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(
                  v20[2],
                  *((unsigned int *)a3 + 2));
          v39 = *(__int64 **)(*a4 + 8 * v9);
          v40 = *v39;
          v53 = *((_DWORD *)v39 + 2);
          HIDWORD(v52) = HIDWORD(v40);
          v41 = HIDWORD(v50) + 1;
          v42 = v50;
          LODWORD(v52) = HIDWORD(v50) + 1;
          if ( HIDWORD(v50) == -1 )
            v41 = -1;
          *(_DWORD *)a3 = v41;
          *((_DWORD *)v39 + 1) = v42 - 1;
          v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
                 a4,
                 &v50,
                 (unsigned int)(v9 + 1));
          if ( v5 >= 0 )
          {
            v43 = (unsigned int)(v9 + 2);
            *a5 = 1;
            LODWORD(v9) = v9 + 1;
            v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
                   a4,
                   &v52,
                   v43);
          }
          v44 = v9 + 1;
          if ( v5 < 0 )
            v44 = v9;
          LODWORD(v9) = v44;
        }
      }
      v25 = *(_DWORD **)(*a4 + 8LL * (unsigned int)v9);
      v26 = v25[2];
      if ( v26 )
      {
        if ( !(_DWORD)v9 )
          goto LABEL_23;
        v48 = (unsigned int)(v9 - 1);
        v49 = *(_DWORD **)(*a4 + 8 * v48);
        if ( v26 != v49[2] )
          goto LABEL_23;
        *v25 = *v49;
        CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::RemoveAt(
          a4,
          (unsigned int)v48);
        LODWORD(v9) = v9 - 1;
      }
      else
      {
        CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::RemoveAt(
          a4,
          (unsigned int)v9);
        LODWORD(v9) = v9 - 1;
      }
      *a5 = 1;
LABEL_23:
      v9 = (unsigned int)(v9 + 1);
      if ( v5 < 0 )
      {
LABEL_24:
        if ( v5 < 0 )
          return (unsigned int)v5;
        goto LABEL_4;
      }
    }
  }
  if ( *((_DWORD *)a4 + 2) != 1
    || (v27 = *(_DWORD **)*a4, v27[2] != *((_DWORD *)a3 + 2))
    || *v27 != *(_DWORD *)a3
    || v27[1] != *((_DWORD *)a3 + 1) )
  {
    *a5 = 1;
    CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::Reset(a4, 0LL);
    return (unsigned int)CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
                           a4,
                           a3,
                           0LL);
  }
  return (unsigned int)v5;
}
