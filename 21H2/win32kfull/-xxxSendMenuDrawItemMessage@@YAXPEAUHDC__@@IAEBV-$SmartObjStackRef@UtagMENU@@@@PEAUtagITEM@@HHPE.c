/*
 * XREFs of ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C0044B0C
 * Callers:
 *     xxxDrawMenuItem @ 0x1C00447AC (xxxDrawMenuItem.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C00E1F30 (xxxDrawMenuBarUnderlines.c)
 *     xxxRealDrawMenuItem @ 0x1C024D8A4 (xxxRealDrawMenuItem.c)
 * Callees:
 *     ?MNInitDrawItemStruct@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagDRAWITEMSTRUCT@@@Z @ 0x1C0044958 (-MNInitDrawItemStruct@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagD.c)
 *     MNInitUAHMenuItem @ 0x1C0044CC8 (MNInitUAHMenuItem.c)
 *     MNInitUAHMenu @ 0x1C0044D20 (MNInitUAHMenu.c)
 *     MNGetpItemIndex @ 0x1C0048370 (MNGetpItemIndex.c)
 *     MNIsUAHMenu @ 0x1C00490D0 (MNIsUAHMenu.c)
 *     xxxSendMessage @ 0x1C005D634 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memset @ 0x1C016E780 (memset.c)
 */

__int64 **__fastcall xxxSendMenuDrawItemMessage(
        __int64 a1,
        int a2,
        __int64 ***a3,
        __int64 *a4,
        int a5,
        int a6,
        __int64 a7)
{
  __int64 v7; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 *v14; // rcx
  int v15; // r14d
  int v16; // r12d
  __int64 **result; // rax
  __int64 *v18; // rcx
  __int64 *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v24; // rcx
  __int64 *v25; // rcx
  int v26; // r9d
  __int128 v27; // [rsp+40h] [rbp-B1h] BYREF
  __int64 v28; // [rsp+50h] [rbp-A1h]
  _DWORD v29[36]; // [rsp+60h] [rbp-91h] BYREF

  v7 = a7;
  memset(v29, 0, sizeof(v29));
  v14 = (__int64 *)a3[2];
  v28 = 0LL;
  v27 = 0LL;
  v15 = 1;
  if ( !v14 )
    v14 = **a3;
  v16 = MNIsUAHMenu(v14, v12, v13);
  result = (__int64 **)MNInitDrawItemStruct(a1, a2, a3, a4, a5, a6, (__int64)v29);
  if ( (**a3)[10] && ((*(_DWORD *)*a4 & 0x100) != 0 || *(_QWORD *)(*a4 + 96) == -1LL) )
  {
    v22 = (**a3)[10];
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    *(_QWORD *)&v27 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v27;
    *((_QWORD *)&v27 + 1) = v22;
    HMLockObject(v22);
    xxxSendMessage((**a3)[10], 43LL, 0LL, v29);
    ThreadUnlock1(v24);
    v25 = (__int64 *)a3[2];
    if ( !v25 )
      v25 = **a3;
    result = (__int64 **)MNGetpItemIndex(v25, a4);
    if ( (_DWORD)result == -1 )
      v15 = v26;
  }
  if ( v16 )
  {
    if ( a7 || (result = *a3, (v7 = (**a3)[10]) != 0) )
    {
      if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80000020) != 0x80000000 )
        v29[4] &= ~0x100u;
      v18 = (__int64 *)a3[2];
      if ( !v18 )
        v18 = **a3;
      MNInitUAHMenu(v18, a1, &v29[16]);
      if ( v15 )
      {
        v19 = (__int64 *)a3[2];
        if ( !v19 )
          v19 = **a3;
        MNInitUAHMenuItem(v19, a4, &v29[22]);
      }
      v20 = W32GetThreadWin32Thread(KeGetCurrentThread());
      *(_QWORD *)&v27 = *(_QWORD *)(v20 + 416);
      *(_QWORD *)(v20 + 416) = &v27;
      *((_QWORD *)&v27 + 1) = v7;
      HMLockObject(v7);
      xxxSendMessage(v7, 146LL, 0LL, v29);
      return (__int64 **)ThreadUnlock1(v21);
    }
  }
  return result;
}
