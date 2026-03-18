/*
 * XREFs of GreSetBrushOwner @ 0x1C00630E0
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C002C0D0 (GreSetDCOwnerEx.c)
 *     SetSysColor @ 0x1C0062BAC (SetSysColor.c)
 *     bInitBRUSHOBJ @ 0x1C02E523C (bInitBRUSHOBJ.c)
 * Callees:
 *     GreSetBitmapOwner @ 0x1C0019F20 (GreSetBitmapOwner.c)
 *     HmgDecProcessHandleCount @ 0x1C001ECFC (HmgDecProcessHandleCount.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C001F14C (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0021FC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0022260 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0022C40 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     GreAcquireHmgrSemaphore @ 0x1C002DF20 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002E900 (GreReleaseHmgrSemaphore.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00633F4 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C0063428 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     HmgAllocateObjectAttr @ 0x1C008E678 (HmgAllocateObjectAttr.c)
 *     HmgFreeObjectAttr @ 0x1C00AD9C8 (HmgFreeObjectAttr.c)
 *     HmgIncProcessHandleCountEx @ 0x1C016C18C (HmgIncProcessHandleCountEx.c)
 */

__int64 __fastcall GreSetBrushOwner(HBRUSH a1, int a2)
{
  unsigned int v3; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // r14d
  __int64 ObjectAttr; // r13
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // r8d
  GdiHandleManager *v13; // rbx
  unsigned int v14; // r9d
  __int64 v15; // r8
  unsigned int v16; // edx
  unsigned int v17; // ecx
  __int64 v18; // r8
  __int64 v19; // rsi
  __int64 v20; // rbx
  unsigned int v21; // ebx
  _QWORD *v22; // rax
  unsigned int CurrentProcessId; // eax
  __int64 v24; // rcx
  unsigned int v25; // edx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int v29; // r12d
  __int64 v30; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v32; // r15
  BOOL v33; // eax
  __int64 ProcessWow64Process; // rax
  __int64 v35; // rdx
  int v36; // ecx
  __int64 v37; // r8
  __int64 v38; // [rsp+38h] [rbp-80h] BYREF
  int v39; // [rsp+40h] [rbp-78h]
  _QWORD v40[13]; // [rsp+50h] [rbp-68h] BYREF
  __int16 v41; // [rsp+C2h] [rbp+Ah]
  BOOL v42; // [rsp+D0h] [rbp+18h]

  v41 = WORD1(a1);
  v3 = (unsigned int)a1;
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v40, a1);
  if ( v40[0] && (*(_DWORD *)(v40[0] + 40LL) & 0x200) != 0 )
  {
    BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v40);
    return 1LL;
  }
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v40);
  v8 = 0;
  ObjectAttr = 0LL;
  if ( a2 == -2147483646 )
    ObjectAttr = HmgAllocateObjectAttr();
  GreAcquireHmgrSemaphore(v6, v5, v7);
  v38 = 0LL;
  v39 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v38, (unsigned __int16)v3 | (v3 >> 8) & 0xFF0000, 0LL, 0, 0);
  if ( v39 )
  {
    v13 = gpHandleManager;
    v14 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v38 & 0xFFFFFF);
    v15 = *((_QWORD *)v13 + 2);
    v16 = *(_DWORD *)(v15 + 2056);
    if ( v14 >= v16 + ((*(unsigned __int16 *)(v15 + 2) + 0xFFFF) << 16) )
    {
      v19 = 0LL;
    }
    else
    {
      if ( v14 >= v16 )
        v17 = ((v14 - v16) >> 16) + 1;
      else
        v17 = 0;
      v18 = *(_QWORD *)(v15 + 8LL * v17 + 8);
      if ( v17 )
        v14 += ((1 - v17) << 16) - v16;
      if ( v14 >= *(_DWORD *)(v18 + 20) )
        v19 = 0LL;
      else
        v19 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v18 + 24) + 8LL * (v14 >> 8)) + 16LL * (unsigned __int8)v14 + 8);
    }
    v20 = v38;
    if ( *(_BYTE *)(v38 + 14) != 16 || *(_WORD *)(v38 + 12) != v41 )
      goto LABEL_25;
    if ( *(_WORD *)(v19 + 12) )
    {
      if ( *(struct _KTHREAD **)(v19 + 16) != KeGetCurrentThread() )
        goto LABEL_25;
      v20 = v38;
    }
    if ( a2 == -2147483630 || !a2 )
    {
      v21 = *(_DWORD *)(v20 + 8) & 0xFFFFFFFE;
      if ( v21 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v22 = *(_QWORD **)(v19 + 48);
        if ( v22 != (_QWORD *)(v19 + 72) )
        {
          *(_QWORD *)(v19 + 72) = *v22;
          ObjectAttr = *(_QWORD *)(v19 + 48);
          *(_QWORD *)(v19 + 48) = v19 + 72;
          *(_QWORD *)(v38 + 16) = 0LL;
        }
        HANDLELOCK::Pid((HANDLELOCK *)&v38, a2);
        CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
        HmgDecProcessHandleCount(CurrentProcessId & 0xFFFFFFFC);
        v8 = 1;
      }
      else
      {
        if ( (*(_DWORD *)(v38 + 8) & 0xFFFFFFFE) == 0x80000012 )
        {
          HANDLELOCK::Pid((HANDLELOCK *)&v38, a2);
          v8 = 1;
        }
        if ( !v8 )
          goto LABEL_25;
      }
      if ( a2 || (v24 = *(_QWORD *)(v19 + 24)) == 0 )
      {
LABEL_25:
        HANDLELOCK::vUnlock((HANDLELOCK *)&v38);
        if ( v39 )
          HANDLELOCK::vUnlock((HANDLELOCK *)&v38);
        goto LABEL_27;
      }
      v25 = 0;
LABEL_31:
      GreSetBitmapOwner(v24, v25);
      goto LABEL_25;
    }
    if ( a2 != -2147483646 )
      goto LABEL_25;
    v29 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    v30 = *(_DWORD *)(v20 + 8) & 0xFFFFFFFE;
    if ( (_DWORD)v30 != v29 && (_DWORD)v30 != -2147483630 && (_DWORD)v30 )
      goto LABEL_25;
    v42 = 0;
    v8 = 1;
    if ( (_DWORD)v30 != v29 )
    {
      v8 = HmgIncProcessHandleCountEx(v29, v26, 0LL);
      v42 = v8 != 0;
    }
    if ( v8 && !*(_QWORD *)(v20 + 16) )
    {
      if ( ObjectAttr )
      {
        *(_QWORD *)(v19 + 48) = ObjectAttr;
        CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v30, v26, v27, v28);
        v32 = CurrentProcessWin32Process;
        if ( !CurrentProcessWin32Process )
          KeBugCheckEx(0x164u, 0x29uLL, 0LL, 0LL, 0LL);
        ProcessWow64Process = PsGetProcessWow64Process(*CurrentProcessWin32Process);
        v35 = *((unsigned int *)v32 + 73);
        v36 = *((_DWORD *)v32 + 73);
        if ( ProcessWow64Process )
          v37 = (unsigned int)__ROR4__(ObjectAttr ^ v35, v36 & 0x1F);
        else
          v37 = __ROR8__(ObjectAttr ^ v35, v36 & 0x3F);
        *(_QWORD *)(v20 + 16) = v37;
        *(_QWORD *)ObjectAttr = *(_QWORD *)(v19 + 72);
        v33 = v42;
        ObjectAttr = 0LL;
        goto LABEL_43;
      }
      v8 = 0;
    }
    v33 = v42;
LABEL_43:
    if ( !v8 )
    {
      if ( v33 )
        HmgDecProcessHandleCount(v29);
      goto LABEL_25;
    }
    HANDLELOCK::Pid((HANDLELOCK *)&v38, v29);
    v24 = *(_QWORD *)(v19 + 24);
    if ( !v24 )
      goto LABEL_25;
    v25 = -2147483646;
    goto LABEL_31;
  }
LABEL_27:
  GreReleaseHmgrSemaphore(v11, v10, v12);
  if ( ObjectAttr )
    HmgFreeObjectAttr(ObjectAttr);
  return v8;
}
