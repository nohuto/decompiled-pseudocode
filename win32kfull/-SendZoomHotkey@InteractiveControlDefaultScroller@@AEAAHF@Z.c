__int64 __fastcall InteractiveControlDefaultScroller::SendZoomHotkey(
        InteractiveControlDefaultScroller *this,
        __int16 a2)
{
  unsigned int v4; // edi
  unsigned __int16 v5; // si
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 CurrentKbdTables; // rax
  _OWORD v10[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v11; // [rsp+40h] [rbp-30h]
  __int128 v12; // [rsp+48h] [rbp-28h]
  __int128 v13; // [rsp+58h] [rbp-18h]
  __int64 v14; // [rsp+68h] [rbp-8h]

  v4 = 1;
  InteractiveControlDefaultScroller::SendZoomModifiers(*((_BYTE *)this + 53), 1);
  if ( *((_BYTE *)this + 52) != 2 )
  {
    memset_0(v10, 0, 0x50uLL);
    LODWORD(v10[0]) = 1;
    v5 = ((a2 >> 15) & 2) + 187;
    WORD4(v10[0]) = v5;
    CurrentKbdTables = GetCurrentKbdTables(v7, v6);
    WORD5(v10[0]) = InternalMapVirtualKeyEx(v5, 0LL, CurrentKbdTables);
    v12 = v10[0];
    HIDWORD(v12) = 2;
    v14 = v11;
    v13 = v10[1];
    xxxSendInput(2LL, (__int64)v10);
    return 0;
  }
  return v4;
}
