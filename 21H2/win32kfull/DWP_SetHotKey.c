/*
 * XREFs of DWP_SetHotKey @ 0x1C0008230
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0049EC8 (xxxRealDefWindowProc.c)
 * Callees:
 *     ?HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z @ 0x1C0111898 (-HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z.c)
 *     HotKeyToWindow @ 0x1C0243E8C (HotKeyToWindow.c)
 */

__int64 __fastcall DWP_SetHotKey(struct tagWND *a1, unsigned int a2)
{
  int v2; // esi
  struct tagHOTKEYSTRUCT **v5; // r14
  struct tagHOTKEYSTRUCT *v6; // rdi
  __int64 v8; // rcx
  struct tagWND *v9; // rax
  __int64 v10; // rax
  struct tagHOTKEYSTRUCT *v11; // rdi
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  if ( (unsigned __int8)a2 <= 0x20u )
  {
    v8 = 0x108000200LL;
    if ( _bittest64(&v8, a2) )
      return 0xFFFFFFFFLL;
  }
  if ( (_BYTE)a2 == 0xE7 )
    return 0xFFFFFFFFLL;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) != 0 )
    return 0LL;
  if ( a2 )
  {
    v9 = (struct tagWND *)HotKeyToWindow(a2);
    if ( v9 )
    {
      if ( v9 != a1 )
        v2 = 1;
    }
  }
  v5 = HotKeyHelper(a1);
  v6 = *v5;
  if ( *v5 )
  {
    if ( a2 )
    {
      *((_DWORD *)v6 + 2) = a2;
    }
    else
    {
      *v5 = (struct tagHOTKEYSTRUCT *)*((_QWORD *)v6 + 2);
      HMAssignmentUnlock(v6);
      Win32FreePool(v6);
      --gcHotKey;
    }
    return (unsigned int)(v2 + 1);
  }
  if ( !a2 )
    return 1LL;
  v10 = Win32AllocPool(24LL, 1802007381LL);
  v11 = (struct tagHOTKEYSTRUCT *)v10;
  if ( !v10 )
    return 0LL;
  *(_QWORD *)(v10 + 16) = 0LL;
  *(_QWORD *)v10 = 0LL;
  *(_DWORD *)(v10 + 8) = a2;
  v12[0] = v10;
  v12[1] = a1;
  HMAssignmentLock(v12);
  ++gcHotKey;
  *v5 = v11;
  return (unsigned int)(v2 + 1);
}
