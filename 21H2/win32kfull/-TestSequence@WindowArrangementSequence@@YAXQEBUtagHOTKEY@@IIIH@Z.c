/*
 * XREFs of ?TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z @ 0x1C01057DC
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C01052A0 (xxxDoHotKeyStuff.c)
 * Callees:
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1C0124960 (_anonymous_namespace_--NotifyShellSimplePayload.c)
 */

void __fastcall WindowArrangementSequence::TestSequence(
        WindowArrangementSequence *this,
        const struct tagHOTKEY *const a2,
        int a3,
        unsigned __int16 a4,
        unsigned int a5)
{
  int v5; // eax
  bool v6; // zf
  __int64 v7; // r8

  if ( this )
  {
    if ( (((unsigned __int16)a2 << 16) | a4) == qword_1C033AAC8 )
      return;
    v5 = *(_QWORD *)this == gptiRit && (unsigned int)(*((_DWORD *)this + 8) - 16) <= 0xD;
    if ( WindowArrangementSequence::fWindowArrangementSequenceInProgress == v5 )
      return;
    WindowArrangementSequence::fWindowArrangementSequenceInProgress = v5;
    v6 = v5 == 0;
    goto LABEL_19;
  }
  if ( a5 )
  {
    if ( !a3 )
    {
      if ( !WindowArrangementSequence::fWindowArrangementSequenceInProgress )
        return;
      goto LABEL_20;
    }
    if ( !WindowArrangementSequence::fWindowArrangementSequenceInProgress )
      return;
    v6 = (a3 & 0xE) == 0;
LABEL_19:
    if ( !v6 )
      return;
LABEL_20:
    v7 = 1LL;
    goto LABEL_21;
  }
  if ( a3 == 8 && WindowArrangementSequence::fWindowArrangementSequenceInProgress )
  {
    v7 = 2LL;
LABEL_21:
    anonymous_namespace_::NotifyShellSimplePayload(0LL, 3LL, v7);
    WindowArrangementSequence::fWindowArrangementSequenceInProgress = 0;
  }
}
