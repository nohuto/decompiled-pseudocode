/*
 * XREFs of ?EmitDescriptionCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0013974
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C0012700 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0011E08 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     strnlen @ 0x1C00D6450 (strnlen.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 */

bool __fastcall DirectComposition::CApplicationChannel::EmitDescriptionCommand(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch ***a2)
{
  const char *ProcessImageFileName; // rbp
  unsigned int v6; // eax
  unsigned int v7; // r14d
  unsigned int v8; // ebx
  _DWORD *v9; // rcx
  _DWORD *v10; // rdi
  void *v11; // [rsp+40h] [rbp+8h] BYREF

  if ( (*((_BYTE *)this + 240) & 0x40) != 0 )
  {
    if ( *((_QWORD *)this + 2) )
      ProcessImageFileName = (const char *)PsGetProcessImageFileName();
    else
      ProcessImageFileName = "System";
    v6 = strnlen(ProcessImageFileName, 0x80uLL);
    v11 = 0LL;
    v7 = v6;
    v8 = (v6 + 16) & 0xFFFFFFFC;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, v8, &v11) )
    {
      v9 = v11;
      *(_DWORD *)v11 = v8;
      v10 = v9 + 3;
      v9[1] = 50;
      v9[2] = v7;
      memmove(v9 + 3, ProcessImageFileName, v7);
      *((_BYTE *)v10 + v7) = 0;
      *((_BYTE *)this + 240) &= ~0x40u;
    }
  }
  return (*((_BYTE *)this + 240) & 0x40) == 0;
}
