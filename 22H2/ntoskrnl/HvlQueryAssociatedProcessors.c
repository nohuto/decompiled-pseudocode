/*
 * XREFs of HvlQueryAssociatedProcessors @ 0x1404F5CA0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038FDC0 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x1404F24C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F30B0 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlQueryAssociatedProcessors(int a1, unsigned int *a2, _DWORD *a3)
{
  unsigned int v7; // edi
  _QWORD *v8; // rbx
  unsigned int *v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned int *v12; // r15
  __int64 v13; // r9
  unsigned int v14; // ecx
  unsigned __int16 *v15; // rdx
  __int64 v16; // r8
  int v17; // eax
  __int128 v18; // [rsp+20h] [rbp-58h] BYREF
  __int128 v19; // [rsp+30h] [rbp-48h]
  __int128 v20; // [rsp+40h] [rbp-38h] BYREF
  __int128 v21; // [rsp+50h] [rbp-28h]

  v20 = 0LL;
  v21 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  if ( (HvlpFlags & 2) == 0 )
    return 3221225506LL;
  v7 = 0;
  if ( !a2 )
    return 3221225485LL;
  v8 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v20, 1, 0LL, 8LL);
  v9 = (unsigned int *)HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v18, 2, 0LL, 2056LL);
  v10 = *((_QWORD *)&v19 + 1);
  v11 = *((_QWORD *)&v21 + 1);
  v12 = v9;
  *(_DWORD *)v8 = a1;
  if ( (unsigned __int16)HvcallInitiateHypercall(138, v11, v10, v13) )
  {
    v7 = -1073741823;
  }
  else
  {
    v14 = *v12;
    if ( *a2 < *v12 )
    {
      v7 = -1073741789;
    }
    else if ( v14 )
    {
      v15 = (unsigned __int16 *)(v12 + 1);
      v16 = v14;
      do
      {
        v17 = *v15++;
        *a3++ = v17;
        --v16;
      }
      while ( v16 );
    }
    *a2 = v14;
  }
  HvlpReleaseHypercallPage((__int64)&v18);
  HvlpReleaseHypercallPage((__int64)&v20);
  return v7;
}
