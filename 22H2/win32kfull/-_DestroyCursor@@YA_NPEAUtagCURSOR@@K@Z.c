/*
 * XREFs of ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C002B6EC
 * Callers:
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C001F89C (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     ?zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z @ 0x1C00213F0 (-zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z.c)
 *     ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x1C0026260 (-xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z.c)
 *     NtUserDestroyCursor @ 0x1C0028C50 (NtUserDestroyCursor.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C002B6EC (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     ?DestroyAniIcon@@YAHPEAUtagACON@@@Z @ 0x1C00AE7FC (-DestroyAniIcon@@YAHPEAUtagACON@@@Z.c)
 *     DestroyUnlockedCursor @ 0x1C00B9690 (DestroyUnlockedCursor.c)
 *     DestroyClassSmIcon @ 0x1C00EB5B0 (DestroyClassSmIcon.c)
 *     DestroyWindowSmIcon @ 0x1C013D1BC (DestroyWindowSmIcon.c)
 *     ?_CleanupUnneededSystemCursorSizes@@YAXI@Z @ 0x1C014E90E (-_CleanupUnneededSystemCursorSizes@@YAXI@Z.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C01C0C04 (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 * Callees:
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C002B6EC (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C002D2BC (-CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 *     ?UnlinkCursor@@YAXPEAUtagCURSOR@@@Z @ 0x1C00AA3A4 (-UnlinkCursor@@YAXPEAUtagCURSOR@@@Z.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ??1IdentifyPrimaryDestroyTarget@@QEAA@XZ @ 0x1C011B3C4 (--1IdentifyPrimaryDestroyTarget@@QEAA@XZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E0F8 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C0138C00 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?DestroyEmptyCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C01C0B30 (-DestroyEmptyCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
bool __fastcall _DestroyCursor(struct tagCURSOR *a1, unsigned int a2)
{
  int v3; // r14d
  int v4; // r13d
  int v5; // r15d
  bool result; // al
  struct _HANDLEENTRY *v7; // rdi
  PERESOURCE *v8; // rax
  __int64 v9; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v11; // r12
  __int64 v12; // rsi
  __int64 v13; // rbp
  unsigned int i; // edi
  unsigned int v15; // esi
  __int64 ProcessWin32Process; // rax
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  struct tagCURSOR *v21; // rax
  __int64 v22; // rax
  struct tagCURSOR *v23; // rcx
  __int64 v24; // rcx
  int v25; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v26; // [rsp+78h] [rbp+10h]
  int v27; // [rsp+80h] [rbp+18h]
  struct tagCURSOR *v28; // [rsp+88h] [rbp+20h]

  v26 = a2;
  v28 = (struct tagCURSOR *)*((_QWORD *)a1 + 6);
  v3 = 0;
  v4 = 0;
  v5 = 1;
  if ( !gbInDestroyHandleTableObjects )
  {
    LOBYTE(v25) = 0;
    v7 = (struct _HANDLEENTRY *)_HMPheFromObjectWorker(a1);
    v8 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &();
    if ( ExIsResourceAcquiredExclusiveLite(*v8) == 1 )
    {
      LOBYTE(v25) = gphePrimaryDestroyTarget == 0LL;
      if ( gphePrimaryDestroyTarget )
      {
        if ( v7 != gphePrimaryDestroyTarget )
          ++gcSecondaryDestroyTargets;
      }
      else
      {
        MEMORY[0] = v7;
      }
    }
    if ( !IS_USERCRIT_OWNED_AT_ALL() )
    {
      v27 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
    }
    v9 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v9 = *ThreadWin32Thread;
    if ( (*(_DWORD *)(v9 + 1272) & 0x8000000) != 0 )
      v9 = *(_QWORD *)(v9 + 1520);
    v11 = *(_QWORD *)(v9 + 424);
    v12 = 0LL;
    v13 = *((_QWORD *)a1 + 3);
    for ( i = 0; i < 5; ++i )
    {
      if ( *(struct tagCURSOR **)(v12 + gcachedCaptions[0]) == a1 && !HMAssignmentUnlock(&gcachedCaptions[2 * i]) )
      {
        IdentifyPrimaryDestroyTarget::~IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v25);
        return 1;
      }
      v12 += 16LL;
    }
    v15 = v26;
    if ( v26 )
    {
      if ( v26 == 1 )
      {
        if ( !v13 )
        {
          v3 = 1;
          v5 = *((_DWORD *)a1 + 20) & 1;
          goto LABEL_38;
        }
        if ( (*((_DWORD *)a1 + 20) & 0x84) != 0 )
        {
LABEL_23:
          v3 = 1;
          goto LABEL_38;
        }
        if ( v13 != v11 )
        {
          UserSetLastError(1435LL);
          goto LABEL_36;
        }
      }
      else if ( v26 == 2 && !v13 )
      {
        goto LABEL_23;
      }
    }
    else
    {
      ProcessWin32Process = PsGetProcessWin32Process(gpepCSRSS);
      v17 = ProcessWin32Process;
      if ( ProcessWin32Process )
        v17 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL) & ProcessWin32Process;
      if ( *(_QWORD *)(_HMPkheFromObject(a1) + 8) == v17 && PsGetCurrentProcess(v19, v18, v20) == gpepCSRSS )
        FixupGlobalCursor(a1, v11);
    }
    if ( (unsigned int)HMMarkObjectDestroy(a1) )
    {
      *((_DWORD *)a1 + 20) |= 0x2000u;
LABEL_38:
      if ( v28 != a1 && (*(_DWORD *)(*((_QWORD *)a1 + 6) + 80LL) & 0x2000) != 0 )
        v4 = 1;
      if ( v3 )
      {
        if ( v4 )
        {
          v21 = a1;
          do
          {
            *((_QWORD *)v21 + 6) = a1;
            v21 = (struct tagCURSOR *)*((_QWORD *)v21 + 5);
          }
          while ( v21 );
        }
      }
      else
      {
        v22 = *((_QWORD *)a1 + 6);
        if ( gpcurLogCurrent == (struct tagCURSOR *)v22 )
        {
          gpcurLogCurrent = 0LL;
          gpcurPhysCurrent = 0LL;
        }
        if ( v28 == a1 || v4 )
        {
          v23 = (struct tagCURSOR *)*((_QWORD *)a1 + 5);
          if ( v23 )
          {
            *((_QWORD *)a1 + 5) = 0LL;
            _DestroyCursor(v23, v15);
          }
        }
        else
        {
          while ( v22 )
          {
            v24 = v22;
            v22 = *(_QWORD *)(v22 + 40);
            if ( (struct tagCURSOR *)v22 == a1 )
            {
              *(_QWORD *)(v24 + 40) = *((_QWORD *)a1 + 5);
              break;
            }
          }
          *((_QWORD *)a1 + 5) = 0LL;
          *((_QWORD *)a1 + 6) = a1;
        }
        CleanupCursorObject(a1);
        if ( (*((_DWORD *)a1 + 20) & 0x100) != 0 && !gbInDestroyHandleTableObjects )
          UnlinkCursor(a1);
        HMFreeObject(a1);
      }
      result = v5 != 0;
      if ( (_BYTE)v25 )
        gphePrimaryDestroyTarget = 0LL;
      return result;
    }
LABEL_36:
    v3 = 1;
    v5 = 0;
    goto LABEL_38;
  }
  v25 = 0x20000;
  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 964LL);
  DestroyEmptyCursorObject(a1);
  return 1;
}
