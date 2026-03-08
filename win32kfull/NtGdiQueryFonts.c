/*
 * XREFs of NtGdiQueryFonts @ 0x1C02C6C20
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     GreQueryFonts @ 0x1C027A760 (GreQueryFonts.c)
 */

__int64 __fastcall NtGdiQueryFonts(char *a1, ULONG64 a2, union _LARGE_INTEGER *a3)
{
  union _LARGE_INTEGER *v3; // r12
  unsigned int v4; // r14d
  unsigned int v6; // ebx
  struct _UNIVERSAL_FONT_ID *v7; // rdi
  size_t v8; // r8
  union _LARGE_INTEGER v10; // [rsp+68h] [rbp+20h] BYREF

  v3 = a3;
  v4 = a2;
  v6 = 0;
  v7 = 0LL;
  v10.QuadPart = 0LL;
  if ( (_DWORD)a2 && a1 )
  {
    if ( (unsigned int)a2 <= 0x4E2000 )
      v7 = (struct _UNIVERSAL_FONT_ID *)AllocFreeTmpBuffer((unsigned int)(8 * a2));
    if ( !v7 )
      v6 = -1;
  }
  if ( v6 != -1 )
  {
    v6 = GreQueryFonts(v7, v4, &v10);
    if ( v6 != -1 )
    {
      a2 = MmUserProbeAddress;
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (union _LARGE_INTEGER *)MmUserProbeAddress;
      *v3 = v10;
      if ( a1 )
      {
        if ( v6 < v4 )
          v4 = v6;
        v8 = 8LL * v4;
        if ( (unsigned __int64)&a1[v8] > MmUserProbeAddress || &a1[v8] <= a1 || ((unsigned __int8)a1 & 3) != 0 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a1, v7, v8);
      }
    }
  }
  if ( v7 )
    FreeTmpBuffer(v7, a2, a3);
  if ( v6 == -1 )
    EngSetLastError(8u);
  return v6;
}
