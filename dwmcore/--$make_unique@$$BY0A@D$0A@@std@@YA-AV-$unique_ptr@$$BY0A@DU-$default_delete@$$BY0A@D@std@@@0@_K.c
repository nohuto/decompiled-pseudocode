/*
 * XREFs of ??$make_unique@$$BY0A@D$0A@@std@@YA?AV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@0@_K@Z @ 0x1800F350C
 * Callers:
 *     ?SetOwnerProcessName@CChannelContext@@QEAAXPEBDI@Z @ 0x1800F346C (-SetOwnerProcessName@CChannelContext@@QEAAXPEBDI@Z.c)
 *     ?Print@DwmDbg@@YAXQEBDZZ @ 0x18026F00C (-Print@DwmDbg@@YAXQEBDZZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 */

_QWORD *__fastcall std::make_unique<char [0],0>(_QWORD *a1, SIZE_T a2)
{
  void *v4; // rax
  void *v5; // rbx
  _QWORD *result; // rax

  v4 = operator new(a2);
  v5 = v4;
  if ( v4 )
    memset_0(v4, 0, a2);
  else
    v5 = 0LL;
  result = a1;
  *a1 = v5;
  return result;
}
