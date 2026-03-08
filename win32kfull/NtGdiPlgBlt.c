/*
 * XREFs of NtGdiPlgBlt @ 0x1C0293E20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     GrePlgBlt @ 0x1C0293740 (GrePlgBlt.c)
 */

__int64 __fastcall NtGdiPlgBlt(
        HDC a1,
        const void *a2,
        HDC a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        int a10,
        int a11)
{
  struct _POINTL v15[3]; // [rsp+90h] [rbp-48h] BYREF

  if ( ((unsigned __int8)a2 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  memmove(v15, a2, 0x18uLL);
  return GrePlgBlt(a1, v15, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
