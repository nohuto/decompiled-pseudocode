/*
 * XREFs of ?put_Success@ViewEventArgsForWindowingSettings@@UEAAJE@Z @ 0x18032A600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewEventArgsForWindowingSettings::put_Success(ViewEventArgsForWindowingSettings *this, char a2)
{
  *((_BYTE *)this + 24) = a2 != 0;
  return 0LL;
}
