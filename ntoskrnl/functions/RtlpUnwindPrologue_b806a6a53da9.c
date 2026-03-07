__int64 __fastcall RtlpUnwindPrologue(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        char *a6,
        _QWORD *a7,
        __int64 a8)
{
  __int64 v9; // r10
  __int64 v10; // rbx
  _BYTE *v11; // rdi
  unsigned int v12; // ecx
  unsigned int v13; // r8d
  _BYTE *v14; // rdx
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  _QWORD **v19; // rdx
  unsigned __int64 v20; // r8
  _QWORD *v21; // rcx
  char *v22; // r9
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rbx
  int v27; // edx
  unsigned int v28; // edx
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  __int64 v32; // r9
  unsigned __int64 v33; // r9
  _QWORD *v34; // r9
  _OWORD *v35; // r9
  __int64 v36; // rax
  __int64 ExtendedFeature2; // rax
  char v39; // [rsp+20h] [rbp-A8h]
  int v40; // [rsp+40h] [rbp-88h]
  __int64 v41; // [rsp+48h] [rbp-80h]
  unsigned int v42; // [rsp+50h] [rbp-78h]
  __int64 v43; // [rsp+60h] [rbp-68h]

  v40 = 0;
  v43 = a5 + 416;
  v41 = a5 + 120;
  v9 = 24LL;
  while ( 1 )
  {
    v10 = 0LL;
    v39 = 0;
    v42 = a2 - *a4 - a1;
    v11 = (_BYTE *)(a1 + (unsigned int)a4[2]);
    if ( a2 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v11 & 3) != 0 )
LABEL_84:
      ExRaiseDatatypeMisalignment();
    while ( 1 )
    {
      v12 = (unsigned __int8)v11[2];
      if ( (unsigned int)v10 >= v12 )
        break;
      v13 = (unsigned __int8)v11[2 * v10 + 5] >> 4;
      v14 = &v11[2 * v10];
      if ( v42 < (unsigned __int8)v14[4] )
      {
        v10 = (unsigned int)RtlpUnwindOpSlots(*((unsigned __int16 *)v14 + 2), v14) + (unsigned int)v10;
        v9 = 24LL;
      }
      else
      {
        if ( (v11[2 * v10 + 5] & 0xF) != 0 )
        {
          switch ( v11[2 * v10 + 5] & 0xF )
          {
            case 1:
              v26 = (unsigned int)(v10 + 1);
              v27 = *(unsigned __int16 *)&v11[2 * v26 + 4];
              if ( v13 )
              {
                v26 = (unsigned int)(v26 + 1);
                v28 = (*(unsigned __int16 *)&v11[2 * v26 + 4] << 16) + v27;
              }
              else
              {
                v28 = 8 * v27;
              }
              *(_QWORD *)(a5 + 152) += v28;
              v10 = (unsigned int)(v26 + 1);
              continue;
            case 2:
              *(_QWORD *)(a5 + 152) += 8 * v13 + 8;
              v10 = (unsigned int)(v10 + 1);
              continue;
            case 3:
              v29 = *(_QWORD *)(v41 + 8LL * (v11[3] & 0xF));
              *(_QWORD *)(a5 + 152) = v29;
              *(_QWORD *)(a5 + 152) = v29 - (v11[3] & 0xF0);
              v10 = (unsigned int)(v10 + 1);
              continue;
            case 4:
              LODWORD(v10) = v10 + 1;
              v15 = a3 + 8LL * *(unsigned __int16 *)&v11[2 * (unsigned int)v10 + 4];
              if ( a2 <= 0x7FFFFFFEFFFFLL && (v15 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( *(_QWORD *)a8 && (v15 < **(_QWORD **)a8 || v15 > **(_QWORD **)(a8 + 8) - 8LL) )
                return 3221225512LL;
              *(_QWORD *)(v41 + 8LL * v13) = *(_QWORD *)v15;
              v16 = *(_QWORD *)(a8 + 16);
              if ( !v16 )
                goto LABEL_25;
              *(_QWORD *)(v16 + 8LL * v13 + 128) = v15;
              v10 = (unsigned int)(v10 + 1);
              continue;
            case 5:
              v10 = (unsigned int)(v10 + 2);
              v34 = (_QWORD *)(((unsigned __int64)*(unsigned __int16 *)&v11[2 * v10 + 4] << 16)
                             + a3
                             + *(unsigned __int16 *)&v11[2 * (unsigned int)(v10 - 1) + 4]);
              if ( a2 <= 0x7FFFFFFEFFFFLL
                && (((_BYTE)a3 + (unsigned __int8)*(_WORD *)&v11[2 * (unsigned int)(v10 - 1) + 4]) & 3) != 0 )
              {
                ExRaiseDatatypeMisalignment();
              }
              if ( !*(_QWORD *)a8 )
                goto LABEL_94;
              if ( (unsigned __int64)v34 < **(_QWORD **)a8 )
                return 3221225512LL;
              if ( (unsigned __int64)v34 > **(_QWORD **)(a8 + 8) - 8LL )
                return 3221225512LL;
LABEL_94:
              *(_QWORD *)(v41 + 8LL * v13) = *v34;
              goto LABEL_25;
            case 6:
              v10 = (unsigned int)(v10 + 2);
              continue;
            case 7:
              LODWORD(v10) = v10 + 2;
              goto LABEL_25;
            case 8:
              v10 = (unsigned int)(v10 + 1);
              v24 = a3 + 16LL * *(unsigned __int16 *)&v11[2 * v10 + 4];
              if ( a2 <= 0x7FFFFFFEFFFFLL && (v24 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( !*(_QWORD *)a8 )
                goto LABEL_47;
              if ( v24 < **(_QWORD **)a8 )
                return 3221225512LL;
              if ( v24 > **(_QWORD **)(a8 + 8) - 16LL )
                return 3221225512LL;
LABEL_47:
              *(_OWORD *)(v43 + 16LL * v13) = *(_OWORD *)v24;
              v25 = *(_QWORD *)(a8 + 16);
              if ( !v25 )
                goto LABEL_25;
              *(_QWORD *)(v25 + 8LL * v13) = v24;
              v10 = (unsigned int)(v10 + 1);
              continue;
            case 9:
              v10 = (unsigned int)(v10 + 2);
              v35 = (_OWORD *)(((unsigned __int64)*(unsigned __int16 *)&v11[2 * v10 + 4] << 16)
                             + a3
                             + *(unsigned __int16 *)&v11[2 * (unsigned int)(v10 - 1) + 4]);
              if ( a2 <= 0x7FFFFFFEFFFFLL
                && (((_BYTE)a3 + (unsigned __int8)*(_WORD *)&v11[2 * (unsigned int)(v10 - 1) + 4]) & 3) != 0 )
              {
                ExRaiseDatatypeMisalignment();
              }
              if ( !*(_QWORD *)a8 )
                goto LABEL_104;
              if ( (unsigned __int64)v35 < **(_QWORD **)a8 )
                return 3221225512LL;
              if ( (unsigned __int64)v35 > **(_QWORD **)(a8 + 8) - 16LL )
                return 3221225512LL;
LABEL_104:
              *(_OWORD *)(v43 + 16LL * v13) = *v35;
              v36 = *(_QWORD *)(a8 + 16);
              if ( v36 )
                *(_QWORD *)(v36 + 8LL * v13) = v35;
              goto LABEL_25;
            case 0xA:
              v39 = 1;
              v30 = *(_QWORD *)(a5 + 152);
              v31 = v30 + 8;
              if ( !v13 )
                v31 = *(_QWORD *)(a5 + 152);
              v32 = 32LL;
              if ( !v13 )
                v32 = v9;
              v33 = v30 + v32;
              if ( a2 <= 0x7FFFFFFEFFFFLL && (v31 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( !*(_QWORD *)a8 )
                goto LABEL_65;
              if ( v31 < **(_QWORD **)a8 )
                return 3221225512LL;
              if ( v31 > **(_QWORD **)(a8 + 8) - 8LL )
                return 3221225512LL;
LABEL_65:
              if ( a2 <= 0x7FFFFFFEFFFFLL && (v33 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( *(_QWORD *)a8 )
              {
                if ( v33 < **(_QWORD **)a8 )
                  return 3221225512LL;
                if ( v33 > **(_QWORD **)(a8 + 8) - 8LL )
                  return 3221225512LL;
              }
              *(_QWORD *)(a5 + 248) = *(_QWORD *)v31;
              *(_QWORD *)(a5 + 152) = *(_QWORD *)v33;
              if ( (*(_DWORD *)(a5 + 48) & 0x100080) != 0x100080 )
                goto LABEL_25;
              if ( (unsigned __int8)RtlpIsMachineFrameEntry(v11, &RtlpNoShadowStackUnwindMachineFrameEntries, 2LL) )
                goto LABEL_25;
              RtlpVirtualPopShadowStack(a5, 0LL, 3LL);
              break;
            default:
              goto LABEL_112;
          }
        }
        else
        {
          v17 = *(_QWORD *)(a5 + 152);
          if ( a2 <= 0x7FFFFFFEFFFFLL && (v17 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( *(_QWORD *)a8 )
          {
            if ( v17 < **(_QWORD **)a8 )
              return 3221225512LL;
            if ( v17 > **(_QWORD **)(a8 + 8) - 8LL )
              return 3221225512LL;
          }
          *(_QWORD *)(v41 + 8LL * v13) = *(_QWORD *)v17;
          v18 = *(_QWORD *)(a8 + 16);
          if ( v18 )
            *(_QWORD *)(v18 + 8LL * v13 + 128) = v17;
          *(_QWORD *)(a5 + 152) += 8LL;
        }
        v9 = 24LL;
LABEL_25:
        v10 = (unsigned int)(v10 + 1);
      }
    }
    if ( (*v11 & 0x20) == 0 )
      break;
    if ( (v12 & 1) != 0 )
      ++v12;
    a4 = &v11[2 * v12 + 4];
    if ( a2 <= 0x7FFFFFFEFFFFLL && (((_BYTE)v11 + 2 * ((_BYTE)v12 + 2)) & 3) != 0 )
      goto LABEL_84;
    if ( (unsigned int)++v40 > 0x20 )
LABEL_112:
      RtlRaiseStatus(3221225727LL);
  }
  if ( v39 )
  {
    if ( !a6 )
    {
LABEL_40:
      *a7 = a4;
      return 0LL;
    }
    if ( (unsigned __int8)RtlpIsMachineFrameEntry(v11, RtlpSafeMachineFrameEntries, 4LL) )
      v39 = 0;
LABEL_38:
    if ( v22 )
      *v22 = v39;
    goto LABEL_40;
  }
  if ( a2 <= 0x7FFFFFFEFFFFLL && (*(_QWORD *)(a5 + 152) & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( !*(_QWORD *)a8 )
  {
    v19 = (_QWORD **)(a5 + 152);
LABEL_35:
    v21 = *v19;
    *(_QWORD *)(a5 + 248) = **v19;
    *v19 = v21 + 1;
    if ( (*(_DWORD *)(a5 + 48) & 0x100040) == 0x100040 )
    {
      ExtendedFeature2 = RtlLocateExtendedFeature2(a5 + 1232, 11LL, 0xFFFFF780000003D8uLL, 0LL);
      if ( ExtendedFeature2 )
      {
        if ( (*(_BYTE *)ExtendedFeature2 & 1) != 0 )
          *(_QWORD *)(ExtendedFeature2 + 8) += 8LL;
      }
    }
    v22 = a6;
    if ( (*(_DWORD *)(a5 + 48) & 0x100080) == 0x100080 )
      *(_QWORD *)(*(int *)(a5 + 1256) + a5 + 1232) += 8LL;
    goto LABEL_38;
  }
  v19 = (_QWORD **)(a5 + 152);
  v20 = *(_QWORD *)(a5 + 152);
  if ( v20 < **(_QWORD **)a8 )
    return 3221225512LL;
  if ( v20 <= **(_QWORD **)(a8 + 8) - 8LL )
    goto LABEL_35;
  return 3221225512LL;
}
