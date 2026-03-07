void __fastcall MakeArrangedStateObservable(const struct MOVESIZEDATA *a1)
{
  __int64 v1; // rdx
  __int64 v3; // rcx
  __int64 *v4; // rdx
  int v5; // r9d

  v1 = *((_QWORD *)a1 + 2);
  if ( (*((_DWORD *)a1 + 50) & 0x100) != 0 )
    *(_DWORD *)(v1 + 320) |= 0x4000000u;
  else
    *(_DWORD *)(v1 + 320) &= ~0x4000000u;
  v3 = *((_QWORD *)a1 + 2);
  if ( (*((_DWORD *)a1 + 50) & 0x200) != 0 )
    *(_DWORD *)(v3 + 320) |= 0x8000000u;
  else
    *(_DWORD *)(v3 + 320) &= ~0x8000000u;
  if ( !IsSemiMaximized(*((const struct tagWND **)a1 + 2)) && (*(_BYTE *)(v4[5] + 233) & 0x10) != 0 )
    SetOrClrWF(0, v4, 0xD910u, v5);
}
