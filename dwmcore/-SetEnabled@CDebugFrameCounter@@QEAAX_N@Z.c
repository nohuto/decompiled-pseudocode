/*
 * XREFs of ?SetEnabled@CDebugFrameCounter@@QEAAX_N@Z @ 0x1801B1FFC
 * Callers:
 *     ?UpdateDebugCounter@CComposition@@QEAAX_N@Z @ 0x1801B209C (-UpdateDebugCounter@CComposition@@QEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDebugFrameCounter::SetEnabled(CDebugFrameCounter *this, char a2)
{
  if ( *((_QWORD *)this + 579) )
  {
    if ( *((_BYTE *)this + 8) != a2 )
    {
      *((_BYTE *)this + 8) = a2;
      *((_DWORD *)this + 1) = -1;
      *(_DWORD *)this = -1;
      *((_QWORD *)this + 2) = 0LL;
      *(_WORD *)((char *)this + 9) = 0;
    }
  }
}
