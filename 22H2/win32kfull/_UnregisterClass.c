/*
 * XREFs of _UnregisterClass @ 0x1C00F01B0
 * Callers:
 *     NtUserUnregisterClass @ 0x1C00F0040 (NtUserUnregisterClass.c)
 * Callees:
 *     DestroyClass @ 0x1C00EAB74 (DestroyClass.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C0138C00 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall UnregisterClass(unsigned __int16 *a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v5; // rbx
  int v6; // r14d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  PERESOURCE *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _WORD *v20; // rax
  int v21; // r10d
  __int64 v22; // rax
  __int64 v23; // r10
  struct _CALLPROCDATA ***v24; // r9
  struct _CALLPROCDATA **v25; // r8
  struct _CALLPROCDATA *v26; // rdx
  struct _CALLPROCDATA **v27; // rcx
  bool i; // zf
  struct _CALLPROCDATA *v29; // rax
  __int64 v30; // rcx

  v5 = (unsigned __int64)a1;
  v6 = 0;
  if ( !*(_QWORD *)(SGDGetUserSessionState(a1) + 8)
    || (v11 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v8, v7, v9, v10),
        !ExIsResourceAcquiredSharedLite(*v11)) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 226LL);
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 42LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v13, v12, v14);
  ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
  if ( (v5 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v16 = 2147483646LL;
    v17 = 256LL;
    v20 = &gawchAtomScratch;
    v21 = 0;
    v18 = 0LL;
    while ( v17 )
    {
      if ( !v16 )
        goto LABEL_14;
      v19 = *(unsigned __int16 *)v5;
      if ( !(_WORD)v19 )
        goto LABEL_14;
      v5 += 2LL;
      *v20++ = v19;
      --v17;
      --v16;
      ++v18;
    }
    --v20;
    --v18;
    v21 = -2147483643;
LABEL_14:
    *v20 = 0;
    if ( v21 < 0 )
      LOWORD(v5) = 0;
    else
      LOWORD(v5) = UserFindAtom(&gawchAtomScratch, v16, v18, v19);
  }
  v22 = PsGetCurrentThreadWin32Thread(v17, v16, v18);
  --*(_DWORD *)(v22 + 48);
  v23 = *(_QWORD *)(gptiCurrent + 424LL);
  v24 = (struct _CALLPROCDATA ***)(v23 + 344);
  if ( !(_WORD)v5 || (v25 = *v24) == 0LL )
  {
LABEL_24:
    v24 = (struct _CALLPROCDATA ***)(v23 + 352);
    if ( (_WORD)v5 )
    {
      v27 = *v24;
      for ( i = *v24 == 0LL; !i; i = v27 == 0LL )
      {
        v29 = v27[1];
        if ( *(_WORD *)v29 == (_WORD)v5 && (*((_BYTE *)v29 + 6) & 4) == 0 )
        {
          v6 = 1;
          goto LABEL_31;
        }
        v24 = (struct _CALLPROCDATA ***)v27;
        v27 = (struct _CALLPROCDATA **)*v27;
      }
    }
    v30 = 1411LL;
    goto LABEL_37;
  }
  while ( 1 )
  {
    v26 = v25[1];
    if ( *(_WORD *)v26 == (_WORD)v5
      && (!a2 || HIWORD(*((_DWORD *)v26 + 16)) == WORD1(a2))
      && (*((_BYTE *)v26 + 6) & 4) == 0 )
    {
      break;
    }
    v24 = (struct _CALLPROCDATA ***)v25;
    v25 = (struct _CALLPROCDATA **)*v25;
    if ( !v25 )
      goto LABEL_24;
  }
LABEL_31:
  if ( *((_DWORD *)*v24 + 18) )
  {
    v30 = 1412LL;
LABEL_37:
    UserSetLastError(v30);
    return 0LL;
  }
  *a3 = *((_QWORD *)(*v24)[1] + 2);
  a3[1] = *((_QWORD *)(*v24)[1] + 3);
  a3[2] = 0LL;
  if ( v6 )
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) &= ~0x2000u;
  DestroyClass(*(struct tagPROCESSINFO **)(gptiCurrent + 424LL), v24);
  return 1LL;
}
