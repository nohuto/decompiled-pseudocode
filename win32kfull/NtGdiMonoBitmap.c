/*
 * XREFs of NtGdiMonoBitmap @ 0x1C02D31F0
 * Callers:
 *     <none>
 * Callees:
 *     ?bIsMonochrome@XEPALOBJ@@QEBAHXZ @ 0x1C00E4E24 (-bIsMonochrome@XEPALOBJ@@QEBAHXZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C0124F2C (--1EPALOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiMonoBitmap(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int IsMonochrome; // ebx
  __int64 v5; // rdx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(a2) = 5;
  v2 = HmgShareLockCheck(a1, a2);
  v6 = v2;
  if ( v2 )
  {
    v6 = *(_QWORD *)(v2 + 128);
    IsMonochrome = XEPALOBJ::bIsMonochrome((XEPALOBJ *)&v6);
    DEC_SHARE_REF_CNT(v5);
    return IsMonochrome;
  }
  else
  {
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v6);
    return 0LL;
  }
}
