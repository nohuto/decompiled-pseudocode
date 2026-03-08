/*
 * XREFs of HalpUpdateConfigurationFromMsct @ 0x140B8E444
 * Callers:
 *     HalpNumaInitializeStaticConfiguration @ 0x140B63268 (HalpNumaInitializeStaticConfiguration.c)
 *     HalpGetNumaProcMemoryCount @ 0x140B8DF8C (HalpGetNumaProcMemoryCount.c)
 * Callees:
 *     <none>
 */

void __fastcall HalpUpdateConfigurationFromMsct(
        unsigned int *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned int a4,
        _DWORD *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // rbx
  __int64 v10; // r11
  unsigned int v11; // r15d
  unsigned int v12; // ebp
  unsigned __int64 v13; // rdi
  __int64 v14; // r8
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // r10
  unsigned int v17; // r12d
  __int64 v18; // rcx
  unsigned int *v19; // rdx
  __int64 v20; // rax
  unsigned int v21; // ebx
  unsigned int v22; // r10d
  unsigned int v23; // edx
  unsigned int v24; // r11d
  unsigned int v25; // ecx
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned int i; // ecx
  __int64 v29; // rax
  int v30; // edx
  unsigned int v31; // r9d
  __int64 v32; // rax
  unsigned int v33; // [rsp+0h] [rbp-58h]
  unsigned __int64 v34; // [rsp+8h] [rbp-50h]
  __int64 v35; // [rsp+10h] [rbp-48h]

  v9 = *(unsigned int *)(HalpAcpiMsct + 4);
  if ( (unsigned int)v9 < 0x38 )
    return;
  v10 = *(unsigned int *)(HalpAcpiMsct + 36);
  if ( (unsigned int)v9 < (unsigned int)v10
    || (unsigned int)v10 < 0x38
    || a5 && (unsigned int)(*(_DWORD *)(HalpAcpiMsct + 44) + 1) < *a5 )
  {
    return;
  }
  v11 = *(_DWORD *)(HalpAcpiMsct + 40) + 1;
  if ( v11 > a2 )
    return;
  v12 = *a1;
  if ( *a1 > a2 || a4 && *a3 > a4 )
    return;
  LODWORD(v13) = 0;
  v14 = HalpAcpiMsct + v10;
  v33 = 0;
  v15 = HalpAcpiMsct + v9;
  v16 = HalpAcpiMsct + v10 + 2;
  v17 = 0;
  v34 = v16;
  v18 = HalpAcpiMsct + v10;
  if ( v16 > HalpAcpiMsct + v9 )
    goto LABEL_31;
  v19 = (unsigned int *)(HalpAcpiMsct + v10 + 2);
LABEL_12:
  v20 = *(unsigned __int8 *)(v18 + 1);
  if ( (unsigned __int8)v20 < 2u || (v35 = v18 + v20, v18 + v20 > v15) )
  {
LABEL_30:
    v16 = v34;
LABEL_31:
    if ( (unsigned int)v13 == (1LL << v12) - 1 && v11 == v17 )
    {
      if ( v16 <= v15 )
      {
        do
        {
          v27 = *(unsigned __int8 *)(v14 + 1);
          if ( (unsigned __int8)v27 < 2u || v14 + v27 > v15 )
            break;
          for ( i = *(_DWORD *)(v14 + 2); i <= *(_DWORD *)(v14 + 6); ++i )
          {
            v29 = 0LL;
            v30 = *(_DWORD *)(v14 + 10);
            if ( *a1 )
            {
              while ( *(_DWORD *)(a6 + 4 * v29) != i )
              {
                v29 = (unsigned int)(v29 + 1);
                if ( (unsigned int)v29 >= *a1 )
                  goto LABEL_42;
              }
              v30 -= *(_DWORD *)(a7 + 4 * v29);
            }
LABEL_42:
            *(_DWORD *)(a7 + 4 * v29) = *(_DWORD *)(v14 + 10);
            if ( (_DWORD)v29 == *a1 )
            {
              *(_DWORD *)(a6 + 4 * v29) = i;
              ++*a1;
            }
            v31 = *a3;
            *a3 += v30;
            if ( a8 && v30 )
            {
              do
              {
                v32 = v31++;
                *(_DWORD *)(a8 + 4 * v32) = i;
                --v30;
              }
              while ( v30 );
            }
          }
          v14 += *(unsigned __int8 *)(v14 + 1);
        }
        while ( v14 + 2 <= v15 );
      }
      if ( a5 )
        *a5 = *(_DWORD *)(HalpAcpiMsct + 44) + 1;
    }
    return;
  }
  v21 = *(_DWORD *)(v18 + 6);
  v22 = *v19;
  if ( v21 >= *v19 )
  {
    v23 = v21 - v22 + 1;
    if ( v23 <= a2 )
    {
      v17 += v23;
      if ( v17 <= a2 )
      {
        v24 = *(_DWORD *)(v18 + 10);
        if ( v24 <= 0x800 && (!a4 || v24 <= a4) )
        {
          v25 = v23 * v24 + v33;
          v33 = v25;
          if ( v25 <= 0x800 && (!a4 || v25 <= a4) )
          {
            while ( 1 )
            {
              v26 = 0LL;
              if ( v12 )
              {
                while ( *(_DWORD *)(a6 + 4 * v26) != v22 )
                {
                  v26 = (unsigned int)(v26 + 1);
                  if ( (unsigned int)v26 >= v12 )
                    goto LABEL_28;
                }
                v13 = (unsigned int)v13 | (unsigned __int64)(1LL << v26);
                if ( *(_DWORD *)(a7 + 4LL * (unsigned int)v26) > v24 )
                  break;
              }
LABEL_28:
              if ( ++v22 > v21 )
              {
                v18 = v35;
                v19 = (unsigned int *)(v35 + 2);
                if ( v35 + 2 <= v15 )
                  goto LABEL_12;
                goto LABEL_30;
              }
            }
          }
        }
      }
    }
  }
}
