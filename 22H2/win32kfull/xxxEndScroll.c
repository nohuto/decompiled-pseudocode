/*
 * XREFs of xxxEndScroll @ 0x1C0245344
 * Callers:
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C0046828 (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     xxxTrackBox @ 0x1C0246580 (xxxTrackBox.c)
 *     xxxTrackThumb @ 0x1C02466F0 (xxxTrackThumb.c)
 * Callees:
 *     FindTimer @ 0x1C000B5AC (FindTimer.c)
 *     PtInRect @ 0x1C004DE1C (PtInRect.c)
 *     SetOrClrWF @ 0x1C004DF08 (SetOrClrWF.c)
 *     xxxWindowEvent @ 0x1C0081440 (xxxWindowEvent.c)
 *     xxxReleaseCapture @ 0x1C00DAB00 (xxxReleaseCapture.c)
 *     _GetMessagePos @ 0x1C010F9A0 (_GetMessagePos.c)
 *     ??$UserFreeIsolatedType@V?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C0169790 (--$UserFreeIsolatedType@V-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01D4208 (safe_cast_fnid_to_PSBWND.c)
 *     zzzShowCaret @ 0x1C0241324 (zzzShowCaret.c)
 *     ?DrawCtlThumb@@YAXPEAUtagSBWND@@@Z @ 0x1C0243DD4 (-DrawCtlThumb@@YAXPEAUtagSBWND@@@Z.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C02444C0 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C02445B4 (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0244C54 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 */

unsigned __int8 **__fastcall xxxEndScroll(struct tagWND *a1, int a2)
{
  unsigned __int8 **result; // rax
  __int64 v5; // rbx
  unsigned int v6; // ebp
  __int64 (__fastcall *v7)(struct tagWND *); // rax
  struct tagSBCALC *v8; // rdx
  struct tagSBWND *v9; // rax
  __int64 (__fastcall *v10)(struct tagWND *); // rcx
  int MessagePos; // eax
  __int64 v12; // r8
  struct tagWND *v13; // rdx
  struct tagWND *v14; // rdx
  unsigned int v15; // r8d
  struct tagWND *v16; // rcx
  unsigned __int64 v17; // [rsp+50h] [rbp+8h]

  result = (unsigned __int8 **)*((_QWORD *)a1 + 2);
  v5 = (__int64)result[90];
  if ( !v5 )
    return result;
  result = *(unsigned __int8 ***)(gptiCurrent + 432LL);
  if ( result[13] != (unsigned __int8 *)a1 )
    return result;
  if ( !*(_QWORD *)(v5 + 48) )
    return result;
  v6 = *(_DWORD *)(v5 + 56);
  *(_DWORD *)(v5 + 56) = 0;
  xxxReleaseCapture();
  result = (unsigned __int8 **)*((_QWORD *)a1 + 2);
  if ( (unsigned __int8 *)v5 != result[90] )
    return result;
  v7 = *(__int64 (__fastcall **)(struct tagWND *))(v5 + 48);
  if ( (char *)v7 != (char *)xxxTrackThumb )
  {
    v10 = xxxTrackBox;
    if ( v7 == xxxTrackBox )
    {
      if ( *(_QWORD *)(v5 + 64) )
      {
        FindTimer((__int64)a1, 65534LL, 2u, 1, 0LL);
        *(_QWORD *)(v5 + 64) = 0LL;
      }
      MessagePos = GetMessagePos((__int64)v10);
      v12 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v12 + 26) & 0x40) != 0 )
        LODWORD(v17) = *(_DWORD *)(v12 + 96) - (__int16)MessagePos;
      else
        LODWORD(v17) = (__int16)MessagePos - *(_DWORD *)(v12 + 88);
      HIDWORD(v17) = SHIWORD(MessagePos) - *(_DWORD *)(v12 + 92);
      if ( PtInRect((_DWORD *)(v5 + 32), v17) )
        zzzDrawInvertScrollArea(a1, (struct tagSBTRACK *)v5, 0, v6);
    }
    goto LABEL_22;
  }
  if ( a2 )
    *(_DWORD *)(v5 + 80) = *(_DWORD *)(*(_QWORD *)(v5 + 96) + 12LL);
  v8 = *(struct tagSBCALC **)(v5 + 24);
  if ( !v8
    || (xxxDoScroll(*(struct _LARGE_STRING ***)(v5 + 16), v8, 4u, *(_DWORD *)(v5 + 80), (*(_DWORD *)v5 >> 1) & 1),
        result = (unsigned __int8 **)*((_QWORD *)a1 + 2),
        (unsigned __int8 *)v5 == result[90]) )
  {
    if ( (*(_DWORD *)v5 & 4) != 0 )
    {
      v9 = (struct tagSBWND *)safe_cast_fnid_to_PSBWND((__int64)a1);
      if ( v9 )
        DrawCtlThumb(v9);
    }
    else
    {
      xxxDrawThumb(a1, v8, (*(_DWORD *)v5 >> 1) & 1);
    }
LABEL_22:
    result = (unsigned __int8 **)*((_QWORD *)a1 + 2);
    if ( (unsigned __int8 *)v5 == result[90] )
    {
      v13 = *(struct tagWND **)(v5 + 24);
      if ( !v13
        || (xxxDoScroll(*(struct _LARGE_STRING ***)(v5 + 16), v13, 8u, 0, (*(_DWORD *)v5 >> 1) & 1),
            result = (unsigned __int8 **)*((_QWORD *)a1 + 2),
            (unsigned __int8 *)v5 == result[90]) )
      {
        SetOrClrWF(0, (__int64)a1, 0x610u, 1);
        SetOrClrWF(0, (__int64)a1, 0x620u, 1);
        if ( gpqForeground )
        {
          v14 = *(struct tagWND **)(gpqForeground + 112LL);
          if ( v14 )
          {
            if ( gpqForeground == *(_QWORD *)(gptiCurrent + 432LL) )
              xxxWindowEvent(0x80000005, v14, 0, 3u, 0x21u);
          }
        }
        if ( (*(_DWORD *)v5 & 4) != 0 )
          v15 = -4;
        else
          v15 = ((*(_DWORD *)v5 & 2) != 0) | 0xFFFFFFFA;
        xxxWindowEvent(0x13u, a1, v15, 0, 0);
        result = (unsigned __int8 **)*((_QWORD *)a1 + 2);
        if ( (unsigned __int8 *)v5 == result[90] )
        {
          v16 = *(struct tagWND **)(v5 + 16);
          if ( !v16
            || (zzzShowCaret(v16), result = (unsigned __int8 **)*((_QWORD *)a1 + 2), (unsigned __int8 *)v5 == result[90]) )
          {
            *(_QWORD *)(v5 + 48) = 0LL;
            *(_QWORD *)(*((_QWORD *)a1 + 2) + 720LL) = 0LL;
            HMAssignmentUnlock(v5 + 16);
            HMAssignmentUnlock(v5 + 24);
            HMAssignmentUnlock(v5 + 8);
            return UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<28672,112>>(v5);
          }
        }
      }
    }
  }
  return result;
}
