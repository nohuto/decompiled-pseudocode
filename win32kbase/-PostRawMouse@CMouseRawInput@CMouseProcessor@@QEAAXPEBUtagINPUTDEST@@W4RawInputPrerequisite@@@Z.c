void __fastcall CMouseProcessor::CMouseRawInput::PostRawMouse(__int64 a1, int a2, int a3)
{
  if ( !*(_BYTE *)(a1 + 69) && !*(_BYTE *)(a1 + 68) && (a3 & *(_DWORD *)(a1 + 64)) == a3 )
    *(_BYTE *)(a1 + 68) = (unsigned int)ApiSetEditionPostRawMouseInputMessage(
                                          a2,
                                          *(_QWORD *)(a1 + 32),
                                          *(_DWORD *)(a1 + 24),
                                          (int)a1 + 40,
                                          a1) != 0;
}
