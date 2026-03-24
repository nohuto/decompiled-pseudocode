/*
 * XREFs of ?OnKeyStateRequested@CAsyncKeyEventMonitor@@QEAAXK@Z @ 0x1C0005E40
 * Callers:
 *     EtwTraceGetAsyncKeyState @ 0x1C0005DD0 (EtwTraceGetAsyncKeyState.c)
 * Callees:
 *     <none>
 */

void __fastcall CAsyncKeyEventMonitor::OnKeyStateRequested(CAsyncKeyEventMonitor *this, int a2)
{
  CAsyncKeyEventMonitor *v2; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  _DWORD *v6; // rax

  v2 = gpAsyncKeyEventMonitor;
  ExAcquirePushLockExclusiveEx((char *)gpAsyncKeyEventMonitor + 96, 0LL);
  v4 = *((unsigned int *)v2 + 1);
  *((_BYTE *)v2 + 88) = 1;
  if ( *((_DWORD *)v2 + 2 * v4 + 2) == a2 )
  {
    ++*((_DWORD *)v2 + 2 * v4 + 3);
  }
  else
  {
    v5 = 0LL;
    if ( !*(_DWORD *)v2 )
      *(_DWORD *)v2 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v6 = (_DWORD *)((char *)v2 + 8);
    while ( *v6 != a2 )
    {
      if ( *v6 == -1 )
      {
        *((_DWORD *)v2 + 2 * v5 + 2) = a2;
        *((_DWORD *)v2 + 2 * v5 + 3) = 1;
        goto LABEL_10;
      }
      v5 = (unsigned int)(v5 + 1);
      v6 += 2;
      if ( (unsigned int)v5 >= 0xA )
        goto LABEL_3;
    }
    ++*((_DWORD *)v2 + 2 * v5 + 3);
LABEL_10:
    *((_DWORD *)v2 + 1) = v5;
  }
LABEL_3:
  ExReleasePushLockExclusiveEx((char *)v2 + 96, 0LL);
}
