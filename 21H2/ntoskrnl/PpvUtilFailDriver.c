/*
 * XREFs of PpvUtilFailDriver @ 0x14056489C
 * Callers:
 *     PiProcessNewDeviceNode @ 0x14076E9B8 (PiProcessNewDeviceNode.c)
 *     IoGetDeviceProperty @ 0x140773C30 (IoGetDeviceProperty.c)
 * Callees:
 *     VfErrorReport7 @ 0x140A92B74 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x140A92C0C (VfErrorReport8.c)
 */

__int64 __fastcall PpvUtilFailDriver(int a1)
{
  int v1; // ecx
  __int64 v2; // rcx
  __int64 result; // rax

  if ( PpvUtilVerifierEnabled )
  {
    if ( a1 )
    {
      v1 = a1 - 1;
      if ( v1 )
      {
        if ( v1 != 1 )
          return result;
        v2 = 589LL;
      }
      else
      {
        v2 = 587LL;
      }
      return VfErrorReport8(v2);
    }
    else
    {
      return VfErrorReport7();
    }
  }
  return result;
}
