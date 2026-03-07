void __fastcall DelegationAPI::ScrubDelegateThreadWindows(DelegationAPI *this, struct tagTHREADINFO *a2)
{
  unsigned int v2; // ebx
  __int64 *v3; // rdi
  _BYTE *v4; // rsi
  __int64 v6; // rcx
  char v7; // al

  v2 = 0;
  v3 = (__int64 *)gpKernelHandleTable;
  v4 = (char *)qword_1C02D0E08 + 24;
  do
  {
    v6 = *v3;
    if ( *v4 == 1 )
    {
      if ( !*(_DWORD *)(v6 + 260) || *(DelegationAPI **)(v6 + 264) != this )
        goto LABEL_4;
      v7 = anonymous_namespace_::ScrubDelegatedWindow_tagWND___(v6, a2);
    }
    else
    {
      if ( *v4 != 23 || !*(_DWORD *)(v6 + 72) || *(DelegationAPI **)(v6 + 64) != this )
        goto LABEL_4;
      v7 = anonymous_namespace_::ScrubDelegatedWindow_tagBWND___(v6, a2);
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
