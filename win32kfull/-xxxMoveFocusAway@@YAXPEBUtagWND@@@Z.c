void __fastcall xxxMoveFocusAway(const struct tagWND *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 == *(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL) )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
    {
      v2 = *(_QWORD *)(gptiCurrent + 416LL);
      v3 = *((_QWORD *)a1 + 13);
      v7[2] = 0LL;
      v7[0] = v2;
      *(_QWORD *)(gptiCurrent + 416LL) = v7;
      v7[1] = v3;
      if ( v3 )
        HMLockObject(v3);
      xxxSetFocus(*((struct tagWND **)a1 + 13));
      ThreadUnlock1(v5, v4, v6);
    }
    else
    {
      xxxSetFocus(0LL);
    }
  }
  if ( a1 == *(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 304LL) )
    zzzDestroyCaret();
}
