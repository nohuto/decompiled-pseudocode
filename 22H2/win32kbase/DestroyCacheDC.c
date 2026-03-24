/*
 * XREFs of DestroyCacheDC @ 0x1C0008970
 * Callers:
 *     DelayedDestroyCacheDC @ 0x1C00087FC (DelayedDestroyCacheDC.c)
 *     DestroyCacheDCEntries @ 0x1C00088C8 (DestroyCacheDCEntries.c)
 *     ReleaseCacheDC @ 0x1C0037B20 (ReleaseCacheDC.c)
 *     _GetDCEx @ 0x1C0038070 (_GetDCEx.c)
 *     xxxUserProcessCallout @ 0x1C003D2A0 (xxxUserProcessCallout.c)
 *     DestroyMonitorDCs @ 0x1C00C34E0 (DestroyMonitorDCs.c)
 * Callees:
 *     IsGreSelectRedirectionBitmapSupported @ 0x1C0008A90 (IsGreSelectRedirectionBitmapSupported.c)
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002E6D8 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     HmgShareLockEx @ 0x1C002EA50 (HmgShareLockEx.c)
 *     GreSetDCOwnerEx @ 0x1C0038F20 (GreSetDCOwnerEx.c)
 *     GreDeleteObject @ 0x1C0039970 (GreDeleteObject.c)
 *     GreUnlockVisRgn @ 0x1C0039F20 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C003A140 (GreLockVisRgn.c)
 *     bDeleteDCInternalEx @ 0x1C003C730 (bDeleteDCInternalEx.c)
 *     HmgMarkDeletable @ 0x1C0087350 (HmgMarkDeletable.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DestroyCacheDC(__int64 *a1, __int64 a2)
{
  unsigned int v2; // ebp
  int v3; // r14d
  __int64 *v5; // rdi
  __int64 v6; // rbx
  unsigned __int64 v7; // rsi
  HBRUSH v8; // rcx
  HBRUSH v9; // rcx
  __int64 v10; // rdx
  __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v18; // [rsp+20h] [rbp-28h] BYREF
  int v19; // [rsp+28h] [rbp-20h]
  int v20; // [rsp+2Ch] [rbp-1Ch]

  v2 = 0;
  v3 = 0;
  v5 = a1;
  if ( !a1 )
  {
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40));
    v3 = 1;
    v5 = (__int64 *)(gpDispInfo + 24);
    v12 = *(__int64 **)(gpDispInfo + 24);
    if ( !v12 )
      goto LABEL_27;
    do
    {
      if ( v12[1] == a2 )
        break;
      v5 = v12;
      v12 = (__int64 *)*v12;
    }
    while ( v12 );
    if ( !v12 || !v5 )
    {
LABEL_27:
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40));
      return 0LL;
    }
  }
  v6 = *v5;
  *(_DWORD *)(v6 + 64) |= 0x400000u;
  if ( (*(_DWORD *)(v6 + 64) & 0x40000) == 0 )
  {
    v7 = *(_QWORD *)(v6 + 40);
    if ( v7 > 2 )
    {
      PsGetCurrentProcessId();
      LOBYTE(v13) = 4;
      HmgMarkDeletable(v7, v13);
      if ( *(_QWORD *)(v6 + 40) > 2uLL )
        GreDeleteObject(*(HBRUSH *)(v6 + 40));
    }
    *(_QWORD *)(v6 + 40) = 0LL;
  }
  v8 = *(HBRUSH *)(v6 + 48);
  if ( v8 )
  {
    GreDeleteObject(v8);
    *(_QWORD *)(v6 + 48) = 0LL;
  }
  v9 = *(HBRUSH *)(v6 + 56);
  if ( v9 )
  {
    GreDeleteObject(v9);
    *(_QWORD *)(v6 + 56) = 0LL;
  }
  if ( !(unsigned int)GreSetDCOwnerEx(*(_QWORD *)(v6 + 8), 2147483650LL, 1LL) )
    goto LABEL_31;
  if ( (*(_DWORD *)(v6 + 64) & 0x4000) != 0 )
  {
    if ( (int)IsGreSelectRedirectionBitmapSupported() >= 0 && qword_1C0255AA8 )
      qword_1C0255AA8(*(_QWORD *)(v6 + 8), 0LL);
    *(_DWORD *)(v6 + 64) &= ~0x4000u;
    *(_QWORD *)(v6 + 32) = 0LL;
  }
  if ( !(unsigned int)bDeleteDCInternalEx(*(HDC *)(v6 + 8)) )
  {
    GreSetDCOwnerEx(*(_QWORD *)(v6 + 8), 2147483666LL, 1LL);
LABEL_31:
    v14 = *(_QWORD *)(v6 + 8);
    *(_QWORD *)(v6 + 16) = 0LL;
    LOBYTE(v10) = 1;
    *(_QWORD *)(v6 + 24) = 0LL;
    *(_QWORD *)(v6 + 32) = 0LL;
    *(_QWORD *)(v6 + 88) = 0LL;
    v19 = 0;
    v20 = 0;
    v15 = HmgShareLockEx(v14, v10, 0LL);
    v18 = v15;
    if ( v15 )
    {
      *(_DWORD *)(v15 + 36) |= 0x80000u;
      XDCOBJ::vAltUnlockFast((XDCOBJ *)&v18);
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v16);
    *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x200u;
    goto LABEL_19;
  }
  if ( (*(_DWORD *)(v6 + 64) & 0x1002) == 2 )
    --gnDCECount;
  *v5 = *(_QWORD *)v6;
  Win32FreePool(v6);
  v2 = 1;
LABEL_19:
  if ( v3 )
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40));
  return v2;
}
