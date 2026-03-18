/*
 * XREFs of DestroyCacheDC @ 0x1C0051AF0
 * Callers:
 *     ReleaseCacheDC @ 0x1C002A470 (ReleaseCacheDC.c)
 *     _GetDCEx @ 0x1C002B0A0 (_GetDCEx.c)
 *     xxxUserProcessCallout @ 0x1C00369B0 (xxxUserProcessCallout.c)
 *     DelayedDestroyCacheDC @ 0x1C005197C (DelayedDestroyCacheDC.c)
 *     DestroyCacheDCEntries @ 0x1C0051A48 (DestroyCacheDCEntries.c)
 *     DestroyMonitorDCs @ 0x1C005D530 (DestroyMonitorDCs.c)
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00205B4 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     HmgShareLockEx @ 0x1C0020870 (HmgShareLockEx.c)
 *     GreDeleteObject @ 0x1C0023690 (GreDeleteObject.c)
 *     Win32FreePool @ 0x1C0026670 (Win32FreePool.c)
 *     GreSetDCOwnerEx @ 0x1C002C0D0 (GreSetDCOwnerEx.c)
 *     GreLockVisRgn @ 0x1C002DE80 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C002E140 (GreUnlockVisRgn.c)
 *     GreDeleteDC @ 0x1C00518D0 (GreDeleteDC.c)
 *     GreMarkDeletableRgn @ 0x1C0099BA0 (GreMarkDeletableRgn.c)
 *     DeleteMaybeSpecialRgn @ 0x1C009C0F0 (DeleteMaybeSpecialRgn.c)
 *     IsGreSelectRedirectionBitmapSupported @ 0x1C00ACCD0 (IsGreSelectRedirectionBitmapSupported.c)
 *     GreSelectRedirectionBitmap @ 0x1C00B03B8 (GreSelectRedirectionBitmap.c)
 */

__int64 __fastcall DestroyCacheDC(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  int v4; // ebp
  __int64 *v6; // rdi
  __int64 v7; // rdx
  int v8; // r8d
  __int64 *i; // rax
  __int64 v11; // rbx
  unsigned __int64 v12; // rcx
  HRGN v13; // rcx
  HRGN v14; // rcx
  __int64 v15; // rdx
  int v16; // r8d
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 CurrentProcessWin32Process; // rax
  HDC *v24; // [rsp+20h] [rbp-18h] BYREF
  int v25; // [rsp+28h] [rbp-10h]
  int v26; // [rsp+2Ch] [rbp-Ch]

  v3 = 0;
  v4 = 0;
  v6 = a1;
  if ( a1 )
  {
LABEL_9:
    v11 = *v6;
    *(_DWORD *)(v11 + 64) |= 0x400000u;
    if ( (*(_DWORD *)(v11 + 64) & 0x40000) == 0 )
    {
      v12 = *(_QWORD *)(v11 + 40);
      if ( v12 > 2 )
      {
        GreMarkDeletableRgn();
        v12 = *(_QWORD *)(v11 + 40);
      }
      DeleteMaybeSpecialRgn(v12);
      *(_QWORD *)(v11 + 40) = 0LL;
    }
    v13 = *(HRGN *)(v11 + 48);
    if ( v13 )
    {
      GreDeleteObject(v13);
      *(_QWORD *)(v11 + 48) = 0LL;
    }
    v14 = *(HRGN *)(v11 + 56);
    if ( v14 )
    {
      GreDeleteObject(v14);
      *(_QWORD *)(v11 + 56) = 0LL;
    }
    if ( (unsigned int)GreSetDCOwnerEx(*(_QWORD *)(v11 + 8), 0x80000002, 1, 0) )
    {
      if ( (*(_DWORD *)(v11 + 64) & 0x4000) != 0 )
      {
        if ( (int)IsGreSelectRedirectionBitmapSupported() >= 0 )
          GreSelectRedirectionBitmap(*(_QWORD *)(v11 + 8), 0LL);
        *(_DWORD *)(v11 + 64) &= ~0x4000u;
        *(_QWORD *)(v11 + 32) = 0LL;
      }
      if ( (unsigned int)GreDeleteDC(*(_QWORD *)(v11 + 8)) )
      {
        if ( (*(_DWORD *)(v11 + 64) & 0x1002) == 2 )
          --gnDCECount;
        *v6 = *(_QWORD *)v11;
        Win32FreePool((char *)v11);
        v3 = 1;
LABEL_30:
        if ( v4 )
          GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 5), v15, v16);
        return v3;
      }
      GreSetDCOwnerEx(*(_QWORD *)(v11 + 8), 0x80000012, 1, 0);
    }
    v17 = *(_QWORD *)(v11 + 8);
    *(_QWORD *)(v11 + 16) = 0LL;
    *(_QWORD *)(v11 + 24) = 0LL;
    *(_QWORD *)(v11 + 32) = 0LL;
    *(_QWORD *)(v11 + 88) = 0LL;
    v25 = 0;
    v26 = 0;
    v18 = HmgShareLockEx(v17, 1, 0);
    v24 = (HDC *)v18;
    if ( v18 )
    {
      *(_DWORD *)(v18 + 36) |= 0x80000u;
      XDCOBJ::vAltUnlockFast(&v24);
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v20, v19, v21, v22);
    *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x200u;
    goto LABEL_30;
  }
  GreLockVisRgn(*((_QWORD *)gpDispInfo + 5), a2, a3);
  v4 = 1;
  v6 = (__int64 *)((char *)gpDispInfo + 24);
  for ( i = (__int64 *)*((_QWORD *)gpDispInfo + 3); i; i = (__int64 *)*i )
  {
    if ( i[1] == a2 )
    {
      if ( v6 )
        goto LABEL_9;
      break;
    }
    v6 = i;
  }
  GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 5), v7, v8);
  return 0LL;
}
