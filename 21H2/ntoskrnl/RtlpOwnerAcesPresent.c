/*
 * XREFs of RtlpOwnerAcesPresent @ 0x140214630
 * Callers:
 *     RtlOwnerAcesPresent @ 0x140214610 (RtlOwnerAcesPresent.c)
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14026AA50 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SeComputeCreatorDeniedRights @ 0x14035A9E0 (SeComputeCreatorDeniedRights.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140372BC4 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     RtlpNewSecurityObject @ 0x1407169D0 (RtlpNewSecurityObject.c)
 * Callees:
 *     memcmp @ 0x1403D2B50 (memcmp.c)
 */

char __fastcall RtlpOwnerAcesPresent(unsigned __int8 a1, __int64 a2)
{
  _WORD *SeOwnerRightsSid; // r14
  unsigned int v4; // ebp
  unsigned __int8 *v5; // rbx
  unsigned int v6; // edi
  int v7; // r12d
  unsigned __int8 v8; // si
  unsigned int v9; // ecx
  __int64 v10; // rcx
  unsigned __int8 *v11; // rcx

  SeOwnerRightsSid = SeExports->SeOwnerRightsSid;
  if ( !a2 )
    return 0;
  v4 = *(unsigned __int16 *)(a2 + 4);
  v5 = (unsigned __int8 *)(a2 + 8);
  v6 = 0;
  if ( !*(_WORD *)(a2 + 4) )
    return 0;
  v7 = 104928;
  while ( 1 )
  {
    v8 = v5[1];
    if ( (v8 & 8) == 0 )
    {
      v9 = *v5;
      if ( (unsigned __int8)v9 <= 0x10u && _bittest(&v7, v9) )
      {
        v10 = 16LL * (*((_DWORD *)v5 + 2) & 1) + ((8LL * (*((_DWORD *)v5 + 2) & 2)) | 0xC);
      }
      else if ( (_BYTE)v9 == 4 )
      {
        v10 = 12LL;
      }
      else
      {
        if ( (unsigned __int8)v9 >= 0xBu && (unsigned __int8)(v9 - 13) > 1u )
          goto LABEL_13;
        v10 = 8LL;
      }
      v11 = &v5[v10];
      if ( v11 )
      {
        if ( *(_WORD *)v11 == *SeOwnerRightsSid
          && !memcmp(v11, SeOwnerRightsSid, 4 * ((unsigned __int64)*(unsigned __int16 *)v11 >> 8) + 8)
          && (!a1 || (v8 & a1) != 0) )
        {
          return 1;
        }
      }
    }
LABEL_13:
    ++v6;
    v5 += *((unsigned __int16 *)v5 + 1);
    if ( v6 >= v4 )
      return 0;
  }
}
