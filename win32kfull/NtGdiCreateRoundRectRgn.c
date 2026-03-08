/*
 * XREFs of NtGdiCreateRoundRectRgn @ 0x1C02AB3C0
 * Callers:
 *     <none>
 * Callees:
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C0029D50 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??0EBOX@@QEAA@AEAVERECTL@@H@Z @ 0x1C02C7D4C (--0EBOX@@QEAA@AEAVERECTL@@H@Z.c)
 *     ?bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z @ 0x1C02C85D4 (-bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z.c)
 */

struct HOBJ__ *__fastcall NtGdiCreateRoundRectRgn(unsigned int a1, unsigned int a2, int a3, int a4, int a5, int a6)
{
  int v10; // r8d
  unsigned int v12; // esi
  unsigned int v13; // edi
  unsigned int v14; // ebx
  struct HOBJ__ *v15; // rbx
  ULONG v16; // ecx
  struct OBJECT *v17; // [rsp+20h] [rbp-E0h] BYREF
  int v18; // [rsp+28h] [rbp-D8h]
  int v19; // [rsp+2Ch] [rbp-D4h]
  _BYTE v20[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v21; // [rsp+38h] [rbp-C8h]
  _DWORD v22[20]; // [rsp+B0h] [rbp-50h] BYREF

  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v20);
  if ( !v21 )
  {
    EngSetLastError(8u);
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v20);
    return 0LL;
  }
  v17 = (struct OBJECT *)__PAIR64__(a2, a1);
  v18 = a3;
  v19 = a4;
  if ( (a1 & 0xF8000000) != 0 && (a1 & 0xF8000000) != -134217728
    || (v12 = a4 & 0xF8000000) != 0 && v12 != -134217728
    || (v13 = a3 & 0xF8000000) != 0 && v13 != -134217728
    || (v14 = a2 & 0xF8000000) != 0 && v14 != -134217728 )
  {
    v16 = 87;
  }
  else
  {
    EBOX::EBOX((EBOX *)v22, (struct ERECTL *)&v17, v10);
    if ( v22[0] )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v17);
      if ( v17 )
        goto LABEL_12;
    }
    else if ( (unsigned int)bRoundRect((struct EPATHOBJ *)v20, (struct EBOX *)v22, a5, a6) )
    {
      if ( EPATHOBJ::bFlatten((EPATHOBJ *)v20) )
      {
        RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v17, (struct EPATHOBJ *)v20, 1u, 0LL);
        if ( v17 )
        {
          RGNOBJ::vTighten((RGNOBJ *)&v17);
LABEL_12:
          v15 = RGNOBJ::hrgnAssociate(&v17);
          if ( !v15 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v17);
          goto LABEL_21;
        }
      }
    }
    v16 = 8;
  }
  EngSetLastError(v16);
  v15 = 0LL;
LABEL_21:
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v20);
  return v15;
}
