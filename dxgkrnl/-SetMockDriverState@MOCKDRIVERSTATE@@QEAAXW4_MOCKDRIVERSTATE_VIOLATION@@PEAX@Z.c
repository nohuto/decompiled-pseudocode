/*
 * XREFs of ?SetMockDriverState@MOCKDRIVERSTATE@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEAX@Z @ 0x1C0052BB0
 * Callers:
 *     ?DXGADAPTER_SetMockDriverState@@YAXPEAVDXGADAPTER@@W4_MOCKDRIVERSTATE_VIOLATION@@PEAX@Z @ 0x1C0047EE0 (-DXGADAPTER_SetMockDriverState@@YAXPEAVDXGADAPTER@@W4_MOCKDRIVERSTATE_VIOLATION@@PEAX@Z.c)
 * Callees:
 *     ?RtlStringCbCopyA@@YAJPEAD_KPEBD@Z @ 0x1C0015A38 (-RtlStringCbCopyA@@YAJPEAD_KPEBD@Z.c)
 *     ?QueueDurationViolationWorkItem@@YAXPEAVDXGADAPTER@@IPEAU_MOCKDRIVERSTATE_DURATION@@@Z @ 0x1C00529EC (-QueueDurationViolationWorkItem@@YAXPEAVDXGADAPTER@@IPEAU_MOCKDRIVERSTATE_DURATION@@@Z.c)
 */

void __fastcall MOCKDRIVERSTATE::SetMockDriverState(__int64 *a1, int a2, unsigned int *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r11
  __int64 v10; // rax
  unsigned int v11; // r10d
  __int64 v12; // rdi
  char v13; // dl
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx

  if ( *((_BYTE *)a1 + 32) )
  {
    if ( a2 )
    {
      if ( a2 == 2 )
      {
        v5 = a1[2];
        if ( !*(_BYTE *)(v5 + 8) && *(_DWORD *)(a1[3] + 2760) > 1u )
        {
          v6 = *a3;
          if ( *(_DWORD *)(v5 + 3140) == a3[1] )
          {
            if ( *(_DWORD *)(v5 + 3132) )
              ++*(_DWORD *)(v5 + 3136);
          }
          else
          {
            ++*(_DWORD *)(v5 + 3132);
            *(_DWORD *)(a1[2] + 3136) = 0;
          }
          *(_DWORD *)(a1[2] + 3140) = a3[1];
          *(_DWORD *)(*a1 + 16 * (a3[2] + 10 * v6) + 68) = a3[1];
          v7 = a1[2];
          v8 = 3 * (*(unsigned int *)(v7 + 3128) + 8 * v6);
          *(_DWORD *)(v7 + 8 * v8 + 56) = a3[1];
          v8 += 8LL;
          *(_DWORD *)(a1[2] + 8 * v8 - 4) = a3[2];
          RtlStringCbCopyA((char *)(a1[2] + 8 * v8), 16LL, *((const char **)a3 + 2));
          *(_DWORD *)(*(_QWORD *)(v9 + 16) + 3128LL) = ((unsigned __int8)*(_DWORD *)(*(_QWORD *)(v9 + 16) + 3128LL) + 1) & 7;
          v10 = *(_QWORD *)(v9 + 16);
          if ( *(_DWORD *)(v10 + 3132) == 4 )
          {
            QueueDurationViolationWorkItem(
              *(struct DXGADAPTER **)(v9 + 24),
              v6,
              *(struct _MOCKDRIVERSTATE_DURATION **)(v9 + 16));
          }
          else if ( *(_DWORD *)(v10 + 3136) == 16 )
          {
            *(_DWORD *)(v10 + 3132) = 0;
          }
        }
      }
    }
    else
    {
      v11 = 0;
      if ( a3[1] )
      {
        v12 = 5LL * *a3;
        do
        {
          v13 = a3[4 * v11 + 3];
          v14 = a3[4 * v11 + 2] + 2 * v12;
          v15 = v14 + 4;
          v16 = 2 * v14;
          *(_BYTE *)(*a1 + 16 * v15) = v13;
          v17 = *a1;
          if ( v13 )
          {
            *(_QWORD *)(v17 + 8 * v16 + 56) = *(_QWORD *)&a3[4 * v11 + 4];
          }
          else
          {
            *(_QWORD *)(v17 + 8 * v16 + 56) = 0LL;
            *(_DWORD *)(*a1 + 8 * v16 + 68) = 0;
          }
          ++v11;
        }
        while ( v11 < a3[1] );
      }
    }
  }
}
