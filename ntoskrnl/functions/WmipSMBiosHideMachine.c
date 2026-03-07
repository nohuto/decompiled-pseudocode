void __fastcall WmipSMBiosHideMachine(_BYTE *a1, int a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdi
  unsigned __int8 v6; // si
  unsigned int v7; // esi
  unsigned __int8 *v8; // rbx
  unsigned __int8 v9; // di
  unsigned int v10; // edi
  __int64 v11; // rbx
  unsigned __int8 v12; // si
  unsigned int v13; // edi
  __int64 v14; // rbx
  unsigned __int8 v15; // si
  __int64 v16; // [rsp+30h] [rbp-10h] BYREF
  __int64 v17; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v18; // [rsp+70h] [rbp+30h] BYREF
  __int64 v19; // [rsp+80h] [rbp+40h] BYREF
  unsigned __int8 *v20; // [rsp+88h] [rbp+48h] BYREF

  if ( !a1 )
    return;
  v16 = 0LL;
  v19 = 0LL;
  v17 = 0LL;
  v20 = 0LL;
  v18 = 0;
  if ( !a2 )
    return;
  v4 = 0;
  while ( (int)WmipSMBiosFindStructure(0, v4, &v19, &v18, a1, a2) >= 0 )
  {
    if ( v4 )
      return;
    v5 = v19;
    v4 = 1;
    v6 = *(_BYTE *)(v19 + 1);
    if ( v6 > 4u )
      WmipSMBiosFindStringAndZero(v19, *(unsigned __int8 *)(v19 + 4), v18);
    if ( v6 > 5u )
      WmipSMBiosFindStringAndZero(v5, *(unsigned __int8 *)(v5 + 5), v18);
  }
  v7 = 0;
  while ( (int)WmipSMBiosFindStructure(1, v7, &v20, &v18, a1, a2) >= 0 )
  {
    if ( v7 )
      return;
    v8 = v20;
    v7 = 1;
    v9 = v20[1];
    if ( v9 > 4u )
      WmipSMBiosFindStringAndZero((__int64)v20, v20[4], v18);
    if ( v9 > 5u )
      WmipSMBiosFindStringAndZero((__int64)v8, v8[5], v18);
    if ( v9 > 0x1Au )
    {
      WmipSMBiosFindStringAndZero((__int64)v8, v8[26], v18);
      goto LABEL_20;
    }
    if ( v9 > 0x19u )
LABEL_20:
      WmipSMBiosFindStringAndZero((__int64)v8, v8[25], v18);
  }
  v10 = 0;
  while ( (int)WmipSMBiosFindStructure(2, v10, &v16, &v18, a1, a2) >= 0 )
  {
    v11 = v16;
    ++v10;
    v12 = *(_BYTE *)(v16 + 1);
    if ( v12 > 4u )
      WmipSMBiosFindStringAndZero(v16, *(unsigned __int8 *)(v16 + 4), v18);
    if ( v12 > 5u )
      WmipSMBiosFindStringAndZero(v11, *(unsigned __int8 *)(v11 + 5), v18);
  }
  v13 = 0;
  while ( (int)WmipSMBiosFindStructure(4, v13, &v17, &v18, a1, a2) >= 0 )
  {
    v14 = v17;
    ++v13;
    v15 = *(_BYTE *)(v17 + 1);
    if ( v15 > 7u )
      WmipSMBiosFindStringAndZero(v17, *(unsigned __int8 *)(v17 + 7), v18);
    if ( v15 > 0x10u )
      WmipSMBiosFindStringAndZero(v14, *(unsigned __int8 *)(v14 + 16), v18);
  }
}
