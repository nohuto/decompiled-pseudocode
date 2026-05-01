/*
 * XREFs of ?_Initialize@CDragVisual@@AEAAJW4DragVisualMode@@@Z @ 0x180497080
 * Callers:
 *     ?CreateInstance@CDragVisual@@SAJW4DragVisualMode@@PEAUIDragVisualHost@@AEBU_GUID@@PEAPEAX@Z @ 0x180494DE8 (-CreateInstance@CDragVisual@@SAJW4DragVisualMode@@PEAUIDragVisualHost@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x18001A3E0 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1801C0284 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?_RegisterWindowClass@CDragVisual@@AEAAXXZ @ 0x180497F28 (-_RegisterWindowClass@CDragVisual@@AEAAXXZ.c)
 */

__int64 __fastcall CDragVisual::_Initialize(__int64 a1, int a2)
{
  LANGID ThreadUILanguage; // ax
  int v5; // eax
  CDragVisual *v6; // rcx
  unsigned int v7; // edi
  int v8; // eax
  HWND WindowInBand; // rax
  HWND v10; // rbx
  LONG_PTR WindowLongPtrW; // rax
  int pvAttribute; // [rsp+88h] [rbp+10h] BYREF

  ThreadUILanguage = GetThreadUILanguage();
  v5 = IsBiDiLocale(ThreadUILanguage);
  v7 = 0;
  *(_DWORD *)(a1 + 144) = a2;
  *(_DWORD *)(a1 + 148) = a2;
  *(_BYTE *)(a1 + 273) = v5 != 0;
  if ( a2 == 6 )
  {
    *(_DWORD *)(a1 + 332) = 50;
    *(_BYTE *)(a1 + 278) = 1;
  }
  CDragVisual::_RegisterWindowClass(v6);
  v8 = 5;
  if ( *(_DWORD *)(a1 + 148) != 6 )
    v8 = 7;
  WindowInBand = (HWND)CreateWindowInBand(
                         136315008LL,
                         L"ImmersiveDragVisual",
                         &szAgent,
                         0x80000000LL,
                         0,
                         0,
                         0,
                         0,
                         0LL,
                         0LL,
                         &_ImageBase,
                         a1,
                         v8);
  v10 = WindowInBand;
  if ( WindowInBand )
  {
    WindowLongPtrW = GetWindowLongPtrW(WindowInBand, -20);
    if ( (WindowLongPtrW & 0x400000) != 0 )
      SetWindowLongPtrW(v10, -20, WindowLongPtrW & 0xFFFFFFFFFFBFFFFFuLL);
    pvAttribute = 1;
    DwmSetWindowAttribute(v10, 0xCu, &pvAttribute, 4u);
  }
  else
  {
    return (unsigned int)ResultFromKnownLastError();
  }
  return v7;
}
