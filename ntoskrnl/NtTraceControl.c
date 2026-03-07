__int64 __fastcall NtTraceControl(
        unsigned int a1,
        unsigned int *a2,
        unsigned int a3,
        volatile signed __int64 *a4,
        SIZE_T Length,
        unsigned __int64 a6)
{
  unsigned __int64 v6; // rbx
  _QWORD *Pool2; // r13
  unsigned __int64 v8; // rdx
  volatile void *v9; // r9
  unsigned int v10; // r10d
  unsigned int v11; // r11d
  int Trace; // edi
  unsigned int v13; // r14d
  char v14; // r8
  _DWORD *v15; // rsi
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // r15d
  unsigned int v19; // r12d
  volatile signed __int64 *v20; // rcx
  __int64 v21; // rcx
  int updated; // eax
  unsigned int v24; // eax
  __int64 v25; // rdx
  void *v27; // rcx
  int v28; // eax
  unsigned int Blink_low; // edx
  unsigned int *v30; // rax
  unsigned int *v31; // r14
  void *v32; // rcx
  unsigned int v33; // edx
  _QWORD *v34; // r9
  __int64 v35; // r8
  __int64 v36; // rdx
  char *v37; // rcx
  int v38; // [rsp+30h] [rbp-68h] BYREF
  unsigned int Size; // [rsp+34h] [rbp-64h] BYREF
  int Size_4; // [rsp+38h] [rbp-60h]
  struct _LIST_ENTRY *Flink; // [rsp+40h] [rbp-58h]
  _QWORD *v42; // [rsp+48h] [rbp-50h]
  void *v43; // [rsp+50h] [rbp-48h]
  void *v44; // [rsp+58h] [rbp-40h]

  v6 = a1;
  Pool2 = 0LL;
  v42 = 0LL;
  Size = 0;
  Flink = PsGetCurrentServerSiloGlobals()[54].Flink;
  Trace = v11;
  Size_4 = v11;
  LOBYTE(v13) = 0;
  if ( v14 )
  {
    v13 = (unsigned int)v6 >> 31;
    LODWORD(v6) = v6 & 0x7FFFFFFF;
    if ( !(_BYTE)v13 )
      v6 = v10;
    if ( v8 )
    {
      if ( a3 && (v8 + a3 > 0x7FFFFFFF0000LL || v8 + a3 < v8) )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    else
    {
      a3 = v11;
    }
    if ( v9 )
      ProbeForWrite(v9, (unsigned int)Length, 1u);
    else
      LODWORD(Length) = v11;
    v15 = (_DWORD *)a6;
    if ( !a6 )
    {
      Trace = -1073741811;
      Size_4 = -1073741811;
      goto LABEL_38;
    }
    v16 = a6;
    if ( a6 >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v16 = *(_DWORD *)v16;
    Trace = Size_4;
  }
  else
  {
    v15 = (_DWORD *)a6;
  }
  if ( (unsigned int)v6 <= 0x1B && (v17 = 134238208, _bittest(&v17, v6)) )
  {
    v18 = Length;
    v19 = a3;
  }
  else
  {
    v19 = a3;
    v18 = Length;
    if ( a3 || (_DWORD)Length )
    {
      if ( a3 > (unsigned int)Length )
        v24 = a3;
      else
        v24 = Length;
      Pool2 = (_QWORD *)ExAllocatePool2(257LL, v24, 1350005829LL);
      v42 = Pool2;
      if ( !Pool2 )
      {
        Trace = -1073741801;
        goto LABEL_38;
      }
      if ( a2 )
        memmove(Pool2, a2, a3);
    }
  }
  if ( (_DWORD)v6 != 12 )
  {
    if ( (_DWORD)v6 == 15 )
    {
      if ( v19 != 160 || v18 - 160 > 0xFF60 )
        goto LABEL_117;
      updated = EtwpRegisterUMProvider((_DWORD)Flink, (_DWORD)Pool2, v18, (unsigned __int8)v13, (__int64)&Size);
LABEL_45:
      Trace = updated;
    }
    else
    {
      if ( (_DWORD)v6 == 30 )
      {
        if ( v19 == 24 && v18 - 120 <= 0xFF88 )
        {
          Trace = EtwpSetProviderTraitsUm((_DWORD)Pool2, v18, (unsigned int)&Size);
          v20 = a4;
          goto LABEL_24;
        }
LABEL_117:
        Trace = -1073741811;
        v20 = a4;
        goto LABEL_24;
      }
      switch ( (int)v6 )
      {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
          if ( v19 < 0xB0 || v18 < 0xB0 )
            goto LABEL_119;
          Trace = EtwpValidateLoggerInfo(Pool2, (unsigned int)(v6 - 1), 0x140000000uLL, v9);
          if ( Trace < 0 )
            goto LABEL_69;
          if ( *(_DWORD *)Pool2 > v19 )
          {
LABEL_119:
            Trace = -1073741306;
            break;
          }
          Trace = 0;
LABEL_69:
          if ( Trace < 0 )
            break;
          if ( (_DWORD)v6 == 3 )
          {
            Trace = EtwpQueryTrace(Flink, Pool2);
          }
          else if ( (unsigned int)v25 <= 6 )
          {
            __asm { jmp     rdx }
          }
          Size = 176;
          v20 = a4;
          goto LABEL_24;
        case 11:
          if ( v19 != 96 || v18 != 96 )
            goto LABEL_117;
          Size = 96;
          Trace = EtwpRealtimeConnect(Pool2);
          v20 = a4;
          goto LABEL_24;
        case 13:
          if ( v19 != 48 || v18 )
            goto LABEL_117;
          Trace = WdiDispatchControl(Pool2);
          v20 = a4;
          goto LABEL_24;
        case 14:
          if ( v19 != 8 || v18 )
            goto LABEL_117;
          v32 = (void *)*a2;
          v43 = v32;
          Trace = EtwpRealtimeDisconnectConsumerByHandle(v32);
          v20 = a4;
          goto LABEL_24;
        case 16:
          if ( v19 || v18 - 72 > 0xFFB8 )
            goto LABEL_117;
          Trace = EtwpReceiveNotification(Pool2, v18, v13, &Size);
          v20 = a4;
          goto LABEL_24;
        case 17:
          if ( v19 < 0x48 || v18 != 72 || *((_DWORD *)Pool2 + 1) != v19 )
            goto LABEL_117;
          if ( *(_DWORD *)Pool2 == 3 )
          {
            if ( v19 < 0x78 )
              goto LABEL_117;
            updated = EtwpEnableGuid(Flink, (__int64)Pool2, 1);
            Size = 72;
          }
          else
          {
            updated = EtwpNotifyGuid((__int64)Flink, (__int64)Pool2, 1);
            Size = 72;
          }
          goto LABEL_45;
        case 18:
          if ( v19 < 0x48 || *((_DWORD *)Pool2 + 1) != v19 )
            goto LABEL_117;
          *((_DWORD *)Pool2 + 9) = PsGetCurrentThreadProcessId();
          Trace = EtwpSendReplyDataBlock(Pool2);
          v20 = a4;
          goto LABEL_24;
        case 19:
          if ( v19 != 8 )
            goto LABEL_117;
          v38 = 0;
          Trace = EtwpReceiveReplyDataBlock(Pool2);
          Size = 0;
          v20 = a4;
          goto LABEL_24;
        case 20:
          if ( v19 || v18 )
            goto LABEL_117;
          updated = WdiUpdateSem();
          goto LABEL_45;
        case 21:
          updated = EtwpGetTraceGuidList(Flink, Pool2, v18 >> 4, &Size);
          Size *= 16;
          goto LABEL_45;
        case 22:
          if ( v19 != 16 )
            goto LABEL_117;
          Size = v18;
          Trace = EtwpGetTraceGuidInfo(Flink, Pool2, Pool2, &Size);
          v20 = a4;
          goto LABEL_24;
        case 23:
          Trace = EtwpEnumerateTraceGuids(Flink, Pool2, v18 / 0x24, &Size);
          Size *= 36;
          break;
        case 24:
          if ( v19 || v18 )
            goto LABEL_117;
          if ( !LODWORD(Flink[254].Blink) )
          {
            LODWORD(Flink[254].Blink) = PsGetCurrentThreadProcessId();
            Trace = 0;
            v20 = a4;
            goto LABEL_24;
          }
          Trace = -1073741790;
          break;
        case 25:
          if ( v19 != 4 || v18 != 16 )
            goto LABEL_117;
          updated = EtwpQueryReferenceTime(Flink, *(unsigned int *)Pool2, Pool2);
          Size = 16;
          goto LABEL_45;
        case 26:
          if ( v19 != 8 )
            goto LABEL_117;
          Trace = EtwpTrackProviderBinary(Flink, Pool2);
          v20 = a4;
          goto LABEL_24;
        case 27:
          if ( v19 != 4 )
            goto LABEL_117;
          v27 = (void *)*a2;
          v44 = v27;
          if ( !v27 )
            goto LABEL_117;
          Trace = EtwpAddNotificationEvent(v27, v13);
          v20 = a4;
          goto LABEL_24;
        case 28:
          if ( v19 < 8 )
            goto LABEL_117;
          v33 = *((_DWORD *)Pool2 + 1);
          if ( 16LL * v33 + 8 != v19 )
            goto LABEL_117;
          v34 = 0LL;
          if ( v33 )
            v34 = Pool2 + 1;
          updated = EtwpUpdateDisallowList(Flink, *(unsigned int *)Pool2, v33, v34);
          goto LABEL_45;
        case 31:
          if ( v19 != 16 || v18 )
            goto LABEL_117;
          updated = EtwpUseDescriptorTypeUm(Pool2);
          goto LABEL_45;
        case 32:
          updated = EtwpGetGuidList((_DWORD)Flink, 2, (_DWORD)Pool2, v18 >> 4, (__int64)&Size);
          Size *= 16;
          goto LABEL_45;
        case 33:
          if ( v19 != 16 )
            goto LABEL_117;
          Size = v18;
          updated = EtwpGetTraceGroupInfo(Flink, Pool2, Pool2, &Size);
          goto LABEL_45;
        case 34:
          if ( v19 != 8 )
            goto LABEL_117;
          Size = v18;
          updated = EtwpGetDisallowList(Flink, Pool2, Pool2, &Size);
          goto LABEL_45;
        case 35:
          if ( v19 != 16 || v18 )
            goto LABEL_117;
          updated = EtwpSetCompressionSettings((unsigned int *)Pool2);
          goto LABEL_45;
        case 36:
          if ( v19 != 8 || v18 != 16 )
            goto LABEL_117;
          Size = 16;
          updated = EtwpGetCompressionSettings((unsigned __int16 *)Pool2, (unsigned int *)Pool2);
          goto LABEL_45;
        case 37:
          if ( v19 < 0xC )
            goto LABEL_117;
          v35 = *((unsigned __int16 *)Pool2 + 4);
          if ( (unsigned int)v35 > 0x10 )
          {
            Trace = -1073741811;
            break;
          }
          v36 = *((unsigned int *)Pool2 + 1);
          if ( (unsigned int)(v36 - 1) <= 3 )
          {
            Trace = -1073741811;
            break;
          }
          if ( (_WORD)v35 )
          {
            if ( !(_DWORD)v36 )
            {
              Trace = -1073741811;
              break;
            }
          }
          else if ( (_DWORD)v36 )
          {
            goto LABEL_117;
          }
          if ( 16 * v35 + 12 != v19 )
            goto LABEL_117;
          if ( (_WORD)v35 )
            v37 = (char *)Pool2 + 12;
          else
            v37 = 0LL;
          updated = EtwpUpdatePeriodicCaptureState(*(unsigned int *)Pool2, v36, v35, v37);
          goto LABEL_45;
        case 38:
          if ( v19 < 8 || (v19 & 7) != 0 || v18 < 2 )
            goto LABEL_117;
          LOWORD(v38) = 0;
          Trace = EtwpGetPrivateSessionTraceHandle(Pool2, v19 >> 3, &v38);
          if ( !Trace )
          {
            Size = 2;
            *(_WORD *)Pool2 = v38;
          }
          break;
        case 39:
          if ( v19 < 2 || v18 < 8 )
            goto LABEL_117;
          Trace = EtwpRegisterPrivateSession(Flink, *(unsigned __int16 *)Pool2, (char *)Pool2 + 4, Pool2);
          if ( !Trace )
            Size = 8;
          break;
        case 40:
          if ( v19 < 8 || v18 < 2 )
            goto LABEL_117;
          Trace = EtwpQuerySessionDemuxObject(*Pool2, Pool2);
          if ( !Trace )
            Size = 2;
          break;
        case 41:
          if ( v19 < 8 )
            goto LABEL_117;
          updated = EtwpSetProviderBinaryTracking(Flink, *(unsigned int *)Pool2, *((unsigned __int8 *)Pool2 + 4));
          goto LABEL_45;
        case 42:
          if ( v18 < 4 )
            goto LABEL_117;
          v28 = (int)Flink[1].Flink;
          goto LABEL_84;
        case 43:
          if ( v18 < 4 )
            goto LABEL_117;
          v28 = *(_DWORD *)((char *)&NlsMbCodePageTag + 6);
LABEL_84:
          *(_DWORD *)Pool2 = v28;
          Size = 4;
          Trace = 0;
          v20 = a4;
          goto LABEL_24;
        case 44:
          if ( v19 != 8 || v18 < 4 )
            goto LABEL_117;
          Blink_low = *(unsigned __int16 *)Pool2;
          if ( Blink_low == 0xFFFF )
            Blink_low = LOBYTE(Flink[264].Blink);
          v30 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, Blink_low, 0);
          v31 = v30;
          if ( v30 )
          {
            Size = 4;
            *(_DWORD *)Pool2 = EtwpQueryUsedProcessorCount((__int64)v30);
            EtwpReleaseLoggerContext(v31, 0);
            v20 = a4;
            goto LABEL_24;
          }
          Trace = -1073741811;
          break;
        case 45:
          Size = v18;
          updated = EtwpGetPmcOwnership(Pool2, &Size);
          goto LABEL_45;
        case 46:
          Size = v18;
          updated = EtwpGetPmcSessions((__int64)Pool2, &Size);
          goto LABEL_45;
        default:
          Trace = -1073741808;
          break;
      }
    }
    v20 = a4;
    goto LABEL_24;
  }
  if ( v18 != 16 )
    goto LABEL_117;
  Trace = 0;
  EtwpCreateActivityId(a4);
LABEL_24:
  if ( Trace >= 0 )
  {
    if ( Size )
    {
      if ( Size > v18 )
      {
        Trace = -1073741789;
        Size_4 = -1073741789;
      }
      else
      {
        memmove((void *)v20, Pool2, Size);
      }
    }
    *v15 = Size;
  }
  if ( Trace == -1073741789 && ((unsigned int)(v6 - 15) <= 1 || (unsigned int)(v6 - 21) <= 1)
    || (unsigned int)v6 <= 0x2E && (v21 = 0x41D700880000LL, _bittest64(&v21, v6)) )
  {
    *v15 = Size;
  }
LABEL_38:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)Trace;
}
