/*
 * XREFs of ?vDeleteCache@RFONTOBJ@@QEAAXXZ @ 0x1C0123D3C
 * Callers:
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0123828 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RFONTOBJ::vDeleteCache(RFONTOBJ *this)
{
  __int64 v1; // rsi
  _QWORD *v3; // rbx
  void *v4; // rcx
  _QWORD *v5; // rcx
  _QWORD *v6; // rbx
  void *v7; // rcx

  v1 = *(_QWORD *)this;
  v3 = *(_QWORD **)(*(_QWORD *)this + 536LL);
  if ( v3 )
  {
    while ( 1 )
    {
      v4 = v3;
      v3 = (_QWORD *)*v3;
      if ( !v3 )
        break;
      Win32FreePool(v4);
    }
    Win32FreePool(*(void **)(*(_QWORD *)this + 480LL));
  }
  *(_QWORD *)(v1 + 536) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 480LL) = 0LL;
  v5 = *(_QWORD **)(v1 + 568);
  if ( v5 )
  {
    do
    {
      v6 = (_QWORD *)*v5;
      Win32FreePool(v5);
      v5 = v6;
    }
    while ( v6 );
    *(_QWORD *)(v1 + 568) = 0LL;
  }
  v7 = *(void **)(*(_QWORD *)this + 616LL);
  if ( v7 )
  {
    Win32FreePool(v7);
    *(_QWORD *)(*(_QWORD *)this + 616LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 624LL) = 0LL;
  }
}
