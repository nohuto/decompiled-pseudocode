/*
 * XREFs of ??1ESTROBJ@@QEAA@XZ @ 0x1C0112B40
 * Callers:
 *     ?GrepGetTextExtentW@@YAHPEAUHDC__@@PEAGHPEAUtagSIZE@@IW4EntryPoint@RFONTOBJ@@@Z @ 0x1C010F854 (-GrepGetTextExtentW@@YAHPEAUHDC__@@PEAGHPEAUtagSIZE@@IW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?GreGetTextExtentExW@@YAHPEAUHDC__@@PEAGKKPEAK2PEAUtagSIZE@@KW4EntryPoint@RFONTOBJ@@@Z @ 0x1C0112B88 (-GreGetTextExtentExW@@YAHPEAUHDC__@@PEAGKKPEAK2PEAUtagSIZE@@KW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@IW4EntryPoint@RFONTOBJ@@@Z @ 0x1C02A153C (-GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@IW4EntryPoint@RFONTOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ESTROBJ::~ESTROBJ(ESTROBJ *this, __int64 a2, __int64 a3)
{
  int v3; // eax

  v3 = *((_DWORD *)this + 58);
  if ( (v3 & 0x801) != 0 )
  {
    if ( (v3 & 1) != 0 )
      FreeTmpBuffer(*((_QWORD *)this + 8), a2, a3);
    if ( (*((_DWORD *)this + 58) & 0x800) != 0 )
      Win32FreePool(*((void **)this + 33));
  }
}
