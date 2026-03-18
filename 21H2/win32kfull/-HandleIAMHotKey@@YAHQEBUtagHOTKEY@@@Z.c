/*
 * XREFs of ?HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z @ 0x1C01E5944
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C00F6330 (xxxDoHotKeyStuff.c)
 * Callees:
 *     IsIAMThread @ 0x1C00A9A2C (IsIAMThread.c)
 *     ?RequestModernAppClose@@YAHXZ @ 0x1C01E59BC (-RequestModernAppClose@@YAHXZ.c)
 */

__int64 __fastcall HandleIAMHotKey(const struct tagHOTKEY *const a1)
{
  __int64 v1; // rcx
  int v2; // eax
  __int64 v3; // r8
  unsigned int v4; // edx

  v1 = *(_QWORD *)a1;
  if ( *(_QWORD *)(v1 + 456) != grpdeskRitInput )
    return 0LL;
  LOBYTE(v2) = IsIAMThread(v1);
  v4 = 0;
  if ( !v2
    || !*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 320LL)
    || *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 24LL) + 320LL) != *(_QWORD *)(v3 + 16) )
  {
    return 0LL;
  }
  if ( *(_DWORD *)(v3 + 32) == 61536 )
    return (unsigned int)RequestModernAppClose();
  return v4;
}
