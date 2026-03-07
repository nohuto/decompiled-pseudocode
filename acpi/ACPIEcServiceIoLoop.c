PVOID *__fastcall ACPIEcServiceIoLoop(__int64 a1)
{
  ULONG v2; // eax
  char v3; // r13
  char v4; // r14
  int *v5; // r15
  __int64 v6; // r12
  ULONG v7; // esi
  __int64 v8; // rdx
  int *v9; // rbx
  ULONG v10; // r15d
  __int64 v11; // rax
  KIRQL v12; // al
  unsigned __int8 v13; // dl
  KIRQL v14; // bl
  KIRQL v15; // dl
  KSPIN_LOCK *v16; // rbx
  char v17; // r14
  KIRQL v18; // bl
  KIRQL v19; // dl
  int *v20; // rcx
  char v21; // al
  KIRQL v22; // bl
  unsigned __int8 v23; // al
  unsigned __int64 v24; // rsi
  KIRQL v25; // bl
  char v26; // al
  KIRQL v27; // r9
  int v28; // edx
  unsigned __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // r8
  char v32; // al
  unsigned __int16 v33; // cx
  char v34; // al
  char v35; // al
  PVOID **v36; // rcx
  PVOID **v37; // rax
  char *v38; // rax
  PLIST_ENTRY v39; // rax
  _LIST_ENTRY *Blink; // rcx
  char v41; // r8
  __int16 v42; // dx
  void (__fastcall **v43)(_QWORD, __int64); // rbx
  PVOID *result; // rax
  __int64 v45; // rax
  char v46; // [rsp+20h] [rbp-30h]
  ULONG v47; // [rsp+24h] [rbp-2Ch]
  int v48; // [rsp+2Ch] [rbp-24h] BYREF
  int *v49; // [rsp+30h] [rbp-20h]
  PVOID P; // [rsp+40h] [rbp-10h] BYREF
  PVOID *p_P; // [rsp+48h] [rbp-8h]
  char v52; // [rsp+98h] [rbp+48h]
  char v53; // [rsp+A0h] [rbp+50h]
  char v54; // [rsp+A8h] [rbp+58h]

  v48 = 0;
  p_P = &P;
  v2 = 0;
  v49 = 0LL;
  v53 = 0;
  v3 = 1;
  v52 = 1;
  v4 = 0;
  v54 = 0;
  v5 = 0LL;
  v46 = 0;
  v6 = 0LL;
  v47 = 0;
  P = &P;
LABEL_2:
  v7 = 0;
  while ( 1 )
  {
    v8 = a1 + 88;
    v9 = v5;
    v10 = v2;
    v11 = v6;
    if ( v6 )
    {
      v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
      v13 = 48;
      v14 = v12;
      if ( v6 != *(_QWORD *)(a1 + 40) )
        v13 = 64;
      ACPIEcLogAction(a1, v13, v53);
      v15 = v14;
      v16 = (KSPIN_LOCK *)(a1 + 88);
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v15);
      __outbyte(v6, v53);
      KeStallExecutionProcessor(1u);
      ++v47;
      v6 = 0LL;
      goto LABEL_9;
    }
    v47 = v10;
    if ( v7 )
      break;
    v16 = (KSPIN_LOCK *)(a1 + 88);
LABEL_9:
    v5 = v49;
    v7 = 0;
    if ( v49 )
    {
      v5 = 0LL;
      v49 = 0LL;
      v3 = 1;
      v52 = 1;
    }
    else
    {
      v3 = v52;
    }
LABEL_25:
    ++v7;
    v21 = __inbyte(*(_QWORD *)(a1 + 32));
    v4 = v21;
    v22 = KeAcquireSpinLockRaiseToDpc(v16);
    ACPIEcLogAction(a1, 0x10u, v4);
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v22);
    if ( v54 && (v4 & 0x10) == 0 )
    {
      ++*(_DWORD *)(a1 + 788);
      v4 |= 0x10u;
      v54 = 0;
    }
    if ( (v4 & 1) != 0 )
    {
      v23 = __inbyte(*(_QWORD *)(a1 + 24));
      v24 = v23;
      v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
      ACPIEcLogAction(a1, 0x20u, v24);
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v25);
      switch ( *(_BYTE *)(a1 + 488) )
      {
        case 1:
          **(_BYTE **)(a1 + 496) = v24;
          *(_BYTE *)(a1 + 488) = 5;
          break;
        case 2:
          if ( (_BYTE)v24 )
          {
            v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
            v28 = 1 << (v24 & 0x1F);
            v29 = v24 >> 5;
            v48 = v28;
            v30 = *(_DWORD *)(a1 + 4 * (v24 >> 5) + 124);
            if ( (v30 & v28) == 0 )
            {
              *(_DWORD *)(a1 + 4 * v29 + 124) = v28 | v30;
              if ( (v28 & *(_DWORD *)(a1 + 4 * v29 + 156)) != 0 )
              {
                v31 = *(unsigned __int8 *)(v24 + a1 + 188);
                *(_BYTE *)(*(_QWORD *)(a1 + 448) + 24 * v31) = *(_BYTE *)(a1 + 445);
                *(_BYTE *)(a1 + 445) = v31;
              }
              else
              {
                *(_BYTE *)(v24 + a1 + 188) = *(_BYTE *)(a1 + 444);
                *(_BYTE *)(a1 + 444) = v24;
              }
            }
            KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v27);
            v46 = 1;
          }
          *(_BYTE *)(a1 + 488) = 0;
          break;
        case 3:
          v26 = *(_BYTE *)(a1 + 489);
          ++*(_DWORD *)(a1 + 792);
          *(_BYTE *)(a1 + 488) = v26;
          v54 = 1;
          *(_BYTE *)(a1 + 489) = 7;
          break;
        default:
          if ( *(_DWORD *)(a1 + 796) < 5u )
            ACPIEcLogError(a1, 2147811343LL);
          ++*(_DWORD *)(a1 + 796);
          break;
      }
      v2 = v47;
      goto LABEL_2;
    }
    v2 = v47;
    if ( (v4 & 2) == 0 )
    {
      switch ( *(_BYTE *)(a1 + 488) )
      {
        case 4:
          v38 = *(char **)(a1 + 496);
          *(_BYTE *)(a1 + 488) = 5;
          v53 = *v38;
LABEL_62:
          v6 = *(_QWORD *)(a1 + 24);
          break;
        case 5:
          v33 = *(_WORD *)(a1 + 494);
          if ( v33 )
          {
            if ( (v4 & 0x10) != 0 || v33 <= 1u && (AcpiOverrideAttributes & 0x1000000) != 0 )
            {
              v35 = *(_BYTE *)(a1 + 490);
              ++*(_QWORD *)(a1 + 496);
              ++*(_BYTE *)(a1 + 491);
              v53 = v35;
              *(_WORD *)(a1 + 494) = v33 - 1;
              v34 = 6;
            }
            else
            {
              *(_BYTE *)(a1 + 489) = 5;
              v34 = 3;
              v53 = -126;
            }
            v6 = *(_QWORD *)(a1 + 40);
            *(_BYTE *)(a1 + 488) = v34;
          }
          else
          {
            v36 = (PVOID **)p_P;
            v37 = *(PVOID ***)(a1 + 480);
            *(_BYTE *)(a1 + 488) = 0;
            *(_WORD *)(a1 + 494) = 0;
            *(_QWORD *)(a1 + 480) = 0LL;
            if ( *v36 != &P )
LABEL_78:
              __fastfail(3u);
            v37[1] = (PVOID *)v36;
            *v37 = &P;
            *v36 = (PVOID *)v37;
            p_P = (PVOID *)v37;
          }
          break;
        case 6:
          v32 = 1;
          if ( *(_BYTE *)(a1 + 490) != 0x80 )
            v32 = 4;
          v53 = *(_BYTE *)(a1 + 491);
          *(_BYTE *)(a1 + 488) = v32;
          goto LABEL_62;
      }
      v2 = v47;
      if ( !v6 && !*(_BYTE *)(a1 + 488) )
      {
        *(_BYTE *)(a1 + 504) = 0;
        if ( (v4 & 0x20) != 0 )
        {
          v6 = *(_QWORD *)(a1 + 40);
          *(_BYTE *)(a1 + 488) = 2;
          v53 = -124;
LABEL_69:
          KeSetTimer((PKTIMER)(a1 + 520), ACPIEcWatchdogTimeout, (PKDPC)(a1 + 584));
          goto LABEL_71;
        }
        v39 = ExInterlockedRemoveHeadList((PLIST_ENTRY)(a1 + 464), (PKSPIN_LOCK)(a1 + 88));
        if ( v39 )
        {
          *(_QWORD *)(a1 + 480) = v39;
          v7 = 0;
          Blink = v39[1].Blink;
          *(_QWORD *)(a1 + 496) = Blink;
          v41 = BYTE1(v39[1].Flink);
          *(_BYTE *)(a1 + 491) = v41;
          v42 = WORD1(v39[1].Flink);
          *(_WORD *)(a1 + 492) = v42;
          *(_BYTE *)(a1 + 490) = v39[1].Flink;
          *(_QWORD *)(a1 + 496) = (char *)Blink - 1;
          *(_BYTE *)(a1 + 491) = v41 - 1;
          *(_WORD *)(a1 + 494) = v42;
          *(_BYTE *)(a1 + 488) = 5;
          goto LABEL_69;
        }
        v52 = 0;
        v3 = 0;
        KeCancelTimer((PKTIMER)(a1 + 520));
LABEL_71:
        v2 = v47;
      }
    }
  }
  if ( !v9 )
  {
    v17 = v4 & 0x10;
    if ( v3 )
    {
      v47 = v7 + v10;
      KeStallExecutionProcessor(v7);
      v52 = v3;
      if ( v17 )
      {
        v5 = 0LL;
        v49 = 0LL;
        if ( v7 >= *(_DWORD *)(a1 + 64) )
        {
          v5 = (int *)(a1 + 780);
          v52 = v3;
          v49 = (int *)(a1 + 780);
        }
      }
      else
      {
        v5 = (int *)(a1 + 776);
        if ( v7 < *(_DWORD *)(a1 + 68) )
          v5 = 0LL;
        v49 = v5;
      }
      v16 = (KSPIN_LOCK *)(a1 + 88);
    }
    else
    {
      if ( v17 )
      {
        v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
        ACPIEcLogAction(a1, 0x30u, 131);
        v19 = v18;
        v16 = (KSPIN_LOCK *)(a1 + 88);
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v19);
        v20 = (int *)(a1 + 784);
        __outbyte(*(_QWORD *)(a1 + 40), 0x83u);
        v11 = 0LL;
      }
      else
      {
        v20 = &v48;
        v16 = (KSPIN_LOCK *)(a1 + 88);
      }
      v47 = v10;
      v6 = v11;
      v5 = v20;
      v49 = v20;
      v52 = 0;
    }
    goto LABEL_25;
  }
  ++*v9;
  if ( v10 > *(_DWORD *)(a1 + 800) )
    *(_DWORD *)(a1 + 800) = v10;
  while ( 1 )
  {
    v43 = (void (__fastcall **)(_QWORD, __int64))P;
    result = &P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_78;
    v45 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_78;
    P = *(PVOID *)P;
    *(_QWORD *)(v45 + 8) = &P;
    v43[4](v43[5], v8);
    ExFreePoolWithTag(v43, 0);
  }
  if ( v46 )
    return (PVOID *)ACPIEcDispatchQueries(a1, v8);
  return result;
}
