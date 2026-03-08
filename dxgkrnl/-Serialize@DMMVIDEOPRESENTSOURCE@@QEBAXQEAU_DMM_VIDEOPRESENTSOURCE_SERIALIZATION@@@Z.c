/*
 * XREFs of ?Serialize@DMMVIDEOPRESENTSOURCE@@QEBAXQEAU_DMM_VIDEOPRESENTSOURCE_SERIALIZATION@@@Z @ 0x1C03B6004
 * Callers:
 *     ?Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@@Z @ 0x1C03B6140 (-Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZA.c)
 * Callees:
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000469C (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00046DC (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0009274 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 */

void __fastcall DMMVIDEOPRESENTSOURCE::Serialize(
        DMMVIDEOPRESENTSOURCE *this,
        struct _DMM_VIDEOPRESENTSOURCE_SERIALIZATION *const a2)
{
  __int64 v4; // rdi

  if ( !a2 )
    WdLogSingleEntry0(1LL);
  *(_DWORD *)a2 = *((_DWORD *)this + 6);
  if ( !*((_QWORD *)this + 5) )
    WdLogSingleEntry0(1LL);
  v4 = *(_QWORD *)(*((_QWORD *)this + 5) + 88LL);
  if ( v4 )
  {
    if ( !*(_QWORD *)(v4 + 8) )
      WdLogSingleEntry0(1LL);
    *((_BYTE *)a2 + 4) = ADAPTER_DISPLAY::IsPartOfDesktop(*(ADAPTER_DISPLAY **)(v4 + 8), *((_DWORD *)this + 6));
    if ( !*(_QWORD *)(v4 + 8) )
      WdLogSingleEntry0(1LL);
    *((_BYTE *)a2 + 5) = ADAPTER_DISPLAY::IsVidPnSourceActive(*(ADAPTER_DISPLAY **)(v4 + 8), *((_DWORD *)this + 6));
    if ( !*(_QWORD *)(v4 + 8) )
      WdLogSingleEntry0(1LL);
    *((_BYTE *)a2 + 6) = ADAPTER_DISPLAY::IsVidPnSourceVisible(*(ADAPTER_DISPLAY **)(v4 + 8), *((_DWORD *)this + 6));
    if ( !*(_QWORD *)(v4 + 8) )
      WdLogSingleEntry0(1LL);
    *((_BYTE *)a2 + 7) ^= (*((_BYTE *)a2 + 7) ^ *(_BYTE *)(4000LL * *((unsigned int *)this + 6)
                                                         + *(_QWORD *)(*(_QWORD *)(v4 + 8) + 128LL)
                                                         + 3780)) & 7;
  }
  else
  {
    *((_WORD *)a2 + 2) = 0;
    *((_BYTE *)a2 + 7) &= 0xF8u;
    *((_BYTE *)a2 + 6) = 0;
  }
}
