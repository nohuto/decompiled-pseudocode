/*
 * XREFs of ?ndisMRegisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003A070
 * Callers:
 *     NdisMRegisterAdapterShutdownHandler @ 0x1C0062190 (NdisMRegisterAdapterShutdownHandler.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C0130258 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C013AA18 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisMRegisterBugCheckHandler(char *Buffer)
{
  bool v2; // zf

  if ( (unsigned __int8)Buffer[32] < 6u )
  {
    v2 = *((_QWORD *)Buffer + 258) == 0LL;
  }
  else
  {
    if ( (*((_DWORD *)Buffer + 30) & 0x400) == 0 )
      return;
    v2 = *(_QWORD *)(*((_QWORD *)Buffer + 470) + 232LL) == 0LL;
  }
  if ( !v2 && (*((_DWORD *)Buffer + 30) & 0x2000) == 0 )
  {
    Buffer[2128] = 0;
    if ( KeRegisterBugCheckCallback(
           (PKBUGCHECK_CALLBACK_RECORD)(Buffer + 2072),
           ndisBugcheckHandler,
           Buffer,
           0x1718u,
           (PUCHAR)"Ndis miniport") )
    {
      *((_DWORD *)Buffer + 30) |= 0x2000u;
    }
  }
}
