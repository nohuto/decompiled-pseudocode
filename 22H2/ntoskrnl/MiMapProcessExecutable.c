/*
 * XREFs of MiMapProcessExecutable @ 0x1406FC5E0
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x1406FBB04 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     MiFillPteHierarchy @ 0x14028CAF0 (MiFillPteHierarchy.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MmMapViewOfSectionEx @ 0x1403529F0 (MmMapViewOfSectionEx.c)
 *     MiCfgInitializeProcess @ 0x1406FC70C (MiCfgInitializeProcess.c)
 *     PsMapSystemDlls @ 0x1406FC94C (PsMapSystemDlls.c)
 *     MiSessionCreate @ 0x14078610C (MiSessionCreate.c)
 */

__int64 __fastcall MiMapProcessExecutable(__int64 a1, __int64 a2, unsigned int *a3)
{
  int v3; // eax
  int v5; // ebx
  unsigned int v7; // eax
  __int64 v8; // r15
  int v9; // eax
  unsigned __int64 v10; // rcx
  int v11; // ebx
  unsigned int v12; // edi
  unsigned int v13; // esi
  int v14; // eax
  int v15; // eax
  __int64 result; // rax
  unsigned __int64 v17; // rcx
  char v18; // al
  __int64 v19; // [rsp+60h] [rbp-9h] BYREF
  __int64 v20; // [rsp+68h] [rbp-1h] BYREF
  __int64 v21; // [rsp+70h] [rbp+7h]
  _OWORD v22[2]; // [rsp+78h] [rbp+Fh] BYREF
  unsigned __int64 v23; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v24; // [rsp+E8h] [rbp+7Fh] BYREF

  v3 = *(_DWORD *)(a2 + 56);
  v5 = a2;
  memset(v22, 0, sizeof(v22));
  if ( (v3 & 0x20) == 0 )
    return 3221225545LL;
  if ( (*a3 & 0x80u) == 0 || (result = MiSessionCreate(a1), (int)result >= 0) )
  {
    v7 = *a3;
    v24 = 0LL;
    v23 = 0LL;
    v8 = 4LL;
    v19 = 0LL;
    v20 = 5LL;
    v21 = 32LL;
    v9 = MmMapViewOfSectionEx(
           v5,
           a1,
           (int)&v23,
           (__int64)&v19,
           (__int64)&v24,
           (unsigned __int8)(v7 & 0x10) << 25,
           4,
           &v20,
           1,
           0,
           0LL);
    v10 = v23;
    v11 = v9;
    *(_QWORD *)(a1 + 1312) = v23;
    if ( v9 >= 0 )
    {
      v12 = *a3;
      v13 = 0;
      if ( (*a3 & 0x10) != 0 )
      {
        MiFillPteHierarchy(v10, (unsigned __int64 *)v22);
        do
        {
          v17 = *(&v21 + v8--);
          v18 = MI_READ_PTE_LOCK_FREE(v17);
          if ( (v18 & 1) == 0 )
            break;
          if ( v18 < 0 )
          {
            v13 = 1;
            break;
          }
        }
        while ( v8 != 1 );
        if ( v13 )
          v13 &= -((v12 & 0x20) != 0);
        else
          *a3 = v12 & 0xFFFFFFEF;
      }
      v14 = PsMapSystemDlls(a1, v13);
      if ( v14 < 0 )
        v11 = v14;
      if ( v11 >= 0 )
      {
        v15 = MiCfgInitializeProcess(a1);
        if ( v15 < 0 )
          return (unsigned int)v15;
      }
    }
    return (unsigned int)v11;
  }
  return result;
}
