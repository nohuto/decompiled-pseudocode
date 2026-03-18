/*
 * XREFs of ?IsWindowNCRenderingEnabled@@YA_NPEBUtagWND@@@Z @ 0x1C00B2C10
 * Callers:
 *     WindowMargins::_anonymous_namespace_::CalculateWindowMargins @ 0x1C00B2B24 (WindowMargins--_anonymous_namespace_--CalculateWindowMargins.c)
 * Callees:
 *     ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C004D894 (-_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

char __fastcall IsWindowNCRenderingEnabled(const struct tagWND *a1)
{
  char v2; // bl
  __int64 v3; // rcx
  int v4; // eax
  _DWORD v6[16]; // [rsp+20h] [rbp-58h] BYREF

  v2 = 0;
  memset(v6, 0, sizeof(v6));
  if ( (unsigned int)_GetWindowCompositionInfo(a1, (struct WINDOWCOMPOSITIONINFO *)v6) )
  {
    v3 = *((_QWORD *)a1 + 5);
    v4 = *(_DWORD *)(v3 + 24);
    if ( ((v4 & 0x80000) == 0 || (v4 & 0x20000000) != 0) && (v6[0] & 1) == 0 )
    {
      if ( v6[1] )
      {
        if ( v6[1] == 2 )
          return 1;
      }
      else if ( ((unsigned __int8)~(*(_BYTE *)(v3 + 30) >> 2) & ((*(_BYTE *)(v3 + 30) & 0xC0) != 0xC0)) == 0 )
      {
        return 1;
      }
    }
  }
  return v2;
}
