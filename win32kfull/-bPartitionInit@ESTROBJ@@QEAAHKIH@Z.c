/*
 * XREFs of ?bPartitionInit@ESTROBJ@@QEAAHKIH@Z @ 0x1C014F614
 * Callers:
 *     ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1C02B630C (-FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C02B8154 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 * Callees:
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall ESTROBJ::bPartitionInit(ESTROBJ *this, unsigned int a2, unsigned int a3, int a4)
{
  __int64 *v4; // rdi
  __int64 v6; // rsi
  size_t v8; // r8
  char *v9; // rcx
  unsigned int v10; // esi
  __int64 v11; // rax

  *((_DWORD *)this + 1) &= 0xFFFFFFCF;
  v4 = (__int64 *)((char *)this + 264);
  v6 = a3;
  if ( (*((_DWORD *)this + 58) & 0x1000) == 0 )
  {
    v8 = 4LL * a2;
    v9 = (char *)(*((_QWORD *)this + 8) + 24LL * a2);
    *((_QWORD *)this + 26) = v9;
    *((_QWORD *)this + 25) = &v9[v8];
    memset_0(v9, 0, v8);
    *v4 = 0LL;
    *((_DWORD *)this + 63) = 0;
    *((_DWORD *)this + 64) = 0;
    *((_DWORD *)this + 62) = 0;
    *((_DWORD *)this + 58) |= 0x1000u;
  }
  if ( !a4 )
    return 1LL;
  if ( (unsigned int)v6 < 0xA )
  {
    *v4 = (__int64)this + 272;
    memset_0((char *)this + 272, 0, 4 * v6);
    goto LABEL_11;
  }
  v10 = 4 * v6;
  if ( !v10 )
  {
    *v4 = 0LL;
    return 0LL;
  }
  v11 = Win32AllocPoolZInit(v10, 1718382187LL);
  *v4 = v11;
  if ( !v11 )
    return 0LL;
  *((_DWORD *)this + 58) |= 0x800u;
LABEL_11:
  *((_DWORD *)this + 58) |= 0x400u;
  return 1LL;
}
