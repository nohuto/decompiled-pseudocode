/*
 * XREFs of ?bPaintPath@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@KHK@Z @ 0x1C0147A4C
 * Callers:
 *     ?EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C01476A0 (-EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 * Callees:
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00CF858 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x1C0147B60 (-bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z.c)
 */

__int64 __fastcall bPaintPath(
        struct SURFACE *a1,
        struct _PATHOBJ *a2,
        struct _RECTL *a3,
        int a4,
        int a5,
        unsigned int a6)
{
  __int64 v10; // rcx
  void (__fastcall *v11)(struct _ROW *, unsigned int, int, unsigned __int8 *, unsigned int, int, unsigned int); // rax
  _QWORD v13[2]; // [rsp+30h] [rbp-30h] BYREF
  int v14; // [rsp+40h] [rbp-20h]
  int v15; // [rsp+44h] [rbp-1Ch]
  int v16; // [rsp+48h] [rbp-18h]
  int v17; // [rsp+4Ch] [rbp-14h]
  __int64 v18; // [rsp+50h] [rbp-10h]

  if ( (unsigned int)(*((_DWORD *)a1 + 24) - 1) <= 5 || !bUMPDSecurityGateEx() )
  {
    v10 = *((unsigned int *)a1 + 24);
    v17 = 0;
    v15 = aulShiftFormat[v10];
    switch ( (_DWORD)v10 )
    {
      case 1:
        if ( a4 )
          a4 = -1;
        goto LABEL_6;
      case 2:
        a4 |= 16 * a4;
        break;
      case 3:
        break;
      case 4:
LABEL_20:
        a4 |= a4 << 16;
        goto LABEL_6;
      default:
LABEL_6:
        v18 = *((_QWORD *)a1 + 10);
        v14 = *((_DWORD *)a1 + 22);
        v16 = a4;
        if ( a5 )
        {
          if ( (_DWORD)v10 == 5 )
          {
            v13[0] = vSolidXorRect24;
            v11 = vSolidXorRow24;
          }
          else
          {
            v13[0] = vSolidXorRect1;
            v11 = vSolidXorRow1;
          }
        }
        else if ( (_DWORD)v10 == 5 )
        {
          v13[0] = vSolidFillRect24;
          v11 = vSolidFillRow24;
        }
        else if ( *((_QWORD *)a1 + 79) )
        {
          v18 = *((_QWORD *)a1 + 79);
          v13[0] = vSolidFillRectWithCallback;
          v11 = vSolidFillRowWithCallback;
        }
        else
        {
          v13[0] = vSolidFillRect1;
          v11 = vSolidFillRow1;
        }
        v13[1] = v11;
        return bEngFastFillEnum(
                 (struct EPATHOBJ *)a2,
                 a3,
                 a6,
                 (void (*)(struct _RECTL *, unsigned int, void *))vPaintPathEnum,
                 (void (*)(int, struct _ROW *, unsigned int, void *))vPaintPathEnumRow,
                 v13);
    }
    a4 |= a4 << 8;
    goto LABEL_20;
  }
  if ( gfUMPDDebug )
    DbgPrint(
      "clientcore\\windows\\core\\ntgdi\\gre\\windows\\fastfill.cxx:%d:bPaintPath:Invalid surface format.\n",
      116);
  return 0LL;
}
