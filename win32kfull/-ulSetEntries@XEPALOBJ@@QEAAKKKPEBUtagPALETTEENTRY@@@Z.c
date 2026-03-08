/*
 * XREFs of ?ulSetEntries@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x1C02DABC4
 * Callers:
 *     NtGdiColorCorrectPalette @ 0x1C02D0DA0 (NtGdiColorCorrectPalette.c)
 *     GreSetPaletteEntries @ 0x1C02D3E00 (GreSetPaletteEntries.c)
 * Callees:
 *     ?vUpdateTime@XEPALOBJ@@QEAAXXZ @ 0x1C00D922C (-vUpdateTime@XEPALOBJ@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0309288 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall XEPALOBJ::ulSetEntries(
        XEPALOBJ *this,
        unsigned int a2,
        unsigned int a3,
        const struct tagPALETTEENTRY *a4)
{
  __int64 v6; // rsi
  struct Gre::Base::SESSION_GLOBALS *v8; // rax
  __int64 v9; // r8
  unsigned int v10; // ecx
  _BYTE *v11; // rdx
  _BYTE *v12; // rcx
  __int64 v13; // r10
  _DWORD *v14; // rax
  _DWORD *v15; // rax
  unsigned int v16; // esi
  __int64 v17; // r10

  v6 = a2;
  if ( (*(_DWORD *)(*(_QWORD *)this + 24LL) & 0x100) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v8 = Gre::Base::Globals(this);
  v9 = *(_QWORD *)this;
  if ( *(_QWORD *)this == *((_QWORD *)v8 + 750) )
    return 0LL;
  if ( (*(_DWORD *)(v9 + 24) & 0x100000) != 0 )
    return 0LL;
  if ( !a4 )
    return 0LL;
  v10 = *(_DWORD *)(v9 + 28);
  if ( (unsigned int)v6 >= v10 )
    return 0LL;
  if ( (unsigned int)v6 + a3 > v10 )
    a3 = v10 - v6;
  if ( !a3 )
    return 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = *(_QWORD *)(v9 + 112) + 4 * v6;
  v14 = *(_DWORD **)(v9 + 72);
  if ( v14 )
  {
    *v14 = 0;
    v9 = *(_QWORD *)this;
    v11 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)this + 72LL) + v6 + 4);
  }
  v15 = *(_DWORD **)(v9 + 80);
  if ( v15 )
  {
    *v15 = 0;
    v12 = (_BYTE *)(v6 + *(_QWORD *)(*(_QWORD *)this + 80LL) + 4LL);
  }
  v16 = a3;
  v17 = v13 - (_QWORD)a4;
  do
  {
    --a3;
    *(const struct tagPALETTEENTRY *)((char *)a4 + v17) = *a4;
    if ( v11 )
      *v11++ = 0;
    if ( v12 )
      *v12++ = 0;
    ++a4;
  }
  while ( a3 );
  XEPALOBJ::vUpdateTime(this);
  return v16;
}
