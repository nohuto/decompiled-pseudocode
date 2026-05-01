/*
 * XREFs of ?s_ModeFromZbid@CImmersiveMode@@CA?AW4IMM_SYSTEM_MODE@@W4ZBID@@@Z @ 0x18006F99C
 * Callers:
 *     ?HandleActivation@CImmersiveMode@@UEAAJW4ZBID@@@Z @ 0x18006F890 (-HandleActivation@CImmersiveMode@@UEAAJW4ZBID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveMode::s_ModeFromZbid(int a1)
{
  unsigned int v1; // edx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx

  v1 = -1;
  v2 = a1 - 1;
  if ( v2 )
  {
    v3 = v2 - 7;
    if ( !v3 )
      return 1;
    v4 = v3 - 2;
    if ( !v4 || v4 == 2 )
      return 1;
  }
  else
  {
    return 0;
  }
  return v1;
}
