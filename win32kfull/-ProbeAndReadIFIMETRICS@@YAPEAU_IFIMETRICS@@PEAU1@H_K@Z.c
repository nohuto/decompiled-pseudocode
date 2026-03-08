/*
 * XREFs of ?ProbeAndReadIFIMETRICS@@YAPEAU_IFIMETRICS@@PEAU1@H_K@Z @ 0x1C02BA788
 * Callers:
 *     ?UMPDDrvQueryFont@@YAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEAK@Z @ 0x1C02BEB10 (-UMPDDrvQueryFont@@YAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEAK@Z.c)
 * Callees:
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     ?IsValidIFIMETRICS@@YA_NPEBU_IFIMETRICS@@K@Z @ 0x1C02BA1FC (-IsValidIFIMETRICS@@YA_NPEBU_IFIMETRICS@@K@Z.c)
 */

struct _IFIMETRICS *__fastcall ProbeAndReadIFIMETRICS(struct _IFIMETRICS *Src, int a2, unsigned __int64 a3)
{
  __int64 v5; // rdx
  size_t cjThis; // rdi
  struct _IFIMETRICS *v7; // rax
  struct _IFIMETRICS *v8; // rbx

  if ( a3 < 0xC0 )
    return 0LL;
  if ( a2 )
  {
    v5 = (unsigned __int8)Src & 3;
    if ( ((unsigned __int8)Src & 3) != 0 )
      ExRaiseDatatypeMisalignment();
  }
  else
  {
    v5 = (unsigned __int8)Src & 3;
  }
  cjThis = Src->cjThis;
  if ( a2 && (_DWORD)cjThis )
  {
    if ( v5 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)Src + cjThis > MmUserProbeAddress || (struct _IFIMETRICS *)((char *)Src + cjThis) < Src )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  if ( (unsigned int)cjThis < 0xC0 )
    return 0LL;
  if ( cjThis > a3 )
    return 0LL;
  if ( (unsigned int)cjThis > 0x2710000 )
    return 0LL;
  v7 = (struct _IFIMETRICS *)Win32AllocPoolZInit(cjThis, 1886221639LL);
  v8 = v7;
  if ( !v7 )
    return 0LL;
  memmove(v7, Src, cjThis);
  if ( !IsValidIFIMETRICS(v8, cjThis) )
  {
    Win32FreePool(v8);
    return 0LL;
  }
  return v8;
}
