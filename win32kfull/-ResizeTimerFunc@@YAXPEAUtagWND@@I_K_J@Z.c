void __fastcall ResizeTimerFunc(HWND *a1, __int64 a2, void *a3)
{
  __int64 v4; // rdx

  FindTimer(a1, a3, 2u, 1, 0LL);
  v4 = *((_QWORD *)a1[2] + 84);
  if ( v4 && *(HWND **)(v4 + 16) == a1 )
    *(_DWORD *)(v4 + 200) |= 0x80000000;
  GreCancelSynchronizedWindowResize(*a1);
}
