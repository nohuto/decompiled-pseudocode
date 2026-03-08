/*
 * XREFs of KiFindNextTimerDueTime @ 0x140328600
 * Callers:
 *     KePrepareNonClockOwnerForIdle @ 0x1402D4634 (KePrepareNonClockOwnerForIdle.c)
 *     KiGetNextTimerExpirationDueTime @ 0x140328330 (KiGetNextTimerExpirationDueTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiFindNextTimerDueTime(__int64 a1, unsigned __int64 a2, char a3, unsigned __int64 *a4)
{
  unsigned int v4; // r15d
  unsigned __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 *v8; // r10
  char v9; // r9
  unsigned int v10; // r8d
  unsigned int v11; // r13d
  unsigned int v12; // eax
  unsigned __int64 v13; // r12
  unsigned int v14; // esi
  __int64 *v15; // rdi
  unsigned __int64 v16; // r11
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rbx
  __int64 v19; // r10
  unsigned __int64 v20; // r9
  _QWORD *v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned int v24; // eax
  __int64 v26; // r9
  int v27; // edx
  unsigned int v28; // eax
  unsigned __int64 v29; // rbp
  __int64 v30; // r11
  unsigned __int64 v31; // r14
  unsigned __int64 v32; // r9
  unsigned __int64 v33; // r10
  _QWORD *v34; // rcx
  __int64 v35; // rax
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rdi
  unsigned __int16 v39; // r11
  unsigned __int64 v40; // r10
  unsigned __int64 v41; // r9
  __int64 v42; // rbx
  unsigned __int64 v43; // rdx
  _QWORD *v44; // rcx
  __int64 v45; // rax
  unsigned __int64 v46; // rcx
  int v47; // r8d
  __int64 v48; // r10
  __int64 v49; // rdx
  unsigned __int64 v50; // r8
  unsigned int v51; // [rsp+0h] [rbp-68h]
  int v52; // [rsp+4h] [rbp-64h]
  unsigned int v53; // [rsp+8h] [rbp-60h]
  __int64 v54; // [rsp+10h] [rbp-58h]

  v4 = -1;
  v5 = a2;
  v6 = a1;
  v51 = -1;
  v7 = -1LL;
  v8 = a4;
  v9 = a3;
  v54 = -1LL;
  v10 = -1;
  if ( KiGlobalTimerResolutionRequests || KePseudoHrTimeIncrement != KeMaximumIncrement )
  {
    v11 = 0;
    v52 = 1;
  }
  else
  {
    v11 = 1;
    v52 = -1;
  }
  v12 = (unsigned __int8)(v5 >> 18);
  v53 = v12;
  while ( 2 )
  {
    v13 = -1LL;
    v14 = v12;
    if ( KiSerializeTimerExpiration )
    {
      if ( !v9 )
        goto LABEL_25;
      v27 = *(_DWORD *)(KiProcessorBlock[0] + 4LL * v11 + 32272);
      v28 = (unsigned __int8)(v12 - v27);
      if ( v28 > 1 )
        return 0LL;
      v29 = KiProcessorBlock[0] + ((unsigned __int64)v11 << 13);
      v30 = (unsigned __int8)v27;
      v31 = (v5 & 0xFFFFFFFFFFFC0000uLL) - (v28 << 18) + 0x4000000;
      v4 = 0;
LABEL_43:
      v32 = (unsigned int)v30;
      v33 = KiPendingTimerBitmaps[0] - 1;
      if ( (unsigned __int64)(unsigned int)v30 >= KiPendingTimerBitmaps[0] )
        v32 = 0LL;
      while ( 1 )
      {
        if ( v33 - v32 == -1LL )
        {
          LODWORD(v36) = -1;
          goto LABEL_84;
        }
        v34 = (_QWORD *)(qword_140D20278[0] + 8 * (v32 >> 6));
        v35 = ((1LL << (v32 & 0x3F)) - 1) | ~*v34;
        if ( v35 == -1 )
          break;
LABEL_47:
        _BitScanForward64((unsigned __int64 *)&v35, ~v35);
        v36 = v35 + (((__int64)v34 - qword_140D20278[0]) >> 3 << 6);
        if ( v36 > v33 )
          goto LABEL_88;
        if ( v36 != -1LL )
          goto LABEL_49;
LABEL_84:
        if ( !v32 )
        {
LABEL_49:
          v10 = v51;
          if ( (_DWORD)v36 == -1 )
            goto LABEL_79;
          v4 += (unsigned __int8)(v36 - v30 + 1);
          if ( v4 > 0x100 || v4 > v51 )
            goto LABEL_79;
          v37 = *(_QWORD *)(32LL * (unsigned int)v36 + v29 + 15896);
          if ( HIDWORD(v37) != -1 && v37 < v13 )
          {
            if ( v37 >= v31 )
            {
              v13 = *(_QWORD *)(32LL * (unsigned int)v36 + v29 + 15896);
            }
            else
            {
              v47 = (unsigned __int8)(v37 >> 18);
              if ( v47 == (_DWORD)v36 )
              {
                v13 = *(_QWORD *)(32LL * (unsigned int)v36 + v29 + 15896);
                goto LABEL_78;
              }
              v50 = (v37 & 0xFFFFFFFFFFFC0000uLL) + ((((_DWORD)v36 - v47) << 18) & 0x3FC0000);
              if ( v50 < v13 )
              {
                v13 = v50;
                v30 = (unsigned __int8)(v36 + 1);
                goto LABEL_43;
              }
            }
          }
          v30 = (unsigned __int8)(v36 + 1);
          goto LABEL_43;
        }
        v48 = v30 + 1;
        if ( (unsigned __int64)(v30 + 1) > KiPendingTimerBitmaps[0] )
          v48 = KiPendingTimerBitmaps[0];
        v33 = v48 - 1;
        v32 = 0LL;
      }
      while ( (unsigned __int64)++v34 <= qword_140D20278[0] + 8 * (v33 >> 6) )
      {
        v35 = ~*v34;
        if ( *v34 )
          goto LABEL_47;
      }
LABEL_88:
      LODWORD(v36) = -1;
      goto LABEL_84;
    }
    if ( v12 != (unsigned __int8)*(_DWORD *)(v6 + 4LL * v11 + 32272) )
      return 0LL;
    if ( v9 )
    {
      v38 = v12 << 9;
      v4 = -1;
      v39 = 0;
      while ( 1 )
      {
        v40 = KiPendingTimerBitmaps[2 * v39];
        if ( v38 >= v40 )
          v41 = 0LL;
        else
          v41 = v14 << 9;
        v42 = KiPendingTimerBitmaps[2 * v39 + 1];
        v43 = v40 - 1;
        while ( 1 )
        {
          if ( v43 - v41 == -1LL )
            goto LABEL_90;
          v44 = (_QWORD *)(v42 + 8 * (v41 >> 6));
          v45 = ~*v44;
          if ( v45 == -1 )
          {
            while ( (unsigned __int64)++v44 <= v42 + 8 * (v43 >> 6) )
            {
              v45 = ~*v44;
              if ( v45 != -1 )
                goto LABEL_63;
            }
LABEL_90:
            LODWORD(v46) = -1;
            goto LABEL_91;
          }
LABEL_63:
          _BitScanForward64((unsigned __int64 *)&v45, ~v45);
          v46 = v45 + (((__int64)v44 - v42) >> 3 << 6);
          if ( v46 > v43 )
          {
            LODWORD(v46) = -1;
          }
          else if ( v46 != -1LL )
          {
            break;
          }
LABEL_91:
          if ( !v41 )
            break;
          v49 = v38 + 1;
          if ( v38 + 1 > v40 )
            v49 = KiPendingTimerBitmaps[2 * v39];
          v43 = v49 - 1;
          v41 = 0LL;
        }
        if ( (_DWORD)v46 != -1 && (unsigned __int8)(((unsigned int)v46 >> 9) - v14) < v4 )
          v4 = (unsigned __int8)(((unsigned int)v46 >> 9) - v14);
        if ( ++v39 >= (unsigned __int16)KiActiveGroups )
        {
          v5 = a2;
          v6 = a1;
          v10 = v51;
          v9 = a3;
          v8 = a4;
          if ( v4 != -1 )
            v13 = (unsigned int)KePseudoHrTimeIncrement + (a2 & 0xFFFFFFFFFFFC0000uLL) + (v4 << 18);
          goto LABEL_24;
        }
      }
    }
    v4 = 0;
    v15 = &KiPendingTimerBitmaps[2 * *(unsigned __int8 *)(v6 + 208)];
    while ( 2 )
    {
      v16 = *v15;
      v17 = (unsigned __int64)v14 << 9;
      if ( v17 >= *v15 )
        v18 = 0LL;
      else
        v18 = (unsigned __int64)v14 << 9;
      v19 = v15[1];
      v20 = v16 - 1;
      while ( 1 )
      {
        if ( v20 - v18 == -1LL )
        {
          LODWORD(v23) = -1;
        }
        else
        {
          v21 = (_QWORD *)(v19 + 8 * (v18 >> 6));
          v22 = ~*v21;
          if ( v22 == -1 )
          {
            while ( (unsigned __int64)++v21 <= v19 + 8 * (v20 >> 6) )
            {
              v22 = ~*v21;
              if ( v22 != -1 )
                goto LABEL_13;
            }
LABEL_35:
            LODWORD(v23) = -1;
            goto LABEL_36;
          }
LABEL_13:
          _BitScanForward64((unsigned __int64 *)&v22, ~v22);
          v23 = v22 + (((__int64)v21 - v19) >> 3 << 6);
          if ( v23 > v20 )
            goto LABEL_35;
          if ( v23 != -1LL )
            break;
        }
LABEL_36:
        if ( !v18 )
          break;
        v26 = v17 + 1;
        if ( v17 + 1 > v16 )
          v26 = *v15;
        v20 = v26 - 1;
        v18 = 0LL;
      }
      if ( (_DWORD)v23 == -1 || (v24 = (unsigned int)v23 >> 9, v4 += (unsigned __int8)(v24 - v14), v4 > 0x100) )
      {
LABEL_78:
        v10 = v51;
LABEL_79:
        v5 = a2;
        goto LABEL_23;
      }
      if ( (*(_QWORD *)(v6 + 200) & *(_QWORD *)(((unsigned __int64)v24 << 6)
                                              + KiPendingTimerBitmaps[2 * *(unsigned __int8 *)(v6 + 208) + 1])) == 0LL )
      {
        v14 = (unsigned __int8)(v24 + 1);
        continue;
      }
      break;
    }
    v5 = a2;
    v10 = v51;
    v13 = (unsigned int)KePseudoHrTimeIncrement + (a2 & 0xFFFFFFFFFFFC0000uLL) + (v4 << 18);
LABEL_23:
    v6 = a1;
    v9 = a3;
    v8 = a4;
LABEL_24:
    v7 = v54;
LABEL_25:
    if ( v11 )
    {
      *v8 = v13;
    }
    else
    {
      v7 = v13;
      v54 = v13;
    }
    if ( v13 != -1LL && v10 >= v4 + 1 )
    {
      v10 = v4 + 1;
      v51 = v4 + 1;
    }
    v11 += v52;
    if ( v11 < 2 )
    {
      v12 = v53;
      continue;
    }
    return v7;
  }
}
