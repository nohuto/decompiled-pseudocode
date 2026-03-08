/*
 * XREFs of UserIsWindowDesktopComposed @ 0x1C01498F0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall UserIsWindowDesktopComposed(int a1, _DWORD *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax

  v3 = 0;
  v4 = HMValidateHandleNoSecure(a1, 1);
  if ( v4 )
  {
    *a2 = IsWindowDesktopComposed(v4);
    return 1;
  }
  return v3;
}
