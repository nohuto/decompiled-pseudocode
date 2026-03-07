__int64 __fastcall CMouseProcessor::MouseInputDataEx::ComputeRawMouseProcessingOptions(__int64 a1)
{
  int v2; // ebx
  int v3; // edi
  int v4; // ebp
  unsigned int v5; // ebx

  v2 = *(_DWORD *)(a1 + 88) == 0 ? 0x20 : 0;
  if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a1, 4096LL) )
    v2 |= 2u;
  if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a1, 128LL) )
    v2 |= 8u;
  if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a1, 32LL) )
    v2 |= 1u;
  if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a1, 2048LL) )
    v2 |= 0x40u;
  if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a1, 0x4000LL) )
    v2 |= 0x100u;
  v3 = v2 | 4;
  if ( (*(_BYTE *)(a1 + 2) & 8) == 0 )
    v3 = v2;
  if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a1, 1024LL) )
    v3 |= 0x400u;
  if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a1, 16LL) )
    v3 |= 0x80u;
  if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a1, 0x8000LL) )
    v3 |= 0x200u;
  if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a1, 8LL) )
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
  v5 = v4;
  if ( (unsigned int)ApiSetEditionPreserveSystemClippedMouseInput()
    && (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestCommitMouseAndCursorPositionResult(a1, 2LL) )
  {
    return v4 | 0x1000u;
  }
  return v5;
}
