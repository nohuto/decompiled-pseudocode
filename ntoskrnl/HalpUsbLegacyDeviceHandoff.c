/*
 * XREFs of HalpUsbLegacyDeviceHandoff @ 0x1403A7544
 * Callers:
 *     HalpUsbLegacyScanBusForHandoff @ 0x14038F7C4 (HalpUsbLegacyScanBusForHandoff.c)
 * Callees:
 *     HalpRegisterUsbController @ 0x14051EB18 (HalpRegisterUsbController.c)
 */

__int64 __fastcall HalpUsbLegacyDeviceHandoff(__int64 a1, unsigned int a2, __int64 a3, unsigned __int16 *a4)
{
  __int64 result; // rax
  _BYTE *v6; // rbx
  unsigned int v7; // edi

  result = *a4;
  v6 = a4;
  v7 = a3;
  if ( *(_DWORD *)a4 == 1896906886 )
    return result;
  if ( *((_BYTE *)a4 + 11) == 12 && *((_BYTE *)a4 + 10) == 3 && !*((_BYTE *)a4 + 9) )
  {
    if ( (_WORD)result == 0x8086 )
    {
      LOBYTE(a4) = 1;
LABEL_15:
      result = HalpRegisterUsbController(a2, (unsigned int)a3, 0LL, a4);
      goto LABEL_3;
    }
    if ( (_WORD)result == 4358 )
    {
      a4 = 0LL;
      goto LABEL_15;
    }
  }
LABEL_3:
  if ( v6[11] == 12 && v6[10] == 3 )
  {
    LOBYTE(a3) = 16;
    if ( v6[9] == 16 )
      return HalpRegisterUsbController(a2, v7, a3, 0LL);
  }
  return result;
}
