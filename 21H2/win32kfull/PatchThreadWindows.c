/*
 * XREFs of PatchThreadWindows @ 0x1C00DD3B0
 * Callers:
 *     <none>
 * Callees:
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     DisassociateShellFrameAppThreads @ 0x1C00DD4CC (DisassociateShellFrameAppThreads.c)
 */

__int64 __fastcall PatchThreadWindows(struct tagTHREADINFO *a1)
{
  unsigned __int64 v2; // rbx
  __int64 result; // rax
  unsigned __int64 v4; // rsi
  struct tagWND **i; // rdi
  struct tagWND *v6; // r14
  __int64 v7; // r8
  int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rax

  DisassociateShellFrameAppThreads(a1);
  v2 = gSharedInfo[1];
  result = gpKernelHandleTable;
  v4 = v2 + 32LL * giheLast;
  for ( i = (struct tagWND **)gpKernelHandleTable; v2 <= v4; i += 3 )
  {
    if ( *(_BYTE *)(v2 + 24) == 1 && i[1] == a1 )
    {
      v6 = *i;
      if ( (*(_BYTE *)(v2 + 25) & 1) == 0
        || (v10 = *((_QWORD *)v6 + 5), *(_QWORD *)(v10 + 120))
        || (result = *(unsigned __int8 *)(v10 + 18), (result & 4) == 0) )
      {
        v7 = *((_QWORD *)v6 + 5);
        v8 = *(unsigned __int16 *)(v7 + 42);
        if ( (unsigned __int16)(v8 - 666) <= 6u )
        {
          v9 = *(_QWORD *)(gpsi + 8LL * ((v8 & 0xFFFF2FFF) - 666) + 272);
        }
        else
        {
          v9 = 0LL;
          if ( (_WORD)v8 == 694 )
            v9 = 5LL;
        }
        *(_QWORD *)(v7 + 120) = v9;
        SetOrClrWF(1, v6, 0x204u, 1);
        result = SetOrClrWF(0, v6, 0x208u, 1);
      }
    }
    v2 += 32LL;
  }
  return result;
}
