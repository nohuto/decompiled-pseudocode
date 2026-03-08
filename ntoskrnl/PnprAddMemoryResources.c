/*
 * XREFs of PnprAddMemoryResources @ 0x140962664
 * Callers:
 *     PnprAddDeviceResources @ 0x1409625E0 (PnprAddDeviceResources.c)
 * Callees:
 *     RtlCmDecodeMemIoResource @ 0x1403706C0 (RtlCmDecodeMemIoResource.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnprAddMemoryResources(__int64 a1, _DWORD **a2)
{
  _DWORD *v3; // rbx
  _DWORD *v4; // r14
  __int64 v5; // rbp
  unsigned int *v6; // rbp
  __int64 v7; // rcx
  unsigned int v8; // edi
  int v9; // eax
  int v10; // eax
  unsigned int v11; // r12d
  _DWORD *i; // rsi
  __int64 j; // rdi
  int v14; // eax
  _DWORD *Pool2; // rax
  _DWORD *v16; // r13
  ULONGLONG v17; // rax
  void *v18; // rcx
  __int64 v20; // rcx
  int v21; // eax
  int v22; // eax
  int v23; // [rsp+70h] [rbp+8h]
  int v24; // [rsp+78h] [rbp+10h]
  ULONGLONG Start; // [rsp+80h] [rbp+18h] BYREF
  PCM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor; // [rsp+88h] [rbp+20h]

  Start = 0LL;
  v3 = *a2;
  v4 = *a2;
  if ( a1 )
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v5 = 0LL;
  v6 = *(unsigned int **)(v5 + 416);
  if ( !v6 )
  {
    v7 = PnprContext;
    v8 = 0;
    v9 = *(_DWORD *)(PnprContext + 33272);
    if ( !v9 )
      v9 = 631;
    *(_DWORD *)(PnprContext + 33272) = v9;
    v10 = *(_DWORD *)(v7 + 33276);
    if ( !v10 )
      v10 = 6;
    *(_DWORD *)(v7 + 33276) = v10;
    *a2 = v3;
    return v8;
  }
  v11 = 0;
  for ( i = v6 + 1; v11 < *v6; i = (_DWORD *)((char *)i + (unsigned int)(j + 36)) )
  {
    for ( j = 0LL; (unsigned int)j < i[3]; j = (unsigned int)(j + 1) )
    {
      Descriptor = (PCM_PARTIAL_RESOURCE_DESCRIPTOR)&i[4 * j + 4 + j];
      if ( ((Descriptor->Type - 3) & 0xFB) == 0 )
      {
        v14 = v3[1];
        v23 = v14;
        if ( v14 == *v3 )
        {
          v24 = v14 + 4;
          Pool2 = (_DWORD *)ExAllocatePool2(64LL, (unsigned int)(16 * (v14 + 5)), 1366322768LL);
          v16 = Pool2;
          if ( !Pool2 )
          {
            v20 = PnprContext;
            v8 = -1073741670;
            v21 = *(_DWORD *)(PnprContext + 33272);
            if ( !v21 )
              v21 = 671;
            *(_DWORD *)(PnprContext + 33272) = v21;
            v22 = *(_DWORD *)(v20 + 33276);
            if ( !v22 )
              v22 = 10;
            *(_DWORD *)(v20 + 33276) = v22;
            *a2 = v4;
            if ( v3 != v4 )
            {
              v18 = v3;
LABEL_23:
              ExFreePoolWithTag(v18, 0x51706E50u);
            }
            return v8;
          }
          memmove(Pool2, v3, (unsigned int)(16 * (v23 + 1)));
          *v16 = v24;
          if ( v3 != v4 )
            ExFreePoolWithTag(v3, 0x51706E50u);
          v3 = v16;
        }
        v17 = RtlCmDecodeMemIoResource(Descriptor, &Start);
        *(_QWORD *)&v3[4 * v3[1] + 4] = Start;
        *(_QWORD *)&v3[4 * v3[1] + 6] = v17;
        *((_QWORD *)v3 + 1) += v17;
        ++v3[1];
      }
    }
    ++v11;
  }
  v8 = 0;
  *a2 = v3;
  if ( v3 != v4 )
  {
    v18 = v4;
    goto LABEL_23;
  }
  return v8;
}
