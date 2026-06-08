/*
 * XREFs of SetPerfStateIOHidden @ 0x1C000EFE0
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddrHidden @ 0x1C0008788 (ReadGenAddrHidden.c)
 *     WriteGenAddrHidden @ 0x1C0008AE0 (WriteGenAddrHidden.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0009C90 (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall SetPerfStateIOHidden(unsigned int a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v7; // ebx
  int GenAddrHidden; // eax
  int v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+30h] [rbp-18h]

  v7 = 0;
  WriteGenAddrHidden(a1, (_BYTE *)a2, a3);
  if ( *(_QWORD *)(a2 + 16) )
  {
    if ( a4 )
    {
      GenAddrHidden = ReadGenAddrHidden(a1, (_BYTE *)(a2 + 12));
      if ( GenAddrHidden != (_DWORD)a4 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v11 = GenAddrHidden;
          v10 = a4;
          WPP_RECORDER_SF_dd(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x18u,
            (__int64)&WPP_bbe0b3150a27308fbe0acf4b28c7c946_Traceguids,
            v10,
            v11);
        }
        return (unsigned int)-1073741823;
      }
    }
  }
  return v7;
}
