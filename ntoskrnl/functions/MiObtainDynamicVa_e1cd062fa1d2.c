unsigned __int64 __fastcall MiObtainDynamicVa(__int64 *a1, unsigned int a2, int a3)
{
  unsigned __int64 v3; // rsi
  int v4; // r13d
  __int64 *v5; // r14
  __int64 v6; // rbx
  unsigned __int64 v7; // r12
  __int64 *v8; // r15
  unsigned __int64 v9; // r13
  __int64 v10; // r15
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // r14
  unsigned __int64 *v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rax
  unsigned __int64 NextAlignedForwardRunClear; // rdx
  unsigned __int64 v19; // r13
  unsigned __int64 v20; // rcx
  __int64 v21; // r12
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // r15
  unsigned __int64 *v25; // r8
  __int64 v26; // r9
  unsigned __int64 v27; // r14
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rbx
  int v31; // r12d
  unsigned __int64 v32; // rsi
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rcx
  unsigned __int64 v37; // r10
  __int64 v38; // rdx
  unsigned __int64 *v39; // r11
  bool v40; // zf
  __int64 v41; // rax
  unsigned int v42; // r10d
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rdx
  unsigned __int64 *v47; // r11
  __int64 v48; // rax
  unsigned int v49; // r10d
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rax
  unsigned __int64 v55; // r10
  __int64 v56; // rax
  unsigned int v57; // ecx
  unsigned int v58; // r9d
  __int64 v59; // rcx
  unsigned __int64 *v60; // rcx
  __int64 v61; // rdx
  unsigned __int64 *v62; // r9
  unsigned __int64 v63; // r10
  __int64 v64; // rax
  unsigned int v65; // ecx
  unsigned int v66; // r9d
  __int64 v67; // rcx
  unsigned __int64 *v68; // rcx
  __int64 v69; // rdx
  unsigned __int64 *v70; // r9
  bool v71; // sf
  __int64 v72; // rcx
  unsigned int v73; // eax
  unsigned __int64 v74; // rcx
  unsigned __int64 v75; // rax
  bool v76; // sf
  __int64 v77; // rcx
  unsigned int v78; // eax
  unsigned __int64 v79; // rcx
  unsigned __int64 v80; // rax
  unsigned __int64 v81; // r10
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v86; // eax
  unsigned __int8 v87; // al
  struct _KPRCB *v88; // r9
  _DWORD *v89; // r8
  int v90; // eax
  unsigned __int64 v91; // [rsp+38h] [rbp-69h]
  unsigned __int64 v92; // [rsp+38h] [rbp-69h]
  __int64 *v93; // [rsp+80h] [rbp-21h]
  __int64 v94; // [rsp+88h] [rbp-19h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-11h] BYREF
  _OWORD v96[5]; // [rsp+A8h] [rbp+7h] BYREF

  v3 = a2;
  v4 = a3;
  v5 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = 1LL;
  v94 = 1LL;
  v96[0] = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = v5[3];
      v93 = v5;
      v8 = v5;
      if ( v4 == 13 )
      {
        v8 = (__int64 *)v96;
        v93 = (__int64 *)v96;
        v34 = v5[1] + 8 * ((unsigned __int64)v5[2] >> 6);
        v7 = v5[6];
        v35 = -(__int64)((unsigned __int64)v5[5] >> 6);
        *(_QWORD *)&v96[0] = v5[5];
        *((_QWORD *)&v96[0] + 1) = v34 + 8 * v35;
        if ( (unsigned int)v3 >= 0x200 )
        {
          if ( (MiFlags & 0x40000000) != 0 )
            v6 = 512LL;
          v94 = v6;
        }
      }
      if ( *v8 )
      {
        if ( v6 == 1 )
        {
          v9 = *v8;
          v10 = v8[1];
          v11 = v7 & -(__int64)(v7 < v9);
          v12 = v9 - 1;
          v91 = v11;
          if ( v3 )
          {
            while ( 1 )
            {
              if ( v12 - v11 + 1 < v3 )
                goto LABEL_46;
              v13 = v12 - v3 + 1;
              v14 = (unsigned __int64 *)(v10 + 8 * (v11 >> 6));
              v15 = ((1LL << (v11 & 0x3F)) - 1) | *v14;
              v16 = v10 + 8 * (v13 >> 6);
              if ( v3 > 0x7F )
              {
                v55 = v16 + 8;
                if ( (v13 & 0x3F) == 0 )
                  v55 = v10 + 8 * (v13 >> 6);
                if ( v15 )
                {
                  if ( *++v14 )
                    goto LABEL_100;
                  v40 = !_BitScanReverse64((unsigned __int64 *)&v56, v15);
                  if ( v40 )
                    v57 = 64;
                  else
                    v57 = 63 - v56;
                }
                else
                {
                  v57 = 0;
                }
LABEL_104:
                NextAlignedForwardRunClear = (((__int64)v14 - v10) >> 3 << 6) - v57;
                if ( NextAlignedForwardRunClear > v13 )
                  goto LABEL_46;
                v62 = &v14[(v3 - v57) >> 6];
                while ( ++v14 != v62 )
                {
                  if ( *v14 )
                    goto LABEL_100;
                }
                v58 = ((_BYTE)v3 - (_BYTE)v57) & 0x3F;
                if ( (((_BYTE)v3 - (_BYTE)v57) & 0x3F) != 0 )
                {
                  v40 = !_BitScanForward64((unsigned __int64 *)&v59, *v14);
                  if ( v40 )
                    LODWORD(v59) = 64;
                  if ( (unsigned int)v59 < v58 )
                  {
LABEL_100:
                    while ( 1 )
                    {
                      v60 = v14;
                      if ( (unsigned __int64)v14 > v55 )
                        goto LABEL_46;
                      if ( !*++v14 )
                      {
                        v40 = !_BitScanReverse64((unsigned __int64 *)&v61, *v60);
                        if ( v40 )
                          v57 = 64;
                        else
                          v57 = 63 - v61;
                        goto LABEL_104;
                      }
                    }
                  }
                }
              }
              else if ( v3 >= 0x40 )
              {
                do
                {
LABEL_132:
                  v71 = v15 < 0;
                  do
                  {
                    if ( v71 )
                    {
                      if ( (unsigned __int64)++v14 > v16 )
                        goto LABEL_46;
                      v15 = *v14;
                      goto LABEL_132;
                    }
                    v40 = !_BitScanReverse64((unsigned __int64 *)&v72, v15);
                    if ( v40 )
                      v73 = 64;
                    else
                      v73 = 63 - v72;
                    NextAlignedForwardRunClear = (((((__int64)v14 - v10) >> 3) + 1) << 6) - v73;
                    if ( NextAlignedForwardRunClear > v13 )
                      goto LABEL_46;
                    v74 = v3 - v73;
                    if ( v3 == v73 )
                      goto LABEL_15;
                    v15 = *++v14;
                    if ( v74 < 0x40 )
                      goto LABEL_141;
                    v71 = v15 < 0;
                  }
                  while ( v15 );
                  v74 -= 64LL;
                  if ( !v74 )
                    break;
                  v15 = *++v14;
LABEL_141:
                  v40 = !_BitScanForward64(&v75, v15);
                  if ( v40 )
                    v75 = 64LL;
                }
                while ( v75 < v74 );
              }
              else
              {
                if ( v3 > 1 )
                {
                  v38 = 0LL;
                  v39 = (unsigned __int64 *)(v10 + 8 * (v12 >> 6));
                  while ( v15 != -1 )
                  {
LABEL_53:
                    v40 = !_BitScanForward64((unsigned __int64 *)&v41, v15);
                    if ( v40 )
                      LODWORD(v41) = 64;
                    if ( (unsigned int)(v38 + v41) >= v3 )
                    {
                      v45 = -v38;
LABEL_60:
                      NextAlignedForwardRunClear = (((__int64)v14 - v10) >> 3 << 6) + v45;
                      goto LABEL_14;
                    }
                    v42 = v3;
                    v43 = ~v15;
                    while ( 1 )
                    {
                      v43 &= v43 >> (v42 >> 1);
                      if ( !v43 )
                        break;
                      v42 -= v42 >> 1;
                      if ( v42 <= 1 )
                      {
                        _BitScanForward64(&v44, v43);
                        v45 = (unsigned int)v44;
                        goto LABEL_60;
                      }
                    }
                    if ( v14 == v39 )
                      goto LABEL_46;
                    v40 = !_BitScanReverse64((unsigned __int64 *)&v53, v15);
                    if ( v40 )
                      v38 = 64LL;
                    else
                      v38 = (unsigned int)(63 - v53);
                    v15 = *++v14;
                  }
                  while ( (unsigned __int64)++v14 <= v16 )
                  {
                    v15 = *v14;
                    if ( *v14 != -1LL )
                    {
                      v38 = 0LL;
                      goto LABEL_53;
                    }
                  }
LABEL_46:
                  NextAlignedForwardRunClear = -1LL;
                  goto LABEL_47;
                }
                while ( v15 == -1 )
                {
                  if ( (unsigned __int64)++v14 > v16 )
                    goto LABEL_46;
                  v15 = *v14;
                }
                _BitScanForward64(&v17, ~v15);
                NextAlignedForwardRunClear = v17 + (((__int64)v14 - v10) >> 3 << 6);
LABEL_14:
                if ( NextAlignedForwardRunClear > v13 )
                  goto LABEL_46;
              }
LABEL_15:
              if ( NextAlignedForwardRunClear != -1LL )
                goto LABEL_16;
LABEL_47:
              if ( !v91 )
              {
LABEL_16:
                v5 = a1;
                v6 = v94;
                goto LABEL_17;
              }
              v37 = v3 + v7;
              if ( v3 + v7 > v9 )
                v37 = v9;
              v12 = v37 - 1;
              v11 = 0LL;
              v91 = 0LL;
            }
          }
          NextAlignedForwardRunClear = v11 & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_17:
          v8 = v93;
          v4 = a3;
          v92 = NextAlignedForwardRunClear;
        }
        else
        {
          NextAlignedForwardRunClear = MiFindNextAlignedForwardRunClearEx(v8, v3, v6);
          v92 = NextAlignedForwardRunClear;
        }
        if ( NextAlignedForwardRunClear != -1LL )
          break;
      }
      if ( !(unsigned int)MiExtendDynamicBitMap((_DWORD)v5, (_DWORD)v8, 0, v4, 0) )
        return 0LL;
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v5 + 8, &LockHandle);
    if ( v6 == 1 )
    {
      v19 = *v8;
      v20 = v92;
      v21 = v8[1];
      v22 = *v8 - 1;
      v23 = v92 & -(__int64)(v92 < *v8);
      if ( v3 )
      {
        while ( v22 - v23 + 1 < v3 )
        {
          v29 = -1LL;
LABEL_175:
          if ( !v23 )
          {
LABEL_31:
            v5 = a1;
            v30 = v29;
            v8 = v93;
            goto LABEL_32;
          }
          v81 = v3 + v20;
          if ( v3 + v20 > v19 )
            v81 = v19;
          v22 = v81 - 1;
          v23 = 0LL;
        }
        v24 = v22 - v3 + 1;
        v25 = (unsigned __int64 *)(v21 + 8 * (v23 >> 6));
        v26 = ((1LL << (v23 & 0x3F)) - 1) | *v25;
        v27 = v21 + 8 * (v24 >> 6);
        if ( v3 > 0x7F )
        {
          v63 = v27 + 8;
          if ( (v24 & 0x3F) == 0 )
            v63 = v21 + 8 * (v24 >> 6);
          if ( v26 )
          {
            if ( *++v25 )
              goto LABEL_119;
            v40 = !_BitScanReverse64((unsigned __int64 *)&v64, v26);
            if ( v40 )
              v65 = 64;
            else
              v65 = 63 - v64;
          }
          else
          {
            v65 = 0;
          }
LABEL_124:
          v29 = (((__int64)v25 - v21) >> 3 << 6) - v65;
          if ( v29 > v24 )
            goto LABEL_72;
          v70 = &v25[(v3 - v65) >> 6];
          while ( ++v25 != v70 )
          {
            if ( *v25 )
              goto LABEL_119;
          }
          v66 = ((_BYTE)v3 - (_BYTE)v65) & 0x3F;
          if ( (((_BYTE)v3 - (_BYTE)v65) & 0x3F) != 0 )
          {
            v40 = !_BitScanForward64((unsigned __int64 *)&v67, *v25);
            if ( v40 )
              LODWORD(v67) = 64;
            if ( (unsigned int)v67 < v66 )
            {
LABEL_119:
              while ( 1 )
              {
                v68 = v25;
                if ( (unsigned __int64)v25 > v63 )
                  goto LABEL_72;
                if ( !*++v25 )
                {
                  v40 = !_BitScanReverse64((unsigned __int64 *)&v69, *v68);
                  if ( v40 )
                    v65 = 64;
                  else
                    v65 = 63 - v69;
                  goto LABEL_124;
                }
              }
            }
          }
        }
        else
        {
          if ( v3 < 0x40 )
          {
            if ( v3 > 1 )
            {
              v46 = 0LL;
              v47 = (unsigned __int64 *)(v21 + 8 * (v22 >> 6));
              while ( v26 != -1 )
              {
LABEL_63:
                v40 = !_BitScanForward64((unsigned __int64 *)&v48, v26);
                if ( v40 )
                  LODWORD(v48) = 64;
                if ( (unsigned int)(v46 + v48) >= v3 )
                {
                  v52 = -v46;
LABEL_70:
                  v29 = (((__int64)v25 - v21) >> 3 << 6) + v52;
                  goto LABEL_29;
                }
                v49 = v3;
                v50 = ~v26;
                while ( 1 )
                {
                  v50 &= v50 >> (v49 >> 1);
                  if ( !v50 )
                    break;
                  v49 -= v49 >> 1;
                  if ( v49 <= 1 )
                  {
                    _BitScanForward64(&v51, v50);
                    v52 = (unsigned int)v51;
                    goto LABEL_70;
                  }
                }
                if ( v25 == v47 )
                  goto LABEL_72;
                v40 = !_BitScanReverse64((unsigned __int64 *)&v54, v26);
                if ( v40 )
                  v46 = 64LL;
                else
                  v46 = (unsigned int)(63 - v54);
                v26 = *++v25;
              }
              while ( (unsigned __int64)++v25 <= v27 )
              {
                v26 = *v25;
                if ( *v25 != -1LL )
                {
                  v46 = 0LL;
                  goto LABEL_63;
                }
              }
            }
            else
            {
              while ( v26 == -1 )
              {
                if ( (unsigned __int64)++v25 > v27 )
                  goto LABEL_72;
                v26 = *v25;
              }
              _BitScanForward64(&v28, ~v26);
              v29 = v28 + (((__int64)v25 - v21) >> 3 << 6);
LABEL_29:
              if ( v29 <= v24 )
                goto LABEL_30;
            }
LABEL_72:
            v29 = -1LL;
LABEL_73:
            v20 = v92;
            goto LABEL_175;
          }
          do
          {
LABEL_148:
            v76 = v26 < 0;
            do
            {
              if ( v76 )
              {
                if ( (unsigned __int64)++v25 > v27 )
                  goto LABEL_72;
                v26 = *v25;
                goto LABEL_148;
              }
              v40 = !_BitScanReverse64((unsigned __int64 *)&v77, v26);
              if ( v40 )
                v78 = 64;
              else
                v78 = 63 - v77;
              v29 = (((((__int64)v25 - v21) >> 3) + 1) << 6) - v78;
              if ( v29 > v24 )
                goto LABEL_72;
              v79 = v3 - v78;
              if ( v3 == v78 )
                goto LABEL_30;
              v26 = *++v25;
              if ( v79 < 0x40 )
                goto LABEL_157;
              v76 = v26 < 0;
            }
            while ( v26 );
            v79 -= 64LL;
            if ( !v79 )
              break;
            v26 = *++v25;
LABEL_157:
            v40 = !_BitScanForward64(&v80, v26);
            if ( v40 )
              v80 = 64LL;
          }
          while ( v80 < v79 );
        }
LABEL_30:
        if ( v29 != -1LL )
          goto LABEL_31;
        goto LABEL_73;
      }
      v30 = v23 & 0xFFFFFFFFFFFFFFF8uLL;
    }
    else
    {
      v30 = MiFindNextAlignedForwardRunClearEx(v8, v3, v6);
    }
