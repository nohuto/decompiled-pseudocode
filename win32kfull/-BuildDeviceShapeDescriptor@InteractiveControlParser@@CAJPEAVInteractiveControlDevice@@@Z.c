/*
 * XREFs of ?BuildDeviceShapeDescriptor@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@@Z @ 0x1C024D3B4
 * Callers:
 *     ?BuildDeviceAttributes@InteractiveControlParser@@CAJPEAU_INTERACTIVECTRL_CAPABILITIES@@PEAVInteractiveControlDevice@@@Z @ 0x1C024D1EC (-BuildDeviceAttributes@InteractiveControlParser@@CAJPEAU_INTERACTIVECTRL_CAPABILITIES@@PEAVInter.c)
 * Callees:
 *     ?GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@Z @ 0x1C024DA70 (-GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@.c)
 */

__int64 __fastcall InteractiveControlParser::BuildDeviceShapeDescriptor(struct InteractiveControlDevice *a1)
{
  char *v2; // r14
  char *v3; // rdi
  char *v4; // rsi
  int ScaledComponentValue; // eax
  __int16 v6; // cx

  *((_DWORD *)a1 + 52) = 1;
  *((_DWORD *)a1 + 53) = 0;
  *((_DWORD *)a1 + 54) = 0;
  if ( *((_DWORD *)a1 + 43) )
  {
    v2 = (char *)a1 + 184;
    v3 = (char *)*((_QWORD *)a1 + 23);
    while ( v3 != v2 )
    {
      v4 = v3;
      v3 = *(char **)v3;
      if ( *((_DWORD *)v4 + 4) == 8 && *((_DWORD *)v4 + 25) )
      {
        ScaledComponentValue = InteractiveControlParser::GetScaledComponentValue(
                                 (struct tagINTERACTIVECTRL_COMPONENT_ENTRY *)v4,
                                 *((_DWORD *)v4 + 17));
        if ( *((_DWORD *)a1 + 43) == 1 )
        {
          *((_DWORD *)a1 + 55) = ScaledComponentValue;
          *((_DWORD *)a1 + 56) = ScaledComponentValue;
          return 0LL;
        }
        v6 = *((_WORD *)v4 + 40);
        if ( v6 == 72 )
        {
          *((_DWORD *)a1 + 55) = ScaledComponentValue;
        }
        else if ( v6 == 73 )
        {
          *((_DWORD *)a1 + 56) = ScaledComponentValue;
        }
      }
    }
  }
  else
  {
    *((_DWORD *)a1 + 55) = 5800;
    *((_DWORD *)a1 + 56) = 5800;
  }
  return 0LL;
}
