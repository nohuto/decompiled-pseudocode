/*
 * XREFs of ?jMapCharset@@YAEEAEAVPFEOBJ@@@Z @ 0x1C0063434
 * Callers:
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C0060050 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?bFilteredOut@PFEOBJ@@QEAAHPEAU_EFFILTER_INFO@@@Z @ 0x1C00BB7E0 (-bFilteredOut@PFEOBJ@@QEAAHPEAU_EFFILTER_INFO@@@Z.c)
 * Callees:
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C00633C4 (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 */

unsigned __int8 __fastcall jMapCharset(unsigned __int8 a1, struct PFEOBJ *a2)
{
  __int64 v2; // r9
  __int64 v4; // r8
  __int64 v5; // r10
  unsigned __int8 v6; // dl
  unsigned __int8 result; // al
  _BYTE *v8; // rax
  char v9; // r10
  _BYTE *v10; // r8
  PFEOBJ *v11; // r11
  struct _LIST_ENTRY *LinkedFontList; // rax
  struct _LIST_ENTRY *v13; // r8
  struct _LIST_ENTRY *Flink; // rcx
  __int64 Blink_low; // rax
  _BYTE *v16; // rax
  _BYTE *v17; // r9

  v2 = *(_QWORD *)a2;
  v4 = *(_QWORD *)(*(_QWORD *)a2 + 32LL);
  v5 = *(int *)(v4 + 40);
  if ( !(_DWORD)v5 )
    return *(_BYTE *)(v4 + 44);
  v6 = a1;
  if ( a1 == 1 )
    v6 = MAPPER::DefaultCharset;
  result = -2;
  if ( v6 != 0xFE )
  {
    v8 = (_BYTE *)(v4 + v5);
    v9 = *(_BYTE *)(v4 + v5);
    v10 = v8 + 16;
    while ( v8 < v10 )
    {
      if ( *v8 == v6 )
        return v6;
      if ( *v8 == 1 )
        break;
      ++v8;
    }
    if ( *(_QWORD *)(v2 + 120) )
    {
      PFEOBJ::pGetLinkedFontList(a2);
      while ( 1 )
      {
        LinkedFontList = PFEOBJ::pGetLinkedFontList(v11);
        if ( v13 == LinkedFontList )
          break;
        Flink = v13[2].Flink[2].Flink;
        Blink_low = SLODWORD(Flink[2].Blink);
        if ( (_DWORD)Blink_low )
        {
          v16 = (char *)Flink + Blink_low;
          v17 = v16 + 16;
          while ( v16 < v17 )
          {
            if ( *v16 == v6 )
              return v6;
            if ( *v16 == 1 )
              break;
            ++v16;
          }
        }
        else if ( BYTE4(Flink[2].Blink) == v6 )
        {
          return v6;
        }
      }
    }
    return v9;
  }
  return result;
}
