/*
 * XREFs of KdpAddBreakpoint @ 0x140AB2738
 * Callers:
 *     KdpWriteCustomBreakpoint @ 0x140565684 (KdpWriteCustomBreakpoint.c)
 *     KdpSendWaitContinue @ 0x140AAD824 (KdpSendWaitContinue.c)
 *     KdpWriteBreakPointEx @ 0x140AB1D94 (KdpWriteBreakPointEx.c)
 * Callees:
 *     KdpCopyCodeStream @ 0x140AB2660 (KdpCopyCodeStream.c)
 *     KdpInsertBreakpoint @ 0x140AB28D0 (KdpInsertBreakpoint.c)
 */

__int64 __fastcall KdpAddBreakpoint(unsigned __int64 a1, __int64 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  _DWORD *v8; // rbx
  int v9; // edx
  _DWORD *i; // rcx
  int v11; // eax
  int v12; // eax
  char v14; // si
  int inserted; // eax
  _QWORD v16[5]; // [rsp+20h] [rbp-28h] BYREF

  v16[0] = 0LL;
  if ( ((unsigned __int8)(a3 - 1) & a3) != 0 || a1 >= 0xFFFF800000000000uLL && (a2 != 204 || a3 != 1 || a4) )
    return 0LL;
  v8 = 0LL;
  ++KdpBreakpointChangeCount;
  v9 = 0;
  for ( i = &KdpBreakpointTable; ; i += 10 )
  {
    v11 = i[8];
    if ( (v11 & 1) != 0 && *(_QWORD *)i == a1 )
      break;
    if ( !v8 && !v11 )
      v8 = i;
    if ( (unsigned int)++v9 >= 0x20 )
    {
      if ( !v8 )
        return 0LL;
      v12 = KdpCopyCodeStream((char *)(a1 & ~(unsigned __int64)a4), (__int64)v16, a3, 4);
      *(_QWORD *)v8 = a1;
      *((_BYTE *)v8 + 36) = a3;
      *((_BYTE *)v8 + 37) = a4;
      *((_QWORD *)v8 + 2) = a2;
      if ( v12 < 0 )
      {
        *((_QWORD *)v8 + 1) = KeGetCurrentThread()->ApcState.Process;
        v8[8] = 3;
        return (unsigned int)(((char *)v8 - (char *)&KdpBreakpointTable) / 40) + 1;
      }
      *((_QWORD *)v8 + 3) = v16[0];
      v14 = KdpOweBreakpoint;
      *((_QWORD *)v8 + 1) = KeGetCurrentThread()->ApcState.Process;
      inserted = KdpInsertBreakpoint(v8, v16);
      if ( inserted )
      {
        v8[8] = inserted;
        return (unsigned int)(((char *)v8 - (char *)&KdpBreakpointTable) / 40) + 1;
      }
      KdpOweBreakpoint = v14;
      return 0LL;
    }
  }
  if ( (v11 & 8) == 0 )
    return 0LL;
  i[8] = v11 & 0xFFFFFFF7;
  return (unsigned int)(v9 + 1);
}
