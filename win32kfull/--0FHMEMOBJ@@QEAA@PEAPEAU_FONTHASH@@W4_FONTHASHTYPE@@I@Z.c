__int64 __fastcall FHMEMOBJ::FHMEMOBJ(__int64 a1, _QWORD *a2, int a3, unsigned int a4)
{
  __int64 v7; // rcx
  _DWORD *v8; // rcx

  *(_QWORD *)a1 = a2;
  if ( a4 > 0x1FFFFFFA )
  {
    *a2 = 0LL;
  }
  else
  {
    if ( 8 * a4 == -40 )
      v7 = 0LL;
    else
      v7 = Win32AllocPoolZInit(8 * a4 + 40, 1935763527LL);
    **(_QWORD **)a1 = v7;
  }
  v8 = **(_DWORD ***)a1;
  *(_QWORD *)(a1 + 8) = v8;
  if ( v8 )
  {
    *v8 = 1213415752;
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL) = a3;
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = a4;
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 12LL) = 0;
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 16LL) = 0;
    memset_0((void *)(*(_QWORD *)(a1 + 8) + 40LL), 0, 8LL * *(unsigned int *)(*(_QWORD *)(a1 + 8) + 8LL));
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) = 0LL;
  }
  return a1;
}
