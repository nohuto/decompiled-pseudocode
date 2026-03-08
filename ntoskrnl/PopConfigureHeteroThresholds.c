/*
 * XREFs of PopConfigureHeteroThresholds @ 0x140827BD0
 * Callers:
 *     PopConfigureHeteroPolicies @ 0x1408273AC (PopConfigureHeteroPolicies.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopConfigureHeteroThresholds(__int64 a1, unsigned __int8 a2)
{
  __int64 result; // rax
  unsigned __int8 v4; // si
  unsigned __int8 v5; // bp
  _BYTE *v6; // r14
  unsigned __int8 v7; // bl
  __int64 v8; // r13
  unsigned __int8 v9; // di
  __int64 *v10; // r10
  __int64 v11; // r15
  __int64 v12; // rdx
  unsigned __int8 v13; // r9
  unsigned __int8 v14; // r8
  unsigned __int8 v15; // dl
  unsigned __int8 v16; // dl
  __int64 v17; // [rsp+40h] [rbp+18h]

  result = 0LL;
  v4 = 0;
  v17 = 0LL;
  v5 = 0;
  v6 = &unk_140C0CBF4;
  v7 = a2;
  v8 = 7LL;
  v9 = a2;
  v10 = 0LL;
  do
  {
    v11 = *((unsigned int *)v6 - 1);
    if ( !*v6 )
    {
      v4 = 0;
      v5 = 0;
      v10 = 0LL;
      v7 = a2;
      v9 = a2;
    }
    switch ( (_DWORD)v11 )
    {
      case 0:
LABEL_12:
        v10 = &PpmCurrentProfile[55 * dword_140C3D48C + 5];
        HIDWORD(v17) = HIDWORD(result) | 0x3C00000;
        result = v17;
        goto LABEL_15;
      case 1:
        v12 = PpmEntryLevelPerfProfile;
        goto LABEL_14;
      case 2:
        v12 = PpmBackgroundProfile;
        goto LABEL_14;
    }
    if ( (_DWORD)v11 != 3 )
    {
      switch ( (_DWORD)v11 )
      {
        case 4:
          goto LABEL_12;
        case 5:
          v12 = PpmEcoQosProfile;
          break;
        case 6:
          v12 = PpmUtilityQosProfile;
          break;
        default:
          goto LABEL_12;
      }
LABEL_14:
      if ( !v12 )
        goto LABEL_15;
      goto LABEL_41;
    }
    v12 = PpmMultimediaQosProfile;
    if ( !PpmMultimediaQosProfile )
      goto LABEL_12;
LABEL_41:
    v10 = (__int64 *)(440LL * dword_140C3D48C + v12 + 40);
    result = *v10;
    v17 = *v10;
LABEL_15:
    if ( v10 )
    {
      if ( (v17 & 0x40000000000000LL) != 0 )
        v7 = *((_BYTE *)v10 + 434);
      if ( (v17 & 0x80000000000000LL) != 0 )
        v4 = *((_BYTE *)v10 + 432);
      if ( (v17 & 0x100000000000000LL) != 0 )
        v9 = *((_BYTE *)v10 + 435);
      if ( (v17 & 0x200000000000000LL) != 0 )
        v5 = *((_BYTE *)v10 + 433);
    }
    v13 = v5;
    v14 = v4;
    if ( v5 > a2 )
      v13 = a2;
    v15 = v9;
    if ( v4 > a2 )
      v14 = a2;
    if ( v9 > a2 )
      v15 = a2;
    v9 = v15;
    v16 = v7;
    v5 = v9;
    if ( v7 > a2 )
      v16 = a2;
    *(_BYTE *)(a1 + 2 * v11 + 77) = v9;
    v7 = v16;
    *(_BYTE *)(a1 + 2 * v11 + 76) = v16;
    v4 = v16;
    if ( v14 <= v16 )
      v4 = v14;
    if ( v13 <= v9 )
      v5 = v13;
    *(_BYTE *)(a1 + 2 * v11 + 90) = v4;
    v6 += 8;
    *(_BYTE *)(a1 + 2 * v11 + 91) = v5;
    --v8;
  }
  while ( v8 );
  return result;
}
