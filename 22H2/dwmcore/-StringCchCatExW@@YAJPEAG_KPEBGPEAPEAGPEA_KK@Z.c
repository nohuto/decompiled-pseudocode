/*
 * XREFs of ?StringCchCatExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z @ 0x18021F524
 * Callers:
 *     ?WriteSubchannelString@MatrixSubchannelMaskInfo@@QEBAXW4DCOMPOSITION_EXPRESSION_TYPE@@_KPEAG@Z @ 0x18021F6E8 (-WriteSubchannelString@MatrixSubchannelMaskInfo@@QEBAXW4DCOMPOSITION_EXPRESSION_TYPE@@_KPEAG@Z.c)
 *     ?WriteSubchannelString@VectorSubchannelMaskInfo@@QEBAX_KPEAG@Z @ 0x18021F7FC (-WriteSubchannelString@VectorSubchannelMaskInfo@@QEBAX_KPEAG@Z.c)
 * Callees:
 *     StringCopyWorkerW_0 @ 0x18021F624 (StringCopyWorkerW_0.c)
 *     StringLengthWorkerW @ 0x18021F6A0 (StringLengthWorkerW.c)
 */

__int64 __fastcall StringCchCatExW(
        unsigned __int16 *a1,
        size_t a2,
        const unsigned __int16 *a3,
        unsigned __int16 **a4,
        unsigned __int64 *a5)
{
  HRESULT v5; // r10d
  unsigned __int16 *v9; // r11
  size_t v10; // rax
  size_t v11; // rbx
  unsigned __int16 *v12; // rdi
  size_t v14; // [rsp+20h] [rbp-38h]
  size_t pcchLength[5]; // [rsp+30h] [rbp-28h] BYREF

  v5 = 0;
  if ( a2 - 1 > 0x7FFFFFFE )
    v5 = -2147024809;
  v9 = a1;
  if ( v5 < 0 )
  {
    v10 = 0LL;
  }
  else
  {
    v5 = StringLengthWorkerW(a1, a2, pcchLength);
    v10 = pcchLength[0];
  }
  if ( v5 >= 0 )
  {
    v11 = a2 - v10;
    v12 = &v9[v10];
    v5 = 0;
    if ( v11 > 1 )
    {
      pcchLength[0] = 0LL;
      v5 = StringCopyWorkerW_0(&v9[v10], v11, pcchLength, a3, v14);
      v11 -= pcchLength[0];
      v12 += pcchLength[0];
      if ( (int)(v5 + 0x80000000) >= 0 && v5 != -2147024774 )
        return (unsigned int)v5;
    }
    else if ( *a3 )
    {
      if ( !v9 )
        return (unsigned int)-2147024809;
      v5 = -2147024774;
    }
    if ( a4 )
      *a4 = v12;
    if ( a5 )
      *a5 = v11;
  }
  return (unsigned int)v5;
}
