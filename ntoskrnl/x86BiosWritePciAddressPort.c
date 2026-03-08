/*
 * XREFs of x86BiosWritePciAddressPort @ 0x1403A9A80
 * Callers:
 *     x86BiosWriteIoSpace @ 0x1403BC9E0 (x86BiosWriteIoSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall x86BiosWritePciAddressPort(int a1, unsigned __int16 a2, int a3)
{
  __int64 result; // rax
  int v4; // ecx
  int v5; // ecx

  if ( XmPciBiosPresent )
  {
    result = (unsigned int)a2 + a1;
    if ( (int)result > 3 )
      a1 = 3 - a2;
    if ( a1 )
    {
      v4 = a1 - 1;
      if ( v4 )
      {
        v5 = v4 - 1;
        if ( v5 )
        {
          if ( v5 == 1 )
            XmPCIConfigAddress = a3;
        }
        else
        {
          result = a2;
          *(_WORD *)((char *)&XmPCIConfigAddress + a2) = a3;
          HIBYTE(XmPCIConfigAddress) = BYTE2(a3);
        }
      }
      else
      {
        result = a2;
        *(_WORD *)((char *)&XmPCIConfigAddress + a2) = a3;
      }
    }
    else
    {
      result = a2;
      *((_BYTE *)&XmPCIConfigAddress + a2) = a3;
    }
    XmPCIConfigAddress &= 0xFFFFFFFC;
  }
  return result;
}
