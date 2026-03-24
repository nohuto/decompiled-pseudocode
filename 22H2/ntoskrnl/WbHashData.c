/*
 * XREFs of WbHashData @ 0x140667840
 * Callers:
 *     sub_1406677A4 @ 0x1406677A4 (sub_1406677A4.c)
 * Callees:
 *     BCryptGetProperty @ 0x14066795C (BCryptGetProperty.c)
 *     BCryptDestroyHash @ 0x1406679E8 (BCryptDestroyHash.c)
 *     BCryptFinishHash @ 0x140667A3C (BCryptFinishHash.c)
 *     BCryptCreateHash @ 0x140667AB0 (BCryptCreateHash.c)
 *     BCryptHashData @ 0x140667B44 (BCryptHashData.c)
 *     WbAlloc @ 0x1406C69C4 (WbAlloc.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WbHashData(PUCHAR pbInput, ULONG cbInput, PUCHAR *a3, _DWORD *a4)
{
  NTSTATUS Property; // ebx
  ULONG v9; // r9d
  ULONG v10; // r9d
  ULONG v11; // r9d
  PUCHAR v12; // rdi
  ULONG *pcbResult; // [rsp+20h] [rbp-40h]
  ULONG v15; // [rsp+28h] [rbp-38h]
  ULONG v16; // [rsp+28h] [rbp-38h]
  ULONG v17; // [rsp+30h] [rbp-30h]
  UCHAR pbOutput[4]; // [rsp+40h] [rbp-20h] BYREF
  ULONG v19; // [rsp+44h] [rbp-1Ch] BYREF
  BCRYPT_HASH_HANDLE phHash; // [rsp+48h] [rbp-18h] BYREF
  PUCHAR v21; // [rsp+50h] [rbp-10h]

  phHash = 0LL;
  v21 = 0LL;
  *(_DWORD *)pbOutput = 0;
  v19 = 0;
  if ( *(__int64 *)((char *)&qword_140C53DC4 + 4) )
  {
    Property = BCryptCreateHash(
                 *(BCRYPT_ALG_HANDLE *)((char *)&qword_140C53DC4 + 4),
                 &phHash,
                 0LL,
                 0,
                 (PUCHAR)pcbResult,
                 v15,
                 v17);
    if ( Property >= 0 )
    {
      Property = BCryptGetProperty(
                   *(BCRYPT_HANDLE *)((char *)&qword_140C53DC4 + 4),
                   L"HashDigestLength",
                   pbOutput,
                   v9,
                   &v19,
                   v16);
      if ( Property >= 0 )
      {
        Property = WbAlloc(*(unsigned int *)pbOutput);
        if ( Property < 0 || (Property = BCryptHashData(phHash, pbInput, cbInput, v10), Property < 0) )
        {
          v12 = v21;
        }
        else
        {
          v12 = v21;
          Property = BCryptFinishHash(phHash, v21, *(ULONG *)pbOutput, v11);
          if ( Property >= 0 )
          {
            if ( a3 )
            {
              *a3 = v12;
              v12 = 0LL;
            }
            if ( a4 )
              *a4 = *(_DWORD *)pbOutput;
          }
        }
        if ( v12 )
          ExFreePoolWithTag(v12, 0x42524157u);
      }
    }
    if ( phHash )
      BCryptDestroyHash(phHash);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)Property;
}
