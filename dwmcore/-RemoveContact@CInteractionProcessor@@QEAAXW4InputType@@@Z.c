/*
 * XREFs of ?RemoveContact@CInteractionProcessor@@QEAAXW4InputType@@@Z @ 0x1801AC934
 * Callers:
 *     ?RemoveContact@CInteractionRoot@@UEAAXW4InputType@@@Z @ 0x1801A2000 (-RemoveContact@CInteractionRoot@@UEAAXW4InputType@@@Z.c)
 *     ?RemoveContact@CInteraction@@UEAAXW4InputType@@@Z @ 0x180209540 (-RemoveContact@CInteraction@@UEAAXW4InputType@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CInteractionProcessor::RemoveContact(_BYTE *a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx

  v2 = a2 - 2;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 == 2 )
          a1[628] |= 0x10u;
      }
      else
      {
        a1[468] |= 0x10u;
      }
    }
    else
    {
      a1[308] |= 0x10u;
    }
  }
  else
  {
    a1[148] |= 0x10u;
  }
}
