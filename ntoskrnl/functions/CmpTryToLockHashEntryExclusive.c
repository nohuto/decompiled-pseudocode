char __fastcall CmpTryToLockHashEntryExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v2; // rbx
  char v4; // di
  unsigned __int64 v5; // rsi
  ULONG_PTR v6; // rax

  v2 = (unsigned int)BugCheckParameter4;
  v4 = 1;
  v5 = *(_QWORD *)(BugCheckParameter2 + 1648)
     + 24
     * ((unsigned int)(*(_DWORD *)(BugCheckParameter2 + 1656) - 1) & ((101027
                                                                     * ((unsigned int)BugCheckParameter4 ^ ((unsigned int)BugCheckParameter4 >> 9))) ^ ((unsigned __int64)(101027 * ((unsigned int)BugCheckParameter4 ^ ((unsigned int)BugCheckParameter4 >> 9))) >> 9)));
  v6 = KeAbPreAcquire(v5, 0LL);
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
  {
    if ( v6 )
      KeAbPostReleaseEx(v5, v6);
    return 0;
  }
  else
  {
    if ( v6 )
      *(_BYTE *)(v6 + 18) = 1;
    *(_QWORD *)(v5 + 8) = KeGetCurrentThread();
    if ( !(unsigned __int8)CmpReferenceHive(BugCheckParameter2) )
      KeBugCheckEx(0x51u, 0x17uLL, BugCheckParameter2, 0xDuLL, v2);
  }
  return v4;
}
