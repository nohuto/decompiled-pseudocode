/*
 * XREFs of ?FreeComponentInformation@InteractiveControlParser@@CAXPEAU_INTERACTIVECTRL_CAPABILITIES@@@Z @ 0x1C024D858
 * Callers:
 *     ?BuildComponentInformation@InteractiveControlParser@@CAJPEAU_HIDP_PREPARSED_DATA@@GPEAVInteractiveControlDevice@@@Z @ 0x1C024CE48 (-BuildComponentInformation@InteractiveControlParser@@CAJPEAU_HIDP_PREPARSED_DATA@@GPEAVInteracti.c)
 *     ?FreeDeviceCapabilities@InteractiveControlParser@@SAXPEAU_INTERACTIVECTRL_CAPABILITIES@@@Z @ 0x1C024D8C8 (-FreeDeviceCapabilities@InteractiveControlParser@@SAXPEAU_INTERACTIVECTRL_CAPABILITIES@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall InteractiveControlParser::FreeComponentInformation(struct _INTERACTIVECTRL_CAPABILITIES *a1)
{
  _QWORD **v2; // rdi
  _QWORD *v3; // rcx
  _QWORD *v4; // rax

  if ( *((_DWORD *)a1 + 26) )
  {
    v2 = (_QWORD **)((char *)a1 + 112);
    while ( 1 )
    {
      v3 = *v2;
      if ( *v2 == v2 )
        break;
      if ( (_QWORD **)v3[1] != v2 || (v4 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
        __fastfail(3u);
      *v2 = v4;
      v4[1] = v2;
      Win32FreePool(v3);
      --*((_DWORD *)a1 + 26);
    }
  }
  *(_OWORD *)((char *)a1 + 68) = 0LL;
  *(_OWORD *)((char *)a1 + 84) = 0LL;
  *((_DWORD *)a1 + 25) = 0;
}
