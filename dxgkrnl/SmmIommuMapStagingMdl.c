/*
 * XREFs of SmmIommuMapStagingMdl @ 0x1C006E458
 * Callers:
 *     SmmIommuMapReferenced @ 0x1C006E404 (SmmIommuMapReferenced.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     SmmIoMmuReferenceMdl @ 0x1C006E014 (SmmIoMmuReferenceMdl.c)
 *     SmmIoMmuUnmapStagingMdl @ 0x1C006E17C (SmmIoMmuUnmapStagingMdl.c)
 */

__int64 __fastcall SmmIommuMapStagingMdl(__int64 a1, unsigned int *a2)
{
  unsigned int v3; // esi
  int v5; // edi
  unsigned int v6; // edx
  __int64 v7; // rcx
  unsigned int v8; // edx
  _QWORD *v9; // r8
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  _QWORD v13[7]; // [rsp+20h] [rbp-38h] BYREF

  v3 = 0;
  while ( 1 )
  {
    v5 = SmmIoMmuReferenceMdl(a1 + 64, (__int64)a2, 1);
    if ( v5 < 0 )
      break;
    v6 = a2[7];
    if ( v6 )
    {
      v7 = *(_QWORD *)(a1 + 176);
      v8 = v6 << 12;
      *(_QWORD *)v7 = 0LL;
      *(_WORD *)(v7 + 8) = 8 * ((v8 >> 12) + 6);
      *(_WORD *)(v7 + 10) = 0;
      *(_QWORD *)(v7 + 32) = 0LL;
      *(_DWORD *)(v7 + 44) = 0;
      *(_DWORD *)(v7 + 40) = v8;
      v9 = *(_QWORD **)(a1 + 176);
      v10 = *(_QWORD *)(a1 + 48);
      if ( (unsigned int)(dword_1C013BBF8 - 2) <= 1 )
      {
        v13[0] = 2LL;
        v13[1] = v9 + 6;
        v11 = *((unsigned int *)v9 + 10);
        v9 = v13;
        v13[2] = v11 >> 12;
      }
      v5 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *))qword_1C013BC48)(v10, 3LL, v9);
      if ( v5 < 0 )
        break;
      v3 = a2[6];
    }
    if ( a2[6] == a2[4] )
      return (unsigned int)v5;
  }
  if ( v3 )
  {
    a2[4] = v3;
    a2[6] = 0;
    SmmIoMmuUnmapStagingMdl(a1, a2);
  }
  return (unsigned int)v5;
}
