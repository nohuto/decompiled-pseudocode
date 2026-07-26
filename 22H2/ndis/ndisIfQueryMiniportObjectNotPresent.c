/*
 * XREFs of ndisIfQueryMiniportObjectNotPresent @ 0x1C00FBD50
 * Callers:
 *     ndisIfQueryObject @ 0x1C00FBC40 (ndisIfQueryObject.c)
 * Callees:
 *     WPP_RECORDER_SF_DqL @ 0x1C000F670 (WPP_RECORDER_SF_DqL.c)
 *     WPP_RECORDER_SF_LqL @ 0x1C000F720 (WPP_RECORDER_SF_LqL.c)
 *     memset @ 0x1C0040B00 (memset.c)
 */

__int64 __fastcall ndisIfQueryMiniportObjectNotPresent(__int64 a1, unsigned __int64 a2, _DWORD *a3, _QWORD *a4)
{
  unsigned int v6; // ebx
  int v8; // eax
  int v10; // [rsp+20h] [rbp-28h]

  v6 = a2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DqL(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, (__int64)a3, 0x11u, v10);
  if ( v6 == 66184 )
  {
    if ( *a3 < 4u )
      return 3221291030LL;
    *a3 = 4;
    v8 = *(_DWORD *)(a1 + 1192);
    goto LABEL_9;
  }
  if ( v6 != 66183 )
  {
    if ( v6 > 0x10280 )
    {
      if ( v6 <= 0x20106 )
      {
        if ( v6 != 131334 )
        {
          a2 = 0x1C0000000uLL;
          switch ( v6 )
          {
            case 0x10281u:
              if ( *a3 < 8u )
                return 3221291030LL;
              *a3 = 8;
              *a4 = *(_QWORD *)(a1 + 1352);
              goto LABEL_10;
            case 0x10282u:
              if ( *a3 < 8u )
                return 3221291030LL;
              *a3 = 8;
              *a4 = *(_QWORD *)(a1 + 1360);
              goto LABEL_10;
            case 0x10283u:
              if ( *a3 < 4u )
                return 3221291030LL;
              *a3 = 4;
              v8 = *(_DWORD *)(a1 + 1112);
              goto LABEL_9;
            case 0x10284u:
              if ( *a3 < 8u )
                return 3221291030LL;
              *a3 = 8;
              *a4 = *(_QWORD *)(a1 + 1200);
              goto LABEL_10;
            case 0x10285u:
              if ( *a3 < 8u )
                return 3221291030LL;
              *a3 = 8;
              *a4 = *(_QWORD *)(a1 + 1208);
              goto LABEL_10;
            case 0x1028Au:
              if ( *a3 < 4u )
                return 3221291030LL;
              *a3 = 4;
              v8 = *(_DWORD *)(a1 + 1220);
              goto LABEL_9;
            case 0x1028Cu:
              if ( *a3 < 4u )
                return 3221291030LL;
              *a3 = 4;
              v8 = *(_DWORD *)(a1 + 1224);
              goto LABEL_9;
            default:
              goto LABEL_40;
          }
        }
        if ( *a3 >= 0x90u )
        {
          *a3 = 144;
          memset(a4, 0, 0x90uLL);
          goto LABEL_10;
        }
        return 3221291030LL;
      }
      goto LABEL_40;
    }
    if ( v6 == 66176 )
    {
      if ( *a3 )
      {
        *a3 = 1;
        *(_BYTE *)a4 = *(_BYTE *)(a1 + 1216);
        goto LABEL_10;
      }
      return 3221291030LL;
    }
    if ( v6 != 65798 )
    {
LABEL_40:
      if ( *a3 >= 8u )
      {
        *a3 = 8;
        *a4 = 0LL;
        goto LABEL_10;
      }
      return 3221291030LL;
    }
    if ( *a3 < 4u )
      return 3221291030LL;
    *a3 = 4;
    v8 = *(_DWORD *)(a1 + 1120);
LABEL_9:
    *(_DWORD *)a4 = v8;
    goto LABEL_10;
  }
  if ( *a3 < 0xD8u )
    return 3221291030LL;
  *a3 = 216;
  *(_DWORD *)a4 = *(_DWORD *)(a1 + 1112);
  *((_DWORD *)a4 + 1) = *(_DWORD *)(a1 + 1116);
  *((_DWORD *)a4 + 2) = *(_DWORD *)(a1 + 1220);
  *((_DWORD *)a4 + 3) = *(_DWORD *)(a1 + 1224);
  a4[3] = *(_QWORD *)(a1 + 1200);
  a4[4] = *(_QWORD *)(a1 + 1208);
  memset(a4 + 8, 0, 0x90uLL);
  *((_DWORD *)a4 + 4) = *(_DWORD *)(a1 + 1120);
  *((_BYTE *)a4 + 20) = *(_BYTE *)(a1 + 1216);
  *((_BYTE *)a4 + 21) = *(_BYTE *)(a1 + 1217);
  a4[5] = *(_QWORD *)(a1 + 1352);
  a4[6] = *(_QWORD *)(a1 + 1360);
  a4[7] = 0LL;
  *((_DWORD *)a4 + 52) = *(_DWORD *)(a1 + 576);
  *((_DWORD *)a4 + 53) = *(_DWORD *)(a1 + 1416);
LABEL_10:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      (int)a3,
      0x12u,
      (struct _GUID *)&WPP_c920fc8b5d2332d789f3c4881e4e0e63_Traceguids,
      v6,
      (char)a4,
      *a3);
  return 0LL;
}
