/*
 * XREFs of ESM_GetNextEvent @ 0x1C000C6FC
 * Callers:
 *     ESM_RunStateMachine @ 0x1C000C510 (ESM_RunStateMachine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ESM_GetNextEvent(__int64 a1)
{
  __int64 v1; // r9
  int v3; // r10d
  __int64 v4; // r11
  __int64 i; // rcx
  unsigned __int8 v6; // dl
  __int64 result; // rax
  char v8; // r11
  unsigned __int8 v9; // r9
  int v10; // ebx
  int v11; // r10d
  __int64 v12; // rdx

  v1 = *(unsigned int *)(a1 + 880);
  v3 = *(_DWORD *)(a1 + 976);
  v4 = *(_QWORD *)(a1 + 968);
  for ( i = *(_QWORD *)(v4 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4 * v1 + 852) - v3));
        (_DWORD)v1 && (*(_DWORD *)(i + 16) & 4) != 0;
        i = *(_QWORD *)(v4 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4 * v1 + 852) - v3)) )
  {
    v1 = (unsigned int)(v1 - 1);
  }
  v6 = *(_BYTE *)(a1 + 948);
  result = 1000LL;
  v8 = *(_BYTE *)(a1 + 949);
  v9 = v6;
  v10 = *(_DWORD *)(i + 16);
  if ( v6 != v8 )
  {
    while ( 1 )
    {
      v11 = *(_DWORD *)(a1 + 4LL * v9 + 884) & 3;
      if ( !v11 )
        break;
      if ( (v11 != 2 || (v10 & 1) != 0) && (v11 != 3 || (v10 & 2) == 0) )
      {
        v9 = (v9 + 1) & 0xF;
        if ( v9 != v8 )
          continue;
      }
      if ( v9 == v8 )
        return result;
      break;
    }
    result = *(unsigned int *)(a1 + 4LL * v9 + 884);
    while ( v9 != v6 )
    {
      v12 = v9;
      v9 = (v9 - 1) & 0xF;
      *(_DWORD *)(a1 + 4 * v12 + 884) = *(_DWORD *)(a1 + 4LL * (((_BYTE)v12 - 1) & 0xF) + 884);
      v6 = *(_BYTE *)(a1 + 948);
    }
    *(_DWORD *)(a1 + 4LL * v6 + 884) = 1000;
    *(_BYTE *)(a1 + 948) = (*(_BYTE *)(a1 + 948) + 1) & 0xF;
  }
  return result;
}
