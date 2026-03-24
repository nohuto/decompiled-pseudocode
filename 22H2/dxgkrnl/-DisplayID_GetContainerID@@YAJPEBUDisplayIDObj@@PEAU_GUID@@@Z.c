/*
 * XREFs of ?DisplayID_GetContainerID@@YAJPEBUDisplayIDObj@@PEAU_GUID@@@Z @ 0x1C005FBC0
 * Callers:
 *     ?_GetMonitorContainerID@DXGMONITOR@@QEAAJPEAU_GUID@@@Z @ 0x1C0182144 (-_GetMonitorContainerID@DXGMONITOR@@QEAAJPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DisplayID_GetContainerID(const struct DisplayIDObj *a1, struct _GUID *a2)
{
  unsigned __int64 v2; // r8
  int v4; // esi
  int v5; // edi
  _BYTE *i; // r11
  unsigned __int8 v7; // r9
  int v8; // ebx
  _BYTE *v9; // r10
  int v10; // ebp
  __int64 v11; // rax
  char *v12; // r10
  char v13; // al

  v2 = 0LL;
  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( !*((_BYTE *)a1 + 16) )
    return 3223126019LL;
  v4 = *((_DWORD *)a1 + 5);
  v5 = 0;
  for ( i = *(_BYTE **)a1; v5 < v4; i += (unsigned __int8)(v7 + 5) )
  {
    if ( (*i & 0xF0) != 0x20 )
      break;
    v7 = i[1];
    v8 = v7;
    if ( v7 )
    {
      v9 = (_BYTE *)((unsigned __int64)(i + 4) & -(__int64)(v7 != 0));
      do
      {
        if ( !*v9 )
          break;
        v10 = (unsigned __int8)v9[2];
        v11 = (unsigned int)(v10 + 3);
        if ( (unsigned int)v8 < 3 || v8 < (int)v11 )
          break;
        if ( *v9 == 41 )
        {
          if ( (_BYTE)v10 != 16 )
            return 3221225659LL;
          v12 = v9 + 3;
          if ( (&a2[1] >= a2 ? 0x10 : 0) != 0 )
          {
            do
            {
              v13 = *v12++;
              *((_BYTE *)&a2->Data1 + v2++) = v13;
            }
            while ( v2 < (&a2[1] >= a2 ? 0x10 : 0) );
          }
          a2->Data1 = _byteswap_ulong(a2->Data1);
          a2->Data2 = __ROR2__(a2->Data2, 8);
          a2->Data3 = __ROR2__(a2->Data3, 8);
          return 0LL;
        }
        v8 -= v11;
        v9 += v11;
      }
      while ( v8 > 0 );
    }
    ++v5;
  }
  return 3221225659LL;
}
