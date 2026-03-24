/*
 * XREFs of ?OnKeyEvent@CPTPProcessor@@SAXE_N@Z @ 0x1C01A658C
 * Callers:
 *     xxxProcessKeyEvent @ 0x1C01B1150 (xxxProcessKeyEvent.c)
 * Callees:
 *     ?IsOurKey@CPTPProcessor@@CA_NE_N@Z @ 0x1C01A5F84 (-IsOurKey@CPTPProcessor@@CA_NE_N@Z.c)
 *     ?OnKeyPress@CPTPProcessor@@CAX_N@Z @ 0x1C01A664C (-OnKeyPress@CPTPProcessor@@CAX_N@Z.c)
 */

void __fastcall CPTPProcessor::OnKeyEvent(char a1, char a2)
{
  unsigned __int64 v4; // rcx
  int v5; // ebx

  _InterlockedExchange64(&qword_1C0254F00, KeQueryPerformanceCounter(0LL).QuadPart);
  v5 = 1;
  if ( (BYTE4(gafAsyncKeyState) & 4) != 0
    || (BYTE4(gafAsyncKeyState) & 0x10) != 0
    || (BYTE6(xmmword_1C024F630) & 0x40) != 0
    || (BYTE7(xmmword_1C024F630) & 1) != 0 )
  {
    if ( !dword_1C0254F0C )
    {
      _InterlockedExchange64(&qword_1C0254EF0, 0LL);
      _InterlockedExchange64(&qword_1C0254EF8, 0LL);
      _InterlockedExchange64(&qword_1C0257CF0, 0LL);
      _InterlockedExchange64(&qword_1C0257CF8, 0LL);
    }
  }
  else
  {
    LOBYTE(v4) = a1;
    v5 = 0;
    if ( CPTPProcessor::IsOurKey(v4, a2) )
      CPTPProcessor::OnKeyPress(a2);
  }
  dword_1C0254F0C = v5;
}
