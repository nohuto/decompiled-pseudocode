/*
 * XREFs of CleanupWindowRedirection @ 0x1C00340EC
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 * Callees:
 *     UnsetRedirectedWindow @ 0x1C0022ADC (UnsetRedirectedWindow.c)
 *     UnsetLayeredWindow @ 0x1C00240E0 (UnsetLayeredWindow.c)
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 */

__int64 __fastcall CleanupWindowRedirection(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 26LL) & 8) != 0 )
    UnsetLayeredWindow(a1, 1);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 27LL) & 2) != 0 )
  {
    UnsetRedirectedWindow((struct tagWND *)a1, 2);
    SetOrClrWF(0LL, a1, 2818LL, 1LL);
  }
  result = *(_QWORD *)(a1 + 40);
  if ( (*(_DWORD *)(result + 232) & 1) != 0 )
  {
    UnsetRedirectedWindow((struct tagWND *)a1, 8);
    result = *(_QWORD *)(a1 + 40);
    *(_DWORD *)(result + 232) &= ~1u;
  }
  if ( (*(_DWORD *)(a1 + 320) & 0x20000000) != 0 )
  {
    result = UnsetRedirectedWindow((struct tagWND *)a1, 8);
    *(_DWORD *)(a1 + 320) &= ~0x20000000u;
  }
  return result;
}
