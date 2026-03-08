/*
 * XREFs of ?STROBJ_bGetAdvanceWidthsLinked@@YAHPEAVESTROBJ@@KKPEAU_POINTQF@@@Z @ 0x1C02DB8C0
 * Callers:
 *     STROBJ_bGetAdvanceWidths @ 0x1C02DDAD0 (STROBJ_bGetAdvanceWidths.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall STROBJ_bGetAdvanceWidthsLinked(struct ESTROBJ *a1, unsigned int a2, int a3, struct _POINTQF *a4)
{
  unsigned int v5; // edi
  unsigned int v6; // ebx
  _DWORD *v7; // r8
  __int64 v8; // r10
  struct _POINTQF *v9; // rcx

  v5 = a2 + a3;
  v6 = 0;
  v7 = (_DWORD *)*((_QWORD *)a1 + 26);
  *((_QWORD *)a1 + 27) = v7;
  v8 = *((_QWORD *)a1 + 8);
  *((_QWORD *)a1 + 28) = v8;
  while ( v6 < v5 )
  {
    if ( *v7 == *((_DWORD *)a1 + 59) )
    {
      if ( v6 >= a2 )
      {
        v9 = *(struct _POINTQF **)(v8 + 8);
        if ( *(_DWORD *)(**((_QWORD **)a1 + 7) + 640LL) )
        {
          a4->x.HighPart = v9->y.HighPart;
          a4->x.LowPart = 0;
          a4->y.QuadPart = 0LL;
        }
        else
        {
          *a4 = v9[3];
        }
        ++a4;
        v8 = *((_QWORD *)a1 + 28);
        v7 = (_DWORD *)*((_QWORD *)a1 + 27);
      }
      ++v6;
    }
    v8 += 24LL;
    *((_QWORD *)a1 + 28) = v8;
    *((_QWORD *)a1 + 27) = ++v7;
  }
  return 1LL;
}
