/*
 * XREFs of ACPIEcServiceIoLoop @ 0x1C00544A4
 * Callers:
 *     ACPIEcServiceDevice @ 0x1C0054390 (ACPIEcServiceDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 *     ACPIEcDispatchQueries @ 0x1C0053F08 (ACPIEcDispatchQueries.c)
 *     ACPIEcLogAction @ 0x1C0054134 (ACPIEcLogAction.c)
 *     ACPIEcLogError @ 0x1C00542D8 (ACPIEcLogError.c)
 */

void __fastcall ACPIEcServiceIoLoop(__int64 a1)
{
  ULONG v2; // eax
  char v3; // bl
  char v4; // si
  int *v5; // r14
  __int64 v6; // r13
  ULONG v7; // r15d
  KIRQL v8; // al
  unsigned __int8 v9; // dl
  KIRQL v10; // bl
  char v11; // si
  KIRQL v12; // bl
  char v13; // al
  KIRQL v14; // bl
  unsigned __int8 v15; // al
  unsigned __int64 v16; // r15
  KIRQL v17; // bl
  unsigned int v18; // eax
  char v19; // al
  KIRQL v20; // r10
  int v21; // edx
  unsigned __int64 v22; // rcx
  int v23; // r8d
  __int64 v24; // r8
  char v25; // al
  unsigned __int16 v26; // cx
  char v27; // al
  char v28; // al
  PVOID **v29; // rcx
  PVOID **v30; // rax
  char *v31; // rax
  PLIST_ENTRY v32; // rax
  _LIST_ENTRY *Blink; // rcx
  char v34; // r8
  __int16 v35; // dx
  void (__fastcall **v36)(_QWORD); // rbx
  __int64 v37; // rax
  char v38; // [rsp+20h] [rbp-20h]
  ULONG v39; // [rsp+24h] [rbp-1Ch]
  int v40; // [rsp+28h] [rbp-18h] BYREF
  PVOID P; // [rsp+30h] [rbp-10h] BYREF
  PVOID *p_P; // [rsp+38h] [rbp-8h]
  char v43; // [rsp+88h] [rbp+48h]
  char v44; // [rsp+90h] [rbp+50h]
  char v45; // [rsp+98h] [rbp+58h]

  v40 = 0;
  p_P = &P;
  v2 = 0;
  v44 = 0;
  v45 = 0;
  v3 = 1;
  v43 = 1;
  v4 = 0;
  v38 = 0;
  v5 = 0LL;
  v39 = 0;
  v6 = 0LL;
  P = &P;
LABEL_2:
  v7 = 0;
  while ( 1 )
  {
    if ( v6 )
    {
      v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
      v9 = 48;
      v10 = v8;
      if ( v6 != *(_QWORD *)(a1 + 40) )
        v9 = 64;
      ACPIEcLogAction(a1, v9, v44);
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v10);
      __outbyte(v6, v44);
      KeStallExecutionProcessor(1u);
      v3 = v43;
      v2 = ++v39;
      v6 = 0LL;
      v7 = 0;
    }
    if ( v7 )
      break;
    if ( v5 )
    {
      v5 = 0LL;
      v43 = 1;
    }
LABEL_21:
    ++v7;
    v13 = __inbyte(*(_QWORD *)(a1 + 32));
    v4 = v13;
    v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
    ACPIEcLogAction(a1, 0x10u, v4);
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v14);
    if ( v45 && (v4 & 0x10) == 0 )
    {
      ++*(_DWORD *)(a1 + 788);
      v4 |= 0x10u;
      v45 = 0;
    }
    if ( (v4 & 1) != 0 )
    {
      v15 = __inbyte(*(_QWORD *)(a1 + 24));
      v16 = v15;
      v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
      ACPIEcLogAction(a1, 0x20u, v16);
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v17);
      switch ( *(_BYTE *)(a1 + 488) )
      {
        case 1:
          **(_BYTE **)(a1 + 496) = v16;
          *(_BYTE *)(a1 + 488) = 5;
          break;
        case 2:
          if ( (_BYTE)v16 )
          {
            v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
            v21 = 1 << (v16 & 0x1F);
            v22 = v16 >> 5;
            v40 = v21;
            v23 = *(_DWORD *)(a1 + 4 * (v16 >> 5) + 124);
            if ( (v23 & v21) == 0 )
            {
              *(_DWORD *)(a1 + 4 * v22 + 124) = v21 | v23;
              if ( (v21 & *(_DWORD *)(a1 + 4 * v22 + 156)) != 0 )
              {
                v24 = *(unsigned __int8 *)(v16 + a1 + 188);
                *(_BYTE *)(*(_QWORD *)(a1 + 448) + 24 * v24) = *(_BYTE *)(a1 + 445);
                *(_BYTE *)(a1 + 445) = v24;
              }
              else
              {
                *(_BYTE *)(v16 + a1 + 188) = *(_BYTE *)(a1 + 444);
                *(_BYTE *)(a1 + 444) = v16;
              }
            }
            KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v20);
            v38 = 1;
          }
          *(_BYTE *)(a1 + 488) = 0;
          break;
        case 3:
          v19 = *(_BYTE *)(a1 + 489);
          ++*(_DWORD *)(a1 + 792);
          *(_BYTE *)(a1 + 488) = v19;
          v45 = 1;
          *(_BYTE *)(a1 + 489) = 7;
          break;
        default:
          v18 = *(_DWORD *)(a1 + 796);
          if ( v18 < 5 )
          {
            ACPIEcLogError(a1, -2147155953);
            v18 = *(_DWORD *)(a1 + 796);
          }
          *(_DWORD *)(a1 + 796) = v18 + 1;
          break;
      }
      v2 = v39;
      v3 = v43;
      goto LABEL_2;
    }
    v2 = v39;
    v3 = v43;
    if ( (v4 & 2) == 0 )
    {
      switch ( *(_BYTE *)(a1 + 488) )
      {
        case 4:
          v31 = *(char **)(a1 + 496);
          *(_BYTE *)(a1 + 488) = 5;
          v44 = *v31;
LABEL_58:
          v6 = *(_QWORD *)(a1 + 24);
          break;
        case 5:
          v26 = *(_WORD *)(a1 + 494);
          if ( v26 )
          {
            if ( (v4 & 0x10) != 0 || v26 <= 1u && (AcpiOverrideAttributes & 0x1000000) != 0 )
            {
              v28 = *(_BYTE *)(a1 + 490);
              ++*(_QWORD *)(a1 + 496);
              ++*(_BYTE *)(a1 + 491);
              v44 = v28;
              *(_WORD *)(a1 + 494) = v26 - 1;
              v27 = 6;
            }
            else
            {
              *(_BYTE *)(a1 + 489) = 5;
              v27 = 3;
              v44 = -126;
            }
            v6 = *(_QWORD *)(a1 + 40);
            *(_BYTE *)(a1 + 488) = v27;
          }
          else
          {
            v29 = (PVOID **)p_P;
            v30 = *(PVOID ***)(a1 + 480);
            *(_BYTE *)(a1 + 488) = 0;
            *(_WORD *)(a1 + 494) = 0;
            *(_QWORD *)(a1 + 480) = 0LL;
            if ( *v29 != &P )
LABEL_74:
              __fastfail(3u);
            v30[1] = (PVOID *)v29;
            *v30 = &P;
            *v29 = (PVOID *)v30;
            p_P = (PVOID *)v30;
          }
          break;
        case 6:
          v25 = 1;
          if ( *(_BYTE *)(a1 + 490) != 0x80 )
            v25 = 4;
          v44 = *(_BYTE *)(a1 + 491);
          *(_BYTE *)(a1 + 488) = v25;
          goto LABEL_58;
      }
      v2 = v39;
      if ( !v6 && !*(_BYTE *)(a1 + 488) )
      {
        *(_BYTE *)(a1 + 504) = 0;
        if ( (v4 & 0x20) != 0 )
        {
          v6 = *(_QWORD *)(a1 + 40);
          *(_BYTE *)(a1 + 488) = 2;
          v44 = -124;
LABEL_63:
          KeSetTimer((PKTIMER)(a1 + 520), ACPIEcWatchdogTimeout, (PKDPC)(a1 + 584));
          goto LABEL_67;
        }
        v32 = ExInterlockedRemoveHeadList((PLIST_ENTRY)(a1 + 464), (PKSPIN_LOCK)(a1 + 88));
        if ( v32 )
        {
          *(_QWORD *)(a1 + 480) = v32;
          v7 = 0;
          Blink = v32[1].Blink;
          *(_QWORD *)(a1 + 496) = Blink;
          v34 = BYTE1(v32[1].Flink);
          *(_BYTE *)(a1 + 491) = v34;
          v35 = WORD1(v32[1].Flink);
          *(_WORD *)(a1 + 492) = v35;
          *(_BYTE *)(a1 + 490) = v32[1].Flink;
          *(_QWORD *)(a1 + 496) = (char *)Blink - 1;
          *(_BYTE *)(a1 + 491) = v34 - 1;
          *(_WORD *)(a1 + 494) = v35;
          *(_BYTE *)(a1 + 488) = 5;
          goto LABEL_63;
        }
        v3 = 0;
        v43 = 0;
        KeCancelTimer((PKTIMER)(a1 + 520));
LABEL_67:
        v2 = v39;
      }
    }
  }
  if ( !v5 )
  {
    v11 = v4 & 0x10;
    if ( v3 )
    {
      v39 = v7 + v2;
      KeStallExecutionProcessor(v7);
      if ( v11 )
      {
        if ( v7 >= *(_DWORD *)(a1 + 64) )
          v5 = (int *)(a1 + 780);
      }
      else
      {
        v5 = (int *)(a1 + 776);
        if ( v7 < *(_DWORD *)(a1 + 68) )
          v5 = 0LL;
      }
    }
    else if ( v11 )
    {
      v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
      ACPIEcLogAction(a1, 0x30u, 131);
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v12);
      __outbyte(*(_QWORD *)(a1 + 40), 0x83u);
      v5 = (int *)(a1 + 784);
    }
    else
    {
      v5 = &v40;
    }
    goto LABEL_21;
  }
  ++*v5;
  if ( v2 > *(_DWORD *)(a1 + 800) )
    *(_DWORD *)(a1 + 800) = v2;
  while ( 1 )
  {
    v36 = (void (__fastcall **)(_QWORD))P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_74;
    v37 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_74;
    P = *(PVOID *)P;
    *(_QWORD *)(v37 + 8) = &P;
    v36[4](v36[5]);
    ExFreePoolWithTag(v36, 0);
  }
  if ( v38 )
    ACPIEcDispatchQueries(a1);
}
