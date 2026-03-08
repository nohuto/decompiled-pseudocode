/*
 * XREFs of NtSystemDebugControl @ 0x140791FE0
 * Callers:
 *     <none>
 * Callees:
 *     ExUnlockUserBuffer @ 0x1402CFFD4 (ExUnlockUserBuffer.c)
 *     DbgBreakPointWithStatus @ 0x1404203E0 (DbgBreakPointWithStatus.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     DbgkCaptureLiveKernelDump @ 0x140539CE8 (DbgkCaptureLiveKernelDump.c)
 *     KdDisableDebugger @ 0x140565110 (KdDisableDebugger.c)
 *     KdEnableDebugger @ 0x140565340 (KdEnableDebugger.c)
 *     KdSetDbgPrintBufferSize @ 0x140565744 (KdSetDbgPrintBufferSize.c)
 *     ExLockUserBuffer @ 0x14075D5A4 (ExLockUserBuffer.c)
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     ExpKdPullRemoteFileForUser @ 0x14084C910 (ExpKdPullRemoteFileForUser.c)
 *     DbgkCaptureLiveDump @ 0x1409378F8 (DbgkCaptureLiveDump.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtSystemDebugControl(int a1, char *a2, unsigned int a3, bool *a4, unsigned int Length, _DWORD *a6)
{
  __int64 v7; // r15
  KPROCESSOR_MODE PreviousMode; // r13
  int v11; // edi
  __int64 v12; // r13
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  int v20; // ebx
  int v21; // ebx
  int v22; // eax
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  int v27; // ebx
  int v28; // ebx
  int v29; // ebx
  int v30; // ebx
  int v31; // ebx
  int v32; // ebx
  int v33; // ebx
  int v34; // ebx
  int v35; // ebx
  int v36; // ebx
  int v37; // ebx
  int v38; // ebx
  int v39; // ebx
  int v40; // ebx
  int v41; // ebx
  int v42; // ebx
  unsigned int v43; // eax
  unsigned int v44; // r14d
  void *Pool2; // rbx
  KPROCESSOR_MODE v46; // [rsp+34h] [rbp-E4h]
  size_t Size; // [rsp+38h] [rbp-E0h] BYREF
  void *v48; // [rsp+40h] [rbp-D8h]
  unsigned __int64 v49; // [rsp+48h] [rbp-D0h] BYREF
  PVOID P; // [rsp+50h] [rbp-C8h] BYREF
  __int128 v51; // [rsp+58h] [rbp-C0h] BYREF
  __int128 v52; // [rsp+68h] [rbp-B0h]
  __int128 v53; // [rsp+78h] [rbp-A0h]
  unsigned __int64 v54; // [rsp+88h] [rbp-90h]
  _BYTE v55[136]; // [rsp+90h] [rbp-88h] BYREF

  v7 = a3;
  LODWORD(v48) = Length;
  LODWORD(Size) = 0;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  memset(v55, 0, 0x48uLL);
  v49 = 0LL;
  P = 0LL;
  if ( KdPitchDebugger && !KdLocalDebugEnabled && ((a1 - 29) & 0xFFFFFFF7) != 0 )
    return 3221226324LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v46 = PreviousMode;
  if ( a1 != 38 && !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
    return 3221225506LL;
  v11 = 0;
  if ( PreviousMode )
  {
    if ( (_DWORD)v7 )
    {
      if ( ((unsigned __int8)a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)&a2[v7] > 0x7FFFFFFF0000LL || &a2[v7] < a2 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    else
    {
      v12 = 0x7FFFFFFF0000LL;
    }
    if ( Length )
      ProbeForWrite(a4, Length, 4u);
    if ( a6 )
    {
      if ( (unsigned __int64)a6 < 0x7FFFFFFF0000LL )
        v12 = (__int64)a6;
      *(_DWORD *)v12 = *(_DWORD *)v12;
    }
    PreviousMode = v46;
  }
  if ( a1 <= 19 )
  {
    if ( a1 == 19 )
      return 3221225474LL;
    if ( a1 > 9 )
    {
      v29 = a1 - 10;
      if ( !v29 )
        return 3221225474LL;
      v30 = v29 - 1;
      if ( !v30 )
        return 3221225474LL;
      v31 = v30 - 1;
      if ( !v31 )
        return 3221225474LL;
      v32 = v31 - 1;
      if ( !v32 )
        return 3221225474LL;
      v33 = v32 - 1;
      if ( !v33 )
        return 3221225474LL;
      v34 = v33 - 1;
      if ( !v34 )
        return 3221225474LL;
      v28 = v34 - 1;
      if ( !v28 )
        return 3221225474LL;
    }
    else
    {
      if ( a1 == 9 )
        return 3221225474LL;
      if ( !a1 )
        return 3221225474LL;
      v23 = a1 - 1;
      if ( !v23 )
        return 3221225474LL;
      v24 = v23 - 1;
      if ( !v24 )
        return 3221225474LL;
      v25 = v24 - 1;
      if ( !v25 )
        return 3221225474LL;
      v26 = v25 - 1;
      if ( !v26 )
        return 3221225474LL;
      v27 = v26 - 1;
      if ( !v27 )
        return 3221225474LL;
      v28 = v27 - 1;
      if ( !v28 )
      {
        if ( (_BYTE)KdDebuggerEnabled == 1 )
          DbgBreakPointWithStatus(6u);
        else
          v11 = -1073741823;
        goto LABEL_30;
      }
    }
    if ( (unsigned int)(v28 - 1) > 1 )
      goto LABEL_113;
    return 3221225474LL;
  }
  if ( a1 > 29 )
  {
    v13 = a1 - 30;
    if ( !v13 )
    {
      if ( Length == 1 )
      {
        *a4 = KdBlockEnable;
        goto LABEL_30;
      }
      return 3221225476LL;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      if ( (_DWORD)v7 == 1 )
      {
        KdBlockEnable = *a2;
        goto LABEL_30;
      }
      return 3221225476LL;
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
      KdUmBreakMarker = -618808389;
      goto LABEL_29;
    }
    v16 = v15 - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( !v18 )
        {
          if ( Length == 4 )
          {
            *(_DWORD *)a4 = KdUmAttachPid;
            if ( !KdResetUmAttachPid )
            {
LABEL_29:
              v11 = 0;
              goto LABEL_30;
            }
LABEL_117:
            KdUmAttachPid = 0;
            goto LABEL_29;
          }
          return 3221225476LL;
        }
        v20 = v18 - 1;
        if ( !v20 )
          goto LABEL_117;
        v21 = v20 - 1;
        if ( !v21 )
        {
          if ( Length || (((_DWORD)v7 - 64) & 0xFFFFFFF7) != 0 )
            return 3221225476LL;
          memmove(v55, a2, (unsigned int)v7);
          v22 = DbgkCaptureLiveKernelDump((__int64)v55);
          goto LABEL_42;
        }
        if ( v21 == 1 )
        {
          if ( (_DWORD)v7 != 16 || Length )
            return 3221225476LL;
          v22 = ExpKdPullRemoteFileForUser(a2);
          goto LABEL_42;
        }
        goto LABEL_113;
      }
    }
    else
    {
      if ( Length != 4 )
        return 3221225476LL;
      *(_DWORD *)a4 = KdUmBreakPid;
      if ( !KdResetUmBreakPid )
        goto LABEL_29;
    }
    KdUmBreakPid = 0;
    goto LABEL_29;
  }
  if ( a1 != 29 )
  {
    v35 = a1 - 20;
    if ( v35 )
    {
      v36 = v35 - 1;
      if ( !v36 )
      {
        v22 = KdEnableDebugger();
        goto LABEL_42;
      }
      v37 = v36 - 1;
      if ( !v37 )
      {
        v22 = KdDisableDebugger();
        goto LABEL_42;
      }
      v38 = v37 - 1;
      if ( !v38 )
      {
        if ( Length == 1 )
        {
          *a4 = KdAutoEnableOnEvent;
          goto LABEL_30;
        }
        return 3221225476LL;
      }
      v39 = v38 - 1;
      if ( !v39 )
      {
        if ( (_DWORD)v7 == 1 )
        {
          KdAutoEnableOnEvent = *a2 != 0;
          goto LABEL_30;
        }
        return 3221225476LL;
      }
      v40 = v39 - 1;
      if ( !v40 )
      {
        if ( Length == 4 )
        {
          *(_DWORD *)a4 = KdPrintBufferSize;
          goto LABEL_30;
        }
        return 3221225476LL;
      }
      v41 = v40 - 1;
      if ( !v41 )
      {
        if ( (_DWORD)v7 != 4 )
          return 3221225476LL;
        HIDWORD(Size) = 0;
        v22 = KdSetDbgPrintBufferSize(*(_DWORD *)a2);
LABEL_42:
        v11 = v22;
        goto LABEL_30;
      }
      v42 = v41 - 1;
      if ( !v42 )
      {
        if ( Length == 1 )
        {
          *a4 = KdIgnoreUmExceptions == 0;
          goto LABEL_30;
        }
        return 3221225476LL;
      }
      if ( v42 == 1 )
      {
        if ( (_DWORD)v7 == 1 )
        {
          KdIgnoreUmExceptions = *a2 == 0;
          goto LABEL_30;
        }
        return 3221225476LL;
      }
LABEL_113:
      v11 = -1073741821;
      goto LABEL_30;
    }
    return 3221225474LL;
  }
  if ( (_DWORD)v7 != 56 || Length < 0x40000 )
    return 3221225476LL;
  v51 = *(_OWORD *)a2;
  v52 = *((_OWORD *)a2 + 1);
  v53 = *((_OWORD *)a2 + 2);
  v54 = *((_QWORD *)a2 + 6);
  if ( DWORD2(v53) || !HIDWORD(v53) || (v51 & 0xFFFFFFFE) != 0 || 8 * (unsigned __int64)HIDWORD(v53) > 0xFFFFFFFF )
    return 3221225485LL;
  v43 = 0x100000;
  if ( Length <= 0x100000 )
    v43 = (unsigned int)v48;
  v44 = v43;
  Pool2 = (void *)ExAllocatePool2(64LL, v43, 1884181323LL);
  v48 = Pool2;
  if ( Pool2 )
  {
    v11 = ExLockUserBuffer(v54, 8 * HIDWORD(v53), PreviousMode, IoReadAccess, &v49, (struct _MDL **)&P);
    if ( v11 >= 0 )
    {
      v54 = v49;
      v11 = DbgkCaptureLiveDump(&v51, Pool2, v44, &Size);
      if ( v11 >= 0 )
      {
        if ( (unsigned int)Size <= Length )
          memmove(a4, Pool2, (unsigned int)Size);
        else
          v11 = -1073741823;
      }
      ExFreePoolWithTag(Pool2, 0);
      ExUnlockUserBuffer((struct _MDL *)P);
    }
    else
    {
      ExFreePoolWithTag(Pool2, 0);
    }
  }
  else
  {
    v11 = -1073741801;
  }
LABEL_30:
  if ( a6 )
    *a6 = Size;
  return (unsigned int)v11;
}
