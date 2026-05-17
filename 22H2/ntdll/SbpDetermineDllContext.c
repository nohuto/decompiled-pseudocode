/*
 * XREFs of SbpDetermineDllContext @ 0x18003DA14
 * Callers:
 *     SbUpdateSwitchContextBasedOnDll @ 0x18003DE04 (SbUpdateSwitchContextBasedOnDll.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlImageNtHeader @ 0x180035BD0 (RtlImageNtHeader.c)
 *     SbGetContextDetailsById @ 0x18003E058 (SbGetContextDetailsById.c)
 *     SbGetContextDetailsByGuid @ 0x18003E080 (SbGetContextDetailsByGuid.c)
 *     SbGetContextDetailsByVersion @ 0x18003F404 (SbGetContextDetailsByVersion.c)
 *     SbpRetrieveCompatibilityManifest @ 0x18007C7B8 (SbpRetrieveCompatibilityManifest.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 */

__int64 __fastcall SbpDetermineDllContext(unsigned __int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rax
  unsigned int v6; // edi
  unsigned int v7; // esi
  _BYTE *v9; // r14
  __int64 v10; // r15
  _DWORD *v11; // rdi
  _DWORD *v12; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v13; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v14; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v17[512]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = 0;
  v16 = 512LL;
  v13 = 0LL;
  v15 = 0LL;
  v14 = 0LL;
  v12 = v17;
  if ( a2 && a1 )
  {
    v5 = RtlImageNtHeader(a1);
    v6 = *(unsigned __int16 *)(v5 + 72);
    v7 = *(unsigned __int16 *)(v5 + 74);
    SbGetContextDetailsById(4LL, &v13);
    if ( (unsigned __int16)v6 > *(_WORD *)(v13 + 20)
      || (_WORD)v6 == *(_WORD *)(v13 + 20) && (unsigned __int16)v7 >= *(_WORD *)(v13 + 22) )
    {
      *a2 = v13;
    }
    else
    {
      if ( (unsigned int)SbpRetrieveCompatibilityManifest(a1, &v12, &v16) )
      {
        v9 = v12;
        if ( v12 )
        {
          v7 += v6 << 16;
          if ( *v12 )
          {
            v10 = (unsigned int)*v12;
            v11 = v12 + 2;
            do
            {
              if ( v11[4] == 1
                && (unsigned int)SbGetContextDetailsByGuid(v11, &v14)
                && *(unsigned __int16 *)(v14 + 22) + (*(unsigned __int16 *)(v14 + 20) << 16) >= v7 )
              {
                v7 = *(unsigned __int16 *)(v14 + 22) + (*(unsigned __int16 *)(v14 + 20) << 16);
              }
              v11 += 8;
              --v10;
            }
            while ( v10 );
          }
          if ( v9 != v17 )
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v12);
          v6 = HIWORD(v7);
        }
      }
      SbGetContextDetailsByVersion((unsigned __int16)v6, (unsigned __int16)v7, &v15);
      *a2 = v15;
    }
    return 1;
  }
  return v2;
}
