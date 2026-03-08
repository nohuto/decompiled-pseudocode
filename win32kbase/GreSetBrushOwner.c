/*
 * XREFs of GreSetBrushOwner @ 0x1C001BD80
 * Callers:
 *     SetSysColor @ 0x1C001A584 (SetSysColor.c)
 *     GreSetDCOwnerEx @ 0x1C0041580 (GreSetDCOwnerEx.c)
 *     bInitBRUSHOBJ @ 0x1C031D4F4 (bInitBRUSHOBJ.c)
 * Callees:
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C001BD04 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C001BD48 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     HmgAllocateObjectAttr @ 0x1C001CC34 (HmgAllocateObjectAttr.c)
 *     GreSetBitmapOwnerEx @ 0x1C001D614 (GreSetBitmapOwnerEx.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0049700 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0049780 (GreAcquireHmgrSemaphore.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004A440 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C004A680 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ @ 0x1C004B3B0 (-pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ.c)
 *     HmgDecProcessHandleCount @ 0x1C004FDA0 (HmgDecProcessHandleCount.c)
 *     HmgIncProcessHandleCountEx @ 0x1C004FEB0 (HmgIncProcessHandleCountEx.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C005162C (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     HmgFreeObjectAttr @ 0x1C00D43C0 (HmgFreeObjectAttr.c)
 */

__int64 __fastcall GreSetBrushOwner(HBRUSH a1, unsigned int a2)
{
  unsigned int v3; // ebx
  __int64 v5; // rcx
  unsigned int v6; // r15d
  __int64 ObjectAttr; // r12
  struct OBJECT *v8; // rax
  struct OBJECT *v9; // r14
  __int64 v10; // r13
  unsigned int v11; // ebx
  _QWORD *v12; // rdx
  __int64 *v13; // rcx
  _QWORD *v14; // rax
  unsigned int CurrentProcessId; // eax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // rdi
  unsigned int v20; // eax
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v22; // rbx
  __int64 v23; // rcx
  __int64 ProcessWow64Process; // rax
  __int64 v25; // rdx
  int v26; // ecx
  __int64 v27; // rdx
  _QWORD v28[2]; // [rsp+38h] [rbp-60h] BYREF
  __int64 v29; // [rsp+48h] [rbp-50h] BYREF
  int v30; // [rsp+50h] [rbp-48h]
  BOOL v31; // [rsp+B8h] [rbp+20h]

  v3 = (unsigned int)a1;
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v28, a1);
  if ( v28[0] && (*(_DWORD *)(v28[0] + 40LL) & 0x200) != 0 )
  {
    BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v28);
    return 1LL;
  }
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v28);
  v6 = 0;
  ObjectAttr = 0LL;
  if ( a2 == -2147483646 )
    ObjectAttr = HmgAllocateObjectAttr();
  GreAcquireHmgrSemaphore(v5);
  v29 = 0LL;
  v30 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v29, (unsigned __int16)v3 | (v3 >> 8) & 0xFF0000, 0, 0, 0);
  if ( v30 )
  {
    v8 = HANDLELOCK::pObj((HANDLELOCK *)&v29);
    v9 = v8;
    v10 = v29;
    if ( *(_BYTE *)(v29 + 14) == 16 && *(_WORD *)(v29 + 12) == HIWORD(v3) )
    {
      if ( *((_WORD *)v8 + 6) )
      {
        if ( *((struct _KTHREAD **)v8 + 2) != KeGetCurrentThread() )
          goto LABEL_21;
        v10 = v29;
      }
      if ( a2 == -2147483630 || !a2 )
      {
        v11 = *(_DWORD *)(v10 + 8) & 0xFFFFFFFE;
        if ( v11 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        {
          v12 = (_QWORD *)((char *)v9 + 72);
          v13 = (__int64 *)((char *)v9 + 48);
          v14 = (_QWORD *)*((_QWORD *)v9 + 6);
          if ( v14 != (_QWORD *)((char *)v9 + 72) )
          {
            *v12 = *v14;
            ObjectAttr = *v13;
            *v13 = (__int64)v12;
            *(_QWORD *)(v10 + 16) = 0LL;
          }
          HANDLELOCK::Pid((HANDLELOCK *)&v29, a2);
          CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
          HmgDecProcessHandleCount(CurrentProcessId & 0xFFFFFFFC);
        }
        else
        {
          if ( (*(_DWORD *)(v10 + 8) & 0xFFFFFFFE) != 0x80000012 )
            goto LABEL_17;
          HANDLELOCK::Pid((HANDLELOCK *)&v29, a2);
        }
        v6 = 1;
LABEL_17:
        if ( v6 )
        {
          if ( !a2 )
          {
            v16 = *((_QWORD *)v9 + 3);
            if ( v16 )
              GreSetBitmapOwnerEx(v16, 0LL);
          }
        }
        goto LABEL_21;
      }
      if ( a2 == -2147483646 )
      {
        v19 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
        v20 = *(_DWORD *)(v10 + 8) & 0xFFFFFFFE;
        if ( v20 == (_DWORD)v19 || v20 == -2147483630 || !v20 )
        {
          v31 = 0;
          v6 = 1;
          if ( v20 != (_DWORD)v19 )
          {
            v6 = HmgIncProcessHandleCountEx((unsigned int)v19, v17, 0LL);
            v31 = v6 != 0;
          }
          if ( v6 )
          {
            if ( *(_QWORD *)(v10 + 16) )
            {
LABEL_40:
              HANDLELOCK::Pid((HANDLELOCK *)&v29, v19);
              v23 = *((_QWORD *)v9 + 3);
              if ( v23 )
                GreSetBitmapOwnerEx(v23, 2147483650LL);
              goto LABEL_21;
            }
            if ( ObjectAttr )
            {
              *((_QWORD *)v9 + 6) = ObjectAttr;
              CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v18);
              v22 = CurrentProcessWin32Process;
              if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
                v22 = 0LL;
              if ( !v22 )
                KeBugCheckEx(0x164u, 0x29uLL, 0LL, 0LL, 0LL);
              ProcessWow64Process = PsGetProcessWow64Process(*v22);
              v25 = *((unsigned int *)v22 + 73);
              v26 = *((_DWORD *)v22 + 73);
              if ( ProcessWow64Process )
                v27 = (unsigned int)__ROR4__(ObjectAttr ^ v25, v26 & 0x1F);
              else
                v27 = __ROR8__(ObjectAttr ^ v25, v26 & 0x3F);
              *(_QWORD *)(v10 + 16) = v27;
              *(_QWORD *)ObjectAttr = *((_QWORD *)v9 + 9);
              ObjectAttr = 0LL;
              goto LABEL_40;
            }
            v6 = 0;
          }
          if ( v31 )
            HmgDecProcessHandleCount((unsigned int)v19);
        }
      }
    }
LABEL_21:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v29);
    if ( v30 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v29);
  }
  GreReleaseHmgrSemaphore();
  if ( ObjectAttr )
    HmgFreeObjectAttr(ObjectAttr);
  return v6;
}
