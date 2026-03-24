/*
 * XREFs of ?ScrubDelegateThreadWindows@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C00912B8
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C003EFB0 (xxxDestroyThreadInfo.c)
 * Callees:
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagWND___ @ 0x1C0091340 (_anonymous_namespace_--ScrubDelegatedWindow_tagWND___.c)
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagBWND___ @ 0x1C011DDD0 (_anonymous_namespace_--ScrubDelegatedWindow_tagBWND___.c)
 */

void __fastcall DelegationAPI::ScrubDelegateThreadWindows(DelegationAPI *this, struct tagTHREADINFO *a2)
{
  unsigned int v2; // ebx
  __int64 *v3; // rdi
  _BYTE *v4; // rsi
  __int64 v6; // rcx
  char v7; // al

  v2 = 0;
  v3 = (__int64 *)gpKernelHandleTable;
  v4 = (char *)qword_1C024FD58 + 24;
  do
  {
    v6 = *v3;
    if ( *v4 == 1 )
    {
      if ( !*(_DWORD *)(v6 + 260) || *(DelegationAPI **)(v6 + 264) != this )
        goto LABEL_4;
      v7 = anonymous_namespace_::ScrubDelegatedWindow_tagWND___(v6);
    }
    else
    {
      if ( *v4 != 23 || !*(_DWORD *)(v6 + 72) || *(DelegationAPI **)(v6 + 64) != this )
        goto LABEL_4;
      v7 = anonymous_namespace_::ScrubDelegatedWindow_tagBWND___(v6);
    }
    if ( v7 )
      break;
LABEL_4:
    ++v2;
    v4 += 32;
    v3 += 3;
  }
  while ( v2 <= giheLast );
}
