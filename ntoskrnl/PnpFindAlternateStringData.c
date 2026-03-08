/*
 * XREFs of PnpFindAlternateStringData @ 0x1407811C0
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140685858 (PiProcessNewDeviceNode.c)
 *     PiGetDeviceRegProperty @ 0x1406C6230 (PiGetDeviceRegProperty.c)
 *     PiGetDeviceRegistryProperty @ 0x140951DA8 (PiGetDeviceRegistryProperty.c)
 *     PiAuditDeviceOperation @ 0x14096C7A8 (PiAuditDeviceOperation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpFindAlternateStringData(_WORD *a1, unsigned int a2, _QWORD *a3, _DWORD *a4)
{
  __int64 result; // rax
  int v8; // ebx
  unsigned __int64 v9; // r9
  __int16 *v10; // rcx
  _WORD *i; // rdx
  __int16 v12; // ax
  _WORD *v13; // rcx

  if ( a2 > 2 && *a1 == 64 )
  {
    v8 = 0;
    v9 = (unsigned __int64)&a1[(unsigned __int64)a2 >> 1];
    v10 = a1 + 1;
    if ( (unsigned __int64)(a1 + 2) < v9 )
    {
      for ( i = a1 + 2; (unsigned __int64)i < v9; ++i )
      {
        v12 = *v10;
        if ( !*v10 )
          break;
        if ( v12 == 44 )
        {
          if ( ((*i - 35) & 0xFFF5) != 0 || *i == 43 )
            return 0LL;
          v8 = 1;
        }
        else if ( v12 == 59 )
        {
          if ( !v8 )
            return 0LL;
          v13 = v10 + 1;
          result = 1LL;
          *a3 = v13;
          *a4 = a2 + (_DWORD)a1 - (_DWORD)v13;
          return result;
        }
        ++v10;
      }
    }
  }
  return 0LL;
}
