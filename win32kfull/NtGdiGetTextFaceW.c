/*
 * XREFs of NtGdiGetTextFaceW @ 0x1C011A610
 * Callers:
 *     <none>
 * Callees:
 *     GreGetTextFaceW @ 0x1C011A714 (GreGetTextFaceW.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall NtGdiGetTextFaceW(__int64 a1, int a2, char *a3, unsigned int a4)
{
  __int64 v7; // rax
  int v8; // edi
  BOOL v9; // r12d
  const void *v10; // rsi
  int TextFaceW; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  size_t v14; // r8
  const void *v16; // [rsp+20h] [rbp-38h]

  v7 = a1;
  v8 = 0;
  v9 = 1;
  v10 = 0LL;
  v16 = 0LL;
  if ( a2 > 0 && a3 )
  {
    if ( (unsigned int)a2 <= 0x1388000 )
    {
      v10 = (const void *)AllocFreeTmpBuffer((unsigned int)(2 * a2));
      v16 = v10;
    }
    v9 = v10 != 0LL;
    v7 = a1;
  }
  if ( v9 )
  {
    TextFaceW = GreGetTextFaceW(v7, (unsigned int)a2, v10, a4, v16);
    v8 = TextFaceW;
    if ( TextFaceW > 0 && a3 )
    {
      if ( TextFaceW > a2 )
        v8 = 0;
      if ( v8 )
      {
        v14 = 2LL * v8;
        if ( (unsigned __int64)&a3[v14] > MmUserProbeAddress || &a3[v14] <= a3 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a3, v10, v14);
      }
    }
    if ( v10 )
      FreeTmpBuffer(v10, v12, v13);
  }
  return (unsigned int)v8;
}
