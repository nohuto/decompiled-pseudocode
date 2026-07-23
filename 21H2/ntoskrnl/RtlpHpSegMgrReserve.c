/*
 * XREFs of RtlpHpSegMgrReserve @ 0x14022220C
 * Callers:
 *     RtlpHpSegMgrAllocate @ 0x140222154 (RtlpHpSegMgrAllocate.c)
 * Callees:
 *     RtlpHpSegMgrVaCtxAlloc @ 0x140222330 (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpSegMgrVaCtxInitialize @ 0x1402227F4 (RtlpHpSegMgrVaCtxInitialize.c)
 *     RtlpHpFreeVA @ 0x1403054C0 (RtlpHpFreeVA.c)
 *     RtlpHpAllocVA @ 0x140315AA0 (RtlpHpAllocVA.c)
 */

__int64 __fastcall RtlpHpSegMgrReserve(__int64 a1, unsigned int a2, __int64 *a3, unsigned int *a4, _DWORD *a5)
{
  unsigned int v6; // esi
  __int64 v8; // rbx
  __int64 v10; // rdi
  bool v11; // cf
  int v12; // ebx
  _DWORD *v13; // rax
  __int64 v14; // rax
  unsigned int v16[4]; // [rsp+30h] [rbp-20h] BYREF
  __int128 v17; // [rsp+40h] [rbp-10h] BYREF
  __int64 v18; // [rsp+80h] [rbp+30h] BYREF

  v6 = -*(_DWORD *)a1;
  v8 = v6;
  *(_QWORD *)v16 = v6;
  v18 = RtlpHpSegMgrVaCtxAlloc(a1, v6, a2);
  v10 = v18;
  if ( v18 )
  {
LABEL_6:
    v13 = a5;
    *a4 = v6;
    *a3 = v10;
    *v13 = v8;
    v14 = 0LL;
    v18 = 0LL;
    v12 = 0;
    goto LABEL_7;
  }
  if ( (*(_BYTE *)(a1 + 13) & 7) != 0 )
  {
    if ( v6 < 0x200000 )
      v8 = 0x200000LL;
    *(_QWORD *)v16 = v8;
  }
  v11 = (*(_DWORD *)(*(_QWORD *)(a1 + 56) + 20LL) & 0x40000000) != 0;
  v17 = *(_OWORD *)(a1 + 40);
  v12 = RtlpHpAllocVA((unsigned int)&v18, (unsigned int)v16, v8, 0x2000, v11 ? 64 : 4, (__int64)&v17);
  if ( v12 >= 0 )
  {
    LODWORD(v8) = v16[0];
    v10 = v18;
    if ( (unsigned __int64)v6 < *(_QWORD *)v16 )
      RtlpHpSegMgrVaCtxInitialize(a1, v18, v6, v16[0]);
    goto LABEL_6;
  }
  v14 = v18;
LABEL_7:
  if ( v14 )
  {
    v17 = *(_OWORD *)(a1 + 40);
    RtlpHpFreeVA(&v18, v16, 0x8000LL, &v17);
  }
  return (unsigned int)v12;
}
