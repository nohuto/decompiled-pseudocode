/*
 * XREFs of HdlspGetLine @ 0x140AE7690
 * Callers:
 *     HdlspBugCheckProcessing @ 0x140AE6D84 (HdlspBugCheckProcessing.c)
 *     HdlspDispatch @ 0x140AE6EB0 (HdlspDispatch.c)
 *     HdlspPutMore @ 0x140AE80B8 (HdlspPutMore.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     sprintf_s @ 0x1403D9BA0 (sprintf_s.c)
 *     strcpy_s @ 0x1403D9D10 (strcpy_s.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     InbvPortGetByte @ 0x140676FBC (InbvPortGetByte.c)
 *     InbvPortPollOnly @ 0x140677170 (InbvPortPollOnly.c)
 *     HdlspSendStringAtBaud @ 0x140AE8474 (HdlspSendStringAtBaud.c)
 */

char __fastcall HdlspGetLine(void *a1, size_t Size)
{
  KIRQL v4; // bl
  volatile signed __int64 *v5; // rcx
  int v6; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v10; // eax
  bool v11; // zf
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r10
  _DWORD *v15; // r9
  int v16; // eax
  unsigned __int8 v17; // r8
  PKSPIN_LOCK v18; // rdx
  PKSPIN_LOCK v19; // rcx
  char *v20; // rcx
  KSPIN_LOCK v21; // rcx
  KSPIN_LOCK v22; // rax
  KSPIN_LOCK v23; // rcx
  KSPIN_LOCK v24; // r9
  char v25; // r8
  PKSPIN_LOCK v26; // r9
  KSPIN_LOCK v27; // rax
  char *v28; // rcx
  __int64 v29; // r8
  PKSPIN_LOCK v30; // rbx
  size_t v31; // r8
  const void *v32; // rdx
  unsigned __int8 v33; // [rsp+50h] [rbp+18h] BYREF

  v33 = 0;
  if ( (HeadlessGlobals[6] & 2) != 0 )
    v4 = -1;
  else
    v4 = KeAcquireSpinLockRaiseToDpc(HeadlessGlobals);
  v5 = (volatile signed __int64 *)HeadlessGlobals;
  v6 = *((_DWORD *)HeadlessGlobals + 12);
  if ( (v6 & 0x10) != 0 )
  {
    if ( v4 != 0xFF )
    {
      KxReleaseSpinLock((volatile signed __int64 *)HeadlessGlobals);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v4 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v10 = ~(unsigned __int16)(-1LL << (v4 + 1));
          v11 = (v10 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v10;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(v4);
    }
    return 0;
  }
  else
  {
    *((_DWORD *)HeadlessGlobals + 12) = v6 | 0x10;
    if ( v4 != 0xFF )
    {
      KxReleaseSpinLock(v5);
      if ( KiIrqlFlags )
      {
        v13 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v13 <= 0xFu && v4 <= 0xFu && v13 >= 2u )
        {
          v14 = KeGetCurrentPrcb();
          v15 = v14->SchedulerAssist;
          v16 = ~(unsigned __int16)(-1LL << (v4 + 1));
          v11 = (v16 & v15[5]) == 0;
          v15[5] &= v16;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick((__int64)v14);
        }
      }
      __writecr8(v4);
    }
    if ( (HeadlessGlobals[6] & 0x20) == 0 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( InbvPortPollOnly(*((_DWORD *)HeadlessGlobals + 14))
            && InbvPortGetByte(*((_DWORD *)HeadlessGlobals + 14), &v33) )
          {
            v17 = v33;
          }
          else
          {
            v17 = 0;
            v33 = 0;
          }
          if ( !v17 )
            goto LABEL_46;
          v18 = HeadlessGlobals;
          *(_BYTE *)(HeadlessGlobals[4] + HeadlessGlobals[11]) = v17;
          v19 = HeadlessGlobals;
          if ( !*((_BYTE *)HeadlessGlobals + 117) || v33 != 10 )
            break;
          *((_BYTE *)HeadlessGlobals + 117) = 0;
        }
        *((_BYTE *)HeadlessGlobals + 117) = v33 == 13;
        if ( v33 == 10 || v33 == 13 )
          break;
        switch ( v33 )
        {
          case 8u:
          case 0x7Fu:
            if ( v18[11] )
            {
              HdlspSendStringAtBaud("\b \b");
              --HeadlessGlobals[11];
            }
            break;
          case 3u:
            v21 = ++v18[11];
            v22 = v18[4];
            goto LABEL_49;
          case 9u:
          case 0x1Bu:
            HdlspSendStringAtBaud("\a");
LABEL_46:
            *((_DWORD *)HeadlessGlobals + 12) &= ~0x10u;
            return 0;
          default:
            v20 = (char *)v19[3];
            if ( v18[11] == 78 )
            {
              sprintf_s(v20, 0x50uLL, "\b%c", v33);
              HdlspSendStringAtBaud(HeadlessGlobals[3]);
            }
            else
            {
              sprintf_s(v20, 0x50uLL, "%c", v33);
              HdlspSendStringAtBaud(HeadlessGlobals[3]);
              ++HeadlessGlobals[11];
            }
            break;
        }
      }
      HdlspSendStringAtBaud("\r\n");
      v18 = HeadlessGlobals;
      v21 = HeadlessGlobals[4];
      v22 = HeadlessGlobals[11];
LABEL_49:
      *(_BYTE *)(v21 + v22) = 0;
      ++v18[11];
      v23 = HeadlessGlobals[11] - 1;
      if ( HeadlessGlobals[11] != 1 )
      {
        v24 = HeadlessGlobals[4];
        do
        {
          v25 = *(_BYTE *)(v24 + v23);
          if ( v25 && *(_BYTE *)(v23 + v24) != 32 && v25 != 9 )
            break;
          --v23;
        }
        while ( v23 );
      }
      v26 = HeadlessGlobals;
      v27 = HeadlessGlobals[4];
      if ( *(_BYTE *)(v27 + v23) )
        *(_BYTE *)(v27 + v23 + 1) = 0;
      v28 = (char *)v26[4];
      v29 = 0LL;
      if ( *v28 )
      {
        do
        {
          if ( v28[v29] != 9 && v28[v29] != 32 )
            break;
          ++v29;
        }
        while ( v28[v29] );
        if ( v29 )
          strcpy_s(v28, 0x50uLL, &v28[v29]);
      }
    }
    v30 = HeadlessGlobals;
    v31 = HeadlessGlobals[11];
    v32 = (const void *)HeadlessGlobals[4];
    if ( Size < v31 )
    {
      memmove(a1, v32, Size);
      memmove((void *)v30[4], (const void *)(v30[4] + Size), v30[11] - Size);
      v30 = HeadlessGlobals;
      *((_DWORD *)HeadlessGlobals + 12) |= 0x20u;
      v30[11] -= Size;
    }
    else
    {
      memmove(a1, v32, v31);
      v30[11] = 0LL;
      *((_DWORD *)v30 + 12) &= ~0x20u;
    }
    *((_DWORD *)v30 + 12) &= ~0x10u;
    return 1;
  }
}
