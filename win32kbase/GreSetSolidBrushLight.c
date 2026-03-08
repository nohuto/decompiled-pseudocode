/*
 * XREFs of GreSetSolidBrushLight @ 0x1C017E620
 * Callers:
 *     GreDCSelectPen @ 0x1C0005440 (GreDCSelectPen.c)
 *     GreDCSelectBrush @ 0x1C00457E0 (GreDCSelectBrush.c)
 * Callees:
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C0028810 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C0048AE0 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004A440 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 */

__int64 __fastcall GreSetSolidBrushLight(struct OBJECT *a1, int a2, int a3)
{
  unsigned int v3; // ebp
  unsigned int v7; // ecx
  int v8; // esi
  volatile signed __int32 *v9; // rdi
  int v10; // eax
  int v11; // eax
  _BYTE v13[8]; // [rsp+30h] [rbp-38h] BYREF
  int v14; // [rsp+38h] [rbp-30h]

  v3 = 0;
  if ( a1 )
  {
    v7 = *((_DWORD *)a1 + 10);
    if ( (v7 & 0x10) != 0 && (v7 & 0x200) == 0 && (a3 != 0) == ((v7 >> 10) & 1) )
    {
      v8 = 0;
      v9 = 0LL;
      HANDLELOCK::HANDLELOCK((HANDLELOCK *)v13, a1, 0, 0, 0);
      if ( v14 )
      {
        if ( *((_DWORD *)a1 + 2) == 1 )
        {
          *((_DWORD *)a1 + 19) = a2;
          v3 = 1;
          if ( *((_DWORD *)a1 + 25) != -1 )
          {
            v10 = *((_DWORD *)a1 + 10);
            if ( v10 >= 0 )
            {
              v9 = (volatile signed __int32 *)*((_QWORD *)a1 + 15);
              v8 = ((unsigned int)v10 >> 30) & 1;
            }
          }
          *((_DWORD *)a1 + 24) = 0;
          *((_DWORD *)a1 + 25) = -1;
          if ( a3 )
            v11 = *((_DWORD *)a1 + 10) & 0xC00 | 0x10;
          else
            v11 = 20;
          *((_DWORD *)a1 + 20) = 7;
          *((_DWORD *)a1 + 10) = v11;
          *((_DWORD *)a1 + 11) = _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(SGDGetSessionState(0xFFFFFFFFLL)
                                                                                             + 24)
                                                                                 + 744LL));
        }
        HANDLELOCK::vUnlock((HANDLELOCK *)v13);
        if ( v14 )
          HANDLELOCK::vUnlock((HANDLELOCK *)v13);
        if ( v9 )
        {
          if ( _InterlockedExchangeAdd(v9, 0xFFFFFFFF) == 1 )
            RBRUSH::vFreeOrCacheRBrush(v9, v8);
          *((_QWORD *)a1 + 15) = 0LL;
        }
      }
    }
  }
  return v3;
}
