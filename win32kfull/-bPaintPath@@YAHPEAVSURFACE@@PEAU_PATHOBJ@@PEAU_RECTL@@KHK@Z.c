__int64 __fastcall bPaintPath(
        struct SURFACE *a1,
        struct _PATHOBJ *a2,
        struct _RECTL *a3,
        int a4,
        int a5,
        unsigned int a6)
{
  __int64 v11; // rcx
  void (__fastcall *v12)(struct _ROW *, unsigned int, int, unsigned __int8 *, unsigned int, int, unsigned int); // rax
  _QWORD v13[2]; // [rsp+30h] [rbp-30h] BYREF
  int v14; // [rsp+40h] [rbp-20h]
  int v15; // [rsp+44h] [rbp-1Ch]
  int v16; // [rsp+48h] [rbp-18h]
  int v17; // [rsp+4Ch] [rbp-14h]
  __int64 v18; // [rsp+50h] [rbp-10h]

  if ( (unsigned int)(*((_DWORD *)a1 + 24) - 1) > 5 && (unsigned int)bUMPDSecurityGateEx() )
    return 0LL;
  v11 = *((unsigned int *)a1 + 24);
  v17 = 0;
  v15 = aulShiftFormat[v11];
  switch ( (_DWORD)v11 )
  {
    case 1:
      if ( a4 )
        a4 = -1;
      goto LABEL_14;
    case 2:
      a4 |= 16 * a4;
      break;
    case 3:
      break;
    case 4:
      goto LABEL_11;
    default:
      goto LABEL_14;
  }
  a4 |= a4 << 8;
LABEL_11:
  a4 |= a4 << 16;
LABEL_14:
  v18 = *((_QWORD *)a1 + 10);
  v14 = *((_DWORD *)a1 + 22);
  v16 = a4;
  if ( a5 )
  {
    if ( (_DWORD)v11 == 5 )
    {
      v13[0] = vSolidXorRect24;
      v12 = vSolidXorRow24;
    }
    else
    {
      v13[0] = vSolidXorRect1;
      v12 = vSolidXorRow1;
    }
  }
  else if ( (_DWORD)v11 == 5 )
  {
    v13[0] = vSolidFillRect24;
    v12 = vSolidFillRow24;
  }
  else if ( *((_QWORD *)a1 + 79) )
  {
    v18 = *((_QWORD *)a1 + 79);
    v13[0] = vSolidFillRectWithCallback;
    v12 = vSolidFillRowWithCallback;
  }
  else
  {
    v13[0] = vSolidFillRect1;
    v12 = vSolidFillRow1;
  }
  v13[1] = v12;
  return bEngFastFillEnum(
           (struct EPATHOBJ *)a2,
           a3,
           a6,
           (void (*)(struct _RECTL *, unsigned int, void *))vPaintPathEnum,
           (void (*)(int, struct _ROW *, unsigned int, void *))vPaintPathEnumRow,
           v13);
}
