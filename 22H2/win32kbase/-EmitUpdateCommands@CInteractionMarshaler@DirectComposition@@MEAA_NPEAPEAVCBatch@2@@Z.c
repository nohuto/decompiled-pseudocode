/*
 * XREFs of ?EmitUpdateCommands@CInteractionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0065F40
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0063BD8 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitUpdateCommands@CInteractionConfigurationGroup@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0066020 (-EmitUpdateCommands@CInteractionConfigurationGroup@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitHoverPointerSource@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0066BCC (-EmitHoverPointerSource@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateRails@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0066C54 (-EmitUpdateRails@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateFlags@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0066CE8 (-EmitUpdateFlags@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitInputSink@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0066DB4 (-EmitInputSink@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CInteractionMarshaler::EmitUpdateCommands(
        DirectComposition::CInteractionMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  int v6; // eax
  int v8; // ecx
  __int64 v9; // r14
  char *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r14
  char *v13; // r8
  __int64 v14; // rcx
  char *v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  char *v18; // rcx
  void *v19; // [rsp+50h] [rbp+30h] BYREF

  v4 = 0;
  if ( !DirectComposition::CInteractionMarshaler::EmitInputSink(this, a2) )
    return v4;
  v5 = *((_DWORD *)this + 4);
  if ( (v5 & 0x80u) != 0 )
  {
    v8 = *((_DWORD *)this + 72);
    v19 = 0LL;
    if ( v8 )
    {
      while ( 1 )
      {
        v9 = (unsigned int)(v8 - 1);
        if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch ***)a2, 0x10uLL, &v19) )
          return v4;
        v10 = (char *)v19;
        *(_DWORD *)v19 = 16;
        *(_QWORD *)(v10 + 4) = 0LL;
        *((_DWORD *)v10 + 3) = 0;
        *((_DWORD *)v10 + 1) = 198;
        *((_DWORD *)v10 + 2) = *((_DWORD *)this + 6);
        *((_DWORD *)v10 + 3) = *(_DWORD *)(*((_QWORD *)this + 35) + 4 * v9);
        if ( (unsigned int)v9 < --*((_DWORD *)this + 72) )
        {
          do
          {
            v11 = (unsigned int)v9;
            LODWORD(v9) = v9 + 1;
            *(_DWORD *)(*((_QWORD *)this + 35) + 4 * v11) = *(_DWORD *)(*((_QWORD *)this + 35) + 4LL * (unsigned int)v9);
          }
          while ( (unsigned int)v9 < *((_DWORD *)this + 72) );
        }
        v8 = *((_DWORD *)this + 72);
        if ( !v8 )
        {
          v5 = *((_DWORD *)this + 4);
          break;
        }
      }
    }
    *((_DWORD *)this + 4) = v5 & 0xFFFFFF7F;
  }
  if ( DirectComposition::CInteractionMarshaler::EmitUpdateFlags(this, a2) )
  {
    v6 = *((_DWORD *)this + 76);
    if ( v6 )
    {
      v19 = 0LL;
      while ( 1 )
      {
        v12 = (unsigned int)(v6 - 1);
        if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch ***)a2, 0x1CuLL, &v19) )
          break;
        v13 = (char *)v19;
        *(_DWORD *)v19 = 28;
        *(_OWORD *)(v13 + 4) = 0LL;
        *(_QWORD *)(v13 + 20) = 0LL;
        *((_DWORD *)v13 + 1) = 197;
        *((_DWORD *)v13 + 2) = *((_DWORD *)this + 6);
        *((_DWORD *)v13 + 3) = **(_DWORD **)(*((_QWORD *)this + 37) + 8 * v12);
        *(_QWORD *)(v13 + 20) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 37) + 8 * v12) + 8LL);
        Win32FreePool(*(_QWORD *)(*((_QWORD *)this + 37) + 8 * v12));
        if ( (unsigned int)v12 < --*((_DWORD *)this + 76) )
        {
          do
          {
            v14 = (unsigned int)v12;
            LODWORD(v12) = v12 + 1;
            *(_QWORD *)(*((_QWORD *)this + 37) + 8 * v14) = *(_QWORD *)(*((_QWORD *)this + 37) + 8LL * (unsigned int)v12);
          }
          while ( (unsigned int)v12 < *((_DWORD *)this + 76) );
        }
        v6 = *((_DWORD *)this + 76);
        if ( !v6 )
          goto LABEL_5;
      }
    }
    else
    {
LABEL_5:
      if ( (*((_DWORD *)this + 4) & 0x400) != 0 )
      {
        v19 = 0LL;
        if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch ***)a2, 0x10uLL, &v19) )
          return v4;
        v15 = (char *)v19;
        *(_DWORD *)v19 = 16;
        *(_QWORD *)(v15 + 4) = 0LL;
        *((_DWORD *)v15 + 3) = 0;
        *((_DWORD *)v15 + 1) = 202;
        *((_DWORD *)v15 + 2) = *((_DWORD *)this + 6);
        v16 = *((_QWORD *)this + 39);
        if ( v16 )
          v17 = *(_DWORD *)(v16 + 24);
        else
          v17 = 0;
        *((_DWORD *)v15 + 3) = v17;
        *((_DWORD *)this + 4) &= ~0x400u;
      }
      if ( DirectComposition::CInteractionMarshaler::EmitUpdateRails(this, a2)
        && DirectComposition::CInteractionConfigurationGroup::EmitUpdateCommands(
             (DirectComposition::CInteractionMarshaler *)((char *)this + 56),
             a2)
        && DirectComposition::CInteractionConfigurationGroup::EmitUpdateCommands(
             (DirectComposition::CInteractionMarshaler *)((char *)this + 160),
             a2) )
      {
        if ( (*((_DWORD *)this + 4) & 0x1000) != 0 )
        {
          v19 = 0LL;
          if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch ***)a2, 0x10uLL, &v19) )
            return v4;
          v18 = (char *)v19;
          *(_DWORD *)v19 = 16;
          *(_QWORD *)(v18 + 4) = 0LL;
          *((_DWORD *)v18 + 3) = 0;
          *((_DWORD *)v18 + 2) = *((_DWORD *)this + 6);
          *((_DWORD *)v18 + 1) = 199;
          v18[12] = *((_BYTE *)this + 332) >> 7;
          *((_DWORD *)this + 4) &= ~0x1000u;
        }
        if ( DirectComposition::CInteractionMarshaler::EmitHoverPointerSource(this, a2) )
          return 1;
      }
    }
  }
  return v4;
}
