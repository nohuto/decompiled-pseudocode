/*
 * XREFs of ProbeAndCaptureSoftKbdData @ 0x1C01E3390
 * Callers:
 *     NtUserfnIMECONTROL @ 0x1C0204E80 (NtUserfnIMECONTROL.c)
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
 */

_DWORD *__fastcall ProbeAndCaptureSoftKbdData(char *Src)
{
  unsigned int *v2; // rax
  int v3; // r14d
  SIZE_T v4; // rbx
  unsigned int v6; // esi
  _DWORD *v7; // rax
  _DWORD *v8; // rbx

  v2 = (unsigned int *)Src;
  if ( (unsigned __int64)Src >= MmUserProbeAddress )
    v2 = (unsigned int *)MmUserProbeAddress;
  v3 = *v2;
  v4 = (unsigned __int64)*v2 << 9;
  ProbeForRead(Src + 4, v4, 2u);
  if ( v4 > 0xFFFFFFFF )
    return 0LL;
  if ( (int)v4 + 4 < (unsigned int)v4 )
    return 0LL;
  v6 = v4 + 4;
  v7 = (_DWORD *)Win32AllocPool((unsigned int)(v4 + 4), 1835627349LL);
  v8 = v7;
  if ( !v7 )
    ExRaiseStatus(-1073741801);
  memmove(v7, Src, v6);
  *v8 = v3;
  return v8;
}
