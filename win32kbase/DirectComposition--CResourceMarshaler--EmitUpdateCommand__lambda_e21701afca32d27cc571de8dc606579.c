/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e21701afca32d27cc571de8dc6065791___ @ 0x1C025023C
 * Callers:
 *     ?EmitUpdateCommands@CGenericInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0250550 (-EmitUpdateCommands@CGenericInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e21701afca32d27cc571de8dc6065791___(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        __int64 a3)
{
  int v3; // ebx
  _DWORD *v6; // rdx
  __int64 v7; // rcx
  char result; // al
  _DWORD *v9; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  v9 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, (void **)&v9) )
    return 0;
  v6 = v9;
  *v9 = 24;
  *(_OWORD *)(v6 + 1) = 0LL;
  v6[5] = 0;
  v6[1] = 153;
  v6[2] = *(_DWORD *)(a1 + 32);
  v7 = *(_QWORD *)(*(_QWORD *)a3 + 224LL);
  if ( v7 )
    v3 = *(_DWORD *)(v7 + 32);
  v6[3] = v3;
  v6[4] = *(_DWORD *)(*(_QWORD *)a3 + 232LL);
  result = 1;
  v6[5] = *(_DWORD *)(*(_QWORD *)a3 + 236LL);
  return result;
}
