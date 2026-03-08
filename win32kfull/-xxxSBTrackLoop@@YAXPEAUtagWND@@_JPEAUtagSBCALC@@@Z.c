/*
 * XREFs of ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C022C64C
 * Callers:
 *     xxxSBTrackInit @ 0x1C022D18C (xxxSBTrackInit.c)
 * Callees:
 *     SystoChar @ 0x1C000BD84 (SystoChar.c)
 *     xxxDispatchMessage @ 0x1C0038064 (xxxDispatchMessage.c)
 *     xxxWindowEvent @ 0x1C0062470 (xxxWindowEvent.c)
 *     xxxInternalGetMessage @ 0x1C00946B0 (xxxInternalGetMessage.c)
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 *     xxxTranslateMessage @ 0x1C00E4F1C (xxxTranslateMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     xxxCallMsgFilter @ 0x1C014538E (xxxCallMsgFilter.c)
 */

void __fastcall xxxSBTrackLoop(struct tagWND *a1, __int64 a2, struct tagSBCALC *a3)
{
  __int64 v6; // rdi
  void (__fastcall *v7)(struct tagWND *, __int64, _QWORD, __int64, struct tagSBCALC *); // rbp
  struct tagWND *v8; // rdx
  int v9; // ecx
  unsigned int v10; // r8d
  __int64 v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // r9
  void (__fastcall *v14)(struct tagWND *, _QWORD, _QWORD, __int64, struct tagSBCALC *); // r10
  __int128 v15; // [rsp+30h] [rbp-48h] BYREF
  __int128 v16; // [rsp+40h] [rbp-38h]
  __int128 v17; // [rsp+50h] [rbp-28h]

  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v6 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 720LL);
  if ( v6 )
  {
    v7 = *(void (__fastcall **)(struct tagWND *, __int64, _QWORD, __int64, struct tagSBCALC *))(v6 + 48);
    if ( v7 )
    {
      if ( (*(_DWORD *)v6 & 2) != 0 )
        SetOrClrWF(1, (__int64 *)a1, 0x620u, 1);
      if ( gpqForeground )
      {
        v8 = *(struct tagWND **)(gpqForeground + 120LL);
        if ( v8 )
        {
          if ( gpqForeground == *(_QWORD *)(gptiCurrent + 432LL) )
          {
            v9 = 33;
            if ( *((_QWORD *)v8 + 2) == gptiCurrent )
              v8 = a1;
            else
              v9 = 49;
            xxxWindowEvent(0x80000004, v8, 0, 3u, v9);
          }
        }
      }
      if ( (*(_DWORD *)v6 & 4) != 0 )
        v10 = -4;
      else
        v10 = ((*(_DWORD *)v6 & 2) != 0) | 0xFFFFFFFA;
      xxxWindowEvent(0x12u, a1, v10, 0, 0);
      v7(a1, 513LL, 0LL, a2, a3);
      while ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL) == a1
           && (unsigned int)xxxInternalGetMessage(&v15, 0LL, 0, 0, 1, 1u) )
      {
        if ( !(unsigned int)xxxCallMsgFilter((__int64)&v15, 5u) )
        {
          if ( (_QWORD)v15 == *(_QWORD *)a1
            && ((unsigned int)(DWORD2(v15) - 512) <= 0xE || (unsigned int)(DWORD2(v15) - 256) <= 9) )
          {
            v11 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 720LL);
            if ( !v11 || !*(_QWORD *)(v11 + 48) )
              return;
            v12 = SystoChar(DWORD2(v15), SDWORD2(v16));
            v14(a1, v12, v16, v13, a3);
          }
          else
          {
            xxxTranslateMessage((__int64)&v15, 0);
            xxxDispatchMessage((__int64 *)&v15);
          }
        }
      }
    }
  }
}
