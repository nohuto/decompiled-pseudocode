char __fastcall KiAdjustThreadTimer(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  volatile signed __int32 *v4; // rdi
  char v9; // bp
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rcx
  int v14; // [rsp+40h] [rbp+8h] BYREF

  v4 = (volatile signed __int32 *)(a1 + 736);
  v9 = 0;
  KiAcquireKobjectLockSafe((volatile signed __int32 *)(a1 + 736));
  if ( *(char *)(a1 + 644) < 1 && (*(_DWORD *)(a1 + 120) & 0x4000) == 0 )
  {
    LOBYTE(v11) = KiSuspendThread(a1, a2, v10);
    if ( !(_BYTE)v11 )
      goto LABEL_21;
    v9 = 1;
  }
  v14 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v14);
    while ( *(_QWORD *)(a1 + 64) );
  }
  LODWORD(v11) = *(_DWORD *)(a1 + 116) & 0x60000;
  if ( (_DWORD)v11 == 393216 && (*(_BYTE *)(a1 + 257) & 1) == 0 )
  {
    v12 = *(_QWORD *)(a1 + 280);
    if ( a3 >= 0 )
    {
      if ( a3 > 0 )
      {
        LOBYTE(v11) = v12 - a3;
        if ( v12 - a3 < v12 )
          v12 -= a3;
      }
    }
    else
    {
      v11 = v12 - a3;
      v12 = 0LL;
      if ( v11 <= 0 )
        v12 = v11;
    }
    *(_QWORD *)(a1 + 280) = v12;
  }
  *(_DWORD *)(a1 + 952) = a4;
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( v9 )
    LOBYTE(v11) = KiResumeThread(a1, a2, 0LL);
LABEL_21:
  _InterlockedAnd(v4, 0xFFFFFF7F);
  return v11;
}
