/*
 * XREFs of NtGdiTransformPoints @ 0x1C00E2E50
 * Callers:
 *     <none>
 * Callees:
 *     GreTransformPoints @ 0x1C00E2F9C (GreTransformPoints.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 */

__int64 __fastcall NtGdiTransformPoints(HDC a1, char *a2, char *a3, int a4, int a5)
{
  __int64 v5; // rsi
  unsigned int v9; // edi
  _BYTE *v10; // rbx
  size_t v11; // r8
  size_t v12; // r8
  _BYTE Src[80]; // [rsp+50h] [rbp-98h] BYREF

  v5 = a4;
  v9 = 1;
  v10 = Src;
  if ( a4 > 0 )
  {
    if ( a4 > 10 )
    {
      v10 = 0LL;
      if ( (unsigned int)a4 <= 0x4E2000 )
        v10 = (_BYTE *)AllocFreeTmpBuffer((unsigned int)(8 * a4));
    }
    if ( v10 )
    {
      v11 = 8 * v5;
      if ( 8 * v5 && ((unsigned __int64)&a2[v11] > MmUserProbeAddress || &a2[v11] < a2) )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v10, a2, v11);
    }
    else
    {
      v9 = 0;
    }
    if ( v9 )
    {
      v9 = GreTransformPoints(a1, a5);
      if ( v9 )
      {
        v12 = 8LL * (int)v5;
        if ( (unsigned __int64)&a3[v12] > MmUserProbeAddress || &a3[v12] <= a3 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a3, v10, v12);
      }
    }
    if ( v10 && v10 != Src )
      FreeTmpBuffer(v10);
  }
  return v9;
}
