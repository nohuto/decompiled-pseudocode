/*
 * XREFs of xxxRemoveFullScreen @ 0x1C0033708
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 *     xxxCheckFullScreen @ 0x1C0033340 (xxxCheckFullScreen.c)
 * Callees:
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00A1CA0 (PopAndFreeW32ThreadLock.c)
 *     xxxSetTrayWindow @ 0x1C0109D38 (xxxSetTrayWindow.c)
 */

__int64 __fastcall xxxRemoveFullScreen(__int64 a1)
{
  _QWORD *v1; // rdi
  unsigned int v2; // ebx
  __int16 v4; // dx
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v1 = *(_QWORD **)(a1 + 24);
  v2 = 0;
  if ( !v1 )
    return 0LL;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 20LL) & 0x40) != 0
    && (*(_DWORD *)(gpsi + 2120LL) & 8) != 0
    && (((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) != 0
     || *(_QWORD *)(v1[1] + 192LL)) )
  {
    SetOrClrWF(0LL, a1, 1088LL, 1LL);
    v4 = *(_WORD *)(gpDispInfo + 160LL);
    *(_WORD *)(gpDispInfo + 160LL) = v4 - 1;
    if ( !v4 )
    {
      v6 = 0LL;
      v5 = 0LL;
      PushW32ThreadLock(v1, &v5, UserDereferenceObject);
      ObfReferenceObject(v1);
      xxxSetTrayWindow(v1, 1LL);
      PopAndFreeW32ThreadLock(&v5);
      return 1;
    }
  }
  return v2;
}
