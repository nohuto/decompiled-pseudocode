/*
 * XREFs of WmipLegacyEtwCallback @ 0x1409337A0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseMutex @ 0x1402F92F0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     WmipReferenceEntry @ 0x1406339F4 (WmipReferenceEntry.c)
 *     WmipQueueLegacyEtwWork @ 0x1407C7B68 (WmipQueueLegacyEtwWork.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void __fastcall WmipLegacyEtwCallback(__int64 a1, unsigned __int8 a2, _QWORD *a3, _QWORD *a4)
{
  int v7; // ebx
  __int64 v8; // rax
  __int64 *v9; // r14
  __int64 *v10; // rax
  int v11; // ecx
  _QWORD *PoolWithTag; // rax
  _QWORD *v13; // rsi
  __int64 v14; // r12
  __int64 *i; // rdi
  int v16; // eax
  ULONG_PTR v17; // rbx
  int v18; // eax
  unsigned int v19; // eax

  if ( a2 <= 1u )
  {
    v7 = 0;
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    if ( a4[14] )
    {
      v8 = a2 ? *a3 : 0LL;
      v9 = a4 + 7;
      a4[15] = v8;
      v10 = (__int64 *)a4[7];
      if ( v10 != a4 + 7 )
      {
        do
        {
          v11 = *((_DWORD *)v10 + 4);
          if ( (v11 & 0x100000) != 0 && (a2 || (v11 & 0x200000) != 0) )
            ++v7;
          v10 = (__int64 *)*v10;
        }
        while ( v10 != v9 );
        if ( v7 )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v7 + 40, 0x70696D57u);
          v13 = PoolWithTag;
          if ( PoolWithTag )
          {
            *((_DWORD *)PoolWithTag + 4) = 2;
            v14 = 0LL;
            PoolWithTag[3] = *a3;
            *((_BYTE *)PoolWithTag + 36) = a2;
            *((_DWORD *)PoolWithTag + 8) = v7;
            for ( i = (__int64 *)*v9; i != v9; i = (__int64 *)*i )
            {
              v16 = *((_DWORD *)i + 4);
              if ( (v16 & 0x100000) != 0 && (a2 || (v16 & 0x200000) != 0) )
              {
                v17 = i[8];
                WmipReferenceEntry(v17);
                v13[v14 + 5] = v17;
                v14 = (unsigned int)(v14 + 1);
                v18 = *((_DWORD *)i + 4);
                if ( a2 )
                  v19 = v18 | 0x200000;
                else
                  v19 = v18 & 0xFFDFFFFF;
                *((_DWORD *)i + 4) = v19;
              }
            }
            WmipQueueLegacyEtwWork(v13, (ULONG_PTR)a4, 0LL);
          }
        }
      }
    }
    KeReleaseMutex(&WmipSMMutex, 0);
  }
}
