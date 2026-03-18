/*
 * XREFs of NtGdiCreateRoundRectRgn @ 0x1C00FBB60
 * Callers:
 *     <none>
 * Callees:
 *     ?bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z @ 0x1C0015C48 (-bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C0022804 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ??0EBOX@@QEAA@AEAVERECTL@@H@Z @ 0x1C00FBD00 (--0EBOX@@QEAA@AEAVERECTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

struct HOBJ__ *__fastcall NtGdiCreateRoundRectRgn(unsigned int a1, unsigned int a2, int a3, int a4)
{
  int v8; // r8d
  struct HOBJ__ *v9; // rbx
  struct HOBJ__ *v10; // rdi
  ULONG v12; // ecx
  struct OBJECT *v13; // [rsp+28h] [rbp-E0h] BYREF
  int v14; // [rsp+30h] [rbp-D8h]
  int v15; // [rsp+34h] [rbp-D4h]
  _QWORD v16[16]; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD v17[20]; // [rsp+B8h] [rbp-50h] BYREF

  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v16);
  v9 = 0LL;
  if ( !v16[1] )
  {
    v12 = 8;
LABEL_22:
    EngSetLastError(v12);
    goto LABEL_16;
  }
  v13 = (struct OBJECT *)__PAIR64__(a2, a1);
  v14 = a3;
  v15 = a4;
  if ( (((a1 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((a4 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((a3 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((a2 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
  {
    v12 = 87;
    goto LABEL_22;
  }
  EBOX::EBOX((EBOX *)v17, (struct ERECTL *)&v13, v8);
  if ( v17[0] )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v13);
    if ( v13 )
    {
LABEL_11:
      v10 = RGNOBJ::hrgnAssociate(&v13);
      if ( !v10 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v13);
      goto LABEL_13;
    }
LABEL_19:
    EngSetLastError(8u);
    v10 = 0LL;
LABEL_13:
    if ( v14 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v13);
    goto LABEL_15;
  }
  if ( (unsigned int)bRoundRect((struct EPATHOBJ *)v16, (struct EBOX *)v17) && EPATHOBJ::bFlatten((EPATHOBJ *)v16) )
  {
    v14 = 0;
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v13, (struct EPATHOBJ *)v16, 1u, 0LL);
    if ( v13 )
    {
      RGNOBJ::vTighten((RGNOBJ *)&v13);
      goto LABEL_11;
    }
    goto LABEL_19;
  }
  EngSetLastError(8u);
  v10 = 0LL;
LABEL_15:
  v9 = v10;
LABEL_16:
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v16);
  return v9;
}
