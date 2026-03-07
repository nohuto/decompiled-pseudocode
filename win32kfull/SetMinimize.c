char __fastcall SetMinimize(struct tagWND *a1, char a2)
{
  __int64 v3; // rax

  if ( (a2 & 1) != 0 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
      DecVisWindows(a1);
    LOBYTE(v3) = SetOrClrWF(1, (__int64 *)a1, 0xF20u, 1);
  }
  else
  {
    SetOrClrWF(0, (__int64 *)a1, 0xF20u, 1);
    v3 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v3 + 31) & 0x10) != 0 )
      LOBYTE(v3) = IncVisWindows(a1);
  }
  return v3;
}
