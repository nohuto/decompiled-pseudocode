/*
 * XREFs of sub_18004C944 @ 0x18004C944
 * Callers:
 *     sub_18004C840 @ 0x18004C840 (sub_18004C840.c)
 * Callees:
 *     sub_180047614 @ 0x180047614 (sub_180047614.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18004C9A4 @ 0x18004C9A4 (sub_18004C9A4.c)
 *     sub_18004CA38 @ 0x18004CA38 (sub_18004CA38.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18004C944(__int64 a1)
{
  int v2; // eax
  signed int v3; // ebx
  DWORD v5; // eax
  signed int v6; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  DWORD ExitCode; // [rsp+38h] [rbp+10h] BYREF
  RPC_BINDING_HANDLE Binding; // [rsp+40h] [rbp+18h] BYREF

  Binding = 0LL;
  v2 = sub_18004CA38(&Binding);
  v3 = v2;
  if ( v2 < 0 )
  {
    sub_18004BD84((int)retaddr, 223, (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp", v2);
  }
  else
  {
    while ( 1 )
    {
      v3 = sub_18004C9A4(Binding);
      if ( v3 >= 0 )
        break;
      v5 = WaitForSingleObjectEx(*(HANDLE *)(a1 + 88), 0, 0);
      if ( v5 != 258 )
      {
        if ( !v5 )
        {
          v6 = GetExitCodeProcess(*(HANDLE *)(a1 + 88), &ExitCode) ? ExitCode : GetLastError();
          if ( v6 != 259 )
          {
            if ( v6 > 0 )
              v3 = (unsigned __int16)v6 | 0x80070000;
            else
              v3 = v6;
          }
        }
        break;
      }
    }
  }
  if ( Binding )
    sub_180047614(Binding);
  return (unsigned int)v3;
}