LABEL_32:
    if ( v30 != -1LL )
      break;
    KxReleaseQueuedSpinLock(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v86 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v40 = (v86 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v86;
        if ( v40 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    v4 = a3;
    if ( !(unsigned int)MiExtendDynamicBitMap((_DWORD)v5, (_DWORD)v8, 0, a3, 0) )
      return 0LL;
    v6 = v94;
  }
  RtlSetBitsEx(v8, v30, v3);
  v31 = a3;
  if ( a3 == 13 )
  {
    v36 = 8 * (v8[1] - v5[1]);
    if ( a2 == 1 )
      v5[6] = v30 + 1;
    v30 += v36;
    v31 = 9;
  }
  else if ( a2 == 1 )
  {
    v5[3] = v30 + 1;
  }
  if ( v5 == &qword_140C66B40 )
  {
    qword_140C66988 -= v3 << 21;
    MiReclaimSystemVa(0LL);
  }
  _InterlockedExchangeAdd64(&qword_140C69FC8[v31], v3);
  KxReleaseQueuedSpinLock(&LockHandle);
  v32 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    v87 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v87 <= 0xFu && LockHandle.OldIrql <= 0xFu && v87 >= 2u )
    {
      v88 = KeGetCurrentPrcb();
      v89 = v88->SchedulerAssist;
      v90 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v40 = (v90 & v89[5]) == 0;
      v89[5] &= v90;
      if ( v40 )
        KiRemoveSystemWorkPriorityKick(v88);
    }
  }
  __writecr8(v32);
  return v5[4] + (v30 << 21);
}
