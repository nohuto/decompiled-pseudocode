/*
 * XREFs of GreGetHFONT @ 0x1C029F494
 * Callers:
 *     xxxDrawState @ 0x1C0250784 (xxxDrawState.c)
 *     IsSysFontAndDefaultMode @ 0x1C025E988 (IsSysFontAndDefaultMode.c)
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2890 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2938 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreGetHFONT(HDC a1)
{
  __int64 v1; // rbx
  _QWORD v3[7]; // [rsp+20h] [rbp-38h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  v1 = 0LL;
  if ( v3[0] )
    v1 = *(_QWORD *)(*(_QWORD *)(v3[0] + 976LL) + 296LL);
  DCOBJ::~DCOBJ((DCOBJ *)v3);
  return v1;
}
