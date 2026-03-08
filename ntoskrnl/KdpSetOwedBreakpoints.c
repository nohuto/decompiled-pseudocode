/*
 * XREFs of KdpSetOwedBreakpoints @ 0x140AB2B80
 * Callers:
 *     KdSetOwedBreakpoints @ 0x140565C30 (KdSetOwedBreakpoints.c)
 * Callees:
 *     KdExitDebugger @ 0x140AAD2D0 (KdExitDebugger.c)
 *     KdEnterDebugger @ 0x140AAD40C (KdEnterDebugger.c)
 *     KdpCopyCodeStream @ 0x140AB2660 (KdpCopyCodeStream.c)
 *     KdpInsertBreakpoint @ 0x140AB28D0 (KdpInsertBreakpoint.c)
 *     KdpRemoveBreakpoint @ 0x140AB2ABC (KdpRemoveBreakpoint.c)
 */

_UNKNOWN **__fastcall KdpSetOwedBreakpoints(__int64 a1)
{
  _UNKNOWN **result; // rax
  _KPROCESS **v2; // rdx
  unsigned __int64 v3; // rcx
  _KPROCESS *Process; // rbp
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r8
  char v9; // si
  unsigned __int8 *v10; // rbx
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  int inserted; // eax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF
  __int64 v15; // [rsp+48h] [rbp+10h] BYREF

  result = &retaddr;
  v15 = 0LL;
  if ( KdpOweBreakpoint )
  {
    v2 = (_KPROCESS **)&unk_140C49548;
    v3 = a1 & 0xFFFFFFFFFFFFF000uLL;
    Process = KeGetCurrentThread()->ApcState.Process;
    while ( 1 )
    {
      if ( ((_DWORD)v2[3] & 0xA) != 0 )
      {
        v5 = (unsigned __int64)*(v2 - 1);
        if ( v5 >= 0xFFFF800000000000uLL || *v2 == Process )
        {
          v6 = v3 + 4096;
          v7 = v5 & ~(unsigned __int64)*((unsigned __int8 *)v2 + 29);
          if ( v7 >= v3 && v7 < v6 )
            break;
          v8 = v7 + *((unsigned __int8 *)v2 + 28);
          if ( v8 >= v7 && v8 > v3 && v8 <= v6 )
            break;
        }
      }
      v2 += 5;
      if ( (__int64)v2 >= (__int64)&unk_140C49A48 )
        return (_UNKNOWN **)KdpBreakpointChangeCount;
    }
    v9 = KdEnterDebugger(0LL);
    KdpOweBreakpoint = 0;
    v10 = (unsigned __int8 *)&unk_140C49565;
    do
    {
      if ( (*(_DWORD *)(v10 - 5) & 0xA) != 0 )
      {
        v11 = *(_QWORD *)(v10 - 37);
        if ( v11 >= 0xFFFF800000000000uLL || *(_KPROCESS **)(v10 - 29) == Process )
        {
          if ( (int)KdpCopyCodeStream((char *)(v11 & ~(unsigned __int64)*v10), (__int64)&v15, *(v10 - 1), 4) >= 0 )
          {
            v12 = (__int64)(v10 - 37);
            if ( (*(_DWORD *)(v10 - 5) & 2) != 0 )
            {
              *(_QWORD *)(v10 - 13) = v15;
              inserted = KdpInsertBreakpoint(v12, &v15);
              if ( inserted )
                *(_DWORD *)(v10 - 5) = inserted;
            }
            else
            {
              KdpRemoveBreakpoint(v12, &v15);
            }
          }
        }
        else
        {
          KdpOweBreakpoint = 1;
        }
      }
      v10 += 40;
    }
    while ( (__int64)v10 < (__int64)byte_140C49A65 );
    return (_UNKNOWN **)KdExitDebugger(v9);
  }
  return result;
}
