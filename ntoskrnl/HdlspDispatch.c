__int64 __fastcall HdlspDispatch(int a1, int *a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  unsigned int v5; // ebx
  char v10; // bp
  KIRQL v11; // r12
  volatile signed __int64 *v12; // rcx
  int v13; // eax
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r10
  _DWORD *v16; // r8
  int v17; // eax
  bool v18; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v23; // eax
  __int64 v24; // rcx
  int v25; // esi
  int v26; // esi
  int v27; // esi
  int v28; // esi
  int v29; // esi
  int v30; // esi
  const char *v31; // r8
  int v32; // eax
  __int64 v33; // r9
  unsigned int v34; // eax
  char Line; // al
  char *v36; // rcx
  PKSPIN_LOCK v37; // rax
  int v38; // ecx
  __int64 v39; // rcx
  PKSPIN_LOCK v40; // rcx
  unsigned int v41; // edx
  int v42; // eax
  char Str1[80]; // [rsp+40h] [rbp-98h] BYREF

  v5 = 0;
  v10 = 1;
  switch ( a1 )
  {
    case 17:
    case 14:
      goto LABEL_127;
    case 20:
      goto LABEL_121;
    case 15:
LABEL_127:
      switch ( a1 )
      {
        case 14:
          *((_DWORD *)HeadlessGlobals + 12) = HeadlessGlobals[6] & 0xFFFFFFBD | 2;
          return v5;
        case 15:
          if ( (HeadlessGlobals[6] & 1) != 0 )
            HdlspBugCheckProcessing();
          return v5;
        case 16:
          if ( a4 && a5 && *a5 >= 0x20uLL )
          {
            v40 = HeadlessGlobals;
            *(_DWORD *)a4 = 1;
            *(_BYTE *)(a4 + 8) = 1;
            *(_BYTE *)(a4 + 9) = (v40[6] & 8) != 0;
            *(_DWORD *)(a4 + 24) = *((_DWORD *)v40 + 13);
            v41 = *((_DWORD *)v40 + 12);
            v42 = (v41 >> 9) & 7;
            if ( v42 || (v41 & 8) != 0 )
            {
              *(_DWORD *)(a4 + 12) = v42;
              *(_QWORD *)(a4 + 16) = v40[8];
            }
            else
            {
              *(_DWORD *)(a4 + 12) = 0;
              *(_QWORD *)(a4 + 16) = 0LL;
            }
            *(_BYTE *)(a4 + 28) = *((_BYTE *)v40 + 84);
            goto LABEL_149;
          }
          goto LABEL_148;
      }
      v39 = (unsigned int)(a1 - 17);
      if ( a1 == 17 )
      {
        if ( a2 )
          HdlspAddLogEntry(a2);
        else
          return (unsigned int)-1073741811;
        return v5;
      }
      if ( a1 == 18 )
      {
        if ( a2 && a3 == 1 )
        {
          LOBYTE(v39) = *(_BYTE *)a2;
          HdlspProcessDumpCommand(v39);
          goto LABEL_149;
        }
        goto LABEL_148;
      }
LABEL_132:
      v5 = -1073741811;
      if ( a1 != 20 )
        goto LABEL_149;
      return v5;
  }
  if ( (HeadlessGlobals[6] & 2) != 0 )
    v11 = -1;
  else
    v11 = KeAcquireSpinLockRaiseToDpc(HeadlessGlobals);
  v12 = (volatile signed __int64 *)HeadlessGlobals;
  v13 = *((_DWORD *)HeadlessGlobals + 12);
  if ( (v13 & 0x40) == 0 )
  {
    *((_DWORD *)HeadlessGlobals + 12) = v13 | 0x40;
    if ( v11 != 0xFF )
    {
      KxReleaseSpinLock(v12);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v11 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v23 = ~(unsigned __int16)(-1LL << (v11 + 1));
          v18 = (v23 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v23;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(v11);
    }
    if ( a1 <= 13 )
    {
      if ( a1 == 13 )
      {
        if ( !a4 || !a5 || *a5 < 2uLL )
          goto LABEL_148;
        if ( (HeadlessGlobals[6] & 1) != 0 )
        {
          Line = HdlspGetLine((void *)(a4 + 1), *a5 - 1LL);
          goto LABEL_80;
        }
      }
      else
      {
        if ( a1 <= 7 )
        {
          if ( a1 == 7 )
            goto LABEL_37;
          v24 = (unsigned int)(a1 - 1);
          if ( a1 != 1 )
          {
            if ( a1 != 2 )
            {
              if ( a1 == 3 )
              {
                if ( a2 )
                {
                  if ( (HeadlessGlobals[6] & 1) != 0 )
                    HdlspPutString(a2);
                  goto LABEL_149;
                }
                goto LABEL_148;
              }
              if ( a1 == 4 || (unsigned int)(a1 - 5) <= 1 )
              {
LABEL_37:
                if ( (HeadlessGlobals[6] & 1) != 0 )
                {
                  v25 = a1 - 4;
                  if ( !v25 )
                  {
                    v36 = "\x1B[2J";
                    goto LABEL_90;
                  }
                  v26 = v25 - 1;
                  if ( !v26 )
                  {
                    v36 = "\x1B[0J";
                    goto LABEL_90;
                  }
                  v27 = v26 - 1;
                  if ( !v27 )
                  {
                    v36 = "\x1B[0K";
                    goto LABEL_90;
                  }
                  v28 = v27 - 1;
                  if ( !v28 )
                  {
                    v36 = "\x1B[0m";
                    goto LABEL_90;
                  }
                  v29 = v28 - 1;
                  if ( !v29 )
                  {
                    v36 = "\x1B[7m";
                    goto LABEL_90;
                  }
                  v30 = v29 - 1;
                  if ( v30 )
                  {
                    if ( v30 == 1 && a2 && a3 == 8 )
                    {
                      v31 = "\x1B[%d;%dH";
                      v32 = *a2 + 1;
                      v33 = (unsigned int)(a2[1] + 1);
LABEL_84:
                      sprintf_s(Str1, 0x50uLL, v31, v33, v32);
                      v36 = Str1;
LABEL_90:
                      HdlspSendStringAtBaud(v36);
                      goto LABEL_149;
                    }
                  }
                  else if ( a2 && a3 == 8 )
                  {
                    v32 = *a2;
                    v31 = "\x1B[%d;%dm";
                    v33 = (unsigned int)a2[1];
                    goto LABEL_84;
                  }
LABEL_148:
                  v5 = -1073741811;
                }
LABEL_149:
                *((_DWORD *)HeadlessGlobals + 12) &= ~0x40u;
                return v5;
              }
              goto LABEL_132;
            }
            if ( !a4 || !a5 || *a5 != 1LL )
              goto LABEL_148;
            if ( (HeadlessGlobals[6] & 1) != 0 )
            {
              if ( (unsigned __int8)HdlspGetLine(Str1, 0x50uLL) )
              {
                if ( strcmp(Str1, "reboot") && strcmp(Str1, "shutdown") )
                  v10 = 0;
                *(_BYTE *)a4 = v10;
              }
              goto LABEL_149;
            }
LABEL_60:
            *(_BYTE *)a4 = 0;
            goto LABEL_149;
          }
          if ( !a2 || a3 != 1 )
            goto LABEL_148;
          LOBYTE(v24) = *(_BYTE *)a2;
          v34 = HdlspEnableTerminal(v24);
LABEL_100:
          v5 = v34;
          goto LABEL_149;
        }
        if ( a1 == 8 || a1 == 9 || a1 == 10 )
          goto LABEL_37;
        if ( a1 != 11 )
        {
          if ( !a4 || !a5 || *a5 != 1LL )
            goto LABEL_148;
          if ( (HeadlessGlobals[6] & 1) != 0 && InbvPortPollOnly(*((_DWORD *)HeadlessGlobals + 14)) )
          {
            InbvPortGetByte(*((_DWORD *)HeadlessGlobals + 14), (_BYTE *)a4);
            goto LABEL_149;
          }
          goto LABEL_60;
        }
        if ( !a4 || !a5 || *a5 != 1LL )
          goto LABEL_148;
        if ( (HeadlessGlobals[6] & 1) != 0 )
        {
          Line = InbvPortPollOnly(*((_DWORD *)HeadlessGlobals + 14));
LABEL_80:
          *(_BYTE *)a4 = Line;
          goto LABEL_149;
        }
      }
      Line = 0;
      goto LABEL_80;
    }
    if ( a1 <= 19 )
    {
      if ( a1 == 19 )
      {
        if ( a2 )
        {
          v34 = HdlspSetBlueScreenInformation(a2, a3);
          goto LABEL_100;
        }
        return 3221225485LL;
      }
      goto LABEL_127;
    }
    if ( a1 != 20 )
    {
      switch ( a1 )
      {
        case 21:
          if ( a4 && a5 && *a5 >= 0x10uLL )
          {
            *(_OWORD *)a4 = *(_OWORD *)((char *)HeadlessGlobals + 100);
            goto LABEL_149;
          }
          goto LABEL_148;
        case 22:
          if ( a2 && a3 )
          {
            if ( (HeadlessGlobals[6] & 1) != 0 )
              HdlspPutData(a2, a3);
            goto LABEL_149;
          }
          goto LABEL_148;
        case 23:
          if ( a2 )
          {
            if ( (HeadlessGlobals[6] & 1) != 0 )
              HdlspPutWideString(a2);
            goto LABEL_149;
          }
          goto LABEL_148;
        case 24:
          if ( a4 && a5 && *a5 >= 0xCuLL )
          {
            v37 = HeadlessGlobals;
            *(_QWORD *)a4 = *(PKSPIN_LOCK)((char *)HeadlessGlobals + 118);
            *(_DWORD *)(a4 + 8) = *(_DWORD *)((char *)v37 + 126);
            goto LABEL_149;
          }
          goto LABEL_148;
      }
      goto LABEL_132;
    }
LABEL_121:
    v38 = *((_DWORD *)HeadlessGlobals + 12);
    if ( (v38 & 1) == 0 || (v38 & 2) == 0 )
      return v5;
    if ( a2 && a3 == 4 )
    {
      HdlspSendBlueScreenInfo((unsigned int)*a2);
      HdlspSendStringAtBaud("\n\r!SAC>");
      return v5;
    }
    return 3221225485LL;
  }
  if ( v11 != 0xFF )
  {
    KxReleaseSpinLock((volatile signed __int64 *)HeadlessGlobals);
    if ( KiIrqlFlags )
    {
      v14 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v14 <= 0xFu && v11 <= 0xFu && v14 >= 2u )
      {
        v15 = KeGetCurrentPrcb();
        v16 = v15->SchedulerAssist;
        v17 = ~(unsigned __int16)(-1LL << (v11 + 1));
        v18 = (v17 & v16[5]) == 0;
        v16[5] &= v17;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick((__int64)v15);
      }
    }
    __writecr8(v11);
  }
  return 3221225473LL;
}
