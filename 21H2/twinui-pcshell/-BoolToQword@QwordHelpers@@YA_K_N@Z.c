/*
 * XREFs of ?BoolToQword@QwordHelpers@@YA_K_N@Z @ 0x1804E95B0
 * Callers:
 *     ?SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z @ 0x1804E95E4 (-SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z.c)
 * Callees:
 *     memcpy_s_0 @ 0x180090924 (memcpy_s_0.c)
 */

unsigned __int64 __fastcall QwordHelpers::BoolToQword(QwordHelpers *this)
{
  char Source; // [rsp+30h] [rbp+8h] BYREF
  __int64 Destination; // [rsp+38h] [rbp+10h] BYREF

  Source = (char)this;
  memcpy_s_0(&Destination, 8uLL, &Source, 1uLL);
  return Destination;
}
