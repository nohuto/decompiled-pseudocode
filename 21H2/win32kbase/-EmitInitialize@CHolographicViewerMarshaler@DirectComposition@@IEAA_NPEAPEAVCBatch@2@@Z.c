/*
 * XREFs of ?EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01EE3D8
 * Callers:
 *     ?EmitUpdateCommands@CHolographicViewerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01EE500 (-EmitUpdateCommands@CHolographicViewerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     GreUnlockDwmState @ 0x1C00477B0 (GreUnlockDwmState.c)
 *     ReferenceDwmProcess @ 0x1C00493A0 (ReferenceDwmProcess.c)
 *     CheckOrAcquireDwmStateLock @ 0x1C00493E4 (CheckOrAcquireDwmStateLock.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0062BD8 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CHolographicViewerMarshaler::EmitInitialize(
        DirectComposition::CHolographicViewerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v2; // eax
  char v3; // si
  char v5; // bp
  PVOID v6; // rax
  void *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  char *v10; // rcx
  char v12; // [rsp+38h] [rbp-20h]
  void *v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF

  v2 = *((_DWORD *)this + 15);
  v3 = 0;
  if ( v2 >= 0 && (v2 & 0x3F) == 0x3F )
  {
    v13 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x44uLL, &v13) )
    {
      v5 = CheckOrAcquireDwmStateLock();
      v6 = ReferenceDwmProcess();
      v7 = v6;
      if ( v6 )
      {
        v8 = *((_QWORD *)this + 13);
        v9 = *((_QWORD *)this + 16);
        v14 = 0LL;
        v12 = 0;
        if ( (int)ObDuplicateObject(v9, v8, v6, &v14, 0, 0, 6, v12) >= 0 )
        {
          v10 = (char *)v13;
          v3 = 1;
          *(_DWORD *)v13 = 68;
          *((_DWORD *)v10 + 1) = 185;
          *((_DWORD *)v10 + 2) = *((_DWORD *)this + 6);
          *((_DWORD *)v10 + 3) = *((_DWORD *)this + 16);
          *((_DWORD *)v10 + 4) = *((_DWORD *)this + 17);
          *(_QWORD *)(v10 + 20) = *(_QWORD *)((char *)this + 116);
          *(_OWORD *)(v10 + 28) = *(_OWORD *)((char *)this + 76);
          *((_DWORD *)v10 + 11) = *((_DWORD *)this + 18);
          *(_QWORD *)(v10 + 52) = v14;
          *((_DWORD *)v10 + 15) = *((_DWORD *)this + 31);
          *((_DWORD *)this + 15) |= 0x80000000;
        }
        ObfDereferenceObject(v7);
      }
      if ( v5 )
        GreUnlockDwmState();
    }
  }
  return v3;
}
