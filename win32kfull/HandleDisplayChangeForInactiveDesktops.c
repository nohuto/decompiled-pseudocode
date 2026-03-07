void __fastcall HandleDisplayChangeForInactiveDesktops(__int64 a1, int a2)
{
  __int64 i; // rbx

  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 16LL); i; i = *(_QWORD *)(i + 32) )
  {
    if ( i != a1 )
    {
      if ( a2 )
        PostIAMShellHookMessageEx(i, 0x23u, 0LL);
      *(_DWORD *)(i + 48) |= 0x20u;
    }
  }
}
