/*
 * XREFs of ?bDiagonalizeSubPath@RTP_PATHMEMOBJ@@AEAAHXZ @ 0x1C02E1BB8
 * Callers:
 *     ?bDiagonalizePath@RTP_PATHMEMOBJ@@QEAAHPEAVEPATHOBJ@@@Z @ 0x1C02E1B1C (-bDiagonalizePath@RTP_PATHMEMOBJ@@QEAAHPEAVEPATHOBJ@@@Z.c)
 * Callees:
 *     ?bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z @ 0x1C014D8B8 (-bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z.c)
 *     ?bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z @ 0x1C014DA72 (-bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z.c)
 *     ?bFetchNextPoint@RTP_PATHMEMOBJ@@AEAAHXZ @ 0x1C02E1E08 (-bFetchNextPoint@RTP_PATHMEMOBJ@@AEAAHXZ.c)
 *     ?bWritePoint@RTP_PATHMEMOBJ@@AEAAHXZ @ 0x1C02E1F1C (-bWritePoint@RTP_PATHMEMOBJ@@AEAAHXZ.c)
 */

__int64 __fastcall RTP_PATHMEMOBJ::bDiagonalizeSubPath(RTP_PATHMEMOBJ *this)
{
  int v2; // edi
  struct _POINTL *v3; // r8
  int v4; // edi
  int v5; // r14d
  __int64 result; // rax
  int v7; // r15d
  int v8; // r12d
  int v9; // ebp
  __int64 v10; // r13
  int v11; // esi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  __int64 v15; // [rsp+50h] [rbp+8h]

  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 47) = 0;
  if ( !(unsigned int)RTP_PATHMEMOBJ::bFetchNextPoint(this)
    || !(unsigned int)RTP_PATHMEMOBJ::bFetchNextPoint(this)
    || !(unsigned int)RTP_PATHMEMOBJ::bFetchNextPoint(this) )
  {
    return 0LL;
  }
  v2 = *((_DWORD *)this + 54);
  v3 = (struct _POINTL *)((char *)this + 204);
  if ( *((_DWORD *)this + 56) == v2 )
  {
    v4 = v2 - *((_DWORD *)this + 52);
    v5 = 1;
  }
  else
  {
    v5 = 0;
    v4 = *((_DWORD *)this + 53) - v3->x;
  }
  result = EPATHOBJ::bMoveTo(*((EPATHOBJ **)this + 19), 0LL, v3);
  v7 = 1;
  v8 = 2;
  if ( (_DWORD)result )
  {
    v9 = 0;
    do
    {
      v15 = v9;
      if ( (*((_DWORD *)this + v9 + 48) & 1) != 0 )
        return (unsigned int)EPATHOBJ::bPolyLineTo(
                               *((EPATHOBJ **)this + 19),
                               0LL,
                               (struct _POINTL *)((char *)this + 164),
                               2u)
            && EPATHOBJ::bCloseFigure(*((EPATHOBJ **)this + 19));
      v10 = v8;
      if ( v5 )
      {
        v11 = *((_DWORD *)this + 2 * v8 + 51) - *((_DWORD *)this + 2 * v7 + 51);
        if ( v4 <= 0 || v4 != 16 && v11 != -16 )
        {
          result = RTP_PATHMEMOBJ::bFetchNextPoint(this);
          if ( !(_DWORD)result )
            return result;
          v5 ^= 1u;
LABEL_29:
          v14 = v9;
          v4 = v11;
          v9 = v7;
          v7 = v8;
          v8 = v14;
          goto LABEL_30;
        }
        if ( (*((_DWORD *)this + v7 + 48) & 1) != 0 )
          return (unsigned int)EPATHOBJ::bPolyLineTo(
                                 *((EPATHOBJ **)this + 19),
                                 0LL,
                                 (struct _POINTL *)((char *)this + 164),
                                 2u)
              && EPATHOBJ::bCloseFigure(*((EPATHOBJ **)this + 19));
        if ( !(unsigned int)RTP_PATHMEMOBJ::bFetchNextPoint(this)
          || !(unsigned int)RTP_PATHMEMOBJ::bFetchNextPoint(this) )
        {
          return 0LL;
        }
        v12 = v9;
        v9 = v8;
        v8 = v7;
        v7 = v12;
        v4 = *((_DWORD *)this + 2 * v15 + 52) - *((_DWORD *)this + 2 * v10 + 52);
      }
      else
      {
        v11 = *((_DWORD *)this + 2 * v8 + 52) - *((_DWORD *)this + 2 * v7 + 52);
        if ( v11 >= 0 || v4 != 16 && v11 != -16 )
        {
          result = RTP_PATHMEMOBJ::bFetchNextPoint(this);
          if ( !(_DWORD)result )
            return result;
          v5 = 1;
          goto LABEL_29;
        }
        if ( (*((_DWORD *)this + v7 + 48) & 1) != 0 )
          return (unsigned int)EPATHOBJ::bPolyLineTo(
                                 *((EPATHOBJ **)this + 19),
                                 0LL,
                                 (struct _POINTL *)((char *)this + 164),
                                 2u)
              && EPATHOBJ::bCloseFigure(*((EPATHOBJ **)this + 19));
        if ( !(unsigned int)RTP_PATHMEMOBJ::bFetchNextPoint(this)
          || !(unsigned int)RTP_PATHMEMOBJ::bFetchNextPoint(this) )
        {
          return 0LL;
        }
        v13 = v9;
        v9 = v8;
        v8 = v7;
        v7 = v13;
        v4 = *((_DWORD *)this + 2 * v15 + 51) - *((_DWORD *)this + 2 * v10 + 51);
      }
LABEL_30:
      result = RTP_PATHMEMOBJ::bWritePoint(this);
    }
    while ( (_DWORD)result );
  }
  return result;
}
