__int64 __fastcall LockWindowStation(__int64 a1)
{
  int v2; // ebx
  _QWORD *v3; // rcx
  int v4; // eax

  v2 = 0;
  if ( PsGetCurrentProcessId() == (HANDLE)gpidLogon )
  {
    v3 = *(_QWORD **)(a1 + 16);
    v4 = *(_DWORD *)(a1 + 64) | 1;
    *(_DWORD *)(a1 + 64) = v4;
    while ( v3 )
    {
      if ( v3 != grpdeskLogon && *(v3 - 5) )
      {
        v2 = 1;
        break;
      }
      v3 = (_QWORD *)v3[4];
    }
    if ( (v4 & 8) != 0 )
      *(_DWORD *)(a1 + 64) = v4 | 2;
    return 2 - (unsigned int)(v2 != 0);
  }
  else
  {
    UserSetLastError(5);
    return 0LL;
  }
}
