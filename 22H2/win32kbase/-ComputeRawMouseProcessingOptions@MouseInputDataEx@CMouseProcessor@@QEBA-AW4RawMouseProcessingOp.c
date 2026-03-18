/*
 * XREFs of ?ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA?AW4RawMouseProcessingOptions@@XZ @ 0x1C0054CAC
 * Callers:
 *     ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@PEBUtagPOINT@@@Z @ 0x1C0054818 (-QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_I.c)
 * Callees:
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C0054BE8 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     ?TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor@@QEBA_NW4_CommitMousePosAndMoveResult@@@Z @ 0x1C01FB4A4 (-TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor@@QEBA_NW4_CommitMousePo.c)
 *     IsEditionPostRawMouseInputMessageSupported @ 0x1C023310C (IsEditionPostRawMouseInputMessageSupported.c)
 */

__int64 __fastcall CMouseProcessor::MouseInputDataEx::ComputeRawMouseProcessingOptions(__int64 a1)
{
  int v2; // ebx
  int v3; // edi
  int v4; // ebp
  int v5; // edi
  unsigned int v6; // ebx

  v2 = *(_DWORD *)(a1 + 88) == 0 ? 0x20 : 0;
  if ( CMouseProcessor::MouseInputDataEx::TestProcessingOption(a1, 4096) )
    v2 |= 2u;
  if ( CMouseProcessor::MouseInputDataEx::TestProcessingOption(a1, 128) )
    v2 |= 8u;
  if ( CMouseProcessor::MouseInputDataEx::TestProcessingOption(a1, 32) )
    v2 |= 1u;
  if ( CMouseProcessor::MouseInputDataEx::TestProcessingOption(a1, 2048) )
    v2 |= 0x40u;
  if ( CMouseProcessor::MouseInputDataEx::TestProcessingOption(a1, 0x4000) )
    v2 |= 0x100u;
  v3 = v2 | 4;
  if ( (*(_BYTE *)(a1 + 2) & 8) == 0 )
    v3 = v2;
  if ( CMouseProcessor::MouseInputDataEx::TestProcessingOption(a1, 1024) )
    v3 |= 0x400u;
  if ( CMouseProcessor::MouseInputDataEx::TestProcessingOption(a1, 16) )
    v3 |= 0x80u;
  if ( CMouseProcessor::MouseInputDataEx::TestProcessingOption(a1, 0x8000) )
    v3 |= 0x200u;
  if ( CMouseProcessor::MouseInputDataEx::TestProcessingOption(a1, 8) )
    v3 |= 0x2000u;
  if ( *(_DWORD *)(a1 + 88)
    || (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestCommitMouseAndCursorPositionResult(a1, 8LL)
    || (unsigned int)IsEditionPostRawMouseInputMessageSupported() == -1073741637 )
  {
    v3 |= 0x10u;
  }
  v4 = v3 | 0x800;
  if ( *(_DWORD *)(a1 + 88) != 4 )
    v4 = v3;
  v5 = 0;
  if ( !qword_1C0296D98 )
    goto LABEL_34;
  if ( (int)qword_1C0296D98() >= 0 )
  {
    if ( qword_1C0296DA0 )
    {
      v5 = qword_1C0296DA0();
      goto LABEL_31;
    }
LABEL_34:
    v6 = v4;
    goto LABEL_35;
  }
LABEL_31:
  v6 = v4;
  if ( v5 && (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestCommitMouseAndCursorPositionResult(a1, 2LL) )
    v6 = v4 | 0x1000;
LABEL_35:
  if ( CMouseProcessor::MouseInputDataEx::TestProcessingOption(a1, 0x20000) )
    v6 |= 0x10000u;
  return v6;
}
