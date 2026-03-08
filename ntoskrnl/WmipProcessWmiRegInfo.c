/*
 * XREFs of WmipProcessWmiRegInfo @ 0x140867FA4
 * Callers:
 *     WmipRegisterOrUpdateDS @ 0x14086785C (WmipRegisterOrUpdateDS.c)
 * Callees:
 *     WmipUpdateDataSource @ 0x1407FB4E8 (WmipUpdateDataSource.c)
 *     WmipAddDataSource @ 0x140867978 (WmipAddDataSource.c)
 *     WmipValidateWmiRegInfoString @ 0x1408680AC (WmipValidateWmiRegInfoString.c)
 */

__int64 __fastcall WmipProcessWmiRegInfo(__int64 a1, unsigned int *a2, unsigned int a3, char a4)
{
  unsigned int v4; // ebx
  unsigned int v6; // esi
  unsigned int *v7; // rdi
  int v9; // ebp
  __int64 v10; // rdx
  int v11; // ecx
  int updated; // eax
  int v13; // eax
  __int64 v14; // rax
  unsigned __int16 *v16; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int16 *v17; // [rsp+68h] [rbp+10h] BYREF

  v4 = 0;
  v6 = a3;
  v7 = a2;
  v16 = 0LL;
  v9 = 0;
  v17 = 0LL;
  if ( *a2 > a3 )
  {
LABEL_17:
    v11 = -1073741811;
  }
  else
  {
    while ( 1 )
    {
      v11 = WmipValidateWmiRegInfoString(v7, v6, v7[2], &v16);
      if ( v11 < 0 )
        break;
      v11 = WmipValidateWmiRegInfoString(v7, v10, v7[3], &v17);
      if ( v11 < 0 )
        break;
      if ( 32 * v7[4] + 24 > v6 )
        goto LABEL_17;
      if ( a4 )
        updated = WmipUpdateDataSource(a1, (__int64)v7, v6);
      else
        updated = WmipAddDataSource(a1, (__int64)v7, v6, v16, v17);
      v11 = updated;
      v13 = v9 + 1;
      if ( v11 < 0 )
        v13 = v9;
      v9 = v13;
      v14 = v7[1];
      if ( !(_DWORD)v14 )
        break;
      if ( v6 < (unsigned int)v14 )
        break;
      v6 -= v14;
      if ( v6 < 0x18 )
        break;
      v7 = (unsigned int *)((char *)v7 + v14);
      if ( (unsigned int *)(((unsigned __int64)v7 + 7) & 0xFFFFFFFFFFFFFFF8uLL) != v7 )
        break;
      if ( *v7 > v6 )
        goto LABEL_17;
    }
  }
  if ( !v9 )
    return (unsigned int)v11;
  return v4;
}
