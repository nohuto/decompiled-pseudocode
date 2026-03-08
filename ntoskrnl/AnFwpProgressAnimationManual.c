/*
 * XREFs of AnFwpProgressAnimationManual @ 0x140AEF2AC
 * Callers:
 *     AnFwDisplayProgressIndicator @ 0x140AEA598 (AnFwDisplayProgressIndicator.c)
 * Callees:
 *     BgpFwQueryPerformanceCounter @ 0x140381520 (BgpFwQueryPerformanceCounter.c)
 *     BgpTxtDisplayCharacter @ 0x140381538 (BgpTxtDisplayCharacter.c)
 *     LogFwStat @ 0x140AEA85C (LogFwStat.c)
 */

LONGLONG AnFwpProgressAnimationManual()
{
  LARGE_INTEGER v0; // rdi
  LONGLONG v1; // rbx
  LONGLONG v2; // rdx
  LONGLONG result; // rax
  unsigned __int16 v4; // cx
  __int16 v5; // r8
  __int16 v6; // ax
  __int16 v7; // ax
  __int64 v8; // rbx
  LARGE_INTEGER v9; // [rsp+50h] [rbp+8h] BYREF

  v9.QuadPart = 0LL;
  v0 = BgpFwQueryPerformanceCounter(&v9);
  v1 = v9.QuadPart / 33;
  v2 = 10 * (v9.QuadPart / 33) / 100;
  result = qword_140CF7770;
  if ( v0.QuadPart + v2 >= qword_140CF7770 + v9.QuadPart / 33 )
  {
    v4 = word_140C0B4E0;
    v5 = word_140C0B4E8;
    if ( word_140C0B4E0 != word_140C0B4E8 && (qword_140CF7770 - v0.QuadPart - v2) / v1 >= 2 )
      v4 = ++word_140C0B4E0;
    v6 = word_140C0B4DC;
    if ( v4 >= (unsigned __int16)word_140C0B4DC )
    {
      if ( v4 > (unsigned __int16)word_140C0B4E8 )
        goto LABEL_10;
      LogFwStat(1, 1, 0LL);
      BgpTxtDisplayCharacter(qword_140C0E470, (unsigned __int16)word_140C0B4E0, 0, 0LL, 0LL);
      LogFwStat(0, 1, 0LL);
      v4 = word_140C0B4E0;
      v5 = word_140C0B4E8;
      v6 = word_140C0B4DC;
    }
    if ( v4 == v5 )
    {
      v7 = v6 - word_140C0B4E4;
      goto LABEL_11;
    }
LABEL_10:
    v7 = v4 + 1;
LABEL_11:
    word_140C0B4E0 = v7;
    qword_140CF7770 = v0.QuadPart;
    v8 = v1 / 2;
    result = *(_QWORD *)&BgpFwQueryPerformanceCounter(0LL) - v0.QuadPart;
    if ( result > v8 )
    {
      result = *(_QWORD *)&BgpFwQueryPerformanceCounter(0LL) - v8;
      qword_140CF7770 = result;
    }
  }
  return result;
}
