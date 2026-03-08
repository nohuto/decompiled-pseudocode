/*
 * XREFs of ?bPartialArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@JAEAVEFLOAT@@3J4J@Z @ 0x1C02C80A4
 * Callers:
 *     GreAngleArc @ 0x1C02ADE64 (GreAngleArc.c)
 *     NtGdiArcInternal @ 0x1C02C8EE0 (NtGdiArcInternal.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?bPolyBezierTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z @ 0x1C014DF96 (-bPolyBezierTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z.c)
 *     ?bPartialQuadrantArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@AEAVEFLOAT@@34@Z @ 0x1C02C8340 (-bPartialQuadrantArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@AEAVEFLOAT@@34@Z.c)
 */

__int64 __fastcall bPartialArc(
        unsigned int a1,
        EPATHOBJ *a2,
        struct _POINTL *a3,
        __int64 a4,
        char a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        int a10)
{
  int v12; // esi
  int v13; // edi
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // r12
  __int64 v17; // r13
  struct _POINTL v18; // rax
  LONG v19; // eax
  struct _POINTL v20; // rax
  struct _POINTL v21; // rax
  LONG y; // eax
  struct _POINTL v23; // rax
  int v24; // eax
  struct _POINTL v27; // [rsp+68h] [rbp-21h] BYREF
  int v28; // [rsp+70h] [rbp-19h]
  int v29; // [rsp+74h] [rbp-15h]
  struct _POINTL v30; // [rsp+78h] [rbp-11h]

  if ( a10 )
  {
    v12 = (a5 + 1) & 3;
    v13 = bPartialQuadrantArc(a1, a2, a3);
    if ( v12 == a8 )
      return (unsigned int)(bPartialQuadrantArc(0LL, a2, a3) & v13);
    v14 = (1922922357LL * a3[6].x) >> 32;
    v15 = (1922922357LL * a3[6].y) >> 32;
    v16 = (1922922357LL * a3[7].x) >> 32;
    v17 = (1922922357LL * a3[7].y) >> 32;
    while ( 1 )
    {
      if ( !v12 )
      {
        v27 = a3[1];
        v23 = v27;
        v27.x -= v16;
        v27.y -= v17;
        v28 = v23.x - v14;
        v29 = v23.y - v15;
        v30 = v23;
        v30.x = v23.x - a3[6].x;
        y = a3[6].y;
        goto LABEL_14;
      }
      if ( v12 == 1 )
      {
        v27 = a3[2];
        v21 = v27;
        v27.x += v14;
        v27.y += v15;
        v28 = v21.x - v16;
        v29 = v21.y - v17;
        v30 = v21;
        v30.x = v21.x - a3[7].x;
        y = a3[7].y;
LABEL_14:
        v30.y -= y;
        goto LABEL_15;
      }
      if ( v12 == 2 )
        break;
      if ( v12 == 3 )
      {
        v27 = a3[4];
        v18 = v27;
        v27.x -= v14;
        v27.y -= v15;
        v28 = v16 + v18.x;
        v29 = v17 + v18.y;
        v30 = v18;
        v30.x = a3[7].x + v18.x;
        v19 = a3[7].y;
LABEL_11:
        v30.y += v19;
      }
LABEL_15:
      v13 &= EPATHOBJ::bPolyBezierTo(a2, 0LL, &v27, 3u);
      v24 = ((_BYTE)v12 + 1) & 3;
      v12 = v24;
      if ( v24 == a8 )
        return (unsigned int)(bPartialQuadrantArc(0LL, a2, a3) & v13);
    }
    v27 = a3[3];
    v20 = v27;
    v27.x += v16;
    v27.y += v17;
    v28 = v14 + v20.x;
    v29 = v15 + v20.y;
    v30 = v20;
    v30.x = a3[6].x + v20.x;
    v19 = a3[6].y;
    goto LABEL_11;
  }
  return (unsigned int)bPartialQuadrantArc(a1, a2, a3);
}
