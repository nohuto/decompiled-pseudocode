/*
 * XREFs of NtGdiGetTextFaceW @ 0x1C001C6D0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetTextFaceW @ 0x1C001C7E0 (GreGetTextFaceW.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 */

__int64 __fastcall NtGdiGetTextFaceW(HDC a1, int a2, char *a3)
{
  HDC v5; // rax
  int v6; // edi
  BOOL v7; // r12d
  const void *v8; // rsi
  int TextFaceW; // eax
  size_t v10; // r8

  v5 = a1;
  v6 = 0;
  v7 = 1;
  v8 = 0LL;
  if ( a2 > 0 && a3 )
  {
    if ( (unsigned int)a2 <= 0x1388000 )
      v8 = (const void *)AllocFreeTmpBuffer((unsigned int)(2 * a2));
    v7 = v8 != 0LL;
    v5 = a1;
  }
  if ( v7 )
  {
    TextFaceW = GreGetTextFaceW(v5);
    v6 = TextFaceW;
    if ( TextFaceW > 0 && a3 )
    {
      if ( TextFaceW > a2 )
        v6 = 0;
      if ( v6 )
      {
        v10 = 2LL * v6;
        if ( (unsigned __int64)&a3[v10] > MmUserProbeAddress || &a3[v10] <= a3 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a3, v8, v10);
      }
    }
    if ( v8 )
      FreeTmpBuffer(v8);
  }
  return (unsigned int)v6;
}
