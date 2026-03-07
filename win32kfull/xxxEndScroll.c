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
  struct tagWND **v14; // rsi
  struct tagWND *v15; // rdx
  unsigned int v16; // r8d
  unsigned __int64 v17; // [rsp+50h] [rbp+8h]

  result = (unsigned __int8 **)*((_QWORD *)a1 + 2);
  v5 = (__int64)result[90];
  if ( !v5 )
    return result;
  result = *(unsigned __int8 ***)(gptiCurrent + 432LL);
  if ( result[14] != (unsigned __int8 *)a1 )
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
        FindTimer(a1, (void *)0xFFFE, 2u, 1, 0LL);
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
    || (xxxDoScroll(*(struct tagWND **)(v5 + 16), v8, 4LL, *(unsigned int *)(v5 + 80), (*(_DWORD *)v5 >> 1) & 1),
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
      v14 = (struct tagWND **)(v5 + 16);
      if ( !v13
        || (xxxDoScroll(*v14, v13, 8LL, 0LL, (*(_DWORD *)v5 >> 1) & 1),
            result = (unsigned __int8 **)*((_QWORD *)a1 + 2),
            (unsigned __int8 *)v5 == result[90]) )
      {
        SetOrClrWF(0, (__int64 *)a1, 0x610u, 1);
        SetOrClrWF(0, (__int64 *)a1, 0x620u, 1);
        if ( gpqForeground )
        {
          v15 = *(struct tagWND **)(gpqForeground + 120LL);
          if ( v15 )
          {
            if ( gpqForeground == *(_QWORD *)(gptiCurrent + 432LL) )
              xxxWindowEvent(0x80000005, v15, 0, 3u, 33);
          }
        }
        if ( (*(_DWORD *)v5 & 4) != 0 )
          v16 = -4;
        else
          v16 = ((*(_DWORD *)v5 & 2) != 0) | 0xFFFFFFFA;
        xxxWindowEvent(0x13u, a1, v16, 0, 0);
        result = (unsigned __int8 **)*((_QWORD *)a1 + 2);
        if ( (unsigned __int8 *)v5 == result[90] )
        {
          if ( !*v14
            || (zzzShowCaret(*v14), result = (unsigned __int8 **)*((_QWORD *)a1 + 2),
                                    (unsigned __int8 *)v5 == result[90]) )
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
