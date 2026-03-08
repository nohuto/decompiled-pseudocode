/*
 * XREFs of CmpLightWeightPrepareSetSecDescUoW @ 0x140A26B64
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x140A19C0C (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpGetSecurityDescriptorNodeEx @ 0x14067D1C8 (CmpGetSecurityDescriptorNodeEx.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     HvMarkCellDirty @ 0x1408A7366 (HvMarkCellDirty.c)
 *     CmpLightWeightCleanupSetSecDescUoW @ 0x140A252A8 (CmpLightWeightCleanupSetSecDescUoW.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall CmpLightWeightPrepareSetSecDescUoW(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rsi
  __int64 v3; // r14
  ULONG_PTR v4; // rbx
  unsigned int v5; // r12d
  unsigned int *Pool2; // r15
  int SecurityDescriptorNode; // edi
  __int64 CellFlat; // rax
  __int64 v9; // r13
  ULONG_PTR v10; // rdx
  __int64 CellPaged; // rax
  unsigned int v12; // edi
  __int64 v13; // rax
  ULONG_PTR v14; // rdx
  __int64 v15; // rax
  unsigned int v16; // r12d
  __int64 v18; // [rsp+40h] [rbp-18h] BYREF
  _QWORD v19[2]; // [rsp+48h] [rbp-10h] BYREF
  unsigned int v21; // [rsp+A8h] [rbp+50h]
  unsigned int v22; // [rsp+B0h] [rbp+58h]
  __int64 v23; // [rsp+B8h] [rbp+60h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v18 = 0xFFFFFFFFLL;
  v23 = 0xFFFFFFFFLL;
  v19[0] = 0xFFFFFFFFLL;
  v2 = 0LL;
  v3 = 0LL;
  v4 = *(_QWORD *)(v1 + 32);
  v5 = *(_DWORD *)(v1 + 40);
  Pool2 = (unsigned int *)ExAllocatePool2(256LL, 16LL, 2002079043LL);
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v4, v5, &v18);
  else
    CellFlat = HvpGetCellPaged(v4, v5, (unsigned int *)&v18);
  v9 = CellFlat;
  if ( !CellFlat )
    goto LABEL_7;
  SecurityDescriptorNode = HvMarkCellDirty(v4, v5, 1);
  if ( SecurityDescriptorNode >= 0 )
  {
    v10 = *(unsigned int *)(a1 + 96);
    if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
      CellPaged = HvpGetCellFlat(v4, v10, &v23);
    else
      CellPaged = HvpGetCellPaged(v4, v10, (unsigned int *)&v23);
    v2 = CellPaged;
    if ( !CellPaged
      || ((v12 = *(_DWORD *)(v9 + 44), (*(_BYTE *)(v4 + 140) & 1) == 0)
        ? (v13 = HvpGetCellPaged(v4, v12, (unsigned int *)v19))
        : (v13 = HvpGetCellFlat(v4, v12, v19)),
          (v3 = v13) == 0) )
    {
LABEL_7:
      SecurityDescriptorNode = -1073741670;
      goto LABEL_8;
    }
    v21 = *(_DWORD *)(v13 + 8);
    v22 = *(_DWORD *)(v13 + 4);
    SecurityDescriptorNode = HvMarkCellDirty(v4, v12, 1);
    if ( SecurityDescriptorNode >= 0 )
    {
      SecurityDescriptorNode = HvMarkCellDirty(v4, v21, 1);
      if ( SecurityDescriptorNode >= 0 )
      {
        SecurityDescriptorNode = HvMarkCellDirty(v4, v22, 1);
        if ( SecurityDescriptorNode >= 0 )
        {
          SecurityDescriptorNode = CmpGetSecurityDescriptorNodeEx(v4, v5, v9, v5 >> 31, (void *)(v2 + 20), 1, Pool2);
          if ( SecurityDescriptorNode >= 0 )
          {
            if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v4, &v23);
            else
              HvpReleaseCellPaged(v4, (unsigned int *)&v23);
            v14 = *Pool2;
            v15 = (*(_BYTE *)(v4 + 140) & 1) != 0
                ? HvpGetCellFlat(v4, v14, &v23)
                : HvpGetCellPaged(v4, v14, (unsigned int *)&v23);
            v16 = *(_DWORD *)(v15 + 4);
            v2 = v15;
            SecurityDescriptorNode = HvMarkCellDirty(v4, *(unsigned int *)(v15 + 8), 1);
            if ( SecurityDescriptorNode >= 0 )
            {
              SecurityDescriptorNode = HvMarkCellDirty(v4, v16, 1);
              if ( SecurityDescriptorNode >= 0 )
              {
                SecurityDescriptorNode = 0;
                *((_QWORD *)Pool2 + 1) = v4;
                *(_QWORD *)(a1 + 104) = Pool2;
LABEL_9:
                if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
                  HvpReleaseCellFlat(v4, &v18);
                else
                  HvpReleaseCellPaged(v4, (unsigned int *)&v18);
                goto LABEL_34;
              }
            }
          }
        }
      }
    }
  }
LABEL_8:
  CmpLightWeightCleanupSetSecDescUoW(Pool2);
  if ( v9 )
    goto LABEL_9;
LABEL_34:
  if ( v2 )
  {
    if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v4, &v23);
    else
      HvpReleaseCellPaged(v4, (unsigned int *)&v23);
  }
  if ( v3 )
  {
    if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v4, v19);
    else
      HvpReleaseCellPaged(v4, (unsigned int *)v19);
  }
  return (unsigned int)SecurityDescriptorNode;
}
