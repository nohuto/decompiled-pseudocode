/*
 * XREFs of SetDisplayAffinity @ 0x1C022CDDC
 * Callers:
 *     NtUserSetWindowDisplayAffinity @ 0x1C01DD1F0 (NtUserSetWindowDisplayAffinity.c)
 * Callees:
 *     GetDisplayAffinity @ 0x1C0016874 (GetDisplayAffinity.c)
 *     InternalSetProp @ 0x1C00C671C (InternalSetProp.c)
 *     InternalRemoveProp @ 0x1C00C94BC (InternalRemoveProp.c)
 *     ComposeWindowIfNeeded @ 0x1C00D3A58 (ComposeWindowIfNeeded.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z @ 0x1C022CB18 (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z.c)
 */

__int64 __fastcall SetDisplayAffinity(struct tagWND *a1, unsigned int a2)
{
  __int64 v2; // rax
  unsigned int v3; // edi
  __int64 v5; // rsi
  unsigned int v6; // esi
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 5);
  v3 = 0;
  v8 = 0;
  v5 = a2;
  if ( (*(_BYTE *)(v2 + 27) & 0x20) == 0 )
    ComposeWindowIfNeeded(a1, 1);
  if ( (unsigned int)GetDisplayAffinity((__int64)a1, &v8) )
  {
    if ( (_DWORD)v5 )
    {
      if ( !(unsigned int)InternalSetProp((__int64)a1, (unsigned __int16)atomDispAffinity, v5, 5u) )
        return v3;
    }
    else
    {
      InternalRemoveProp((__int64)a1, (unsigned __int16)atomDispAffinity, 1u);
    }
    v6 = v5 & 0x11;
    v3 = 1;
    if ( (v8 & 0x11) != v6 )
    {
      v3 = ChangeWindowTreeProtection(a1, v6);
      if ( !v3 )
        InternalSetProp((__int64)a1, (unsigned __int16)atomDispAffinity, v8, 5u);
    }
  }
  return v3;
}
