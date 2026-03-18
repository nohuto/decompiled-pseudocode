/*
 * XREFs of GreDeleteWnd @ 0x1C02844B0
 * Callers:
 *     xxxFreeWindow @ 0x1C005E458 (xxxFreeWindow.c)
 *     ?GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z @ 0x1C0140E60 (-GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z.c)
 *     NtGdiEndPage @ 0x1C027ACD0 (NtGdiEndPage.c)
 *     EngDeleteWnd @ 0x1C02843D0 (EngDeleteWnd.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C002CEF0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003FD70 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C0041980 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ?vSpWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z @ 0x1C0281F68 (-vSpWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z.c)
 *     ?bValid@EWNDOBJ@@QEBAHXZ @ 0x1C0283754 (-bValid@EWNDOBJ@@QEBAHXZ.c)
 *     ?vDelete@EWNDOBJ@@QEAAXXZ @ 0x1C0283780 (-vDelete@EWNDOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreDeleteWnd(EWNDOBJ *this)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  EWNDOBJ *v5; // rax
  _QWORD *v6; // rcx
  TRACKOBJ *v7; // rax
  _QWORD *v8; // rcx
  EWNDOBJ *v9; // rcx
  __int128 v10; // [rsp+20h] [rbp-29h] BYREF
  HDEV v11; // [rsp+30h] [rbp-19h]
  int v12; // [rsp+38h] [rbp-11h]
  _QWORD v13[2]; // [rsp+40h] [rbp-9h] BYREF
  _BYTE v14[40]; // [rsp+50h] [rbp+7h] BYREF
  __int64 v15; // [rsp+78h] [rbp+2Fh]
  __int64 v16; // [rsp+80h] [rbp+37h]
  HDEV v17; // [rsp+B0h] [rbp+67h] BYREF
  __int64 v18; // [rsp+B8h] [rbp+6Fh] BYREF
  __int64 v19; // [rsp+C0h] [rbp+77h] BYREF

  result = EWNDOBJ::bValid(this);
  if ( (_DWORD)result )
  {
    v4 = *(_QWORD *)(v3 + 168);
    v17 = *(HDEV *)(*(_QWORD *)(v4 + 32) + 48LL);
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v13);
    v16 = 0LL;
    v15 = 0LL;
    v13[0] = 0LL;
    v10 = 0LL;
    v12 = 1;
    if ( ((_DWORD)v17[10] & 1) != 0 )
    {
      *(_QWORD *)&v10 = *((_QWORD *)v17 + 6);
      v11 = v17;
      GreAcquireSemaphore(v10);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v10, 11LL);
    }
    v19 = ghsemWndobj;
    GreAcquireSemaphore(ghsemWndobj);
    v18 = *((_QWORD *)this + 25);
    GreAcquireSemaphore(v18);
    (*(void (__fastcall **)(EWNDOBJ *, __int64))(v4 + 40))(this, 32LL);
    SEMOBJ::vUnlock((SEMOBJ *)&v18);
    v5 = *(EWNDOBJ **)(v4 + 24);
    if ( v5 == this )
    {
      *(_QWORD *)(v4 + 24) = *((_QWORD *)this + 20);
    }
    else
    {
      while ( v5 )
      {
        v6 = (_QWORD *)((char *)v5 + 160);
        v5 = (EWNDOBJ *)*((_QWORD *)v5 + 20);
        if ( v5 == this )
        {
          *v6 = *((_QWORD *)this + 20);
          break;
        }
      }
    }
    EWNDOBJ::vDelete(this);
    *((_DWORD *)this + 38) = 0;
    Win32FreePool(this);
    if ( !*(_QWORD *)(v4 + 24) )
    {
      v7 = gpto;
      if ( (TRACKOBJ *)v4 == gpto )
      {
        gpto = *(TRACKOBJ **)(v4 + 8);
      }
      else
      {
        while ( v7 )
        {
          v8 = (_QWORD *)((char *)v7 + 8);
          v7 = (TRACKOBJ *)*((_QWORD *)v7 + 1);
          if ( v7 == (TRACKOBJ *)v4 )
          {
            *v8 = *(_QWORD *)(v4 + 8);
            break;
          }
        }
      }
      v9 = *(EWNDOBJ **)(v4 + 16);
      if ( v9 )
      {
        EWNDOBJ::vDelete(v9);
        *(_DWORD *)(*(_QWORD *)(v4 + 16) + 152LL) = 0;
        Win32FreePool(*(_QWORD *)(v4 + 16));
      }
      *(_DWORD *)v4 = 0;
      Win32FreePool(v4);
    }
    vSpWndobjChange(v17, 0LL);
    SEMOBJ::vUnlock((SEMOBJ *)&v19);
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v10);
    if ( v13[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v13);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v14);
    return PDEVOBJ::vUnreferencePdev(&v17, 0LL);
  }
  return result;
}
