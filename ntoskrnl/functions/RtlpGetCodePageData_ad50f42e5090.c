__int128 *__fastcall RtlpGetCodePageData(unsigned int a1)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  __int128 *result; // rax
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( a1 <= 1 && RtlpIsUtf8Process() )
    return &Utf8TableInfo;
  _InterlockedOr(v4, 0);
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  if ( !a1 || a1 == LOWORD(CurrentServerSiloGlobals[66].Blink) )
    return (__int128 *)&CurrentServerSiloGlobals[66].Blink;
  result = (__int128 *)&CurrentServerSiloGlobals[70].Blink;
  if ( a1 != 1 && a1 != *(unsigned __int16 *)result )
    return &Utf8TableInfo;
  return result;
}
