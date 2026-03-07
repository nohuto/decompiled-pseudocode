__int64 __fastcall GreUpdatePointerState(__int64 a1)
{
  int v1; // esi
  unsigned int v2; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rdx
  int v7; // eax
  int v9; // r8d
  int v10; // ecx
  int v11; // ecx

  v1 = a1;
  v2 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v5 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v5 = ((unsigned __int128)-(__int128)*(unsigned __int64 *)CurrentProcessWin32Process >> 64) & CurrentProcessWin32Process;
  v6 = *(_QWORD *)(SGDGetSessionState(v4) + 32);
  if ( v5 )
  {
    if ( v1 )
    {
      if ( (*(_DWORD *)(v5 + 12) & 0x40000000) == 0 )
      {
        v9 = *(_DWORD *)(v6 + 8672);
        if ( v9 != -1 )
        {
          *(_DWORD *)(v6 + 8672) = v9 + 1;
          *(_DWORD *)(v5 + 12) |= 0x40000000u;
          LOBYTE(v2) = v9 == 0;
        }
      }
    }
    else
    {
      v7 = *(_DWORD *)(v5 + 12);
      if ( (v7 & 0x40000000) != 0 )
      {
        *(_DWORD *)(v5 + 12) = v7 & 0xBFFFFFFF;
        v10 = *(_DWORD *)(v6 + 8672);
        if ( v10 )
        {
          v11 = v10 - 1;
          *(_DWORD *)(v6 + 8672) = v11;
          if ( !v11 )
            return 1;
        }
      }
    }
  }
  return v2;
}
