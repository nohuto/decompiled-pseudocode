/*
 * XREFs of ?UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C029E27C
 * Callers:
 *     UmfdDispatchEscape @ 0x1C00A76B0 (UmfdDispatchEscape.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C01655E0 (__report_rangecheckfailure.c)
 *     memmove @ 0x1C016DB40 (memmove.c)
 *     ?EngCreateFile@@YAPEAXPEBG@Z @ 0x1C029E0EC (-EngCreateFile@@YAPEAXPEBG@Z.c)
 */

void __fastcall UmfdEscEngCreateFile(struct tagUMFD_ESCAPE_ARGUMENT *a1)
{
  char *v1; // rbx
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  __int64 v4; // r8
  const void *v5; // rax
  unsigned __int64 v6; // rdi
  wchar_t Str1[264]; // [rsp+30h] [rbp-228h] BYREF

  v1 = (char *)a1 + 8;
  v2 = *((_QWORD *)a1 + 1);
  if ( !v2 )
    goto LABEL_13;
  v3 = *((_QWORD *)a1 + 2);
  if ( v3 > 0x104 )
    goto LABEL_13;
  v4 = 2 * v3;
  v5 = (const void *)v2;
  if ( 2 * v3 )
  {
    if ( (v2 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v4 + v2 > MmUserProbeAddress || (v5 = (const void *)v2, v4 + v2 < v2) )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
      v3 = *((_QWORD *)v1 + 1);
      v5 = *(const void **)v1;
    }
  }
  v6 = v3;
  memmove(Str1, v5, 2 * v3);
  if ( v6 >= 261 )
    _report_rangecheckfailure();
  Str1[v6] = 0;
  if ( _wcsicmp(Str1, L"FAC.ATM") )
LABEL_13:
    *(_QWORD *)v1 = -1LL;
  else
    *(_QWORD *)v1 = EngCreateFile(Str1);
}
