/*
 * XREFs of ?EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0265A98
 * Callers:
 *     ?EmitUpdateCommands@CHolographicViewerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0265BC0 (-EmitUpdateCommands@CHolographicViewerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ReferenceDwmProcess @ 0x1C00918D0 (ReferenceDwmProcess.c)
 *     CheckOrAcquireDwmStateLock @ 0x1C0091914 (CheckOrAcquireDwmStateLock.c)
 *     GreUnlockDwmState @ 0x1C0091AF0 (GreUnlockDwmState.c)
 */

char __fastcall DirectComposition::CHolographicViewerMarshaler::EmitInitialize(
        DirectComposition::CHolographicViewerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v2; // eax
  char v3; // si
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  char v9; // bp
  __int64 v10; // rax
  __int64 v11; // rcx
  void *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  char *v15; // rcx
  char v17; // [rsp+38h] [rbp-20h]
  void *v18; // [rsp+60h] [rbp+8h] BYREF
  __int64 v19; // [rsp+70h] [rbp+18h] BYREF

  v2 = *((_DWORD *)this + 15);
  v3 = 0;
  if ( v2 >= 0 && (v2 & 0x3F) == 0x3F )
  {
    v18 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x44uLL, &v18) )
    {
      v9 = CheckOrAcquireDwmStateLock(v6, v5, v7, v8);
      v10 = ReferenceDwmProcess();
      v12 = (void *)v10;
      if ( v10 )
      {
        v13 = *((_QWORD *)this + 13);
        v14 = *((_QWORD *)this + 16);
        v19 = 0LL;
        v17 = 0;
        if ( (int)ObDuplicateObject(v14, v13, v10, &v19, 0, 0, 6, v17) >= 0 )
        {
          v15 = (char *)v18;
          v3 = 1;
          *(_DWORD *)v18 = 68;
          *((_DWORD *)v15 + 1) = 177;
          *((_DWORD *)v15 + 2) = *((_DWORD *)this + 8);
          *((_DWORD *)v15 + 3) = *((_DWORD *)this + 16);
          *((_DWORD *)v15 + 4) = *((_DWORD *)this + 17);
          *(_QWORD *)(v15 + 20) = *(_QWORD *)((char *)this + 116);
          *(_OWORD *)(v15 + 28) = *(_OWORD *)((char *)this + 76);
          *((_DWORD *)v15 + 11) = *((_DWORD *)this + 18);
          *(_QWORD *)(v15 + 52) = v19;
          *((_DWORD *)v15 + 15) = *((_DWORD *)this + 31);
          *((_DWORD *)this + 15) |= 0x80000000;
        }
        ObfDereferenceObject(v12);
      }
      if ( v9 )
        GreUnlockDwmState(v11);
    }
  }
  return v3;
}
