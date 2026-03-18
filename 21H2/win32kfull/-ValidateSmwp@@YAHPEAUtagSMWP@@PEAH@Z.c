/*
 * XREFs of ?ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z @ 0x1C0047AA4
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C004720C (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C0047B50 (-ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall ValidateSmwp(struct tagSMWP *a1, int *a2)
{
  __int64 v4; // rax
  struct tagCVR *v5; // rbx
  int v6; // edi
  __int64 v7; // rbp

  *a2 = 1;
  v4 = HMValidateHandleNoSecure(**((_QWORD **)a1 + 5), 1);
  if ( !v4 )
    return 0LL;
  v5 = (struct tagCVR *)*((_QWORD *)a1 + 5);
  v6 = *((_DWORD *)a1 + 7);
  v7 = *(_QWORD *)(v4 + 104);
  while ( 1 )
  {
    if ( --v6 < 0 )
      return 1LL;
    if ( !(unsigned int)ValidateWindowPos(v5, 0LL) )
    {
      *(_QWORD *)v5 = 0LL;
      goto LABEL_8;
    }
    if ( *(_QWORD *)(_HMObjectFromHandle(*(_QWORD *)v5) + 104) != v7 )
      break;
    if ( (*((_DWORD *)v5 + 8) & 0x2000) != 0 )
      *a2 = 0;
LABEL_8:
    v5 = (struct tagCVR *)((char *)v5 + 168);
  }
  UserSetLastError(1441LL);
  return 0LL;
}
