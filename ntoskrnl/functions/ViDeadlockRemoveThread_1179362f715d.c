unsigned __int64 __fastcall ViDeadlockRemoveThread(ULONG_PTR a1, int a2)
{
  _QWORD *v3; // r9
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  __int64 v6; // r10
  unsigned __int64 v7; // r8
  unsigned __int64 result; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rcx

  if ( !*((_DWORD *)ViDeadlockGlobals + 8196)
    && *((int *)ViDeadlockGlobals + 8282) <= 1024
    && !a2
    && *(_DWORD *)(a1 + 40) )
  {
    ViDeadlockPreprocessOptions(byte_140C0DD60, "Terminated thread 0x%p owns lock.", 4106LL, *(_QWORD *)a1, a1, 0LL);
    VfReportIssueWithOptions(0xC4u, 0x100AuLL, *(_QWORD *)a1, a1, 0LL, byte_140C0DD60);
  }
  v3 = ViDeadlockGlobals;
  --*((_QWORD *)ViDeadlockGlobals + 2051);
  v4 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(v4 + 8) != a1 + 24 || (v5 = *(_QWORD **)(a1 + 32), *v5 != a1 + 24) )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  v6 = *(_QWORD *)a1;
  v7 = *(_QWORD *)a1 >> 12;
  result = 1023 * (v7 / 0x3FF);
  v9 = 16 * (v7 % 0x3FF);
  v10 = 2 * (v7 % 0x3FF + 1026);
  if ( *(_QWORD *)(v9 + v3[2050]) == v9 + v3[2050] )
  {
    v3[v10] = 0LL;
    v3[v10 + 1] = 0LL;
  }
  else
  {
    v11 = v3[v10];
    if ( v6 == v11 )
      v3[v10] = v11 + 2320;
    v12 = v3[v10 + 1];
    result = v6 + 2320;
    if ( v6 + 2320 == v12 )
    {
      result = v12 - 2320;
      v3[v10 + 1] = v12 - 2320;
    }
  }
  return result;
}
