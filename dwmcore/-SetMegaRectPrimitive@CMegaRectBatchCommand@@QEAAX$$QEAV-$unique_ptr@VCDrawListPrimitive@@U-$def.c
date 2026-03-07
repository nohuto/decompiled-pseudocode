__int64 __fastcall CMegaRectBatchCommand::SetMegaRectPrimitive(__int64 a1)
{
  __int64 result; // rax

  std::unique_ptr<CDrawListPrimitive>::operator=<std::default_delete<CDrawListPrimitive>,0>(a1 + 96);
  *(_OWORD *)(a1 + 16) = CMILMatrix::Identity;
  *(_OWORD *)(a1 + 32) = xmmword_1803E1F10;
  *(_OWORD *)(a1 + 48) = xmmword_1803E1F20;
  *(_OWORD *)(a1 + 64) = xmmword_1803E1F30;
  result = unk_1803E1F40;
  *(_DWORD *)(a1 + 80) = unk_1803E1F40;
  return result;
}
