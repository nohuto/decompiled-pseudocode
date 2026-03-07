__int64 __fastcall UnregisterClass(_WORD *a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v5; // rbx
  int v6; // r12d
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  _WORD *v13; // rdx
  int v14; // r10d
  __int64 v15; // r9
  __int16 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rdx
  struct _CALLPROCDATA ***v19; // r9
  __int64 v20; // rcx
  struct _CALLPROCDATA **v22; // r8
  struct _CALLPROCDATA *v23; // r10
  struct _CALLPROCDATA **v24; // rcx
  struct _CALLPROCDATA *v25; // rax

  v5 = (unsigned __int64)a1;
  v6 = 0;
  if ( !*(_QWORD *)(SGDGetUserSessionState(a1) + 8)
    || (v8 = SGDGetUserSessionState(v7), !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v8 + 8))) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 282LL);
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 42LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v9);
  ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
  if ( (v5 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v11 = 2147483646LL;
    v12 = 256LL;
    v13 = &gawchAtomScratch;
    v14 = 0;
    v15 = 0LL;
    while ( v12 )
    {
      if ( !v11 )
        goto LABEL_9;
      v16 = *(_WORD *)v5;
      if ( !*(_WORD *)v5 )
        goto LABEL_9;
      v5 += 2LL;
      *v13++ = v16;
      --v12;
      --v11;
      ++v15;
    }
    --v13;
    v14 = -2147483643;
LABEL_9:
    *v13 = 0;
    if ( v14 < 0 )
      LOWORD(v5) = 0;
    else
      LOWORD(v5) = UserFindAtom(&gawchAtomScratch);
  }
  v17 = PsGetCurrentThreadWin32Thread(v11);
  --*(_DWORD *)(v17 + 48);
  v18 = *(_QWORD *)(gptiCurrent + 424LL);
  v19 = (struct _CALLPROCDATA ***)(v18 + 344);
  if ( (_WORD)v5 && (v22 = *v19) != 0LL )
  {
    while ( 1 )
    {
      v23 = v22[1];
      if ( *(_WORD *)v23 == (_WORD)v5
        && (!a2 || HIWORD(*((_DWORD *)v23 + 16)) == WORD1(a2))
        && (*((_BYTE *)v23 + 6) & 4) == 0 )
      {
        break;
      }
      v19 = (struct _CALLPROCDATA ***)v22;
      v22 = (struct _CALLPROCDATA **)*v22;
      if ( !v22 )
        goto LABEL_14;
    }
  }
  else
  {
LABEL_14:
    v19 = (struct _CALLPROCDATA ***)(v18 + 352);
    if ( !(_WORD)v5 || (v24 = *v19) == 0LL )
    {
LABEL_15:
      v20 = 1411LL;
LABEL_16:
      UserSetLastError(v20);
      return 0LL;
    }
    while ( 1 )
    {
      v25 = v24[1];
      if ( *(_WORD *)v25 == (_WORD)v5 && (*((_BYTE *)v25 + 6) & 4) == 0 )
        break;
      v19 = (struct _CALLPROCDATA ***)v24;
      v24 = (struct _CALLPROCDATA **)*v24;
      if ( !v24 )
        goto LABEL_15;
    }
    v6 = 1;
  }
  if ( *((_DWORD *)*v19 + 18) )
  {
    v20 = 1412LL;
    goto LABEL_16;
  }
  *a3 = *((_QWORD *)(*v19)[1] + 2);
  a3[1] = *((_QWORD *)(*v19)[1] + 3);
  a3[2] = 0LL;
  if ( v6 )
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) &= ~0x2000u;
  DestroyClass(*(struct tagPROCESSINFO **)(gptiCurrent + 424LL), v19);
  return 1LL;
}
