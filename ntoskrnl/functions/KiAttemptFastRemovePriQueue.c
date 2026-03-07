_QWORD *__fastcall KiAttemptFastRemovePriQueue(ULONG_PTR BugCheckParameter2, int *a2, int a3)
{
  unsigned int v3; // r9d
  __int64 v4; // rdi
  int v5; // r11d
  _QWORD *v6; // rax
  _QWORD *v7; // rsi
  ULONG_PTR v8; // r10
  __int64 v9; // r8
  int v11; // edx
  unsigned int v12; // edx
  __int64 v13; // rcx
  _QWORD *v14; // rax

  v3 = 0;
  v4 = a3;
  v5 = 32;
  v6 = (_QWORD *)(BugCheckParameter2 + 536);
  v7 = 0LL;
  v8 = BugCheckParameter2 + 664;
  v9 = 32LL;
  do
  {
    v11 = *(_DWORD *)(v8 - 4);
    v8 -= 4LL;
    v12 = v3 + v11;
    --v5;
    --v9;
    v6 -= 2;
    v3 = v12 - 1;
    if ( v9 != v4 )
      v3 = v12;
    if ( v3 >= *(_DWORD *)(BugCheckParameter2 + 664) )
      break;
    if ( (_QWORD *)*v6 != v6 )
    {
      v7 = *(_QWORD **)(BugCheckParameter2 + 16LL * v5 + 24);
      if ( !*v7 )
        KeBugCheckEx(0x96u, (ULONG_PTR)v7, BugCheckParameter2, ExWorkerQueue, v7[2]);
      --*(_DWORD *)(BugCheckParameter2 + 4);
      v13 = *v7;
      if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v14 = (_QWORD *)v7[1], (_QWORD *)*v14 != v7) )
        __fastfail(3u);
      *v14 = v13;
      *(_QWORD *)(v13 + 8) = v14;
      *v7 = 0LL;
      *a2 = v5;
      return v7;
    }
  }
  while ( v9 > 0 );
  return v7;
}
