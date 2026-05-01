/*
 * XREFs of ?Release@CDummyUnknown@@UEAAKXZ @ 0x180150470
 * Callers:
 *     ??$SafeRelease@VCDummyUnknown@@@@YAXPEAPEAVCDummyUnknown@@@Z @ 0x18014FD00 (--$SafeRelease@VCDummyUnknown@@@@YAXPEAPEAVCDummyUnknown@@@Z.c)
 *     BindCtx_RegisterFolderEnumMode @ 0x180160040 (BindCtx_RegisterFolderEnumMode.c)
 *     ?Release@CDummyUnknown@@W7EAAKXZ @ 0x180171F30 (-Release@CDummyUnknown@@W7EAAKXZ.c)
 *     ?Release@CDummyUnknown@@WBA@EAAKXZ @ 0x180171F40 (-Release@CDummyUnknown@@WBA@EAAKXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800906B4 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall CDummyUnknown::Release(CDummyUnknown *this)
{
  __int64 result; // rax

  result = (unsigned int)(*((_DWORD *)this + 6) - 1);
  *((_DWORD *)this + 6) = result;
  if ( (int)result <= 0 )
  {
    operator delete(this);
    return 0LL;
  }
  return result;
}
