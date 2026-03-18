/*
 * XREFs of ?QueryFonts@PUBLIC_PFTOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@KPEAT_LARGE_INTEGER@@@Z @ 0x1C026AC98
 * Callers:
 *     GreQueryFonts @ 0x1C0277DDC (GreQueryFonts.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FA95C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C013E750 (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::QueryFonts(
        PUBLIC_PFTOBJ *this,
        struct _UNIVERSAL_FONT_ID *a2,
        unsigned int a3,
        union _LARGE_INTEGER *a4)
{
  int v4; // ebx
  unsigned int v5; // edi
  Gre::Base *v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rcx
  struct PFF **i; // rsi
  struct PFF *j; // rcx
  __int64 v14; // rcx
  struct PFF *v15; // rax
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v5 = 0;
  *a4 = *(union _LARGE_INTEGER *)((char *)this + 8);
  v10 = *(_QWORD *)(SGDGetSessionState(this) + 32);
  if ( a2 && a3 )
  {
    v17 = *((_QWORD *)Gre::Base::Globals(v9) + 6);
    GreAcquireSemaphore(v17);
    if ( *(_DWORD *)(v10 + 23648) == 2 )
    {
      v5 = 1;
      *(_QWORD *)a2 = *(_QWORD *)(v10 + 23648);
    }
    v11 = *(_QWORD *)this;
    for ( i = (struct PFF **)(*(_QWORD *)this + 40LL);
          (unsigned __int64)i < v11 + 8 * (unsigned __int64)*(unsigned int *)(v11 + 24) + 40 && v5 < a3;
          ++i )
    {
      for ( j = *i; ; j = (struct PFF *)*((_QWORD *)v15 + 1) )
      {
        v15 = SkipInvalidPff(j);
        if ( !v15 || v5 >= a3 )
          break;
        if ( (*((_DWORD *)v15 + 13) & 0x20) == 0 )
        {
          v14 = v5++;
          *((_DWORD *)a2 + 2 * v14 + 1) = 1;
          *((_DWORD *)a2 + 2 * v14) = *((_DWORD *)v15 + 34);
        }
      }
      v11 = *(_QWORD *)this;
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v17);
    return v5;
  }
  else
  {
    LOBYTE(v4) = *(_DWORD *)(v10 + 23648) == 2;
    return (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 28LL) + v4);
  }
}
