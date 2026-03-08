/*
 * XREFs of CmAddLogForAction @ 0x14073485C
 * Callers:
 *     CmDeleteKey @ 0x1406B762C (CmDeleteKey.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1406B845C (CmpSetSecurityDescriptorInfo.c)
 *     CmDeleteValueKey @ 0x1406B9764 (CmDeleteValueKey.c)
 *     CmpCreateChild @ 0x1407A7590 (CmpCreateChild.c)
 *     CmSetValueKey @ 0x1407A9870 (CmSetValueKey.c)
 *     CmSetKeyFlags @ 0x140A12D14 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140A13248 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x1402A4B0C (CmpFreeTransientPoolWithTag.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     HvBufferCheckSum @ 0x140734F0C (HvBufferCheckSum.c)
 *     CmpTransWriteLog @ 0x140734F84 (CmpTransWriteLog.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     CmpCopyCompressedName @ 0x1407A47DC (CmpCopyCompressedName.c)
 *     CmpGetValueData @ 0x1407AAC20 (CmpGetValueData.c)
 *     CmpConstructNameWithStatus @ 0x1407AF2E0 (CmpConstructNameWithStatus.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmAddLogForAction(__int64 a1, ULONG a2)
{
  unsigned int v2; // ebx
  _DWORD *v4; // rdi
  __int64 v5; // r13
  __int64 v6; // rdx
  unsigned int v7; // r12d
  size_t v8; // r14
  int v9; // eax
  __int64 v10; // rcx
  const void **v11; // r15
  int v13; // edx
  __int64 v14; // rax
  unsigned int v15; // r14d
  ULONG_PTR v16; // rcx
  __int64 v17; // rax
  int v18; // ebx
  unsigned __int16 v19; // cx
  int v20; // ebx
  int v21; // ebx
  ULONG_PTR v22; // rcx
  bool v23; // zf
  ULONG_PTR v24; // rdx
  __int64 CellFlat; // rax
  unsigned __int16 v26; // cx
  ULONG_PTR v27; // rdx
  __int64 CellPaged; // rax
  unsigned int v29; // eax
  unsigned int v30; // ecx
  unsigned int v31; // eax
  unsigned int v32; // ebx
  __int64 Pool2; // rax
  int v34; // edx
  __int64 v35; // r8
  char *v36; // rcx
  unsigned int v37; // edx
  size_t v38; // r8
  char *v39; // rcx
  __int64 v40; // rdx
  int v41; // eax
  int v42; // eax
  char *v43; // rbx
  size_t v44; // r8
  void *v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  BOOLEAN v48; // al
  __int64 v49; // r12
  CLFS_INFORMATION *v50; // rax
  CLFS_INFORMATION *v51; // r14
  __int64 v52; // rcx
  __int64 v53; // rcx
  unsigned int v54; // [rsp+40h] [rbp-29h]
  _DWORD v55[2]; // [rsp+48h] [rbp-21h] BYREF
  _DWORD v56[2]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v57; // [rsp+58h] [rbp-11h] BYREF
  __int64 v58; // [rsp+60h] [rbp-9h]
  void *Src; // [rsp+68h] [rbp-1h] BYREF
  CLFS_LSN v60; // [rsp+70h] [rbp+7h] BYREF
  __int64 v61; // [rsp+78h] [rbp+Fh]
  unsigned int v62; // [rsp+D0h] [rbp+67h]
  ULONG pcbInfoBuffer; // [rsp+D8h] [rbp+6Fh] BYREF
  int v64; // [rsp+E0h] [rbp+77h]
  size_t Size; // [rsp+E8h] [rbp+7Fh]

  pcbInfoBuffer = a2;
  v2 = 0;
  v55[1] = 0;
  v56[1] = 0;
  v55[0] = -1;
  v4 = 0LL;
  v56[0] = -1;
  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 56);
  v7 = 0;
  v60.ullOffset = 0LL;
  v8 = 0LL;
  v64 = -1;
  v9 = *(_DWORD *)(v6 + 48);
  v54 = 0;
  LODWORD(Size) = 0;
  v62 = 0;
  v58 = 0LL;
  if ( (v9 & 0x80u) == 0 )
  {
    v10 = *(_QWORD *)(a1 + 48);
    v61 = *(_QWORD *)(*(_QWORD *)(v10 + 32) + 4152LL);
    if ( *(_QWORD *)(v61 + 96) )
    {
      if ( *(_QWORD *)(v6 + 56) && *(_DWORD *)(a1 + 68) != 13 )
      {
        Src = 0LL;
        CmpConstructNameWithStatus(v10, &Src);
        v11 = (const void **)Src;
        if ( !Src )
          return 3221225626LL;
        v13 = *(_DWORD *)(a1 + 68);
        switch ( v13 )
        {
          case 0:
          case 2:
            v20 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 88LL) + 24LL);
            break;
          case 4:
          case 5:
          case 6:
            v21 = 80;
            v22 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL);
            if ( (unsigned int)(v13 - 4) <= 1 )
            {
              v23 = (*(_BYTE *)(v22 + 140) & 1) == 0;
              v27 = *(unsigned int *)(a1 + 92);
              v64 = *(_DWORD *)(a1 + 92);
              if ( v23 )
                CellPaged = HvpGetCellPaged(v22);
              else
                CellPaged = HvpGetCellFlat(v22, v27);
              v5 = CellPaged;
              if ( !CellPaged )
                goto LABEL_20;
              v29 = *(_DWORD *)(CellPaged + 4);
              v30 = v29 + 0x80000000;
              if ( v29 < 0x80000000 )
                v30 = v29;
              v54 = v30;
              LODWORD(Size) = v30;
              v21 = v30 + 80;
              if ( v30 >= 0xFFFFFFB0 )
              {
                v18 = -1073741675;
LABEL_94:
                v53 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL);
                if ( (*(_BYTE *)(v53 + 140) & 1) != 0 )
                  HvpReleaseCellFlat(v53, v55);
                else
                  HvpReleaseCellPaged(v53, v55);
LABEL_97:
                if ( v4 )
                  ExFreePoolWithTag(v4, 0);
                goto LABEL_99;
              }
            }
            else
            {
              v23 = (*(_BYTE *)(v22 + 140) & 1) == 0;
              v24 = *(unsigned int *)(a1 + 88);
              v64 = *(_DWORD *)(a1 + 88);
              if ( v23 )
                CellFlat = HvpGetCellPaged(v22);
              else
                CellFlat = HvpGetCellFlat(v22, v24);
              v5 = CellFlat;
              if ( !CellFlat )
                goto LABEL_20;
            }
            v15 = v21;
            v26 = 2 * *(_WORD *)(v5 + 2);
            if ( (*(_BYTE *)(v5 + 16) & 1) == 0 )
              v26 = *(_WORD *)(v5 + 2);
            v62 = v26;
            v2 = v26 + v21;
            goto LABEL_44;
          case 7:
          case 8:
            v2 = 56;
            goto LABEL_47;
          case 9:
            v20 = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 24LL);
            break;
          case 11:
            v14 = *(_QWORD *)(a1 + 88);
            v15 = 64;
            v16 = *(_QWORD *)(v14 + 32);
            if ( (*(_BYTE *)(v16 + 140) & 1) != 0 )
              v17 = HvpGetCellFlat(v16, *(unsigned int *)(v14 + 40));
            else
              v17 = HvpGetCellPaged(v16);
            v58 = v17;
            if ( !v17 )
            {
LABEL_20:
              v18 = -1073741670;
LABEL_99:
              CmpFreeTransientPoolWithTag(v11, 0x624E4D43u);
              return (unsigned int)v18;
            }
            v19 = 2 * *(_WORD *)(v17 + 72);
            if ( (*(_BYTE *)(v17 + 2) & 0x20) == 0 )
              v19 = *(_WORD *)(v17 + 72);
            v7 = v19;
            v2 = v19 + 64;
            goto LABEL_44;
          default:
            goto LABEL_47;
        }
        v15 = 64;
        v2 = v20 + 64;
LABEL_44:
        if ( v2 < v15 )
        {
          v18 = -1073741675;
          goto LABEL_89;
        }
        v8 = v62;
LABEL_47:
        v31 = *(unsigned __int16 *)v11;
        v32 = v31 + v2;
        if ( v32 < v31 )
        {
          v18 = -1073741562;
          goto LABEL_89;
        }
        Pool2 = ExAllocatePool2(256LL, v32, 538987843LL);
        v4 = (_DWORD *)Pool2;
        if ( !Pool2 )
          goto LABEL_50;
        *(_DWORD *)(Pool2 + 4) = v32;
        *(_DWORD *)(Pool2 + 8) = 1;
        *(_OWORD *)(Pool2 + 16) = *(_OWORD *)(*(_QWORD *)(a1 + 56) + 88LL);
        *(_WORD *)(Pool2 + 32) = *(_WORD *)v11;
        *(_WORD *)(Pool2 + 34) = *((_WORD *)v11 + 1);
        v34 = *(_DWORD *)(a1 + 68);
        switch ( v34 )
        {
          case 0:
          case 2:
            *(_DWORD *)(Pool2 + 12) = (v34 != 0) + 1;
            *(_DWORD *)(Pool2 + 48) = *(_DWORD *)(a1 + 72);
            *(_QWORD *)(Pool2 + 40) = Pool2 + 64;
            memmove((void *)(Pool2 + 64), v11[1], *(unsigned __int16 *)v11);
            v39 = (char *)v4 + *(unsigned __int16 *)v11 + 64;
            *((_QWORD *)v4 + 7) = v39;
            v40 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 88LL);
            v38 = *(unsigned int *)(v40 + 24);
            break;
          case 4:
          case 5:
          case 6:
            Src = 0LL;
            v41 = 0;
            v57 = 0xFFFFFFFFLL;
            LOBYTE(pcbInfoBuffer) = 0;
            if ( v34 == 4 )
            {
              v4[3] = 3;
            }
            else
            {
              LOBYTE(v41) = v34 != 5;
              v4[3] = v41 + 4;
            }
            v42 = *(_DWORD *)(v5 + 12);
            *((_QWORD *)v4 + 5) = v4 + 20;
            v4[16] = v42;
            memmove(v4 + 20, v11[1], *(unsigned __int16 *)v11);
            v43 = (char *)v4 + *(unsigned __int16 *)v11 + 80;
            *((_QWORD *)v4 + 7) = v43;
            if ( (*(_BYTE *)(v5 + 16) & 1) != 0 )
              CmpCopyCompressedName(v43, (unsigned int)v8, v5 + 20, *(unsigned __int16 *)(v5 + 2));
            else
              memmove(v43, (const void *)(v5 + 20), v8);
            *((_QWORD *)v4 + 7) = 0LL;
            *((_WORD *)v4 + 25) = v62;
            *((_WORD *)v4 + 24) = v62;
            if ( *(_DWORD *)(a1 + 68) == 6 )
            {
              v4[17] = 0;
              *((_QWORD *)v4 + 9) = 0LL;
            }
            else
            {
              v4[17] = v54;
              if ( !(unsigned __int8)CmpGetValueData(
                                       *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
                                       (__int64)&Src,
                                       (__int64)&pcbInfoBuffer,
                                       (__int64)&v57) )
              {
LABEL_50:
                v18 = -1073741670;
                goto LABEL_89;
              }
              v44 = (unsigned int)Size;
              v45 = Src;
              *((_QWORD *)v4 + 9) = &v43[v8];
              memmove(&v43[v8], v45, v44);
              *((_QWORD *)v4 + 9) = 0LL;
              if ( (_BYTE)pcbInfoBuffer == 1 )
              {
                ExFreePoolWithTag(Src, 0);
              }
              else
              {
                v46 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL);
                if ( (*(_BYTE *)(v46 + 140) & 1) != 0 )
                  HvpReleaseCellFlat(v46, &v57);
                else
                  HvpReleaseCellPaged(v46, &v57);
              }
            }
LABEL_84:
            v47 = (unsigned int)v4[1];
            *((_QWORD *)v4 + 5) = 0LL;
            *v4 = HvBufferCheckSum(v4, v47);
            v48 = ClfsLsnInvalid((const CLFS_LSN *)(*(_QWORD *)(a1 + 56) + 104LL));
            v49 = v61;
            v18 = CmpTransWriteLog(v61, (_DWORD)v4, v4[1], v48 != 0 ? 2 : 0, &v60);
            if ( v18 >= 0 && ClfsLsnInvalid((const CLFS_LSN *)(*(_QWORD *)(a1 + 56) + 104LL)) )
              *(CLFS_LSN *)(*(_QWORD *)(a1 + 56) + 104LL) = v60;
            pcbInfoBuffer = 120;
            v50 = (CLFS_INFORMATION *)ExAllocatePool2(256LL, 120LL, 538987843LL);
            v51 = v50;
            if ( v50 )
            {
              ClfsGetLogFileInformation(*(PLOG_FILE_OBJECT *)(v49 + 88), v50, &pcbInfoBuffer);
              ExFreePoolWithTag(v51, 0);
            }
LABEL_89:
            if ( v58 )
            {
              v52 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 32LL);
              if ( (*(_BYTE *)(v52 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v52, v56);
              else
                HvpReleaseCellPaged(v52, v56);
            }
            if ( !v5 )
              goto LABEL_97;
            goto LABEL_94;
          case 7:
            *(_DWORD *)(Pool2 + 12) = 6;
            *(_QWORD *)(Pool2 + 40) = Pool2 + 56;
            memmove((void *)(Pool2 + 56), v11[1], *(unsigned __int16 *)v11);
            v4[12] = *(_DWORD *)(a1 + 88);
            goto LABEL_84;
          case 8:
            *(_DWORD *)(Pool2 + 12) = 7;
            *(_QWORD *)(Pool2 + 40) = Pool2 + 56;
            memmove((void *)(Pool2 + 56), v11[1], *(unsigned __int16 *)v11);
            *((_QWORD *)v4 + 6) = *(_QWORD *)(a1 + 88);
            goto LABEL_84;
          case 9:
            *(_DWORD *)(Pool2 + 12) = *(_BYTE *)(a1 + 100) != 0 ? 10 : 8;
            *(_QWORD *)(Pool2 + 40) = Pool2 + 64;
            memmove((void *)(Pool2 + 64), v11[1], *(unsigned __int16 *)v11);
            v37 = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 24LL);
            v4[12] = v37;
            v38 = v37;
            v39 = (char *)v4 + *(unsigned __int16 *)v11 + 64;
            *((_QWORD *)v4 + 7) = v39;
            v40 = *(_QWORD *)(a1 + 88);
            break;
          case 11:
            *(_DWORD *)(Pool2 + 12) = 9;
            *(_QWORD *)(Pool2 + 40) = Pool2 + 64;
            memmove((void *)(Pool2 + 64), v11[1], *(unsigned __int16 *)v11);
            v35 = v58;
            v36 = (char *)v4 + *(unsigned __int16 *)v11 + 64;
            *((_QWORD *)v4 + 7) = v36;
            if ( (*(_BYTE *)(v35 + 2) & 0x20) != 0 )
              CmpCopyCompressedName(v36, v7, v35 + 76, *(unsigned __int16 *)(v35 + 72));
            else
              memmove(v36, (const void *)(v35 + 76), v7);
            *((_WORD *)v4 + 25) = v7;
            *((_WORD *)v4 + 24) = v7;
            goto LABEL_83;
          default:
            goto LABEL_84;
        }
        memmove(v39, (const void *)(v40 + 32), v38);
LABEL_83:
        *((_QWORD *)v4 + 7) = 0LL;
        goto LABEL_84;
      }
    }
  }
  return 0LL;
}
