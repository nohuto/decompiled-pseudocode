/*
 * XREFs of PiDevCfgConfigurePropertyMatchCallback @ 0x14095A6C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall PiDevCfgConfigurePropertyMatchCallback(__int64 a1, __int64 a2)
{
  char v2; // r8
  __int64 v3; // rdx
  DEVPROPKEY **v4; // r9
  unsigned int v5; // r10d
  DEVPROPKEY *v6; // r11
  __int64 v7; // rdx
  DEVPROPKEY **v8; // r9
  int v9; // r10d
  DEVPROPKEY *v10; // r11
  __int64 v11; // rdx

  v2 = 1;
  if ( (*(_DWORD *)(a2 + 104) & 2) != 0 )
    goto LABEL_11;
  v3 = *(_QWORD *)a1 - *(_QWORD *)off_140D537D0[0];
  if ( *(_QWORD *)a1 == *(_QWORD *)off_140D537D0[0] )
    v3 = *(_QWORD *)(a1 + 8) - *(_QWORD *)off_140D537D0[0]->fmtid.Data4;
  if ( v3 )
  {
LABEL_11:
    v8 = &off_140D532F8;
    v9 = 0;
    while ( 1 )
    {
      v10 = *v8;
      if ( (*v8)->pid == *(_DWORD *)(a1 + 16) )
      {
        v11 = *(_QWORD *)&v10->fmtid.Data1 - *(_QWORD *)a1;
        if ( *(_QWORD *)&v10->fmtid.Data1 == *(_QWORD *)a1 )
          v11 = *(_QWORD *)v10->fmtid.Data4 - *(_QWORD *)(a1 + 8);
        if ( !v11 )
          break;
      }
      ++v9;
      ++v8;
      if ( v9 )
        return v2;
    }
  }
  else
  {
    v4 = off_140D537D0;
    v5 = 0;
    while ( 1 )
    {
      v6 = *v4;
      if ( (*v4)->pid == *(_DWORD *)(a1 + 16) )
      {
        v7 = *(_QWORD *)&v6->fmtid.Data1 - *(_QWORD *)a1;
        if ( *(_QWORD *)&v6->fmtid.Data1 == *(_QWORD *)a1 )
          v7 = *(_QWORD *)v6->fmtid.Data4 - *(_QWORD *)(a1 + 8);
        if ( !v7 )
          break;
      }
      ++v5;
      ++v4;
      if ( v5 >= 0xA )
        goto LABEL_11;
    }
  }
  return 0;
}
