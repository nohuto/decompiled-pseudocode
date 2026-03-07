__int64 __fastcall XmEmulateInterrupt(unsigned __int8 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx

  v2 = a1;
  if ( !XmEmulatorInitialized )
    return 4LL;
  XmStatus = 0;
  word_140D1743C = dword_140D175A0;
  dword_140D17428 = HIWORD(dword_140D175A0);
  v4 = x86BiosTranslateAddress((unsigned __int16)dword_140D175A0, HIWORD(dword_140D175A0));
  *(_WORD *)(v4 - 6) = -1;
  *(_DWORD *)(v4 - 4) = 0xFFFF;
  LOWORD(dword_140D17428) = dword_140D17428 - 6;
  v5 = x86BiosTranslateAddress(0LL, 0LL);
  return XmEmulateStream(v6, *(unsigned __int16 *)(v5 + 4 * v2 + 2), *(unsigned __int16 *)(v5 + 4 * v2), a2);
}
