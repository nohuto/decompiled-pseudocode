/*
 * XREFs of PopEtGetProcessVersionInfo @ 0x140701360
 * Callers:
 *     PopEtGetProcessAppId @ 0x14070116C (PopEtGetProcessAppId.c)
 * Callees:
 *     PsGetProcessSectionBaseAddress @ 0x140299400 (PsGetProcessSectionBaseAddress.c)
 *     LdrResSearchResource @ 0x1407EACB0 (LdrResSearchResource.c)
 */

__int64 __fastcall PopEtGetProcessVersionInfo(__int64 a1, __int64 a2)
{
  int v3; // ebx
  __int64 ProcessSectionBaseAddress; // rax
  __int64 v5; // rcx
  __int64 v7; // rcx
  _QWORD v8[3]; // [rsp+48h] [rbp-20h] BYREF
  unsigned __int64 v9; // [rsp+70h] [rbp+8h] BYREF
  __int64 v10; // [rsp+80h] [rbp+18h] BYREF

  v3 = 0;
  *(_QWORD *)a2 = 0LL;
  if ( (*(_DWORD *)(a1 + 2172) & 1) != 0 )
  {
    v7 = PopEtGlobals;
    *(_DWORD *)a2 = *(_DWORD *)(PopEtGlobals + 1056);
    *(_DWORD *)(a2 + 4) = *(_DWORD *)(v7 + 1060);
  }
  else
  {
    ProcessSectionBaseAddress = PsGetProcessSectionBaseAddress(a1);
    if ( ProcessSectionBaseAddress )
    {
      v8[0] = 16LL;
      v8[1] = 1LL;
      v8[2] = 0LL;
      v9 = 0LL;
      v10 = 0LL;
      v3 = LdrResSearchResource(ProcessSectionBaseAddress, v8, 3LL, 48LL, &v10, &v9, 0LL, 0LL);
      if ( v3 >= 0 )
      {
        if ( v9 < 0x5C )
          return (unsigned int)-1073741811;
        v5 = v10;
        if ( *(_WORD *)(v10 + 4) || *(_WORD *)(v10 + 2) != 52 )
        {
          return (unsigned int)-1073741811;
        }
        else
        {
          *(_DWORD *)a2 = *(_DWORD *)(v10 + 52);
          *(_DWORD *)(a2 + 4) = *(_DWORD *)(v5 + 48);
        }
      }
    }
  }
  return (unsigned int)v3;
}
