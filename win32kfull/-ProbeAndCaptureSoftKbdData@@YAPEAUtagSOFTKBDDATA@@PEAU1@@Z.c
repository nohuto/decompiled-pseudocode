/*
 * XREFs of ?ProbeAndCaptureSoftKbdData@@YAPEAUtagSOFTKBDDATA@@PEAU1@@Z @ 0x1C01B8B58
 * Callers:
 *     NtUserfnIMECONTROL @ 0x1C01E1AA0 (NtUserfnIMECONTROL.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

struct tagSOFTKBDDATA *__fastcall ProbeAndCaptureSoftKbdData(struct tagSOFTKBDDATA *Src)
{
  struct tagSOFTKBDDATA *v2; // rax
  int v3; // r14d
  SIZE_T v4; // rbx
  unsigned int v6; // esi
  _DWORD *v7; // rax
  _DWORD *v8; // rbx

  v2 = Src;
  if ( (unsigned __int64)Src >= MmUserProbeAddress )
    v2 = (struct tagSOFTKBDDATA *)MmUserProbeAddress;
  v3 = *(_DWORD *)v2;
  v4 = (unsigned __int64)*(unsigned int *)v2 << 9;
  ProbeForRead((char *)Src + 4, v4, 2u);
  if ( v4 > 0xFFFFFFFF )
    return 0LL;
  if ( (int)v4 + 4 < (unsigned int)v4 )
    return 0LL;
  v6 = v4 + 4;
  v7 = (_DWORD *)Win32AllocPoolZInit((unsigned int)(v4 + 4), 1835627349LL);
  v8 = v7;
  if ( !v7 )
    ExRaiseStatus(-1073741801);
  memmove(v7, Src, v6);
  *v8 = v3;
  return (struct tagSOFTKBDDATA *)v8;
}
