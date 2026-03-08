/*
 * XREFs of NtGdiCreateEllipticRgn @ 0x1C02AB1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C0029D50 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??0EBOX@@QEAA@AEAVERECTL@@H@Z @ 0x1C02C7D4C (--0EBOX@@QEAA@AEAVERECTL@@H@Z.c)
 *     ?bEllipse@@YAHAEAVEPATHOBJ@@AEAVEBOX@@@Z @ 0x1C02C7F14 (-bEllipse@@YAHAEAVEPATHOBJ@@AEAVEBOX@@@Z.c)
 */

struct HOBJ__ *__fastcall NtGdiCreateEllipticRgn(unsigned int a1, unsigned int a2, int a3, int a4)
{
  int v8; // r8d
  unsigned int v10; // esi
  unsigned int v11; // edi
  unsigned int v12; // ebx
  struct HOBJ__ *v13; // rbx
  ULONG v14; // ecx
  struct OBJECT *v15; // [rsp+20h] [rbp-E0h] BYREF
  int v16; // [rsp+28h] [rbp-D8h]
  int v17; // [rsp+2Ch] [rbp-D4h]
  _BYTE v18[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+38h] [rbp-C8h]
  _DWORD v20[20]; // [rsp+B0h] [rbp-50h] BYREF

  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v18);
  if ( !v19 )
  {
    EngSetLastError(8u);
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v18);
    return 0LL;
  }
  v15 = (struct OBJECT *)__PAIR64__(a2, a1);
  v16 = a3;
  v17 = a4;
  if ( (a1 & 0xF8000000) != 0 && (a1 & 0xF8000000) != -134217728
    || (v10 = a4 & 0xF8000000) != 0 && v10 != -134217728
    || (v11 = a3 & 0xF8000000) != 0 && v11 != -134217728
    || (v12 = a2 & 0xF8000000) != 0 && v12 != -134217728 )
  {
    v14 = 87;
  }
  else
  {
    EBOX::EBOX((EBOX *)v20, (struct ERECTL *)&v15, v8);
    if ( v20[0] )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v15);
      if ( v15 )
        goto LABEL_12;
    }
    else if ( (unsigned int)bEllipse((struct EPATHOBJ *)v18, (struct EBOX *)v20) )
    {
      if ( EPATHOBJ::bFlatten((EPATHOBJ *)v18) )
      {
        RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v15, (struct EPATHOBJ *)v18, 1u, 0LL);
        if ( v15 )
        {
          RGNOBJ::vTighten((RGNOBJ *)&v15);
LABEL_12:
          v13 = RGNOBJ::hrgnAssociate(&v15);
          if ( !v13 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v15);
          goto LABEL_21;
        }
      }
    }
    v14 = 8;
  }
  EngSetLastError(v14);
  v13 = 0LL;
LABEL_21:
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v18);
  return v13;
}
