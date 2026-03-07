void __fastcall GreHidePointerInternal(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r14
  __int64 v4; // rax
  _QWORD *v5; // rsi
  int v6; // ebp
  _DWORD *v7; // rcx

  GreAcquireSemaphore(a1[7]);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemPointer()", a1[7], 4LL);
  v3 = *(_QWORD *)(SGDGetSessionState(v2) + 32);
  if ( (a1[5] & 0x20000) != 0 )
  {
    v4 = a1[221];
    v5 = *(_QWORD **)v4;
    v6 = *(_DWORD *)(v4 + 16);
    do
    {
      v7 = (_DWORD *)v5[6];
      if ( (v7[524] & 0x2000) == 0 )
        vMovePointer(v7, 0xFFFFFFFFLL, 0xFFFFFFFFLL, *(_DWORD *)(v3 + 8664));
      v5 = (_QWORD *)*v5;
      --v6;
    }
    while ( v6 );
  }
  else
  {
    vMovePointer(a1, 0xFFFFFFFFLL, 0xFFFFFFFFLL, *(_DWORD *)(v3 + 8664));
  }
  *((_DWORD *)a1 + 16) = -1;
  *((_DWORD *)a1 + 17) = -1;
  EtwTraceGreLockReleaseSemaphore(L"po.hsemPointer()");
  GreReleaseSemaphoreInternal(a1[7]);
}
