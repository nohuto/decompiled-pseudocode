/*
 * XREFs of NtGdiSetLinkedUFIs @ 0x1C027B200
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     ?bSetLinkedUFIs@XDCOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@I@Z @ 0x1C02C30D0 (-bSetLinkedUFIs@XDCOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@I@Z.c)
 */

__int64 __fastcall NtGdiSetLinkedUFIs(HDC a1, char *Src, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  _BYTE *v7; // rbx
  unsigned int v8; // r14d
  size_t v10; // r8
  _QWORD v11[2]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v12[32]; // [rsp+40h] [rbp-58h] BYREF

  v4 = (unsigned int)a3;
  v11[0] = a1;
  v7 = 0LL;
  v8 = 1;
  if ( !Src && (_DWORD)a3 )
    return 0LL;
  if ( (unsigned int)a3 <= 4 )
  {
    v7 = v12;
  }
  else
  {
    if ( (unsigned int)a3 <= 0x4E2000 && 8 * (_DWORD)a3 )
      v7 = (_BYTE *)Win32AllocPool((unsigned int)(8 * a3), 1684629063LL, a3, a4);
    if ( !v7 )
      return 0LL;
  }
  if ( Src )
  {
    v10 = 8 * v4;
    if ( 8 * v4 )
    {
      if ( ((unsigned __int8)Src & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&Src[v10] > MmUserProbeAddress || &Src[v10] < Src )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v7, Src, v10);
  }
  DCOBJ::DCOBJ((DCOBJ *)v11, a1);
  if ( v11[0] )
    v8 = XDCOBJ::bSetLinkedUFIs((XDCOBJ *)v11, (struct _UNIVERSAL_FONT_ID *)v7, v4);
  DCOBJ::~DCOBJ((DCOBJ *)v11);
  if ( v7 != v12 )
    Win32FreePool(v7);
  return v8;
}
