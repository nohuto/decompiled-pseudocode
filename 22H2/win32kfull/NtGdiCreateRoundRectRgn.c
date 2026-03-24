/*
 * XREFs of NtGdiCreateRoundRectRgn @ 0x1C00A3080
 * Callers:
 *     <none>
 * Callees:
 *     ?bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z @ 0x1C00A04E4 (-bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z.c)
 *     ??0EBOX@@QEAA@AEAVERECTL@@H@Z @ 0x1C00A3228 (--0EBOX@@QEAA@AEAVERECTL@@H@Z.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C00BCBC4 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

HRGN __fastcall NtGdiCreateRoundRectRgn(unsigned int a1, unsigned int a2, int a3, int a4, unsigned int a5)
{
  int v9; // r8d
  HRGN v10; // rbx
  HRGN v11; // rdi
  ULONG v13; // ecx
  unsigned __int64 v14; // [rsp+28h] [rbp-E0h] BYREF
  int v15; // [rsp+30h] [rbp-D8h]
  int v16; // [rsp+34h] [rbp-D4h]
  _QWORD v17[16]; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD v18[20]; // [rsp+B8h] [rbp-50h] BYREF

  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v17);
  v10 = 0LL;
  if ( !v17[1] )
  {
    v13 = 8;
LABEL_22:
    EngSetLastError(v13);
    goto LABEL_16;
  }
  v14 = __PAIR64__(a2, a1);
  v15 = a3;
  v16 = a4;
  if ( (((a1 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((a4 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((a3 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((a2 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
  {
    v13 = 87;
    goto LABEL_22;
  }
  EBOX::EBOX((EBOX *)v18, (struct ERECTL *)&v14, v9);
  if ( v18[0] )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v14);
    if ( v14 )
    {
LABEL_11:
      v11 = RGNOBJ::hrgnAssociate((RGNOBJ *)&v14);
      if ( !v11 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v14);
      goto LABEL_13;
    }
LABEL_19:
    EngSetLastError(8u);
    v11 = 0LL;
LABEL_13:
    if ( v15 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v14);
    goto LABEL_15;
  }
  if ( (unsigned int)bRoundRect((struct EPATHOBJ *)v17, (struct EBOX *)v18, a5) && EPATHOBJ::bFlatten((EPATHOBJ *)v17) )
  {
    v14 = 0LL;
    v15 = 0;
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v14, (struct EPATHOBJ *)v17, 1u, 0LL);
    if ( v14 )
    {
      RGNOBJ::vTighten((RGNOBJ *)&v14);
      goto LABEL_11;
    }
    goto LABEL_19;
  }
  EngSetLastError(8u);
  v11 = 0LL;
LABEL_15:
  v10 = v11;
LABEL_16:
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v17);
  return v10;
}
