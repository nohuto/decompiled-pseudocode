/*
 * XREFs of ?bDetermineTriangleFillRoutine@@YAHPEAVSURFACE@@PEAVXEPALOBJ@@PEAP6AX0PEAU_TRIANGLEDATA@@@ZPEAP6AX0PEAU_GRADIENTRECTDATA@@@Z@Z @ 0x1C000670C
 * Callers:
 *     ?bRectangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_RECT@@KKPEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C00175F0 (-bRectangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_RECT@@KKPEAU_RECT.c)
 *     ?bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_RECTL@@4PEAU_POINTL@@@Z @ 0x1C028F504 (-bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_R.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bDetermineTriangleFillRoutine(
        struct SURFACE *a1,
        struct XEPALOBJ *a2,
        void (**a3)(struct SURFACE *, struct _TRIANGLEDATA *),
        void (**a4)(struct SURFACE *, struct _GRADIENTRECTDATA *))
{
  int v4; // ecx
  void (*v5)(struct SURFACE *, struct _GRADIENTRECTDATA *); // rax
  void (*v6)(struct SURFACE *, struct _TRIANGLEDATA *); // rcx
  int v8; // ecx
  _DWORD *v9; // rcx
  int v10; // eax
  int v11; // edx

  switch ( *((_DWORD *)a1 + 24) )
  {
    case 1:
      *a3 = (void (*)(struct SURFACE *, struct _TRIANGLEDATA *))vGradientFill1;
      v5 = (void (*)(struct SURFACE *, struct _GRADIENTRECTDATA *))vFillGRectDIB1;
      goto LABEL_11;
    case 2:
      *a3 = (void (*)(struct SURFACE *, struct _TRIANGLEDATA *))vGradientFill4;
      v5 = (void (*)(struct SURFACE *, struct _GRADIENTRECTDATA *))vFillGRectDIB4;
      goto LABEL_11;
    case 3:
      *a3 = (void (*)(struct SURFACE *, struct _TRIANGLEDATA *))vGradientFill8;
      v5 = (void (*)(struct SURFACE *, struct _GRADIENTRECTDATA *))vFillGRectDIB8;
      goto LABEL_11;
    case 4:
      v9 = *(_DWORD **)(*(_QWORD *)a2 + 112LL);
      v10 = v9[1];
      v11 = v9[2];
      if ( *v9 == 63488 )
      {
        if ( v10 == 2016 && v11 == 31 )
        {
          v5 = (void (*)(struct SURFACE *, struct _GRADIENTRECTDATA *))vFillGRectDIB16_565;
          v6 = (void (*)(struct SURFACE *, struct _TRIANGLEDATA *))vGradientFill16_565;
          break;
        }
      }
      else if ( *v9 == 31744 && v10 == 992 && v11 == 31 )
      {
        v5 = (void (*)(struct SURFACE *, struct _GRADIENTRECTDATA *))vFillGRectDIB16_555;
        v6 = (void (*)(struct SURFACE *, struct _TRIANGLEDATA *))vGradientFill16_555;
        break;
      }
      v5 = (void (*)(struct SURFACE *, struct _GRADIENTRECTDATA *))vFillGRectDIB16Bitfields;
      v6 = (void (*)(struct SURFACE *, struct _TRIANGLEDATA *))vGradientFill16Bitfields;
      break;
    case 5:
      v8 = *(_DWORD *)(*(_QWORD *)a2 + 24LL);
      if ( (v8 & 4) != 0 )
      {
        v5 = (void (*)(struct SURFACE *, struct _GRADIENTRECTDATA *))vFillGRectDIB24RGB;
        v6 = (void (*)(struct SURFACE *, struct _TRIANGLEDATA *))vGradientFill24RGB;
      }
      else if ( (v8 & 8) != 0 )
      {
        v5 = (void (*)(struct SURFACE *, struct _GRADIENTRECTDATA *))vFillGRectDIB24BGR;
        v6 = (void (*)(struct SURFACE *, struct _TRIANGLEDATA *))vGradientFill24BGR;
      }
      else
      {
        v5 = (void (*)(struct SURFACE *, struct _GRADIENTRECTDATA *))vFillGRectDIB24Bitfields;
        v6 = (void (*)(struct SURFACE *, struct _TRIANGLEDATA *))vGradientFill24Bitfields;
      }
      break;
    case 6:
      v4 = *(_DWORD *)(*(_QWORD *)a2 + 24LL);
      if ( (v4 & 4) != 0 )
      {
        v5 = (void (*)(struct SURFACE *, struct _GRADIENTRECTDATA *))vFillGRectDIB32RGB;
        v6 = (void (*)(struct SURFACE *, struct _TRIANGLEDATA *))vGradientFill32RGB;
      }
      else if ( (v4 & 8) != 0 )
      {
        v5 = (void (*)(struct SURFACE *, struct _GRADIENTRECTDATA *))vFillGRectDIB32BGRA;
        v6 = (void (*)(struct SURFACE *, struct _TRIANGLEDATA *))vGradientFill32BGRA;
      }
      else
      {
        v5 = (void (*)(struct SURFACE *, struct _GRADIENTRECTDATA *))vFillGRectDIB32Bitfields;
        v6 = (void (*)(struct SURFACE *, struct _TRIANGLEDATA *))vGradientFill32Bitfields;
      }
      break;
    default:
      v5 = 0LL;
      *a3 = 0LL;
      goto LABEL_11;
  }
  *a3 = v6;
LABEL_11:
  *a4 = v5;
  return 1LL;
}
