/*
 * XREFs of IoBuildPartialMdl @ 0x1402B7A60
 * Callers:
 *     HalpDmaCheckMdlAccessibility @ 0x1404FD754 (HalpDmaCheckMdlAccessibility.c)
 *     HalpDmaFlushBuffer @ 0x14050E7A0 (HalpDmaFlushBuffer.c)
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAX2PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x1405BC49C (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 *     IopMcCreatePartialMdl @ 0x14094E75C (IopMcCreatePartialMdl.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

void __stdcall IoBuildPartialMdl(PMDL SourceMdl, PMDL TargetMdl, PVOID VirtualAddress, ULONG Length)
{
  __int64 ByteOffset; // rax
  _BYTE *StartVa; // r11
  ULONG_PTR BugCheckParameter4; // rbx
  int v8; // r10d
  unsigned int v11; // r10d
  __int16 v12; // di
  ULONG v13; // esi
  void *v14; // r9
  CSHORT MdlFlags; // cx
  CSHORT v16; // cx
  char *v17; // rax
  unsigned __int64 v18; // rdx
  signed __int64 v19; // r8

  ByteOffset = SourceMdl->ByteOffset;
  StartVa = SourceMdl->StartVa;
  BugCheckParameter4 = Length;
  v8 = (int)VirtualAddress;
  v11 = v8 - ByteOffset - (_DWORD)StartVa;
  v12 = (__int16)VirtualAddress;
  if ( (_DWORD)BugCheckParameter4 )
    v13 = BugCheckParameter4;
  else
    v13 = SourceMdl->ByteCount - v11;
  if ( VirtualAddress < StartVa
    || (char *)VirtualAddress - ByteOffset - StartVa > (unsigned __int64)SourceMdl->ByteCount )
  {
    KeBugCheckEx(0x12Eu, (ULONG_PTR)SourceMdl, (ULONG_PTR)TargetMdl, (ULONG_PTR)VirtualAddress, BugCheckParameter4);
  }
  v14 = (void *)((unsigned __int64)VirtualAddress & 0xFFFFFFFFFFFFF000uLL);
  MdlFlags = TargetMdl->MdlFlags;
  TargetMdl->Process = SourceMdl->Process;
  v16 = MdlFlags & 8;
  TargetMdl->StartVa = v14;
  LODWORD(v14) = (_DWORD)v14 - LODWORD(SourceMdl->StartVa);
  TargetMdl->ByteOffset = v12 & 0xFFF;
  TargetMdl->MdlFlags = v16;
  TargetMdl->ByteCount = v13;
  TargetMdl->MdlFlags = v16 | SourceMdl->MdlFlags & 0x48C5 | 0x10;
  TargetMdl->MappedSystemVa = (char *)SourceMdl->MappedSystemVa + v11;
  v17 = (char *)(&SourceMdl[1].Next + ((unsigned int)v14 >> 12));
  v18 = ((v12 & 0xFFF) + 4095LL + (unsigned __int64)v13) >> 12;
  if ( (_DWORD)v18 )
  {
    v19 = (char *)TargetMdl - v17;
    do
    {
      *(_QWORD *)&v17[v19 + 48] = *(_QWORD *)v17;
      v17 += 8;
      LODWORD(v18) = v18 - 1;
    }
    while ( (_DWORD)v18 );
  }
}
